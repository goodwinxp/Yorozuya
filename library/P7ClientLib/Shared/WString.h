////////////////////////////////////////////////////////////////////////////////
//                                                                             /
// 2012-2017 (c) Baical                                                        /
//                                                                             /
// This library is free software; you can redistribute it and/or               /
// modify it under the terms of the GNU Lesser General Public                  /
// License as published by the Free Software Foundation; either                /
// version 3.0 of the License, or (at your option) any later version.          /
//                                                                             /
// This library is distributed in the hope that it will be useful,             /
// but WITHOUT ANY WARRANTY; without even the implied warranty of              /
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU           /
// Lesser General Public License for more details.                             /
//                                                                             /
// You should have received a copy of the GNU Lesser General Public            /
// License along with this library.                                            /
//                                                                             /
////////////////////////////////////////////////////////////////////////////////
//******************************************************************************
// This header file provide simple string functionality                        *
//******************************************************************************
#pragma once

class CWString
{
    tXCHAR *m_pBuffer;
    tUINT32 m_dwBuffer_Length;
public:
    CWString():
        m_pBuffer(NULL)
       ,m_dwBuffer_Length(0)
    {
    }

    CWString(const tXCHAR *i_pValue):
        m_pBuffer(NULL)
       ,m_dwBuffer_Length(0)
    {
        Set(i_pValue);
    }

    ~CWString()
    {
        Remove();
    }

    tBOOL Realloc(tUINT32 i_dwLength)
    {
        tBOOL l_bResult = TRUE;

        if ( i_dwLength <= m_dwBuffer_Length )
        {
            return l_bResult;
        }

        tXCHAR *l_pBuffer = new tXCHAR[i_dwLength];
        if (l_pBuffer)
        {
            if (m_pBuffer)
            {
                PStrCpy(l_pBuffer, m_dwBuffer_Length, m_pBuffer);
                Remove();
            }
            else
            {
                l_pBuffer[0] = 0;
            }

            m_dwBuffer_Length = i_dwLength;
            m_pBuffer         = l_pBuffer;
        }
        else
        {
            l_bResult = FALSE;
        }

        return l_bResult;
    }

    tBOOL Set(const tXCHAR *i_pValue)
    {
        tBOOL l_bResult = TRUE;

        if (NULL != i_pValue)
        {
            tUINT32 l_dwInput_Value_Length = (tUINT32)PStrLen(i_pValue);
            if ( l_dwInput_Value_Length >= m_dwBuffer_Length )
            {
                Remove();
                m_dwBuffer_Length = l_dwInput_Value_Length + 1;
                m_pBuffer = new tXCHAR[m_dwBuffer_Length];
            }

            if (m_pBuffer)
            {
                PStrCpy(m_pBuffer, m_dwBuffer_Length, i_pValue);
            }
            else
            {
                l_bResult = FALSE;
                Remove();
            }
        }
        else
        {
            Remove();
        }

        return l_bResult;
    }

    // Example Append(3, L"Text1", L"Text2", L"Text3")
    tBOOL Append(tUINT32 i_dwCount, ...)
    {
        tBOOL   l_bResult         = TRUE;
        tUINT32 l_dwAppend_Length = 0;
        tUINT32 l_dwString_Length = m_pBuffer ? (tUINT32)PStrLen(m_pBuffer) : 0;


        //Parameters verification
        tXCHAR  *l_pItem     = NULL;
        tUINT32  l_dwIDX     = 0;
        va_list  l_pVar_Args;

        if (l_bResult)
        {
            va_start(l_pVar_Args, i_dwCount);

            while (l_dwIDX < i_dwCount)
            {
                l_pItem = va_arg(l_pVar_Args, tXCHAR*);
                if (l_pItem)
                {
                    l_dwAppend_Length += (tUINT32)PStrLen(l_pItem);
                }

                l_dwIDX ++;
            }

            va_end(l_pVar_Args);
        }

        if ( (l_bResult) && ( (l_dwAppend_Length + l_dwString_Length) >= m_dwBuffer_Length ) )
        {
            m_dwBuffer_Length = l_dwAppend_Length + l_dwString_Length + 1;
            tXCHAR *l_pTMP_Buffer = new tXCHAR[m_dwBuffer_Length];

            if ( (l_pTMP_Buffer) && (m_pBuffer) && (l_dwString_Length) )
            {
                PStrCpy(l_pTMP_Buffer, m_dwBuffer_Length, m_pBuffer);
            }

            if (m_pBuffer)
            {
                delete [] m_pBuffer;
            }

            m_pBuffer = l_pTMP_Buffer;

            if (NULL == m_pBuffer)
            {
                Remove();
                l_bResult = FALSE;
            }
            else if (0 >= l_dwString_Length)
            {
                m_pBuffer[0] = 0;
            }
        }

        if (l_bResult)
        {
            l_pItem     = NULL;
            l_dwIDX     = 0;

            va_start(l_pVar_Args, i_dwCount);

            while (l_dwIDX < i_dwCount)
            {
                l_pItem = va_arg(l_pVar_Args, tXCHAR*);
                if (l_pItem)
                {
                    PStrCpy(m_pBuffer + l_dwString_Length, m_dwBuffer_Length - l_dwString_Length, l_pItem);
                    l_dwString_Length += (tUINT32)PStrLen(l_pItem);
                }

                l_dwIDX ++;
            }

            va_end(l_pVar_Args);
        }

        return l_bResult;
    }

    tXCHAR * Get()
    { 
        return m_pBuffer; 
    }


    tUINT32 Length()
    { 
        return m_pBuffer ? (tUINT32)PStrLen(m_pBuffer) : 0;
    }

    tUINT32 Max_Length()
    { 
        return m_dwBuffer_Length; 
    }

    void Trim(tUINT32 i_dwLenght)
    {
        tUINT32 l_dwString_Length = m_pBuffer ? (tUINT32)PStrLen(m_pBuffer) : 0;

        if (i_dwLenght >= l_dwString_Length)
        {
            return;
        }

        m_pBuffer[i_dwLenght] = 0;
    }

    tINT32 Find(tXCHAR *i_pSub, tBOOL i_bCase_Sens = FALSE)
    {
        if (    (NULL == i_pSub)
             || (NULL == m_pBuffer)
           )
        {
            return -1;
        }

        size_t l_dwSub_Len = PStrLen(i_pSub);
        size_t l_dwStr_Len = PStrLen(m_pBuffer);

        if (FALSE == i_bCase_Sens)
        {
            for (size_t l_dwI = 0; l_dwI <= (l_dwStr_Len - l_dwSub_Len); l_dwI++)
            {
                if (0 == PStrNiCmp(m_pBuffer + l_dwI, i_pSub, l_dwSub_Len))
                {
                    return (int)l_dwI;
                }
            }
        }
        else
        {
            for (size_t l_dwI = 0; l_dwI <= (l_dwStr_Len - l_dwSub_Len); l_dwI++)
            {
                if (0 == PStrNCmp(m_pBuffer + l_dwI, i_pSub, l_dwSub_Len))
                {
                    return (int)l_dwI;
                }
            }
        }

        return -1;
    }

private:
    void Remove()
    {
        if (m_pBuffer)
        {
            delete [] m_pBuffer;
            m_pBuffer = NULL;           
        }

        m_dwBuffer_Length = 0;
    }

};

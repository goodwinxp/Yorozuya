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
#ifndef PCONSOLE_H
#define PCONSOLE_H

#include <termios.h>
#include <fcntl.h>

////////////////////////////////////////////////////////////////////////////////
//Is_Key_Hit
static __attribute__ ((unused)) tBOOL Is_Key_Hit(void)
{
//  struct timeval tv;
//  fd_set rdfs;
// 
//  tv.tv_sec = 0;
//  tv.tv_usec = 0;
// 
//  FD_ZERO(&rdfs);
//  FD_SET (STDIN_FILENO, &rdfs);
// 
//  select(STDIN_FILENO+1, &rdfs, NULL, NULL, &tv);
//  return FD_ISSET(STDIN_FILENO, &rdfs);    
    
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return TRUE;
  }
 
  return FALSE;
}//Is_Key_Hit


////////////////////////////////////////////////////////////////////////////////
//Get_Char
static __attribute__ ((unused)) tXCHAR Get_Char()
{
    return getchar();
}//Get_Char

#endif //PCONSOLE_H

USE [RF_WORLD]
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[tbl_KillerList](
    [WhoSerial] [int] NOT NULL,
    [WhomSerial] [int] NOT NULL,
    [When] [datetime] NOT NULL)
GO

CREATE INDEX indx_who ON [tbl_KillerList] ([WhoSerial]);
GO
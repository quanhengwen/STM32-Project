#include "W25Qxx.h"
#include "Includes.h"
#include "FlashDivide.h"

void	FlashWriteLog(u8* buf,u8 addr,u8 Num)	//д��־
{
	W25QXX_Write(buf,ADDR_Log+addr,Num);
}

void	FlashReadLog(u8* buf,u8 addr)			//����־
{
	W25QXX_Read(buf,ADDR_Log+addr,18);
}

void	FlashWriteFer(u8* buf,u8 addr,u8 Num)	//д��������
{
	W25QXX_Write(buf,ADDR_Fer+addr,Num);
}

void	FlashReadFer(u8* buf,u8 addr)			//����������
{
	W25QXX_Read(buf,ADDR_Fer+addr,18);
}

void	FlashWriteFer0(u8* buf,u8 addr,u8 Num)	//д��������
{
	W25QXX_Write(buf,ADDR_Fer0+addr,Num);
}

void	FlashReadFer0(u8* buf,u8 addr)			//����������
{
	W25QXX_Read(buf,ADDR_Fer0+addr,18);
}

void	FlashWriteMem(u8* buf)					//д��־��ַ
{
	W25QXX_Write(buf,ADDR_mem,4);
}

void	FlashReadMem(u8* buf)					//����־��ַ
{
	W25QXX_Read(buf,ADDR_mem,4);
}
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "ThuatToan.h"
#define max 8
#define min 0
using namespace std;
void reset(int &i, int &j)
{
	i=0; j=0;
}
void taoBanCo(char banCo[][8])
{
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<8;j++)
		{
			if (i==3&&j==3||i==4&&j==4)
				banCo[i][j]='X';
			else
			{
				if (i==3&&j==4||i==4&&j==3)
					banCo[i][j]='O';
				else
					banCo[i][j]=32;
			}
		}
	}
}
void nuocDanh(string name, char &Hang, int &Cot)
{
	if (name=="AUTOBOOT")
	{
		Hang = 97+rand() % 8;
		Cot=1+rand() % 8;
	}
	else
	{
		cin >> Hang;
		cin >> Cot;
	}
}
void setBanCo(char temp,char banCo[][8], char Hang, int Cot)
{
	banCo[Hang-97][Cot-1]=temp;
}
bool demSoQuanvaFullQuan(DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo, char banCo[][8],char quan, char quanPhu)
{
	int one=0, two=0, tam1=0, tam2=0;
	char quan1, quan2;
	if (nguoiChoiOne.getQuan()==quan)
	{
		quan1=quan;
		quan2=quanPhu;
	}
	else
	{
		quan2=quan;
		quan1=quanPhu;
	}
	for (int i=0;i<8;i++)
		for (int j=0;j<8;j++)
		{
			if (banCo[i][j]==quan1)
			{
				tam1=1;
				one++;
				nguoiChoiOne.setSoLuong(one);
			}
			if (banCo[i][j]==quan2)
			{
				tam2=1;
				two++;
				nguoiChoiTwo.setSoLuong(two);
			}
		}
	if (tam1==0||tam2==0)
		return true;
	else
		return false;
}
bool kiemTraFullBan(char banCo[][8])
{
	for (int i=0;i<8;i++)
		for (int j=0;j<8;j++)
			if (banCo[i][j]==32)
				return false;
	return true;
}
int kiemTraNuocDi(DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo, char banCo[][8], char quan, char quanPhu, char Hang, int Cot,char &hang, int &cot)
{ 
	char quan1, quan2;
	int i=0, j=0, kiemTra=0;
	if (quanPhu!=' ')
	{
		if (banCo[Hang-97][Cot-1]=='X'||banCo[Hang-97][Cot-1]=='O')
			return kiemTra;
		if (nguoiChoiOne.getQuan()==quan)
			quan1=nguoiChoiTwo.getQuan();
		else
			quan1=nguoiChoiOne.getQuan();
		quan2=quan;
	}
	else
	{
		quan2=quanPhu;
		quan1=quan;
	}
	while(banCo[Hang-97][Cot-1+1+i]==quan1&&(Cot-1+1+i)<max){  i++; } //trai -> phai
	if (i>0&&banCo[Hang-97][Cot-1+1+i]==quan2&&(Cot-1+1+i)<max)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang;
			cot=Cot+1+i;
			goto ra;
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97][Cot-1+i-j]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97][Cot-1-1-i]==quan1&&(Cot-1-1-i)>=min){ i++; } //phai -> trai
	if (i>0&&banCo[Hang-97][Cot-1-1-i]==quan2&&(Cot-1-1-i)>=min)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang;
			cot=Cot-1-i;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97][Cot-1-i+j]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97+1+i][Cot-1]==quan1&&(Hang-97+1+i)<max){ i++; } //tren -> duoi
	if (i>0&&banCo[Hang-97+1+i][Cot-1]==quan2&&(Hang-97+1+i)<max)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang+1+i;
			cot=Cot;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97+i-j][Cot-1]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97-1-i][Cot-1]==quan1&&(Hang-97-1-i)>=min){ i++; } //duoi -> tren
	if (i>0&&banCo[Hang-97-1-i][Cot-1]==quan2&&(Hang-97-1-i)>=min)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang-1-i;
			cot=Cot;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97-i+j][Cot-1]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97+1+i][Cot-1+1+i]==quan1&&(Hang-97+1+i)<max&&(Cot-1+1+i)<max){ i++; } //cheo xuong phai
	if (i>0&&banCo[Hang-97+1+i][Cot-1+1+i]==quan2&&(Hang-97+1+i)<max&&(Cot-1+1+i)<max)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang+1+i;
			cot=Cot+1+i;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97+i-j][Cot-1+i-j]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97-1-i][Cot-1-1-i]==quan1&&(Hang-97-1-i)>=min&&(Cot-1-1-i)>=min){ i++; } //cheo len trai
	if (i>0&&banCo[Hang-97-1-i][Cot-1-1-i]==quan2&&(Hang-97-1-i)>=min&&(Cot-1-1-i)>=min)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang-1-i;
			cot=Cot-1-i;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97-i+j][Cot-1-i+j]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97+1+i][Cot-1-1-i]==quan1&&(Hang-97+1+i)<max&&(Cot-1-1-i)>=min){ i++; } //cheo xuong trai
	if (i>0&&banCo[Hang-97+1+i][Cot-1-1-i]==quan2&&(Hang-97+1+i)<max&&(Cot-1-1-i)>=min)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang+1+i;
			cot=Cot-1-i;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97+i-j][Cot-1-i+j]=quan2;
				j++;
			}
		}
	}
	reset(i,j);
	while (banCo[Hang-97-1-i][Cot-1+1+i]==quan1&&(Hang-97-1-i)>=min&&(Cot-1+1+i)<max){ i++; } //cheo len phai
	if (i>0&&banCo[Hang-97-1-i][Cot-1+1+i]==quan2&&(Hang-97-1-i)>=min&&(Cot-1+1+i)<max)
	{
		if (quan2==' ')
		{
			kiemTra=10;
			hang=Hang-1-i;
			cot=Cot+1+i;
			goto ra;	
		}
		else
		{
			kiemTra=20;
			while (j<i)
			{
				banCo[Hang-97-i+j][Cot-1+i-j]=quan2;
				j++;
			}
		}
	}
	ra: return kiemTra;
}			
bool khoiTaoNuocDi(DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo, char banCo[][8], char quan, char quanPhu, char Hang, int Cot,char &hang, int &cot)
{
	char quan2,quan1;
	int test=0;
	if (nguoiChoiOne.getQuan()==quan)
	{
		quan2=nguoiChoiOne.getQuan();
		quan1=nguoiChoiTwo.getQuan();
	}
	else
	{
		quan1=nguoiChoiOne.getQuan();
		quan2=nguoiChoiTwo.getQuan();
	}
	for (int i=0;i<8;i++)
		for (int j=0;j<8;j++)
			if (banCo[i][j]==quan2)
			{
				test=kiemTraNuocDi(nguoiChoiOne,nguoiChoiTwo,banCo,quan1,' ',char(i+97),j+1,hang,cot);
				if(test==10)
					goto ra;
			}
	ra:
		if (test==10)
			return true;
		else
			return false;
}

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
#include "DuLieu.h"
#include "ManHinh.h"
#include "ThuatToan.h"
#include "BanCo.h"
using namespace std;

/*

Author: Nguyen Van Hop - K57CLC - UET-VNU

*/


void danhBai();
char banCo[8][8];
void setNen()
{
	system("color 67");
}
int main(int argc, char *argv[])
{
	setNen();
	xinChao();
	int LuaChon, Cot = 4, cot=4, l, k;
	char Hang = 'c', hang='c';
	string ten, temp, tempPhu, tam;
	srand(time(NULL));
	int mh=0,mode=0;
	initgraph(&mh,&mode,"");
	BanCoKhoiDong();
	DuLieu nguoiChoiOne, nguoiChoiTwo;
	taoBanCo(banCo);
	cout << "Choi voi may hay voi nguoi (1 or 2): ";
	cin >> LuaChon;
	cleardevice();
   	BanCoMode(LuaChon);
   	inQuanCo(banCo);
	switch(LuaChon)
	{
		case 1:
			cout << "Nhap ten Ban: ";
			cin >> ten;
			nguoiChoiOne.setTen(ten);
			nguoiChoiTwo.setTen("AUTOBOOT");
			break;
		case 2:
			cout << "Nhap Ten Nguoi 1: ";
			cin >> ten;
			nguoiChoiOne.setTen(ten);
			cout << "Nhap Ten Nguoi 2: ( Nhap AUTOBOOT de choi voi MAY ) ";
			cin >> ten;
			nguoiChoiTwo.setTen(ten);
			break;
	}
	char quan, quanPhu, gan, hehe = ' ';
	int luot = 1 + rand() % 2;
	chonQuanO(luot,nguoiChoiOne,nguoiChoiTwo);
	if (nguoiChoiOne.getQuan()=='O')
	{
		temp=nguoiChoiOne.getTen();
		quan=nguoiChoiOne.getQuan();
		tempPhu=nguoiChoiTwo.getTen();
		quanPhu=nguoiChoiTwo.getQuan();
	}
    else
    {
    	temp=nguoiChoiTwo.getTen();
    	quan=nguoiChoiTwo.getQuan();
    	tempPhu=nguoiChoiOne.getTen();
		quanPhu=nguoiChoiOne.getQuan();
	}
	int i=0, j=0,dem=0;
	system("cls");
    while(1)
    {
		if(khoiTaoNuocDi(nguoiChoiOne,nguoiChoiTwo,banCo,quan,' ',Hang,Cot,hang,cot)==false)
		{
			i=1;
			danhThatBai(temp);
			goto ra;
		}
		else
			i=0;
		if (demSoQuanvaFullQuan(nguoiChoiOne,nguoiChoiTwo,banCo,quan,quanPhu)==true)
			goto thang;
		inRaManHinh(temp,banCo,nguoiChoiOne,nguoiChoiTwo,hang,cot);
		l=0;
		do
		{
			if (temp!="AUTOBOOT")
				if (l!=0)
					cout << "Nhap sai nhap lai: ";
			nuocDanh(temp,Hang,Cot);
			l++;
		}
		while(kiemTraNuocDi(nguoiChoiOne,nguoiChoiTwo,banCo,quan,quanPhu,Hang,Cot,hang,cot)==0);
		setBanCo(quan,banCo,Hang,Cot);
		inQuanCo(banCo);
		danhThanhCong(Hang,Cot);
		if (kiemTraFullBan(banCo)==true)
			goto thang;
		ra:
		tam=temp;
		temp=tempPhu;
		tempPhu=tam;
		gan=quan;
		quan=quanPhu;
		quanPhu=gan;
		if(khoiTaoNuocDi(nguoiChoiOne,nguoiChoiTwo,banCo,quan,' ',Hang,Cot,hang,cot)==false)
		{
			j=1;
			danhThatBai(temp);
			goto ra1;
		}
		else
			j=0;
		if (demSoQuanvaFullQuan(nguoiChoiOne,nguoiChoiTwo,banCo,quan,quanPhu)==true)
			dem=1;
		inRaManHinh(temp,banCo,nguoiChoiOne,nguoiChoiTwo,hang,cot);
		k=0;
		do
		{
			if (temp!="AUTOBOOT")
				if (k!=0)
					cout << "Nhap sai nhap lai: ";
			nuocDanh(temp,Hang,Cot);
			k++;
		}
		while(kiemTraNuocDi(nguoiChoiOne,nguoiChoiTwo,banCo,quan,quanPhu,Hang,Cot,hang,cot)==0);
		setBanCo(quan,banCo,Hang,Cot);
		QuanCo(Cot,Hang,quan);
		inQuanCo(banCo);
		danhThanhCong(Hang,Cot);
		if (kiemTraFullBan(banCo)==true||dem==1)
			goto thang;
		tam=temp;
		temp=tempPhu;
		tempPhu=tam;
		gan=quan;
		quan=quanPhu;
		quanPhu=gan;
		ra1: 	system("cls");
		if (i==1&&j==1)
		{
			thang:
			setBanCo(quan,banCo,Hang,Cot);
			inRaManHinh(temp,banCo,nguoiChoiOne,nguoiChoiTwo,hang,cot);
			cout << endl;
			if (nguoiChoiOne.getSoLuong()>nguoiChoiTwo.getSoLuong())
				cout << nguoiChoiOne.getTen() << " da thang !^^";
			else
			{
				if (nguoiChoiOne.getSoLuong()<nguoiChoiTwo.getSoLuong())
					cout << nguoiChoiTwo.getTen() << " da thang !^^";
				else
					cout << "Hoa roi nhe !^^";
			}
			for (int i=0;i<5;i++)
				cout << "\a";
			getch();
			return 0;
		}
		
	}
	getch();
    return EXIT_SUCCESS;
}

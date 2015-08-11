#include <conio.h>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include "DuLieu.h"
#include "ManHinh.h"
using namespace std;
#define mau 0
void inRaManHinh(string a,char banCo[][8],DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo, char hang,int cot)
{
	tieuDe(nguoiChoiOne,nguoiChoiTwo);
	inBanCo(banCo);
	inDangChoi(a,hang,cot);
}
void inBanCo(char banCo[][8])
{
    WORD origColor;
    CONSOLE_SCREEN_BUFFER_INFO buffInfo;
    HANDLE hOutput = NULL;
    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    origColor = buffInfo.wAttributes;
	cout << "   \t    ";
	for (int i=0;i<8;i++)
		cout << i+1 << "\t    ";
		cout << endl;
	for (int i=0;i<8;i++)
	{
		cout << "\t----------------------------------------------------------------\n\t" << char(i+65);
		for (int j=0;j<8;j++)
		{
			cout << "   ";
			WORD myColor = FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY;
		    WORD origColor;
		    CONSOLE_SCREEN_BUFFER_INFO buffInfo;
		    HANDLE hOutput = NULL;
		    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		    if(hOutput!=INVALID_HANDLE_VALUE)
		    {
		        if(GetConsoleScreenBufferInfo(hOutput,&buffInfo))
		        {
		            origColor = buffInfo.wAttributes;//Luu thuoc tinh cu cua font.
		            if (banCo[i][j]=='X')
						SetConsoleTextAttribute(hOutput,13);
					if (banCo[i][j]=='O')
						SetConsoleTextAttribute(hOutput,10);
					cout << banCo[i][j];
		            SetConsoleTextAttribute(hOutput,origColor);//Tra lai thuoc tinh cua font truoc do.
		        }
		    }   
			cout << "   |";
		}
		cout << endl;
	}
	cout << "\t-----------------------------------------------------------------\n";
}
void inDangChoi(string a,char hang, int cot)
{
	if (a=="AUTOBOOT")
	{
		cout << "AUTOBOOT dang nghi";
		for (int i=0;i<4;i++){ cout << ".\a" ; Sleep(500);}
		cout << endl;
	}
	else
		cout << "Moi " << a << " nhap nuoc di (Goi Y Danh:   " << hang << cot << "   ): ";
}
void danhThanhCong(char Hang, int Cot)
{
	cout << "Danh Thanh Cong !^^ [ " << Hang << " , " << Cot << " ]" << endl;
	Sleep(2000);
}
void xinChao()
{
	cout<<"-------------------------------------------------------------------------------"<<endl;
		 cout<<"                             Welcome to My Game !!!"<<endl;
		 cout<<"-------------------------------------------------------------------------------"<<endl<<endl;

		 cout<<"                +-------------------------------------------+"<<endl;
		 cout<<"                +                   Xin Chao !^^            +"<<endl;
         cout<<"                +-------------------------------------------+"<<endl;
		 cout<<"                +                                           +"<<endl;
         cout<<"                +     Ban Dang Den Voi Game Danh Co Duoc    +"<<endl;
		 cout<<"                +          Viet Va Phat Trien Boi           +"<<endl;
		 cout<<"                +              KhongHieuNoi                 +"<<endl;
         cout<<"                +     	                    Sign            +"<<endl;
         cout<<"                +                      Nguyen Van Hop       +"<<endl;
		 cout<<"                +-------------------------------------------+"<<endl<<endl;
}
void tieuDe(DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo)
{
	cout  <<	"\t|                Welcome To Game of KhongHieuNoi                   |\n"
		 << "\t--------------------------------------------------------------------\n\n";
	cout << setw(15) << nguoiChoiOne.getTen() << "(" << nguoiChoiOne.getSoLuong() << " Quan " << nguoiChoiOne.getQuan() << ")" << setw(20)
		 << "---Dau Voi---" << setw(6+nguoiChoiTwo.getTen().length()) << nguoiChoiTwo.getTen() << "(" << nguoiChoiTwo.getSoLuong() << " Quan " << nguoiChoiTwo.getQuan() << ")" << endl;
	cout << endl; 
}
void chonQuanO(int luot, DuLieu &nguoiChoiOne, DuLieu &nguoiChoiTwo)
{
	cout << "\t\t\t\n\n\n";
	cout << "\t\t\tKhoi Tao Du Lieu Nguoi Choi";
	for (int i=0; i<4;i++)
	{
		cout << ".\a";
		Sleep(1000);
	}
	cout << "\n\n\n\t\t";
	if(luot==1)
	{
		nguoiChoiOne.setQuan('O');
		nguoiChoiTwo.setQuan('X');
		cout << nguoiChoiOne.getTen();
	}
	else
	{
		nguoiChoiOne.setQuan('X');
		nguoiChoiTwo.setQuan('O');
		cout << nguoiChoiTwo.getTen();
	}
	cout << " da chon duoc quan \"0\" va duoc di truoc\n";
	Sleep(3000);
}
void danhThatBai(string temp)
{
	cout << temp << " Da Bi Mat Luot Do Het Nuoc Di!\a\a\a\a\a\a\a\n";
}

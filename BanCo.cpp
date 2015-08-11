#include"graphics.h"
#include"BanCo.h"
#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
void NenCo()
{
     setbkcolor(GREEN);
     setfillstyle(0,GREEN);
     bar(100,50,384,334);
}

void NenViTri()
{
 	 setbkcolor(WHITE);
 	 setfillstyle(0,WHITE);
 	 bar(70,20,414,364);
}

void NenBao()
{
 	 setbkcolor(LIGHTRED);
 	 setfillstyle(0,WHITE);
 	 bar(60,10,424,394);
}

void CheDoChoi(int n)
{
 	 if(n==2)
 	 {
 		 setcolor(BLUE);
         setbkcolor(LIGHTRED);
		 outtextxy(200,370,"MODE : P vs P");
     }
     else
     {
	  	 setcolor(BLUE);
         setbkcolor(LIGHTRED);
		 outtextxy(200,370,"MODE : P vs NPC");
     }
}

void QuanCo(int a,char b,char k)
{
	 int n=0,x,y;
	 if (k=='X') n=int(k)-86;
	 if (k=='O') n=int(k)-78;
	 x=a;
	 if (b!=' ')
	 	y=int(b)-96;
	 else
	 	y=int(b)-31;
 	 if(n==1||n==2){
 	 if(n==1)
 	 {
		 setcolor(BLACK);
         setbkcolor(BLACK);
         setfillstyle(0,BLACK);
     }
     if(n==2)
     {
	  	 setcolor(WHITE);
         setbkcolor(WHITE);
         setfillstyle(0,WHITE);
     }
     
     //Toa do A-x
     
     if(x==1&&y==8)
     pieslice(119,315,0,360,12);
     if(x==1&&y==7)
     pieslice(119,280,0,360,12);
     if(x==1&&y==6)
     pieslice(119,245,0,360,12);
     if(x==1&&y==5)
     pieslice(119,210,0,360,12);
     if(x==1&&y==4)
     pieslice(119,175,0,360,12);
     if(x==1&&y==3)
     pieslice(119,140,0,360,12);
     if(x==1&&y==2)
     pieslice(119,105,0,360,12);
     if(x==1&&y==1)
     pieslice(119,70,0,360,12);
     
     //Toa do B-x
     
     if(x==2&&y==8)
     pieslice(155,315,0,360,12);
     if(x==2&&y==7)
     pieslice(155,280,0,360,12);
     if(x==2&&y==6)
     pieslice(155,245,0,360,12);
     if(x==2&&y==5)
     pieslice(155,210,0,360,12);
     if(x==2&&y==4)
     pieslice(155,175,0,360,12);
     if(x==2&&y==3)
     pieslice(155,140,0,360,12);
     if(x==2&&y==2)
     pieslice(155,105,0,360,12);
     if(x==2&&y==1)
     pieslice(155,70,0,360,12);
     
     //Toa do C-x
     
     if(x==3&&y==8)
     pieslice(191,315,0,360,12);
     if(x==3&&y==7)
     pieslice(191,280,0,360,12);
     if(x==3&&y==6)
     pieslice(191,245,0,360,12);
     if(x==3&&y==5)
     pieslice(191,210,0,360,12);
     if(x==3&&y==4)
     pieslice(191,175,0,360,12);
     if(x==3&&y==3)
     pieslice(191,140,0,360,12);
     if(x==3&&y==2)
     pieslice(191,105,0,360,12);
     if(x==3&&y==1)
     pieslice(191,70,0,360,12);

     //Toa do D-x
     
     if(x==4&&y==8)
     pieslice(226,315,0,360,12);
     if(x==4&&y==7)
     pieslice(226,280,0,360,12);
     if(x==4&&y==6)
     pieslice(226,245,0,360,12);
     if(x==4&&y==5)
     pieslice(226,210,0,360,12);
     if(x==4&&y==4)
     pieslice(226,175,0,360,12);
     if(x==4&&y==3)
     pieslice(226,140,0,360,12);
     if(x==4&&y==2)
     pieslice(226,105,0,360,12);
     if(x==4&&y==1)
     pieslice(226,70,0,360,12);
     
     //Toa do E-x
     
     if(x==5&&y==8)
     pieslice(261,315,0,360,12);
     if(x==5&&y==7)
     pieslice(261,280,0,360,12);
     if(x==5&&y==6)
     pieslice(261,245,0,360,12);
     if(x==5&&y==5)
     pieslice(261,210,0,360,12);
     if(x==5&&y==4)
     pieslice(261,175,0,360,12);
     if(x==5&&y==3)
     pieslice(261,140,0,360,12);
     if(x==5&&y==2)
     pieslice(261,105,0,360,12);
     if(x==5&&y==1)
     pieslice(261,70,0,360,12);
     
     //Toa do F-x
     
     if(x==6&&y==8)
     pieslice(296,315,0,360,12);
     if(x==6&&y==7)
     pieslice(296,280,0,360,12);
     if(x==6&&y==6)
     pieslice(296,245,0,360,12);
     if(x==6&&y==5)
     pieslice(296,210,0,360,12);
     if(x==6&&y==4)
     pieslice(296,175,0,360,12);
     if(x==6&&y==3)
     pieslice(296,140,0,360,12);
     if(x==6&&y==2)
     pieslice(296,105,0,360,12);
     if(x==6&&y==1)
     pieslice(296,70,0,360,12);
    
     //Toa do G-x
     
     if(x==7&&y==8)
     pieslice(331,315,0,360,12);
     if(x==7&&y==7)
     pieslice(331,280,0,360,12);
     if(x==7&&y==6)
     pieslice(331,245,0,360,12);
     if(x==7&&y==5)
     pieslice(331,210,0,360,12);
     if(x==7&&y==4)
     pieslice(331,175,0,360,12);
     if(x==7&&y==3)
     pieslice(331,140,0,360,12);
     if(x==7&&y==2)
     pieslice(331,105,0,360,12);
     if(x==7&&y==1)
     pieslice(331,70,0,360,12);
     
     //Toa do H-x
     
     if(x==8&&y==8)
     pieslice(366,315,0,360,12);
     if(x==8&&y==7)
     pieslice(366,280,0,360,12);
     if(x==8&&y==6)
     pieslice(366,245,0,360,12);
     if(x==8&&y==5)
     pieslice(366,210,0,360,12);
     if(x==8&&y==4)
     pieslice(366,175,0,360,12);
     if(x==8&&y==3)
     pieslice(366,140,0,360,12);
     if(x==8&&y==2)
     pieslice(366,105,0,360,12);
     if(x==8&&y==1)
     pieslice(366,70,0,360,12);
     
	 }
}

void ViTri()
{
 	 setcolor(RED);
 	 setbkcolor(LIGHTMAGENTA);
 	 outtextxy(480,120,"CHE DO CHOI");
 	 setcolor(BLACK);
 	 setbkcolor(WHITE);
 	 outtextxy(117,30,"1");
 	 outtextxy(152,30,"2");
 	 outtextxy(187,30,"3");
 	 outtextxy(222,30,"4");
 	 outtextxy(257,30,"5");
 	 outtextxy(292,30,"6");
 	 outtextxy(327,30,"7");
 	 outtextxy(362,30,"8");
 	 outtextxy(117,340,"1");
 	 outtextxy(152,340,"2");
 	 outtextxy(187,340,"3");
 	 outtextxy(222,340,"4");
 	 outtextxy(257,340,"5");
 	 outtextxy(292,340,"6");
 	 outtextxy(327,340,"7");
 	 outtextxy(362,340,"8");
 	 outtextxy(83,63,"a");
 	 outtextxy(83,97,"b");
 	 outtextxy(83,132,"c");
 	 outtextxy(83,167,"d");
 	 outtextxy(83,202,"e");
 	 outtextxy(83,237,"f");
 	 outtextxy(83,272,"g");
 	 outtextxy(83,307,"h");
 	 outtextxy(396,63,"a");
 	 outtextxy(396,97,"b");
 	 outtextxy(396,132,"c");
 	 outtextxy(396,167,"d");
 	 outtextxy(396,202,"e");
 	 outtextxy(396,237,"f");
 	 outtextxy(396,272,"g");
 	 outtextxy(396,307,"h");
 	 
}

void DuongBien()
{
 	 setbkcolor(BLUE);
     setfillstyle(0,BLUE);
     bar(100,50,102,334);
     bar(100,50,384,52);
     bar(100,332,384,334);
     bar(382,50,384,334);
     bar(137,50,139,334);
     bar(172,50,174,334);
     bar(207,50,209,334);
     bar(242,50,244,334);
     bar(277,50,279,334);
     bar(312,50,314,334);
     bar(347,50,349,334);
     bar(382,50,384,334);
     bar(100,87,384,89);
     bar(100,122,384,124);
     bar(100,157,384,159);
     bar(100,192,384,194);
     bar(100,227,384,229);
     bar(100,262,384,264);
     bar(100,297,384,299);
     bar(100,332,384,334);
}


void BanCoKhoiDong()
{
 	 NenBao();
     NenViTri();
     ViTri();
 	 NenCo();
     DuongBien();
}

void BanCoMode(int mode)
{
 	 NenBao();
     NenViTri();
     ViTri();
 	 NenCo();
     DuongBien();
     CheDoChoi(mode);
}
void inQuanCo(char banCo[][8])
{
	for(int i=0;i<8;i++)
	{
 		for(int j=0;j<8;j++)
		{
  		 	QuanCo(j+1,char(i+97),banCo[i][j]);
		}
	}
}	

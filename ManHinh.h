#ifndef ManHinh_H
#define ManHinh_H
#include "DuLieu.h"
#include "ThuatToan.h"
#include <windows.h>
void inRaManHinh(string, char [][8], DuLieu &, DuLieu &,char, int);
void inBanCo(char [][8]);
void inDangChoi(string,char,int);
void danhThanhCong(char, int);
void xinChao();
void tieuDe(DuLieu &,DuLieu &);
void chonQuanO(int,DuLieu &, DuLieu &);
void setHangCot();
void danhThatBai(string temp);
#endif

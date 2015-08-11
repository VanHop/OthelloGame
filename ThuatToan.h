#ifndef ThuatToan_H
#define ThuatToan_H
#include "DuLieu.h"
using std::string;
void setBanCo(char, char [][8], char, int);
void nuocDanh(string , char &, int &);
int kiemTraNuocDi(DuLieu &, DuLieu &, char [][8], char, char, char, int, char &, int &);
bool kiemTraFullBan(char [][8]);
bool demSoQuanvaFullQuan(DuLieu &, DuLieu &, char [][8],char, char);
void reset(int &, int &);
bool khoiTaoNuocDi(DuLieu &, DuLieu &, char [][8], char, char, char, int, char &, int &);
	
void taoBanCo(char banCo[][8]);
#endif

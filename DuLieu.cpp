#include <iostream>
#include <conio.h>
#include "DuLieu.h"
using namespace std;
DuLieu::DuLieu(){}
void DuLieu::setTen(string name)
{
	Ten=name;
}
string DuLieu::getTen()
{
	return Ten;
}
void DuLieu::setQuan(char quan)
{
	Quan=quan;
}
char DuLieu::getQuan()
{
	return Quan;
}
void DuLieu::setSoLuong(int soQuan)
{
	soLuong=soQuan;
}
int DuLieu::getSoLuong()
{
	return soLuong;
}

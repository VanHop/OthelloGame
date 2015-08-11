#ifndef DuLieu_H
#define DuLieu_H
using std::string;
class DuLieu
{
	private:
		char Quan;
		int soLuong;
		string Ten;
	public:
		DuLieu();
		void setTen(string);
		string getTen();
		void setQuan(char);
		char getQuan();
		void setSoLuong(int);
		int getSoLuong();
};
#endif

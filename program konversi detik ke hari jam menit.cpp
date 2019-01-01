#include <iostream>
using namespace std;

int main ()
{
	int hari, jam, menit, detik;
	cout <<"PROGRAM KONVERSI DETIK KE HARI, JAM, MENIT" <<endl;
	cout <<"Masukkan detik : ";
	cin >>detik;
	
	hari = detik/86400;
	jam = detik/3600;
	menit = detik/60;
	
	cout <<"Hari : " <<hari<<endl;
	cout <<"Jam : " <<jam<<endl;
	cout <<"Menit : " <<menit<<endl;
	
	return 0;
	
}

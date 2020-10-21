#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	int alas,tinggi,sisimiring,luas,keliling;
	string pagar= "==================================================================";

	system ("color 0A");
    cout<<" Nama		: Rizki Januar Irmansyah "<<endl;
	cout<<" Kelas/NIM	: Manajamen Informatika 2020B/20051397046 "<<endl;
	cout<<" Dosen		: Andi Iwan Nur Hidayat  "<<endl;
	cout<<" Matkul		: Tugas Pratikum 2       "<<endl;
	cout<<"--------------------------------";
	cout<<"PROGRAM MENU MENGHITUNG SEGITIGA";
	cout<<"--------------------------------"<<endl;
	
	cout<<endl;
	cout<<"MEMASUKKAN DATA YANG ANDA KETAHUI"<<endl;
	cout<<"masukkan data alas          ="; cin>>alas;
	cout<<"masukkan data tinggi        ="; cin>>tinggi;
	cout<<pagar<<endl;
	
	
	sisimiring = sqrt((alas*alas)+(tinggi*tinggi));
	luas       = (alas*tinggi)/2;
	keliling   = alas+tinggi+sisimiring;
	
	
	cout<<pagar<<endl;
	cout<<" MASUKAN HASIL PERHITUNGAN ANDA"<< endl;
	cout<<"sisi mirig segitiga         =" << sisimiring<<endl;
	cout<<"luas       segitiga         =" <<luas<<endl;
	cout<<"keliling   segitigas        =" <<keliling<<endl;
	cout<< pagar << endl << endl << endl;  
	cout<<"TERIMAKASIH TELAH MENGGUNAKAN DENGAN BAIK" <<endl;
	
	return 0;   	
}

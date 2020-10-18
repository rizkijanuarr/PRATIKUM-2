/* Menghitung Upah Mingguan Karyawan */
/* Rizki Januar Irmansyah */
/* 20051397046 */
/* 2020B */

#include<iostream>
using namespace std;

int main()
{
	 char golongan,status;
	 string nama;
	 int jam;
	 long gaji, lembur;
	 
	system ("color 0A");
	;do{
		 cout<<" Nama		: Rizki Januar Irmansyah "<<endl;
		 cout<<" Kelas/NIM	: Manajamen Informatika 2020B/20051397046 "<<endl;
		 cout<<" Dosen		: Andi Iwan Nur Hidayat  "<<endl;
		 cout<<" Matkul		: Tugas Pratikum 2       "<<endl;
         cout<<"============================================================="<<endl;
		 cout<<"              PROGRAM MENGHITUNG UPAH KARYAWAN               "<<endl;
		 cout<<"=============================================================\n";
		 cout<<" Masukan Nama Karyawan	: ";
		 cin>>nama;
		 cout<<" Golongan [a/b/c/d]	: ";
		 cin>>golongan;
		 cout<<" Masukan Jam Kerja	: ";
		 cin>>jam;
		 
		 lembur=4000;
		 int lemburku=0;
		 
		 if (jam>48){
		  lemburku=jam-48;
		 }
		 
		switch(golongan) {
			case 'a' :
			 	gaji = (jam-lemburku) * 5000;
			break;
			case 'b' :
			  	gaji = (jam-lemburku) * 7000;
			break;
			case 'c' :
				gaji = (jam-lemburku) * 8000;
			break;
			case 'd' :
			  	gaji = (jam-lemburku) * 10000;
			break;
			default :
				cout<<"===========================================\n";
				cout<<"         Golongan Tidak Tersedia !        "<<endl;
				cout<<"===========================================\n"<<endl;
				cout<<endl;
				
			    gaji = 0;
			    lembur = 0;
		 }
		   if (jam>48){
				gaji = gaji+( (jam - 48) * lembur);
		 	}
		cout<<"===========================================\n";
		cout<<" Nama Karyawan  	: "<<nama<<endl;         
		cout<<" Total Upah     	: Rp. "<<gaji<<endl;
		cout<<"===========================================\n";
		cout<<endl;
		
		
		cout<<"Apakah Anda Ingin Menghitung Kembali (Y/N) ? "<<endl;
		cin>>status; 
	} while	( status == 'Y' || status == 'y');
    cout<<endl;
	cout<<"==========================================="<<endl;
	cout<<"               Terima kasih                "<<endl;
	cout<<"==========================================="<<endl;
	return 0;
}

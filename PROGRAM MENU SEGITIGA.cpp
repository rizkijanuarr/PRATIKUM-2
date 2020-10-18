/* PROGRAM SEGITIGA SIKU-SIKU */
/* Rizki Januar Irmansyah */
/* 20051397046 */
/* 2020B */

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include <cstdlib>


using namespace std;

int main()
{
char ket [225], yt;
int alas, kode, a,d,e;
float f, g, c;

Awal : 
system ("cls");
system ("color 0A");
	cout<<" Nama		: Rizki Januar Irmansyah "<<endl;
	cout<<" Kelas/NIM	: Manajamen Informatika 2020B/20051397046 "<<endl;
	cout<<" Dosen		: Andi Iwan Nur Hidayat  "<<endl;
    cout<<" Matkul		: Tugas Pratikum 2       "<<endl;
    cout<<"============================================================="<<endl;
	cout<<"              MENU MENHITUNG SEGITIGA SIKU-SIKU               "<<endl;
	cout<<"=============================================================\n";
    cout<<endl;
    
	cout << "1. HITUNG PANJANG SISI MIRING " << endl;
	cout << "2. HITUNG LUAS " << endl;
	cout << "3. HITUNG KELILING " << endl;
	cout << "4. KELUAR PROGRAM " << endl;
	cout << "" << endl;

	cout << "SILAHKAN PILIH [1/2/3/4] : ";

	
kode=getche();
switch (kode)
{
case '1' : {
cout<<endl;	
cout<<"\nHITUNG PANJANG SISI MIRING " << endl;
cout<<endl;
cout<<"MASUKAN SISI 1: "; cin>>e;
cout<<"MASUKAN SISI 2: "; cin>>d;
c=sqrt(pow(e,2)+pow(d,2));
cout<<"HASILNYA = "<<c;
cout <<"\nBALIK KE MENU AWAL? (Y/T)? "; cin>>yt;
if(yt=='Y'||yt=='y') goto Awal;   if(yt=='T'||yt=='t') goto Akhir;
cout <<endl<<"===================================" <<endl;
Akhir :
cout <<endl<<"===================================" <<endl;
cout <<"Terima Kasih"<<endl;
break;
}


case '2' : {
cout<<endl;
cout << "\nHITUNG LUAS" << endl;
cout<<endl;
cout << "MASUKAN ALAS NYA	: "; cin >> d;
cout << "MASUKAN TINGGI NYA	: "; cin >> e;
f=(d*e)/2;
cout << "LUAS SEGITIGA SIKU SIKU : " << f;
cout <<"\nBALIK KE MENU AWAL? (Y/T)? "; cin>>yt;
if(yt=='Y'||yt=='y') goto Awal;   if(yt=='T'||yt=='t') goto Akhir2;
cout <<endl<<"===================================" <<endl;
Akhir2 :
cout <<endl<<"===================================" <<endl;
cout <<"Terima Kasih"<<endl;
break;
}


case '3' : {
cout<<endl;
cout << "\nHITUNG KELILING" << endl;
cout<<endl;
cout << "A: "; cin >> d;
cout << "B: "; cin >> e;
cout << "C: "; cin >> a;
g = d+e+a;
cout << "KELILING SEGITIGA SIKU SIKU: " << g;
cout <<"\nBALIK KE MENU AWAL? (Y/T)? "; cin>>yt;
if(yt=='Y'||yt=='y') goto Awal;   if(yt=='T'||yt=='t') goto Akhir3;
cout <<endl<<"===================================" <<endl;
Akhir3 :
cout <<endl<<"===================================" <<endl;
cout <<"TERIMA KASIH"<<endl;
break;
}


case '4' : {
	cout << "\n PROGRAM BERHENTI" <<endl;
	exit(0);
break;
}


getch();
return 0;
}
}

//Menghitung Take Home Pay (Gaji Bersih)
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
//delklarasi global
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

void garis();

int main() 
{
  	//deklarasi
    string namakaryawan;
	int gajibersih, gajipokok, pajak, tunjangan;
    //input
    cout << "===============Menghitung Take Home Pay (Gaji Bersih)==============" << endl;
    cout << "Masukan Nama Karyawan : ";
    getline(cin,namakaryawan);
    cout << "Masukan Gaji Pokok Karyawan :  Rp. ";
    cin >> gajipokok;
    
    //proses
    tunjangan =  persentunjangan * gajipokok;
    pajak = persenpajak * gajipokok;
    gajibersih = gajipokok + tunjangan - pajak;
    
    //ouput
    cout<<" Nama Karyawan  : "  << namakaryawan << endl;
    cout<<" Gaji Pokok     : Rp. " << gajipokok << endl;
    cout<<" Tunjangan      : Rp. "  << tunjangan << endl;
    cout<<" Pajak          : Rp. "  << pajak << endl;
	cout<<" Gaji Bersih yang diterima : Rp. " << gajibersih << endl;
    return 0;
}

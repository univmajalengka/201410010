#include<iostream>
using namespace std;

void thx(){
    cout << "\n Terima kasih";
}
void salah(){
    cout<<" Silahkan maskan total belanja dengan benar!";
}
int main ()
{
	int totBelanja, totBayar, diskon;
	const float discon0 = 0;
	const float discon1 = 0.1;
	const float discon2 = 0.125;
	const float discon3 = 0.15;

	cout << " PROGRAM DISKON SAUNG PRINTING SABLON DAN SPANDUK";
	cout <<endl;

	cout << "\n Masukan Total Belanja (min Rp. 1000) \t\t: Rp. ";
	cin >> totBelanja;
	cout <<endl;

	if (totBelanja <= 25000 && totBelanja >= 1000){
		diskon = totBelanja * discon0;
		totBayar = totBelanja - diskon;
		cout << " Diskon 0%			: Rp. " << diskon <<endl;
		cout << " Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;

	} else if (totBelanja <= 50000 && totBelanja >= 25000){
		diskon = totBelanja * discon1;
		totBayar = totBelanja - diskon;
		cout << " Diskon 10%			: Rp. " << diskon <<endl;
		cout << " Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;

	} else if (totBelanja <= 100000 && totBelanja >= 50000){
		diskon = totBelanja * discon2;
		totBayar = totBelanja - diskon;
		cout << " Diskon 12.5%			: Rp. " << diskon <<endl;
		cout << " Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;

	} else if (totBelanja > 100000){
		diskon = totBelanja * discon3;
		totBayar = totBelanja - diskon;
		cout << " Diskon 15%			: Rp. " << diskon <<endl;
		cout << " Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;
 	} else {
         salah();
     }
    thx();
	return 0;
}

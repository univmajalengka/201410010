#include <iostream>
using namespace std;
int main()
{
	int j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3,sm;
	cout<<"PROGRAM BILLING"<< endl;
	
	
	cout<<"Masukan waktu awal"<< endl;
	cout<<"Jam : ";
	cin>>j1;
	cout<<"Menit : ";
	cin>>m1;
	cout<<"Detik : ";
	cin>>d1;
	
	cout<< endl;
	
	cout<<"Masukan waktu akhir"<< endl;
	cout<<"Jam : ";
	cin>>j2;
	cout<<"Menit : ";
	cin>>m2;
	cout<<"Detik : ";
	cin>>d2;
	
	cout<< endl;
	
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	td3=td2-td1;
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout<< endl;
	cout<<"Bermain Selama: "<<j3<<" Jam "<<m3<<" Menit "<<d3<<" Detik";


	return 0;
}

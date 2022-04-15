#include<iostream>
using namespace std;
int main(){
	int x[12],akumulasi,jumlah,tabung,sisa;
	int andi=500000;
	
	cout<<"Sudah menabung berapa bulan? ";cin>>tabung;
	cout<<"Menghitung pengeluaran berapa bulan? ";cin>>akumulasi;
	for(int i=0; i<akumulasi; i++){
		cout<<"Masukan pengeluaran bulan ke- "<<i+1<<" : ";cin>>x[i];
	}
	for(int i=0; i<akumulasi; i++){
		jumlah+=x[i];
	}
	cout<<"\n\n Total pengeluaran selama "<<akumulasi<<" bulan : "<<jumlah;
		tabung=andi*tabung;
		sisa=tabung-jumlah;
	cout<<"\n Tabungan "<<tabung<<" - "<<jumlah<<endl;	
	cout<<"Total tabungan saat ini:  Rp"<<sisa;
	
	return 0;
}
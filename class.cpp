#include<iostream>
using namespace std;
class tabungan{
  public:
    void masukan();
    void proses();
    void output();
      
    private:
        int x[12],akumulasi,jumlah,tabung,sisa;
	      int andi=500000;   
};
void tabungan::masukan(){
  cout<<"Sudah menabung berapa bulan? ";cin>>tabung;
  	  cout<<"Menghitung pengeluaran berapa bulan? ";cin>>akumulasi;
  	  for(int i=0; i<akumulasi; i++){
  		cout<<"Masukan pengeluaran bulan ke- "<<i+1<<" : ";cin>>x[i];
}
  }
 void tabungan::proses(){
         for(int i=0; i<akumulasi; i++){
		jumlah+=x[i];
	    } 
 } 
 void tabungan::output(){
   cout<<"\n\nTotal pengeluaran selama "<<akumulasi<<" bulan :"<<jumlah;
		tabung=andi*tabung;
		sisa=tabung-jumlah;
  cout<<"\nTabungan awal: "<<tabung<<endl;
	cout<<"Mutasi Tabungan "<<tabung<<" - "<<jumlah<<endl;	
	cout<<"Total tabungan saat ini:  Rp"<<sisa;
 } 

  int main(){
    tabungan a;
    a.masukan();
    a.proses();
    a.output();

    return 0;
  }
  

class Input{
  public:
    void masukan(){
      cout<<"Sudah menabung berapa bulan? ";cin>>tabung;
  	  cout<<"Menghitung pengeluaran berapa bulan? ";cin>>akumulasi;
  	  for(int i=0; i<akumulasi; i++){
  		cout<<"Masukan pengeluaran bulan ke- "<<i+1<<" : ";cin>>x[i];
      
  }
    private:
        int x[12],akumulasi,jumlah,tabung,sisa;
	      int andi=500000;   
};
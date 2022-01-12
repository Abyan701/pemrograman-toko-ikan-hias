#include<iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;



#define ppn 0.10
const int diskon = 25000;

int main (){
	char nama[60],ikan[30],back;
	int jumlah,beli,jenis,total,bayar,bonus,pajak,kembalian,
	harga[5]={20000,150000,1000000,50000,35000}, i=0;
	bool saldo;
	
	do{
		system("CLS");
		cout<<"========================djeefish=========================="<<endl;
		cout<<"-+-+-+-+-+-+-+-+-+-+-+-+sedia ikan hias+-+-+-+-+-+-+-+-+-+"<<endl;
		cout<<"-_-_-_-_-_-_-_-_-_-_-_-djeefish store _-_-_-_-_-_-_-_-_-_-"<<endl;
		cout<<endl;
		cout<<"silahkan masukan nama anda :";cin>>nama;
		cout<<"pilihan ikan yang tersedia : "<<endl;
		cout<<"================================================================"<<endl;
		cout<<"|    1.ikan koki            =Rp 20000   per ekor                |"<<endl;
		cout<<"|    2.ikan arwana silver   =Rp 150000  per ekor                |"<<endl;
		cout<<"|    3.ikan lohan           =Rp 1000000 per ekor                |"<<endl;
		cout<<"|    4.ikan      chana      =Rp 50000   per ekor                |"<<endl;
		cout<<"|    5.ikan cupang hias     =Rp 35000   per ekor                |"<<endl;
		cout<<"================================================================"<<endl;
		
		cout<<"masukan jenis ikan yang anda pilih berdasarkan nomor yang tersedia"<<endl;
		cout<<"silahkan untuk memilih ikan yang akan anda beli : "; cin >>jenis;
		
		switch(jenis){
			case 1:
				strcpy(ikan,"ikan koki");
				break;
			case 2:
				strcpy(ikan,"ikan arwana silver");
				i=1;
				break;
				case 3:
					strcpy(ikan,"ikan lohan");
					i=2;
					break;
				case 4:
				strcpy(ikan,"ikan chana barcelona");
			    i=3;
			case 5:
			strcpy(ikan,"ikan cupang hias");
			i=4;
			break;
		default:
		cout<<"pilihan ikan tidak tersedia....."<<endl;
		goto ulang;
	
				
				
		}
		cout<<"anda memilih"<<ikan<<endl;
		cout<<endl;
		cout<<"jumlah ikan yang di beli :";cin>>jumlah;
		
		beli=jumlah *harga[i];
		pajak =beli * ppn;
		total = pajak + beli;
		cout<<endl;
		cout<<"========================================================"<<endl;
		cout<<"|======================DJEFISH==========================|"<<endl;
		cout<<"========================================================="<<endl;
		cout<<"\t  nama pembeli :" <<nama  <<endl;
		cout<<"\t  ikan yang dibeli     :" <<ikan <<endl;
		cout<<"\t  jumlah pembelian ikan :"<<jumlah <<endl;
		cout<<"\t  harga ikan            :"<<harga[i]<<"*" <<jumlah<<endl;
		cout<<"\t  pajak pembelian ikan : "<<pajak  <<endl;
		cout<<"\t  total pembayaran    :"<<total <<endl;
		
		if(jumlah>1){
			bonus = total - diskon;
			total = bonus;
			cout<< endl;
			cout<<"**Anda mendapatkan diskon potongan harga** :Rp"<<diskon<<"#"<<endl;
			cout<<"total pembayaran setelah potongan diskon   :Rp"<<total<<endl;
		}
		
		cout<<"========================================================="<<endl;
		cout<<"untuk pembayaran silahkan dilakukan disini      :Rp."; cin>>bayar;
		cout<<endl;
		
		while(saldo=bayar<total){
			cout<<"saldo anda kurang silahkan bayar dengan harga tetap :Rp."; cin>>bayar;
		}
	    
		kembalian=bayar-total;
		cout<<"uang yang anda bayar \t\t\t Rp." <<bayar <<endl;
		cout<<"uang kembalian \t\t\t       Rp." <<kembalian <<endl;
		cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;
		
		ulang:
			cout<<"     [Y = ya / T =tidak]"<<endl;
			cout<<" apakah anda ingin membeli lagi ? [Y/T] = "; cin>>back;
				
		
	}while (back=='Y' || back=='y');
	cout<< endl;
	cout<<" terimakasih telah berkungjung di toko ikan hias DJEEFISH"<<endl;
	
	return 0;
}

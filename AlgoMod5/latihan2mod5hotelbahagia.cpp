#include <iostream>
using namespace std;
#define garis "-----------------------"

int main (){
	cout << "Hotel Bahagia \n";
	cout << garis << endl;
	cout << "1. VVIP (1.000.000) \n";
	cout << "2. VIP (750.000) \n";
	cout << "3. Standard (500.000) \n";
	cout << "4. Melati (250.000) \n";
	cout << garis << endl;
	
	string Nama; int H, Kamar, Lama; char Sarapan;
	cout << "Masukkan Nama Anda : "; cin >> Nama;
	cout << "Masukkan Jenis Kamar (1-4) : "; cin >> Kamar;
	cout << "Masukkan Lama Menginap : "; cin >> Lama;
	cout << "Dengan Sarapan (y/n) : "; cin >> Sarapan;
	cout << garis << endl;
	int ttlsr;
	int ttl;
	
	cout << "Terima kasih " << Nama << endl;
	switch (Kamar){
		case 1 : {
			cout << "Kamar Anda VVIP \n"; H = 1000000;
			
			switch (Sarapan){
			case 'y' : cout << "Lama Menginap " << Lama << " Malam dengan Sarapan \n";
					   ttlsr = H*Lama + Lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'n' : cout << "Lama Menginap " << Lama << " Malam tanpa Sarapan \n";
					   ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
			default : cout << "Input Anda Salah Jadi anda Menginap tanpa Sarapan Selama " << Lama << "malam" << endl;
					  ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 2 : {
			cout << "Kamar Anda VIP \n"; H = 750000;
			
			switch (Sarapan){
			case 'y' : cout << "Lama Menginap " << Lama << " Malam dengan Sarapan \n";
						ttlsr = H*Lama + Lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama Menginap " << Lama << " Malam tanpa Sarapan \n";
					   ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input Anda Salah Jadi anda Menginap tanpa Sarapan Selama " << Lama << "malam" << endl;
					   ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
		
			break;
			}
			
			break;
		}
		
		case 3 :{
			cout << "Kamar Anda Standard \n"; H = 500000;
			
			switch (Sarapan){
			case 'y' : cout << "Lama Menginap " << Lama << " Malam dengan Sarapan \n";
					   ttlsr = H*Lama + Lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'p' : cout << "Lama Menginap " << Lama << " Malam tanpa Sarapan \n";
					   ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
            default : cout << "Input Anda Salah Jadi anda Menginap tanpa Sarapan Selama " << Lama << "malam" << endl;
					   ttl = H*Lama;
					   cout << "Harga Kamar anda : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 4 : {
			cout << "Kamar Anda Melati \n"; H = 250000;
			
			switch (Sarapan){
			case 'y' : cout << "Lama Menginap " << Lama << " Malam dengan Sarapan \n";
					   ttlsr = H*Lama + Lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama Menginap " << Lama << " Malam tanpa Sarapan \n";
					   ttl = H*Lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input Anda Salah Jadi anda Menginap tanpa Sarapan Selama " << Lama << "malam" << endl;
					  ttl = H*Lama;
					  cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		default : cout << "Inputan Anda Tidak Sesuai Sehingga Tidak Diproses \n";
	}
	
	cout << garis << endl << endl;
	cout << "Terima kasih " << Nama << " Telah Menginap di Hotel Bahagia \n";
	cout << "Semoga Anda Betah";
}

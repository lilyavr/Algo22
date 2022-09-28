#include <iostream>
using namespace std;

int main(){
	string Nama; int Tgs, UTS, UAS, Total;
	cout << "Masukkan Nama Anda   : "; cin >> Nama;
	cout << "Masukkan Nilai Tugas : "; cin >> Tgs;
	cout << "Masukkan Nilai UTS   : "; cin >> UTS;
	cout << "Masukkan Nilai UAS   : "; cin >> UAS;
	cout << "------------------- \n \n";
	cout << "Selamat " << Nama << endl;
	Total = (Tgs + UTS + UAS)/3;
	cout << "Nilai Anda (Tugas + UTS + UAS)/3 : " << Total <<endl ;
	
	switch (Total){
		case 0 ... 20 : {
			cout << "Nilai Huruf : E \n";
			cout << "Predikat	 : Sangat Kurang \n";
			break;
		}
		case 21 ... 40 : {
			cout << "Nilai Huruf : D \n";
			cout << "Predikat    : Kurang \n";
			break;
		}
		case 41 ... 60 : {
			cout << "Nilai Huruf : C \n";
			cout << "Predikat    : Cukup \n"; 
			break;
		}
		case 61 ... 80 : {
			cout << "Nilai Huruf : B \n";
			cout << "Predikat 	 : Baik \n";
			break;
		}
		case 81 ... 100 : {
			cout << "Nilai Huruf : A \n";
			cout << "Predikat    : Sangat Baik \n";
			break;
		}
		default : cout << "Nilaimu terdapat kesalahan dan tidak dapat proses \n";
		break;
	}
}

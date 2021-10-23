#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char yn;
	int pil;
	float a, t, smiring, luas, keliling, hasil;
	
	menu :

	
    cout<<"    MENU SEGITIGA SIKU-SIKU    "<<endl;
    cout<<" =============================== "<<endl;
	cout<<" 1. Hitung Panjang sisi miring "<<endl;
	cout<<" 2. Hitung Luas                "<<endl;
	cout<<" 3. Hitung Keliling            "<<endl;
	cout<<" 4. Keluar program             "<<endl;
	cout<<" =============================== "<<endl;
	cout<<" Pilihan : "; cin>>pil;

	
	switch (pil){
		case 1:
			cout<<"\n Menghitung Sisi Miring Segitiga \n\n";
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			smiring=sqrt((a*a)+(t*t));
			cout<<" Panjang Sisi Miring segitiga = "<<smiring<<endl;
		break;
		case 2:
			cout<<"\n     Menghitung Luas Segitiga   \n\n";
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			luas=0.5*a*t;
			cout<<" Luas segitiga\t\t      = "<<luas<<endl;
		break;
		case 3:
			cout<<"   Menghitung Keliling Segitiga  \n\n";
			cout<<" Masukkan alas segitiga       = "; cin>>a;
			cout<<" Masukkan tinggi segitiga     = "; cin>>t;
			keliling=a+t+smiring;
			cout<<" Keliling segitiga      = "<<keliling<<endl;
		break;
		
		default:
			cout<<" pilihan tidak tersedia!";
	}
	
	return 0;
}

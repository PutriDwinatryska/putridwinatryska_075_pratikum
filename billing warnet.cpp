#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char name[20];
	int no;
	float Username, jam, menit, detik,Total_pembayaran,waktu;
	cout<< "\n-------- Billing Warnet --------\t "<<endl;
	cout << "Username : ";cin.getline(name,10); 
	cout << "Nomer PC : ";cin >> no;
	cout<<"\n";
	
	cout << " Price per/hour = Rp 5.000 ";
	cout<<"\n";
	
	cout <<"\n";
	cout << " Usage Duration ";
	cout <<"\n";
	
	cout << " Jam = ";	cin >> jam;
	cout << " Menit = ";	cin >> menit;
	cout << " Detik = ";	cin >> detik;
	cout <<"\n";
	
	jam=jam*5000;
    menit=menit*5000/60;
    detik=detik*5000/3600;
    waktu =jam+menit+detik;
    
    cout<<"Total pembayaran : Rp. ";
    cout<<waktu<<endl<<endl;

	
	return 0;
}

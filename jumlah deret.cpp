#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, c, jmlh, i, n;
	
	cout <<" Menghitung Jumlah Deret "<<endl;
    cout <<" ==========================================\n\n";
    cout <<" Masukkan bilangan pertama\t: "; cin>>a;
    cout <<" Masukkan beda\t: "; cin>>b;
    cout <<" Masukkan deret ke-n\t: "; cin>>n;
    cout <<"===========================================\n\n";
    cout <<" Deret ke-"<<n<<" : ";
    cout <<a<<",";
    jmlh=jmlh+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jmlh=jmlh+c;
    }
     
    cout<<"\n Jumlah deret ke-"<<n<<" = "<<jmlh; 
     
    getch();
}

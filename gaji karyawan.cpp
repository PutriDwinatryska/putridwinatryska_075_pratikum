#include <iostream>
using namespace std;
main()
{
	char nama[20],golongan;
	int jam;
	long gaji, lembur;
	printf(" \n                  Program Menghitung Gaji Karyawan\n");
	printf(" \n                           PT.MAKMUR\n");
	
	printf(" Nama Karyawan      :");
	scanf("%s", &nama);
	printf("Golongan (a/b/c/d): ");
	cin>>golongan;
	printf("Jam Kerja: ");
	cin>>jam;
	printf("\n=============================================================================\n\n");
	lembur=4000;
	int mylembur=0;
	if (jam>48){
	lembur=jam-48;
}
	switch(golongan)
{
case 'a' :
gaji = (jam-mylembur) * 5000;
break;
case 'b' :
gaji = (jam-mylembur) * 7000;
break;
case 'c' :
gaji = (jam-mylembur) * 8000;
break;
case 'd' :
gaji = (jam-mylembur) * 1000;
break;
	default :
	        printf("Golongan Tidaak Tersedia!\n");
	        gaji = 0;
	        lembur =0;
}
  if (jam>48){
gaji = gaji+( (jam - 48) * lembur);
}
printf(" \n Nama Karyawan  %s    \n",nama);
printf("\n Ttotal Gaji     : Rp. %i \n ",gaji);
		
}

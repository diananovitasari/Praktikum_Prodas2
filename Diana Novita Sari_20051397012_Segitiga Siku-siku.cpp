/* Program Menghitung Segitiga Siku - Siku */
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	char menu;
	int alas,tinggi,siring,luas,keliling;
	cout <<" Program Penghitung Segitiga Siku - Siku " << endl;
	cout <<" ======================================= " << endl;
	cout <<" Oleh Diana Novita Sari "<< endl;
	cout <<" *************************************** " << endl;
	cout <<" Pilih Menu (1|2|3|4) : \n 1. Hitung Panjang Sisi Miring \n 2. Hitung Luas \n 3. Hitung Keliling \n 4. Keluar Program "<< endl;
	cout <<"============================================="<< endl;
	cout <<" Masukkan Pilihan: ";
	cin >> menu;
	cout << endl;
	
	switch (menu)
	{
		case '1':
		{
			cout <<" Masukkan Alas: ";
			cin >> alas;
			cout <<" Masukkan Tinggi: ";
			cin >> tinggi;
			cout <<" Panjang Sisi Miring adalah: ";
			siring = sqrt(alas*alas+tinggi*tinggi);
			cout << siring;
		break;
		}
	
		case '2':
		{
			cout <<" Masukkan Alas: ";
			cin >> alas;
			cout <<" Masukkan Tinggi: ";
			cin >> tinggi;
			cout <<" Luas Segitiga Siku-siku adalah: ";
			luas = alas*tinggi/2;
			cout << luas; 
		break;
		}
			
		case '3':
		{
			cout <<" Masukkan Alas: ";
			cin >> alas;
			cout <<" Masukkan Tinggi: ";
			cin >> tinggi;
			cout <<" Keliling Segitiga Siku-siku adalah: ";
			siring = sqrt(alas*alas+tinggi*tinggi);
			keliling = alas+tinggi+siring;
			cout << keliling;
		break;
		}
			
		case '4':
		{
			cout <<"=================Thanks For Use My Program===============";	
		break;
		}		
	}
	return 0;	
}

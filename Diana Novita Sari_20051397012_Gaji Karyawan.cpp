/* Program Menghitung Gaji Karyawan */
#include <iostream>
using namespace std;
int main ()
{
	char Nama [95],Golongan;
	int jam_kerja,jam_lembur,Gaji_Mingguan,Gaji_Lembur,Totalgaji,gaji_jam;
	cout <<" Menghitung Gaji Karyawan \n";
	cout <<" ---------------------------------------- \n";
	cout <<" Oleh Diana Novita Sari                    \n";
	cout <<" ---------------------------------------- \n";
	cout <<" Masukkan Nama Karyawan: ";
	cin >> Nama;
	cout <<" Masukkan Golongan ( A | B | C | D ): ";
	cin >> Golongan;
	cout <<" Masukkan Jumlah Jam Kerja: ";
	cin >> jam_kerja;
	
	switch(Golongan)
	{
		case 'A':
			{
				gaji_jam = 5000;
				break;
			}
		case 'B':
			{
				gaji_jam = 7000;
				break;
			}
		case 'C':
			{
				gaji_jam = 8000;
				break;
			}
		case 'D':
			{
				gaji_jam = 10000;
				break;
			}
		default:
			{
				gaji_jam = 0;
				break;
			}
	}
	
	
	if ( jam_kerja > 48)
	{
		jam_lembur = jam_kerja- 48;
		cout <<" Terdapat Jam Lembur: "<< jam_lembur <<" jam" << endl;
		Gaji_Mingguan = gaji_jam * 48;
		Gaji_Lembur = jam_lembur * 4000;
		Totalgaji = Gaji_Mingguan + Gaji_Lembur;
	}
	else if ( jam_kerja <= 48)
	{
		cout <<" Tidak Terdapat Jam Lembur: " << endl;
		Gaji_Mingguan = gaji_jam * jam_kerja;
		Totalgaji = Gaji_Mingguan;
	}
	
	
	
	cout <<"-------------------------------------------------- \n";
	cout <<" Masukkan Nama Karyawan: ";
	cout << Nama;
	cout << endl;
	cout <<" Gaji Mingguan Anda adalah Rp.  ";
	cout << Totalgaji << endl;
	return 0;
}

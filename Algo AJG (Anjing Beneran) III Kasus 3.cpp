#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int reg,kode_bahasa;
	int high_nilai_pascal = 0,high_nilai_basic = 0,high_nilai_c = 0;
	int basic,pascal,c;
	string peserta,bahasa_pro;
	string high_nama_pascal ="-",high_nama_basic="-",high_nama_c="-";
	int high_reg_basic = 0,high_reg_pascal = 0,high_reg_c = 0;
	float nilai;
	char status = 'y';
	basic = 0;
	pascal = 0;
	c = 0;
	do {
	system("cls");
	cout << "\t PUSAT PENDIDIKAN KOMPUTER" << endl;
	cout << "\t \t INFORMATIKA " << endl;
	cout << "\t ==========================" << endl;
	cout << "\t No - Registrasi : ";cin >> reg;
	cin.ignore();
	cout << "\t Nama Peserta 	 : ";getline (cin,peserta);
	cout << endl << "\t PILIH BAHASA PROGRAM : " << endl;
	cout << "\t 1. Basic" <<setw(10)<<": "<< basic << " Peserta"<< endl;
	cout << "\t 2. Pascal" <<setw(9)<<": "<< pascal << " Peserta" << endl;
	cout << "\t 3. C++" <<setw(12)<<": "<< c << " Peserta" << endl;
	cout << "\t INPUT KODE BAHASA [1/2/3] : ";cin >> kode_bahasa;
	while (kode_bahasa < 1 || kode_bahasa > 3) {
		cout << "\t Kode Input Salah (1-3) : " << endl;
		cout << "\t INPUT KODE BAHASA [1/2/3] : ";cin >> kode_bahasa;
	}
	switch (kode_bahasa) {
		case 1 : bahasa_pro = "Basic";break;
		case 2 : bahasa_pro = "Pascal";break;
		case 3 : bahasa_pro = "C++";break;
	}
	cout << "\t  Bahasa Pemrograman " << bahasa_pro << endl;
	cout << "\t Input Nilai Ujian : ";cin >> nilai;
	while (nilai >= 101 || nilai <= -1  ) {
		cout << "\t Kode Input Salah (1-100) : " << endl;
		cout << "\t Input Nilai Ujian : ";cin >> nilai;
	}
	switch (kode_bahasa) {
		case 1 : basic++;
				 if (high_nilai_basic < nilai) {
				 high_nama_basic = peserta;
				 high_reg_basic = reg;
				 high_nilai_basic = nilai;break;}
		case 2 : pascal++;
				 if (high_nilai_pascal < nilai) {
				 high_nama_pascal = peserta;
				 high_reg_pascal = reg;
				 high_nilai_pascal = nilai;break;}
		case 3 : c++;
				 if (high_nilai_c < nilai) {
				 high_nama_c = peserta;
				 high_reg_c = reg;
				 high_nilai_c = nilai;break;}
	}
	cout << "\n \t Ada Data Lain [y/t] "; cin >> status; 
} while (status == 'y');
system ("cls");
cout << "\tPeserta Kursus Dengan Nilai Terbaik" << endl;
cout << "\t===================================" << endl;
cout << "\tNilai Tertinggi Pada Bahasa Basic" << endl;
cout << "\tNo.Registrasi	: " << high_reg_basic << endl;
cout << "\tNama Peserta 	: " << high_nama_basic << endl;
cout << "\tNilai Ujian	: "<< high_nilai_basic << endl;
cout << "\tJumlah Peserta	: "<< basic << endl;
cout << "\t===================================" << endl;
cout << "\tNilai Tertinggi Pada Bahasa Pascal" << endl;
cout << "\tNo.Registrasi	: "<< high_reg_pascal << endl;
cout << "\tNama Peserta 	: "<< high_nama_pascal << endl;
cout << "\tNilai Ujian	: "<< high_nilai_pascal << endl;
cout << "\tJumlah Peserta	: "<< pascal << endl;
cout << "\t===================================" << endl;
cout << "\tNilai Tertinggi Pada Bahasa C++" << endl;
cout << "\tNo.Registrasi	: "<< high_reg_c << endl;
cout << "\tNama Peserta 	: "<< high_nama_c << endl;
cout << "\tNilai Ujian	: "<< high_nilai_c << endl;
cout << "\tJumlah Peserta	: "<< c << endl;
cout << "\t===================================" << endl;
cout << "\tKeseluruhan Peserta : "<< basic + c + pascal << endl;
}

#include <iostream> <iomanip>
using namespace std;
int main () {
	char opsi;
	short jenis;
	string oper;  
	double kembalian,uang,harga_pulsa,ppn,total;
	cout << "\tCOUNTER PULSA MAJU MUNDUR" << endl;
	cout << "+--------------------------------+" << endl;
	cout << "Masukan Kode Operator [T/X/I] : ";cin >> opsi;
	switch (opsi) {
		case 'T' : oper = "Telkomsel";break;
		case 'X' : oper = "XL";break;
		case 'I' : oper = "IM3";break;
		default : cout << "Invalid";return 0;}
	cout << "	Nama Operator : " << oper << endl;
	cout << "+--------------------------------+" << endl;
	cout << "Masukan Jenis Pulsa [5/10/20] : ";cin >> jenis;
	if (oper == "Telkomsel") {
		switch (jenis) {
		case 20 : harga_pulsa = 23000;break;
		case 10 : harga_pulsa = 13000;break;
		case 5 : harga_pulsa = 8000;break;
		default : cout << "Invalid";return 0;}
	}
	else if (oper == "XL") {
		switch (jenis) {
		case 20 : harga_pulsa = 21000;break;
		case 10 : harga_pulsa = 12000;break;
		case 5 : harga_pulsa = 7000;break;
		default : cout << "invalid";return 0;}
	}
	else if (oper == "IM3") {
		switch (jenis) {
		case 20 : harga_pulsa = 20000;break;
		case 10 : harga_pulsa = 11000;break;
		case 5 : harga_pulsa = 6000;break;
		default : cout << "invalid";return 0;}
	}
	ppn = harga_pulsa * 0.10;
	total = ppn + harga_pulsa;
	cout << "	Harga Pulsa : Rp." << harga_pulsa << endl;
	cout << "	PPN 10%	    : Rp." << ppn << endl;
	cout << "	Total Harga : Rp." << total << endl;
	cout << "+--------------------------------+" << endl;
	cout << "Masukan Jumlah Uang	 Rp.  : ";cin >> uang;
	if (uang > harga_pulsa) {
		kembalian = uang - harga_pulsa;
		cout << "	Kembalian : Rp." << uang - total;
	}
	else {
		cout << "Uang Tidak Cukup" << endl;
	}
}

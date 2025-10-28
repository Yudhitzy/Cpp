// Matkul ngentod
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int jam_m,menit_m,detik_m;
	int jam_s,menit_s,detik_s;
	int jumlahdtk,jumlahmenit,jumlahjam;
	long dtkmsk = 0,dtksls = 0;
	cout << "Masukan Waktu Masuk Kuliah " << "\n";
	cout << "Jam"<<setw(8)<<": "; cin >> jam_m;
	cout << "Menit"<<setw(6)<<": "; cin >> menit_m;
	cout << "Detik"<<setw(6)<<": "; cin >> detik_m;cout << endl;
	
	cout << "Masukan Waktu Selesai Kuliah " << "\n";
	cout << "Jam"<<setw(8)<<": "; cin >> jam_s;
	cout << "Menit"<<setw(6)<<": "; cin >> menit_s;
	cout << "Detik"<<setw(6)<<": "; cin >> detik_s;cout << endl;
	
	dtkmsk += jam_m * 3600;
	dtkmsk += menit_m * 60;
	dtkmsk += detik_m;
	dtksls += jam_s * 3600;
	dtksls += menit_s * 60;
	dtksls += detik_s;
	
	long seluruhdtk = dtksls - dtkmsk;
	jumlahjam = seluruhdtk / 3600;
	seluruhdtk %= 3600;
	jumlahmenit = seluruhdtk / 60;
	jumlahdtk = seluruhdtk % 60;
	
	cout << "Durasi Waktu Perkuliahan Adalah" << endl;
	cout << "Jam" << setw(8) << ": ";cout << jumlahjam << " Jam" << endl;
	cout << "Menit" << setw(6) << ": ";cout << jumlahmenit << " Menit"<< endl;
	cout << "Detik" << setw(6) << ": ";cout << jumlahdtk << " Detik" << endl;  	
	
	return 0 ;
}


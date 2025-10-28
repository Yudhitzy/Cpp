#include <iostream>
using namespace std;int main () {

	int semua_siswa,bus,minibus,tolak;
	int siswabus,siswamini;
	int kapasitas_bus = 40, kapasitas_minibus = 12;
	cout << "Masukan Jumlah Siswa : ";cin >> semua_siswa;
	
	bus = semua_siswa / kapasitas_bus;
	semua_siswa %= kapasitas_bus;
	siswabus = bus * kapasitas_bus;
	
	minibus = semua_siswa / kapasitas_minibus;
	semua_siswa %= kapasitas_minibus;
	siswamini = minibus * kapasitas_minibus;
	
	tolak = semua_siswa % kapasitas_minibus;
	
	cout << "Jumlah Bus : " << bus << "		=	"<< siswabus << " Siswa" << "\n";
	cout << "Jumlah Mini Bus : " << minibus << "	=	"<< siswamini << " Siswa" << "\n";
	
	cout << "Siswa Tertolak " << tolak << " Siswa";
}

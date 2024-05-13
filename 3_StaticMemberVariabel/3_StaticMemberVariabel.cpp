#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private :
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim) {
		nim = iNim;
	};
	Mahasiswa(string iNama) {
		nim = 0;
		nama = iNama;
	};
	Mahasiswa(int iNim, string iNama) {
		nim = iNim;
		nama = iNama;
	};
	void cetak() {
		cout << endl
			<< "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
	}
};

int main()
{
	Mahasiswa mhs1;
	Mahasiswa mhs2(2023014);
	Mahasiswa mhs3("Sekar");
	Mahasiswa mhs4(2023014, "Sekar");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}

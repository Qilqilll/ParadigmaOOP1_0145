#ifndef ibu_h
#define ibu_h
#include <vector>

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu\"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu\"" << nama << "\" tidak ada\n";

	}
	void tambahAnak(anak*);
	void cetakAnak();
};

void ibu::cetakAnak() {
	cout << "Daftar anak dari ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif
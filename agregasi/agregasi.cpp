#include <iostream>
using namespace std;

#include  "anak.h"
#include "ibu.h"

int main() {
	ibu* varibu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	anak* varAnak1 = new anak("aqil");
	anak* varAnak2 = new anak("damar");
	anak* varAnak3 = new anak("icol");

	varibu->tambahAnak(varAnak1);
	varibu->tambahAnak(varAnak2);
	varibu2->tambahAnak(varAnak3);
	varibu2->tambahAnak(varAnak1);

	varibu->cetakAnak();
	varibu2->cetakAnak();

	delete varibu;
	delete varibu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}
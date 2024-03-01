#include <iostream>
using namespace std;


int
main ()
{
    cout <<"*****NILAI MATA KULIAH ALGO II*****\n\n";
  int nilai_absensi, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

  cout << "Masukkan nilai absensi siswa: ";
  cin >> nilai_absensi;
  cout << "Masukkan nilai tugas siswa: ";
  cin >> nilai_tugas;
  cout << "Masukkan nilai uts siswa: ";
  cin >> nilai_uts;
  cout << "Masukkan nilai uas siswa: ";
  cin >> nilai_uas;

  nilai_akhir =
	(nilai_absensi * 10 / 100) + (nilai_tugas * 10 / 100) +
	(nilai_uts * 30 / 100) + (nilai_uas * 50 / 100);

  cout << "Nilai akhir siswa adalah " << nilai_akhir << ".\n";

  if (nilai_akhir >= 80)
	cout << "Grade siswa = A";
  else if (nilai_akhir >= 68)
	cout << "Grade siswa = B";
  else if (nilai_akhir >= 56)
	cout << "Grade siswa = C";
  else if (nilai_akhir >= 45)
	cout << "Grade siswa = D";

  else
	cout << "Grade siswa = E";
  return 0;
}
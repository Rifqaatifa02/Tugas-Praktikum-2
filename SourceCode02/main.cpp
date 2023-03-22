#include <iostream>

using namespace std;

void cetakElemenArray(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);
float getNilaiRatarata(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);

int main()
{
	int jumlahElemenArray;
	cout << "Masukan jumlah elemen pada Array : ";
	cin >> jumlahElemenArray;

	int* nilaiArray = new int[jumlahElemenArray];

	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << "Input nilai array ke-" << i << " = ";
		cin >> nilaiArray[i];
	}

	int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahElemenArray);
	float nilaiRatarata = getNilaiRatarata(nilaiArray, jumlahElemenArray);
	int nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahElemenArray);

	cetakElemenArray(nilaiArray, jumlahElemenArray);
	cout << "Nilai terbesar = " << nilaiTerbesar << endl;
	cout << "Nilai terkecil = " << nilaiTerkecil << endl;
	cout << "Nilai rata-rata = " << nilaiRatarata << endl;

	return 0;
}
void cetakElemenArray(int array[], int jumlahElemenArray)
{
	cout << endl;
	for (int i = 0; i < jumlahElemenArray; i++)
		cout << array[i] << " ";
	cout << endl << endl;
}
int getNilaiTerbesar(int array[], int jumlahElemenArray)
{
	int nilaiTerbesar = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilaiTerbesar < array[i])
			nilaiTerbesar = array[i];
	}
	return nilaiTerbesar;
}
float getNilaiRatarata(int array[], int jumlahElemenArray)
{
	float nilaiRatarata = 0;
	float jmlhNilai = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
		jmlhNilai = jmlhNilai + array[i];
	nilaiRatarata = (jmlhNilai / jumlahElemenArray);

	return nilaiRatarata;
}
int getNilaiTerkecil(int array[], int jumlahElemenArray)
{
	int nilaiTerkecil = array[0];
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilaiTerkecil > array[i])
			nilaiTerkecil = array[i];
	}
	return nilaiTerkecil;
}
#include <iostream>
using namespace std;

int main (){
	
	cout<<"=====================Program Kolom Dan Baris Angka Yang Habis Dibagi 3, 5, 7====================="<<endl;
	cout<<"TUGAS UAS DASAR PEMOGRAMAN"<<endl;
	cout<<"Nama : Najwa Naura Salsabilla Herdiyana"<<endl;
	cout<<"Nim  : 1227050102"<<endl;
	cout<<"==================================================================="<<endl;
	
	
	int A [20][20];
	int b, k, i, j;
	cout << "Masukkan jumlah baris : ";
	cin >> b;
	cout << "Masukkan jumlah kolom : ";
	cin >> k;
	
	for (i=0;i<=b-1;i++) {
		for(j=0;j<=k-1;j++) {
			cout << "Masukkan nilai (" << i << "." << j << ") : ";
			cin >> A [i][j];
		}
	}
	cout << "Nilai yang diinputkan : \n";
	for(int i = 0; i < b; i++){
		for(int j = 0; j < k; j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	int angka[20];
	int index = 0;
	for(i=0;i<b;i++){
		for(j=0;j<k;j++) {
			if (A [i][j]%3 != 0 && A[i][j]%5 != 0 && A[i][j]%7 != 0){
				angka[index] = A[i][j];
				index++;
			}
		}
	}
	cout<<"Angka yang habis dibagi 3, 5, 7 adalah ";
	for(int i = 0; i < index; i++){
		cout<<angka[i]<<", ";

	}
}

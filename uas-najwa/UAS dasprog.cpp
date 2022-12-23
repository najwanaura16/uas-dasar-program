#include <iostream>
using namespace std;

int main(){
	int m [100][100];
	int bris,klom,x,y;
	
	cout<<"=====================Program Kolom dan Baris====================="<<endl;
	cout<<"TUGAS UAS DASAR PROGRAM"<<endl;
	cout<<"Nama : Najwa Naura Salsabilla Herdiyana"<<endl;
	cout<<"Nim  : 1227050102"<<endl;
	cout<<"==================================================================="<<endl;
	
	cout<<"Masukan nilai baris :";
	cin>>bris;
	
	cout<<"Masukan nilai kolom :";
	cin>>klom;
	
	for(x=0; x<bris; x++){
		for(y=0; y<klom; y++){
			cout<<" Baris "<<x+1<<" kolom - "<<y+1<<" : ";
			cin>>m[x][y];
		}
		cout<<endl;
	}
	
	cout<<" Hasil "<<endl;
	
	for(x=0; x<klom; x++){
		for(y=0; y<bris; y++){
			cout<<m[y][x]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	for(x=0; x<bris; x++){
		for(y=0; y<klom; y++){
			cout<<" "<<m[x][y];
		}
		cout<<endl;
	}
	
	return 0 ;
}

#include <iostream>
using namespace std;

int main(){
	
	//Do While loop
	int angka;
	do{
		cout<<"Masukan angka Ganjil untuk menyelesaikan loop"<<endl;
		cin>>angka;
		
	}while(angka % 2 == 0);
	
	cout<<"Program selesai"<<endl;
	
	return 0;
}

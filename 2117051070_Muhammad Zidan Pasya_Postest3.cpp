#include <iostream>
using namespace std;
int main(){
	
	/*
	Muhammad Zidan Pasya
	2117051070
	*/
	
	long x;
	
	cout << "Masukkan tahun : ";
	cin >> x;
	
	if (x%400 == 0){
		cout << "Tahun " << x << " adalah tahun Kabisat";
	}
	else if (x%100 == 0){
		cout << x << " Bukan tahun Kabisat";
	}
	else if (x%4 == 0){
		cout << "Tahun " << x << " adalah tahun Kabisat";
	}
	else {
		cout << x << " Bukan tahun Kabisat";
	}
	return 0;
}

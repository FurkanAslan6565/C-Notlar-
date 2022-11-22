#include<iostream>
using namespace std ; 
int main(){
	// c++ bir karenin cevresini ve alanýný bulan pragam yapalým 
	
	int k,cevre , alan ;
	cout << "Bir kenar uzunlugu giriniz: ";
	cin >> k ; 
	
	cevre = k *4 ; // 4 kenarýnýn toplamý 
	alan = k*k ;// iki kenar çarpýmý 
	
	cout<< "cevre =" << cevre<< endl << "Alan ="<< alan ;
}

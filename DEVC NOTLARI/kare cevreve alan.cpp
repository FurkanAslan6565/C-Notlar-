#include<iostream>
using namespace std ; 
int main(){
	// c++ bir karenin cevresini ve alan�n� bulan pragam yapal�m 
	
	int k,cevre , alan ;
	cout << "Bir kenar uzunlugu giriniz: ";
	cin >> k ; 
	
	cevre = k *4 ; // 4 kenar�n�n toplam� 
	alan = k*k ;// iki kenar �arp�m� 
	
	cout<< "cevre =" << cevre<< endl << "Alan ="<< alan ;
}

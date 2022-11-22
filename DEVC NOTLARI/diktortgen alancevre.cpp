#include<iostream>
using namespace std; 
int main (){
// diktorgenin alan ve cevre hesaplamasý 
	int k1,k2,cevre,alan ; 
	cout <<"k1 giriniz " ;
	cin >>k1 ; 
	cout <<"k2 giriniz "; 
	cin >> k2 ; 
	cevre = (k1+k2)*2 ; 
	alan = k1*k2 ; 
	cout << "Cevre = "<< cevre <<endl << "Alan = "<< alan ; 
}

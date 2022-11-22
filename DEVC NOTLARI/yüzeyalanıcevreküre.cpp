#include<iostream>
using namespace std; 
#define PI 3.14 
int main (){
	// kürenin alanýný ve cevresini ...
	
	float  r,alan,cevre; 
	cout <<"Yaricapi giriniz: "; 
	cin >> r;
	
	alan =   4 * PI *r*r ;  // 4*pi*r*r 
	cevre = 2 *PI*r ; // 2 *pi*r 
	
	cout << "Alan = " << alan<< endl << "Cevre = "<< cevre ; 
}


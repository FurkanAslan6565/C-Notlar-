#include<iostream>
#include<math.h>
using namespace std;
int main (){

	// ikinci dereceden bir denkelemin köklerini bulan c ++ kodu yazcaz 
	int a,b,c;
	cout <<"a katsayini giriniz:";
	cin>> a;
	cout <<"b katsayini giriniz:";
	cin>> b;
	cout <<"c katsayini giriniz:";

	cin>> c;
	float d =(b*b)- (4*a*c);
	if (d>0){
		float x1= (-b +sqrt(d) ) /2*a ;
		float x2=(-b  - sqrt(d) ) /2*a ;
		cout <<"kok x1 = "<< x1<< endl;
		cout <<"kok x2 = "<< x2<< endl;
	}
	else if (d==0){
		float x1= (-b +sqrt(d) ) /2*a ;
		cout <<"kok x1 = x2 = "<< x1<< endl ;
	}
	else if (d<0){
		cout<<"Reel kok yoktur..." ;
	}
}



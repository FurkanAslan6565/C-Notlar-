#include<iostream>
using namespace std;
 int main (){
 	//Üslü sayýlar hesaplamasý c++kodu
 	int kuvvet,taban,sonuc=1;
 	cout<<"ussu alaýnacak sayinin tabanýný giriniz:";
 	cin>>taban;
 	cout<<"ussu alaýnacak sayinin kuvvetini giriniz:\n";
 	cin>>kuvvet;
 	int i;
 	for (i=1;i<=kuvvet;i++)
 	{
 		sonuc=sonuc*taban;
	 }
	 cout<<sonuc;

 }

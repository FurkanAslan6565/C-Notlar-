#include<iostream>
using namespace std;
 int main (){
 	//�sl� say�lar hesaplamas� c++kodu
 	int kuvvet,taban,sonuc=1;
 	cout<<"ussu ala�nacak sayinin taban�n� giriniz:";
 	cin>>taban;
 	cout<<"ussu ala�nacak sayinin kuvvetini giriniz:\n";
 	cin>>kuvvet;
 	int i;
 	for (i=1;i<=kuvvet;i++)
 	{
 		sonuc=sonuc*taban;
	 }
	 cout<<sonuc;

 }

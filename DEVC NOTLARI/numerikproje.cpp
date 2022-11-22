#include <iostream>
#include <math.h>
#include<stdio.h>
#include <cmath>


float Hesapla(float x){
     double result;
     result = exp(x*-0.5);
	double sonucFonk = 0.0;
	sonucFonk = (result - x + 0.2);
	
	return sonucFonk;
}

float hataHesapla(float a,float b,float n){
		double sonucFonk = 0.0;
		 sonucFonk = (b - a)/(pow(2,n));
		 return sonucFonk; 
	
}
main(){
	int deger = 0;
	float x1=0,x2=2;
	float tempx1,tempx2;
	float a,b,n,ort,yeninokta,hata;
	double sonucFonk;
	float sayac=0;
	float c= 0;
	int sayac2 ;
	
	tempx1=Hesapla(x1);

	tempx2=Hesapla(x2);
	cout<<"Tekrar(#)        kok(n)          Hata(n)"<<endl;
		
	printf("**************************************************************\n");
	hata=hataHesapla(x1,x2,1);
	if(x1 < x2 )
	{	
	if(tempx1*tempx2<0)
	{
	while(sayac<=9)
	{
	
			sayac+=1;
			c = (x1+x2)/2;
			yeninokta = Hesapla(c);
			
			tempx1=Hesapla(x1);
			tempx2=Hesapla(x2);
			
			if (yeninokta*tempx1 < 0)
			{
				x2=c;
			}
			if(yeninokta*tempx2<0){
				x1=c;
			}
		
			hata = hataHesapla(x1,x2,sayac);
			cout<<""<<sayac<< "               "<<x1<<"                    "<<hata<<""<<endl;
	   	if(hata<0.02 && sayac2 == 0){
				 deger = sayac;
				 sayac2+=sayac2+1;
				 printf(" Ikiye bolme metodu ile 0.02 den daha kucuk bir hata degerine %d . adimda ulasilmistir",deger);
				}	
				if (sayac==11 ) {
					printf("\nIkiye bolme metodu ile 0.02 den daha kucuk bir hata degerine 10 adimda ulasilamamistir.\n");
				}	
if(sayac==11){break;}
}
	}
}
	

}



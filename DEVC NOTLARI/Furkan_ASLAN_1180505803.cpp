#include <iostream>
#include <math.h>

using namespace std;

float Hesapla(float x){
	float sonucFonk = 0.0;
	sonucFonk = (2* pow(x,3) - 3*pow(x,2) - 4*x + 5);
	
	return sonucFonk;
}


float hataHesapla(float a,float b,float n){
		float sonucFonk = 0.0;
		 sonucFonk = (b - a)/(pow(2,n));
		 return sonucFonk; 
	
}

main(){
	
	float x1,x2;
	float tempx1,tempx2;
	float sonucFonk,a,b,n,ort,yeninokta,hata;
	float sayac=0;
	float c= 0;
	
	cout<<"Bir x1 degerini gir:";
	cin>>x1;
	tempx1=Hesapla(x1);
	
	cout<<"Bir x2 degerini gir:";
	cin>>x2;
	tempx2=Hesapla(x2);
	cout<<"Tekrar(#)        a(n)       b(n)          c(n)       Hata(n)"<<endl;
		
	cout<<"******************************************************************"<<endl;
	hata=hataHesapla(x1,x2,1);
	if(x1 < x2 )
	{	
	if(tempx1*tempx2<0)
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
		
		
		if(sayac==10){
			break;
		}

		cout<<""<<sayac<< "               "<<x1<<"             "<<x2<<"              "<<c<<"              "<<hata<<""<<endl;
	
		
	
}
else {
			cout<<"Girilen aralikta kok yoktur"<<endl;
		}
		cout<< " "<<endl;
	cout<<"Fonksiyona yaklasilan deger "<<c<<" dir.  "<<endl;
		}
		

	
	else{

		cout<<"x1 x2'den kucuk olmali"<<endl;
		
	}

}


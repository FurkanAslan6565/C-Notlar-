#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float Fonk(float x){
	return exp(-0.5*x)-x-0.2 ;
}
float Hata(float Kok,float IkinciDeger){
	if((Kok-IkinciDeger)<0){
		return (Kok-IkinciDeger)*-1;
	}else{
		return Kok-IkinciDeger;
	}
}
int main(){
	int AltSinir=0,UstSinir=2;
	float IlkDeger=2,IkinciDeger=1.8,Kok;
  if(Fonk(AltSinir)*Fonk(UstSinir)>0){
  	printf("Verilen aralikta kok yoktur");
  }
  int Iterasyon=1;
  printf("#(iterasyon)\t\t\tkok\t\te\n\n");
  float Hata1=1;
  
  while(Hata1>5*pow(10,-3)){
  Hata1=Hata(Kok,IlkDeger);	
   Kok=IkinciDeger-((Fonk(IkinciDeger)*(IlkDeger-IkinciDeger))/(Fonk(IlkDeger)-Fonk(IkinciDeger)));
   printf("%d\t\t\t%f\t\t%f\n",Iterasyon,Kok,Hata1); 
   Iterasyon++;
   IlkDeger=IkinciDeger;
   IkinciDeger=Kok;
  }
  	
}

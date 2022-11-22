#include <stdio.h>
#include <math.h>
float a,b,c;
int iterasyon=1;
float f(float x){
	double result;
	result = exp(x*-0.5);
	double sonucFonk = 0.0;
	sonucFonk = (result - x + 0.2);
return sonucFonk;
}

float turevAl(float x){
return (0.5*x) -x*(exp(-1)) +(0.5);
}

float mutlakAC(){
if(c-a<0){return -1*(c-a);}
else{return c-a;}
}

void yazdir(){
printf("%d                            %f\n",iterasyon,c);
}

void islem(){
c=a-f(a)/turevAl(a);
 int sayac2;
while(1){
	
yazdir();
  


a=c;  
iterasyon++;
c=a-f(a)/turevAl(a); 
if(mutlakAC()<0.02 && sayac2 == 0){
				 int deger = iterasyon;
				 sayac2+=sayac2+1;
				    printf(" Ikiye bolme metodu ile 0.02 den daha kucuk bir hata degerine %d . adimda ulasilmistir",deger);
				}
				
			 if (iterasyon==11 ) {
					printf("\nIkiye bolme metodu ile 0.02 den daha kucuk bir hata degerine 10 adimda ulasilamamistir.\n");
				}	
				if(iterasyon==11){
break;
} 
}

}

int main(){
	int deger;
a=2; b=0;
  if(f(a)*f(b)<=0){
printf("Iterasyon#                       Hata\n");
printf("**************************************************************\n");
     islem();
     }

}

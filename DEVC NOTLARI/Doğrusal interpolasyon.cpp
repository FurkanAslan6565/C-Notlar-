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

float mutlakDeger(){         /* Formule gore X-Xn mutlak deger icinde oldugundan degeri pozitif olarak gonderiyoruz */
if(2.6906-c<0){return -1*(2.690677-c);}
else{return 2.690677-c;}
}

void yazdir(){
printf("%d                          %f\n",iterasyon,c);
}

void islem(){
c=(a*f(b)- b*f(a))/(f(b)-f(a)); /* bu formule gore c'nin ilk degeri 2.5555 tir */
while(1){
yazdir();


if(f(c)*f(b)<0){ /* f(2.5555).f(3) < 0 ise alt sinir c'ye esit olacak */
a=c;
}

else{b=c;} /* degilse ust sinir c'ye esit olacak */
iterasyon++; //
c=(a*f(b)- b*f(a))/(f(b)-f(a));   /* bu islem kosul saglanana kadar devam eder  */
int sayac2;
if( c < 0.02 && sayac2 == 0){
				 int deger = iterasyon;
				 sayac2+=sayac2+1;
				    printf(" Ikiye bolme metodu ile 0.02 den daha kucuk bir hata degerine %d . adimda ulasilmistir",deger);
				}
				
			 if (iterasyon==11 ) {
					printf("\nIkiye bolme metodu ile 0.02 den daha kucuk bir hata degerine 10 adimda ulasilamamistir.\n");
				}	
if(iterasyon==11){break;}
}
   }

int main(){
a=0; b=2; /*a=alt sinir, b=ust sinir*/
  if(f(a)*f(b)<=0){
printf("Iterasyon#                   Hata\n");
printf("**************************************************************\n");
     islem();
    
     }

}

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
float a,b,c;
int iterasyon;
float kok1[10];
float kok2[10];
float kok3[10];
float hata1[10];
float hata2[10];
float hata3[10];

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

float mutlakDeger(){        
if(a-c<0){return -1*(a-c);}
else{return a-c;}
}



float mutlakAC(){
if(c-a<0){return -1*(c-a);}
else{return c-a;}
}


void yazdir(){
	
	
	int j;
	
		for(j=1;j<=10;j++){
			printf("%d\t\t%f  %f\t\t%f   %f\t\t%f       %f\n",j,kok1[j],hata1[j],kok2[j],hata2[j],kok3[j],hata3[j]);

			
			
		}
		int i=1;
	while (i<=10){
		if(hata1[i]<0.02 ){
			printf("binarymethod metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir.\n",i);
		
			break;
		}
		i++;
	}
	int g=1;
	while (g<=10){
		if(hata2[g]<0.02 ){
			printf("newton metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir.\n",g);
		
			break;
		}
		g++;
	}
	int t=1;
	while (t<=10){
		if(hata3[t]<0.02 ){
			printf("linearinterpolation metodu ile 0.02 den daha kucuk bir hata degerine %d adimda ulasilmistir.",t);
		
			break;
		}
		t++;
	}
}

void linearinterpolation(){
iterasyon = 1;
a=0; b=2;
c=(a*f(b)- b*f(a))/(f(b)-f(a)); 
kok3[iterasyon] = c;

while(iterasyon<=10){

if(f(c)*f(b)<0){ 
a=c;
}
else{b=c;} 
iterasyon++; 
c=(a*f(b)- b*f(a))/(f(b)-f(a));   
hata3[iterasyon] = c;
}
   }

void newton(){
iterasyon = 1;
a=2; b=0;
c=a-f(a)/turevAl(a);
kok2[iterasyon]=c;
while(iterasyon<=10){

a=c;  
iterasyon++;
c=a-f(a)/turevAl(a);
hata2[iterasyon] = c;
}

}


void binarymethod(){
iterasyon = 1;
a=0; b=2;
int  binaryhata;
while(iterasyon<=10){
    c = (a+b)/2;
    binaryhata=(b-a)/pow(2,iterasyon);
    hata1[iterasyon]= binaryhata;
     if(f(c) <0){
         a=c;
     }

     else{
         b=c;
     }
     
      kok1[iterasyon] = c;

        iterasyon+=1;
	 }
  
 }

int main(){
	
a=0; b=2; 
  if(f(a)*f(b)<=0){
  	printf("**************************************************************\n");
printf("Iterasyon#\t\tbinaryMethod\t\tNewtonRaphson\t\t\tlinearInterpolation\t\t\n");


printf("  \t\t   kok     e                       kok       e                      kok            e\n");
     binarymethod();
     newton();
     linearinterpolation();
     yazdir();
     }

}

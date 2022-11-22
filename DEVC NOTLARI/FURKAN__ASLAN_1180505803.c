#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x){
	return exp(-0.5*x)-x-0.2 ;
}
int main(){
	int alt=0,ust=2;
	float ilk=2,ikinci=1.8,ucuncu;  //ilkdeger ikincideger kok
  if(f(alt)*f(ust)>0){
  	printf("Verilen aralikta kok yoktur");
  }
  
  int iterasyon=1;
  printf("#(iterasyon)\t\t\tkok\t\te\n\n");
  float hata=0;
  
  while(1){	
   ucuncu=ikinci-((f(ikinci)*(ilk-ikinci))/(f(ilk)-f(ikinci)));
   if((ucuncu-ikinci)<0){
		hata= (ucuncu-ikinci)*-1;
	}else{
		hata= (ucuncu-ikinci);
	}
   printf("%d\t\t\t%f\t\t%f\n",iterasyon,ucuncu,hata); 
   iterasyon++;
   ilk=ikinci;
   ikinci=ucuncu;
   if(hata<5*pow(10,-3)){
   	break;
   }
  }
	
	

	
	
	
}

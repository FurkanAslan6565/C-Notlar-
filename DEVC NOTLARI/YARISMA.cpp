#include <stdio.h>

 int main(){
 	
    char cevap1,cevap2,cevap3;
    char cevaplar[]={'sabahattin ali','elon musk','marc zuckerberg'};
 int puan=0;
 	printf("***YARISMAMIZA HOSGELDINIZ*****\n\n");
 	
 	//SORULAR
 	printf("SORULAR");
 	
 	printf("Kurk Mantolu madonna kitabýnýn yazarý kimdir?\n CEVAP:");
 	scanf("%c",&cevap1);
 	if(cevap1==cevaplar[0]){
 		puan= puan+10;
	 }
	 else{
	 	
	 printf("Yanlis Cevap!!!");
	 puan = puan-10;
 }
	 
 	
 	printf("Space X sirketinin sahibi kimdir?\n CEVAP : \n");
 	scanf("%c",&cevap2);
 	if(cevap2==cevaplar[1]){
 		
 		puan= puan+10;
	 }else{
	 	
	 printf("Yanlis Cevap!!!");
	 puan = puan-10;
 }
 	
 	printf("Facebook kurucusu kimdir?\n CEVAP:");
 	scanf("%c",&cevap3);
 	 if(cevap3==cevaplar[2]){
 		
 		puan= puan+10;
	 }else{
	 	
	 printf("Yanlis Cevap!!!");
	 puan = puan-10;
 }
 	
 }

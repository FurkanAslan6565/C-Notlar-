#include<stdio.h>

int main (){
	int birlik, onluk,yirmibeslik;
	
	int para;
	printf("para giriniz :");
	scanf("%d",&para);
	 yirmibeslik = para / 25 ; 
	 para = para - yirmibeslik*25;
	 
	 onluk =  para / 10 ; 
	 para = para - onluk*10 ; 
	 
	  birlik =  para /1 ;
	  
	  
	  printf("%d birlik vardir  ---  %d onluk  vardir ----- %d  yirmibeslik vardir ....  ", birlik, onluk, yirmibeslik);
}

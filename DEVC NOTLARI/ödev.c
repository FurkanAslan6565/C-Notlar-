#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[5]= {-1,0,1,2,3};
	int  fonksiyon[5]= {-3,-1,4,7,0};
	int i = 0 ;
	printf("******NOKTALAR***** \n");
	while(i<5){
	printf("%d \t %d \n",array[i],fonksiyon[i]);
	i++;
	}
	int sayi ;
	int j=-1;
	while (j<0){
	printf("sayi(n) giriniz :  (n nokta sayisi -1 dir)--->");
		
	scanf("%d",&sayi);
	if(sayi<0 || sayi>4 ){
	 
		printf("sayi Degeri 0 ve 4 araliginda olmalidir ");
			printf("\n"); 
		
	}
	else {
		j++;
	}
	}
int a,b,sonucHesapla,L_n = 1,x=0;
printf("y degerini hesaplamak icin x degeri giriniz:");
scanf("%d",&x);
for(  a = 0 ;a <sayi;a++){
	for( b=0;b<sayi;b++){
		if(a==b){
			continue ;
		}
		L_n*=(x-array[b])/(array[a]-array[b]);
	}
	sonucHesapla+=L_n*fonksiyon[a];
	
}
printf("x: %d ==> y :%d ",x,sonucHesapla);
}

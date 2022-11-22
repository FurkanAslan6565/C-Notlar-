#include<stdio.h>

//Bir sayýnýn mükemmel sayý olup olmadýðýný bulan c kodu..

int main(){
	int sayi;
	int toplam=0;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	int i;
	 for (i=1;i<sayi;i++){
	 	if(sayi%i==0){
	 		toplam= toplam +i;
		 }
	 }
	 if(toplam==sayi){
	 	printf("Bu bir mukemmel sayidir\n");
	 }
	 else{
	 		printf("Bu bir mukemmel sayi degildir");
	 }
	
	
	
	
	
	
}

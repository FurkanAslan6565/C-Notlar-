#include<stdio.h>
int main()
//Kullanýcý girdiði sayýlarýn sýralmasýný yazan program. C kodu ile 
{
	int uzunluk;
	
	printf("Kac sayi girmek istersiniz?..");
	scanf("%d",&uzunluk);
	int sayi[uzunluk];
	int i,j,temp;
	for(i=0;i<uzunluk;i++){
		printf("%d. sayiyi giriniz : ",i+1);
		scanf("%d",&sayi[i]);
	}
	
	for (i=0;i<uzunluk;i++){
		for (j=0;j<uzunluk-1;j++){
			if(sayi[j]>sayi[j+1]){
				
				temp = sayi[j];
				sayi[j]= sayi[j+1];
				sayi[j+1]= temp;
			}
			
		}
	}
	for(i=0;i<uzunluk;i++){
		printf("%d-",sayi[i]);
	}
	




}

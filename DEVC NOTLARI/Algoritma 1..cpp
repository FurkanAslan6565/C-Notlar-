#include<stdio.h>
#include<stdlib.h>

int main(){ 
int uzunluk = 0;
    char metin[1000];
	printf("Metin giriniz(Lutfen buyuk harf ve turkce karakter kullanmayýnýz): ");
	scanf("%s",&metin);
	
     uzunluk =strlen(metin);
printf("uzunluk %d",uzunluk);
	
}

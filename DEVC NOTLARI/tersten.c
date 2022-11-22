#include<stdio.h>
//Kullanýcý girdiði kelimenin tersten yazan program ... C kodu ile...
int main()
{
	int uzunluk;
	char kelime[100];
	printf("Bir Kelime Giriniz:");
	scanf("%s",&kelime);
	
	uzunluk =strlen(kelime);
	
	//Ekrana tersten Yazdýrma 
	int i;
	for(i=uzunluk-1;i>=0;i--){
		
		printf("%c",kelime[i]);
	}
	
	



}

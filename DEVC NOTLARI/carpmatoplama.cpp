#include<stdio.h>

// Kullan�c� bir say� girsin ve bu say�n�n tam bolenlerini bulan c kodu yazal�m . 


int main (){
	int sayi,i, temp;
	printf("Sayi Giriniz : ");
	scanf("%d",&sayi);
	printf("Tam Bolenleri: ");
	// 100/2 = 50/2 =25/5=5/5=1 // 2*2*5*5*1 = 100 // 2 5 1 
	for(i=2;i<sayi;i++)
	{ 
		while(sayi%i==0){
			temp =sayi ;
			printf("%d-",i);
			while(temp%i==0)
			{
				temp=temp/i;
			}
			sayi=temp;
		}
	}
	printf("%d",sayi); // Kendisini en sonunda yazmak zorunda yoksa i�erisinde asal say� olanlar� ekrana yazd�rmaz.
}

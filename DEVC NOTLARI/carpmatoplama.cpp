#include<stdio.h>

// Kullanýcý bir sayý girsin ve bu sayýnýn tam bolenlerini bulan c kodu yazalým . 


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
	printf("%d",sayi); // Kendisini en sonunda yazmak zorunda yoksa içerisinde asal sayý olanlarý ekrana yazdýrmaz.
}

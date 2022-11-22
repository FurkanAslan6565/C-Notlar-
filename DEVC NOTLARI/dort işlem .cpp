#include<iostream>
using namespace std ; 
int main(){
	// Matemikte 4 iþlemler temel 
	 int a ,b ,toplam ,fark ,carpma, bolme  ; // float 
	 cout <<" a sayisini giriniz: " ;  // kullanýcýdan veri aldýk 
	 cin >> a ; 
	 cout <<" b sayisini giriniz(b 0 olamaz!!!): " ; 
	 cin >> b ; 
	   toplam  = a + b ; 
	   fark = a-b ; 
	   carpma = a*b ; 
	   bolme = a/b ; // b 0 olursa tanýmsýz  "kd", toplam 
	   cout << "Toplam :" << toplam << endl ;  //  c++ yazdýrma iþlemi 
	   cout << "Fark :" << fark  << endl ; 
	   cout << "Carpma :" << carpma  << endl ; 
	   cout << "Bolme : " << bolme<< endl ; 
	   
	
	
}

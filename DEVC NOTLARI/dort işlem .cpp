#include<iostream>
using namespace std ; 
int main(){
	// Matemikte 4 i�lemler temel 
	 int a ,b ,toplam ,fark ,carpma, bolme  ; // float 
	 cout <<" a sayisini giriniz: " ;  // kullan�c�dan veri ald�k 
	 cin >> a ; 
	 cout <<" b sayisini giriniz(b 0 olamaz!!!): " ; 
	 cin >> b ; 
	   toplam  = a + b ; 
	   fark = a-b ; 
	   carpma = a*b ; 
	   bolme = a/b ; // b 0 olursa tan�ms�z  "kd", toplam 
	   cout << "Toplam :" << toplam << endl ;  //  c++ yazd�rma i�lemi 
	   cout << "Fark :" << fark  << endl ; 
	   cout << "Carpma :" << carpma  << endl ; 
	   cout << "Bolme : " << bolme<< endl ; 
	   
	
	
}

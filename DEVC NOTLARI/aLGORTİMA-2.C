#include <stdio.h>
#include <conio.h>
int main()
{
  int enb, enk, i, n, fark;
  int dizi[n];
  printf("Dizinin Eleman Sayisini Giriniz :");
  scanf("%d", &n); // 1 KARMAÞIKLIK 
  for (i = 1; i <= n; i++)// Ý 0 1 N  N
  {
    printf("%d . elememani giriniz : ", i);
    scanf("%d", &dizi[i]); // N
  }
  enk = dizi[1]; // 1
  enb = dizi[1]; // 1
  for (i = 2; i <= n; i++) //  1, N-1,   N-2 
  {
    if (dizi[i] < enk)
      enk = dizi[i]; //  N-2
    else if (dizi[i] > enb)
      enb = dizi[i]; // N-2 
  }
  getch(); // 1
}

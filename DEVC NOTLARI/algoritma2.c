#include <stdio.h>
#include <conio.h>

int main()
{
  int enb, enk, i, n;
  int dizi[n];
  printf("Dizinin Eleman Sayisini Giriniz :");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d . elememani giriniz : ", i);
    scanf("%d", &dizi[i]);
  }
  enk = dizi[1];
  enb = dizi[1];
  for (i = 2; i <= n; i++)
  {
    if (dizi[i] < enk)
      enk = dizi[i];
    else if (dizi[i] > enb)
      enb = dizi[i];
  }

  printf("\nEn buyuk sayi : %d En kucuk sayi : %d ",enb, enk);
  getch();
}

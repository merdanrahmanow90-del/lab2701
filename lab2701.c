#include <stdio.h>

int main() {
    double fiyat, odenen;
    printf("Urun tutari: ");
    scanf("%lf", &fiyat);
    printf("Odenen para: ");
    scanf("%lf", &odenen);

    double paraUstuTL = odenen - fiyat;
    printf("\nPara ustu: %.2f TL\n", paraUstuTL);

    int kalan = (int)(paraUstuTL * 100 + 0.5);

    int k100 = kalan / 100;
    kalan = kalan % 100;

    int k50 = kalan / 50;
    kalan = kalan % 50;

    int k25 = kalan / 25;
    kalan = kalan % 25;

    int k10 = kalan / 10;
    kalan = kalan % 10;

    int k5 = kalan / 5;
    kalan = kalan % 5;

    int k1 = kalan;

    printf("%d adet 100 kurus\n", k100);
    printf("%d adet 50 kurus\n", k50);
    printf("%d adet 25 kurus\n", k25);
    printf("%d adet 10 kurus\n", k10);
    printf("%d adet 5 kurus\n", k5);
    printf("%d adet 1 kurus\n", k1);

    int toplam = k100 + k50 + k25 + k10 + k5 + k1;
    printf("Toplam kupur: %d\n", toplam);

    return 0;
}
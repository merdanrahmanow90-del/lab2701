#include <stdio.h>
#include <math.h>

int main() {
    float urun_tutari, odenen_para;

    printf("Urun tutarini girin: ");
    scanf("%f", &urun_tutari);
    printf("Odenen parayi girin: ");
    scanf("%f", &odenen_para);

    int kalan_para = (int)round((odenen_para - urun_tutari) * 100);

    printf("\nPara Ustu: %.2f TL\n", kalan_para / 100.0);
    printf("Verilecek Kupurler:\n");

    int toplam = 0;
    int adet;

    adet = kalan_para / 20000; kalan_para %= 20000;
    printf("200 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 10000; kalan_para %= 10000;
    printf("100 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 5000; kalan_para %= 5000;
    printf("50 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 2000; kalan_para %= 2000;
    printf("20 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 1000; kalan_para %= 1000;
    printf("10 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 500; kalan_para %= 500;
    printf("5 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 100; kalan_para %= 100;
    printf("1 TL: %d\n", adet); toplam += adet;

    adet = kalan_para / 50; kalan_para %= 50;
    printf("50 Kurus: %d\n", adet); toplam += adet;

    adet = kalan_para / 25; kalan_para %= 25;
    printf("25 Kurus: %d\n", adet); toplam += adet;

    adet = kalan_para / 10; kalan_para %= 10;
    printf("10 Kurus: %d\n", adet); toplam += adet;

    adet = kalan_para / 5; kalan_para %= 5;
    printf("5 Kurus: %d\n", adet); toplam += adet;

    adet = kalan_para;
    printf("1 Kurus: %d\n", adet); toplam += adet;

    printf("\nToplam Kupur Sayisi: %d\n", toplam);

    return 0;
}
#include <stdio.h>
#include <time.h>
/*Açýklama
Programýn baþlatýlmasýndan itibaren geçen saat tik sayýsýný geri döndürür.
Elde edilen sonucu saniyeye dönüþtürmek için CLOCKS_PER_SEC deðerine 
bölmek gerekir.
Bir programýn gerçek iþlem süresini hesaplamak için, yapýlan iþlemden 
önce ve sonra fonksiyona yapýlan iki çaðrý ile elde edilen deðerlerin 
farký alýnýr.*/
int main(void)
{
    clock_t start_t, end_t;
    int id;

    start_t = clock();

    for(id=0; id<100; id++) {
        printf("%d ", id);
    }

    end_t = clock();

    printf("\nstart_t deðeri: %ld\n", start_t);
    printf("end_t deðeri: %ld\n", end_t);
    printf("CPU süreci (saniye): %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);

    return 0;
}


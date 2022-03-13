#include<stdio.h>
  
int main()
{
    int i = 10;
    register int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
/*
->	Kayýtlarýn eriþimi bellekten daha hýzlýdýr, 
	bu nedenle bir C programýnda en sýk kullanýlan 
	deðiþkenler, register anahtar sözcüðü kullanýlarak 
	kayýtlara yerleþtirilebilir . Anahtar sözcük kaydý, 
	derleyiciye belirli bir deðiþkenin bir kayda konulabileceðini 
	gösterir. Bir sicile koyup koymamak derleyicinin seçimidir. 
	Genel olarak, derleyicilerin kendileri optimizasyonlar yapar 
	ve deðiþkenleri kayýt defterine koyar.

->	register anahtar sözcüðü iþaretçi deðiþkenleri 
	ile kullanýlabilir. Açýktýr ki, bir kayýt, 
	bir hafýza konumunun adresine sahip olabilir.
*/

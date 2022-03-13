#include <stdio.h> // standart giriþ cýkýþ kütüphanesi
#include <math.h> // matematik kütüphanesi

int hesapla(int, int); // us hesaplama fonksiyon prototipi

int main() 
{
	int x,n,sonuc; // deðerleri tanýmladýk
	
	printf("x (taban) degerini giriniz:"); // ekrana metni bastýk 
	scanf("%d",&x); // kullanýcýdan x deðerini aldýk
	printf("n (us) degerini giriniz:"); // ekrana metni bastýk
	scanf("%d",&n); // kullanýcýdan n deðerini aldýk
	sonuc = hesapla(x,n); // sonuç deðiþkenine hesapla fonksiyonunu atadýk
	printf("sonuc = %d",sonuc); // ekrana sonucu bastýk
	return 0;
}
// girilen x ve n deðerlerine göre sonucu hesapladýk 
int hesapla(int x, int n)
{
	int tp=0,i; // toplam deðerini 0 a eþitledik ve döngü için i deðiþkeni tanýmladýk.
	for(i=0; i<=n; i++) // i deðerini 0 a eþitledik. i yi her döngüde 1 arttýrdýk. girilen n deðerine kadar döngüyü devam ettirdik. 
	{
		tp += pow(x,i); // pow fonksiyonu üs alma iþini görür. toplamý her döngüde yeni gelen deðerle topladýk. 
	}
	return tp; // tp (toplam) deðiþkenini döndürdük.
}

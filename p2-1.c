#include <stdio.h> // standart giriþ cýkýþ kütüphanesi
#include <locale.h> // türkçe karakter seti için ekledik 

// fonksiyon en yüksek notu hesapladý
int yuksekpuan(int a[10][2]){ // fonksiyon 10 a 2 lik matris deðeri aldý
    int eb = 0,i,j; // deðiþkenleri tanýmladýk
    for(i=0; i<10; i++){ // satýr sayýsý 10 kadar arttý
        for(j=0; j<2; j++){ // sütun sayýsý 2 ye kadar döndü
            if(a[i][j]>=60&&a[i][j]>eb){ // eðer yeni deðiþkende not 60 dan büyükse ve en büyükten büyükse ;
                eb = a[i][j]; // en büyük(eb) not deðeri güncellendi 
            }
        }
    }
    return eb; // en büyük deðeri döndürdük
}
// en düþük notu hesaplayan fonksiyon oluþturduk
int dusukpuan(int a[10][2]){ // fonksiyon 10 a 2 lik matris deðeri aldý
    int ek = 100,i,j; // deðiþkenleri tanýmladýk
    for(i=0; i<10; i++){ // satýr sayýsý 10 kadar arttý
        for(j=0; j<2; j++){ // sütun sayýsý 2 ye kadar döndü 
            if(a[i][j]>=60&&a[i][j]<ek){ // eðer yeni deðiþkende not 60 dan büyükse ve en küçükten küçükse;
                ek = a[i][j]; //en küçük(ek) not deðeri güncellendi 
            }
        }
    }
    return ek; // en küçük deðeri döndürdük 
}
 // ortalama hesaplayan fonksiyon tanýmladýk
void orthesap(int a[10][2]){ // fonksiyon 10 a 2 lik matris deðeri aldý
	float ort; // kesirli sayý türünde  ort deðiþkeni oluþturduk
	int i; // döngü sayacý tanýmladýk
	for(i=0; i<10; i++){ // satýr sayýsý 10 kadar arttý
		ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6)); // ortlamayý ilk notun %40 ile ikinci notun %60 nýn toplamýna eþitledik
		printf("\n%.2f ",ort); // kesirli ortalamanýn noktadan sonra sadece 2 basamaðýný ekrana bastýrdýk.
	}
	printf("\n\n"); // 2 satýr asaðý 
}
// bu fonksiyon not ortalamasýna göre öðrencinin geçip geçmeyeceðini hesaplýyor
void gecme(int a[10][2]){ 
	int i,j;
	float ort;
	for(i=0; i<10; i++){
			ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6)); 
			if(ort>=60){ // eðer ortalama 60 dan büyük eþitse ekrana geçti yazar
				printf("%d. öðrenci geçti.\n",i+1);
			}
	}
	printf("\n");
}
// bu fonksiyon not ortalamasýna göre öðrencinin kalýp kalmayacaðýný hesaplýyor
void kalma(int a[10][2]){
	int i,j;
	float ort;
	for(i=0; i<10; i++){
			ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6));
			if(ort<60){ // eðer ortalama 60 dan küçükse ekrana kaldý yazdýrýr
				printf("%d. öðrenci kaldý.\n",i+1);
			}
	}
		printf("\n");
}

int main() {
	system("color F"); // yazý rengini ayarlar
	setlocale(LC_ALL,"Turkish"); // türkçe karakter kullanabilmek için gereklidir
	int i,sayi,hata=1;
    int notlar[10][2] = { // öðrenci notlarýný matris ile atadýk
    {60,90},{70,80},{50,40},{35,90},{75,85},
    {45,38},{78,54},{67,90},{85,64},{50,100},
    };
    printf("Hoþ Geldiniz...\nÝþlem Seçiniz:\n");
    for(i=0; i<30; i++){
    	printf("*");
	}
	printf("\n");
	// menü kýsmý
    while(1){
    	label:
    printf("1.Geçme notu en yüksek öðrenci:\n");
    printf("2.Geçme notu en düþük öðrenci:\n");
    printf("3.Dersin vize ve vinal ortalamalarý:\n");
    printf("4.Dersten geçen öðrenciler:\n");
    printf("5.Dersten kalan öðrenciler:\n");
    printf("Çýkmak için -1 e basýnýz.\n");
    scanf("%d",&sayi);
    switch(sayi){ // girilen sayýya göre koþula girdi
    	case -1:
    		break;
    	case 1:
    		printf("En yüksek puan: %d\n\n",yuksekpuan(notlar));
    		break;
    	case 2:
    		printf("En düþük puan: %d\n\n",dusukpuan(notlar));
    		break;
    	case 3:
    		orthesap(notlar);
    		break;
    	case 4:
    		gecme(notlar);
    		break;
    	case 5:
    		kalma(notlar);
    		break;
    	default: // eðer diðer koþullar saðlanmazsa bu kýsma girer
    		printf("Hatalý iþlem yaptýnýz...\nMenüye dönmek için 1'e basýnýz.\n");
    		scanf("%d",&hata);
    		if(hata==1){ 
    			goto label;
			}else{
				break;
			}
	}
	if(sayi==-1||hata!=1){ // birden fazla hata durumu olursa menüden çýkýþ durumu
		printf("Ýyi Günler...");
		break;
	}
    }
    return 0;
}

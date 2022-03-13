#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct mulakat {
	char* isim;
	char* tarih;
};

typedef struct diger {

	int kilo;
	int boy;
	int dogumyili;
	char* dogumyeri;

}digerBilgi;

typedef struct aday {
	struct mulakat bilgiler;
	char isim[20];
	char soyisim[20];
	char* uni;
	int notlar;
	char* gano;
	char* telno;
	digerBilgi bilgi;
	
};

void deger_ata(struct aday Aday[5]);
void aday_bilgileri_bastir(struct aday Aday[5]);
void kilo_boy_orani_bastir(struct aday Aday[5]);
void yds_notu_bastir(struct aday Aday[5]);
void gano_notu_bastir(struct aday Aday[5]);
void bas_harf_bastir(struct aday Aday[5]);
int my_strlen(char ad[20]);
void isim_karakter_sayisi_bastir(struct aday Aday[5]);
void my_reverse(char ad[20]);
void isim_ters_bastir(struct aday Aday[5]);

int main()
{
	system("color F");
	srand(time(NULL));
	struct aday Aday[5];
	deger_ata(Aday);
	int durum, kontrol=0;
	label:
	printf("\nLutfen Menuden Secim Yapiniz...\n\n");
	printf("1. Tum adaylarin bilgisini sirasiyla ekrana yazdir\n");
	printf("2. Kilo/Boy orani en yuksek ve en dusuk aday\n");
	printf("3. YDS notu en yuksek ve en dusuk aday\n");
	printf("4. GANOsu en yuksek ve en dusuk aday\n");
	printf("5. Isminin Bas harfi alfabede en onde ve en sonda gelen aday\n");
	printf("6. Isminin karakter sayisi en fazla ve en az olan aday\n");
	printf("7. Isminin karakter sayisi en az olan adayin adini tersten yazdirma\n");
	printf("Cikmak icin -1'e basin\n\n");
	scanf("%d", &durum);
	switch(durum){
		case -1:
			kontrol = 1;
			break;
		case 1:
			aday_bilgileri_bastir(Aday);
			break;
		case 2:
			kilo_boy_orani_bastir(Aday);
			break;
		case 3:
			yds_notu_bastir(Aday);
			break;
		case 4:
			gano_notu_bastir(Aday);
			break;
		case 5:
			bas_harf_bastir(Aday);
			break;
		case 6:
			isim_karakter_sayisi_bastir(Aday);
			break;
		case 7:
			isim_ters_bastir(Aday);
			break;
		default:
		printf("Hatali Secim Yaptiniz.");	
	}
	if(kontrol != 1)
	goto label;
	printf("\nIyi Gunler Dileriz..");
}

void deger_ata(struct aday Aday[5])
{
	int il, i, Gano, __uni;
	
	char* sehir[] = {"adana", "adiyaman", "afyon", "agri",
	 "amasya", "ankara", "antalya", "artvin", "aydin",
	  "balikesir", "bilecik","bingol" , "bitlis", "bolu",
	  "burdur","bursa" , "canakkale", "cankiri","corum" ,"denizli"};
	
	char* notlar[] = {"AA", "AB", "BA", "BB", "CA", "CB", "FF"};
	
	char* _universite [] = {
							"Gazi Universitesi",
							"Ankara Universitesi",
							"Hacettepe Universitesi",
							"Orta Dogu Teknik Universitesi",
							"Bogazici Universitesi",
							"Karadeniz Teknik Universitesi",
							"Yildiz Teknik Universitesi",
							"Istanbul Teknik Universitesi",
							"Dokuz Eylul Universitesi",
							"Koc Universitesi",
							"Ege Universitesi",
							"Sabanci Universitesi"
	};
	
	strcpy(Aday[0].isim,"Muhammed");
	strcpy(Aday[1].isim,"Ibrahim");
	strcpy(Aday[2].isim,"Muslum");
	strcpy(Aday[3].isim,"Mert");
	strcpy(Aday[4].isim,"Yahya");
	strcpy(Aday[0].soyisim,"Gunduz");
	strcpy(Aday[1].soyisim,"Aksu");
	strcpy(Aday[2].soyisim,"Dinc");
	strcpy(Aday[3].soyisim,"Turgut");
	strcpy(Aday[4].soyisim,"Coskun");
	
	Aday[0].telno = "05459606598";
	Aday[1].telno = "05359506598";
	Aday[2].telno = "05559206598";
	Aday[3].telno = "05399606598";
	Aday[4].telno = "05379606598";
	// mulakat bilgileri isim
	Aday[0].bilgiler.isim = "muhammed";
	Aday[1].bilgiler.isim = "muhammed";
	Aday[2].bilgiler.isim = "muhammed";
	Aday[3].bilgiler.isim = "muhammed";
	Aday[4].bilgiler.isim = "muhammed";
	// mulakat bilgileri tarih
	Aday[0].bilgiler.tarih = "01.01.2020";
	Aday[1].bilgiler.tarih = "01.01.2020";
	Aday[2].bilgiler.tarih = "01.01.2020";
	Aday[3].bilgiler.tarih = "01.01.2020";
	Aday[4].bilgiler.tarih = "01.01.2020";
	// random deðer atama
	for(i=0; i<5; i++){
		Aday[i].bilgi.kilo = rand()%20+70;
		Aday[i].bilgi.boy = rand()%30+165;
		Aday[i].bilgi.dogumyili = rand()%12+1990;
		Aday[i].notlar = rand()%41+60;
		il = rand()%20;
		Aday[i].bilgi.dogumyeri = sehir[il];
		Gano = rand()%7;
		Aday[i].gano = notlar[Gano];
		__uni = rand()%12;
		Aday[i].uni = _universite[__uni];
	}
}

void aday_bilgileri_bastir(struct aday Aday[5])
{
	int i,k;
	for(i=0; i<5; i++){
		printf("%d. Adayin Bilgileri \n-------------------\n",i+1);
		printf("Mulakat Yapan Kisi: %s\n",Aday[i].bilgiler.isim);
		printf("Mulakat Tarihi: %s\n",Aday[i].bilgiler.tarih);
		printf("---Aday Bilgileri--- \n");
		printf("Adi: %s\n",Aday[i].isim);
		printf("Soyadi: %s\n",Aday[i].soyisim);
		printf("Mezun Oldugu Universite: %s\n",Aday[i].uni);
		printf("YDS Notu: %d\n",Aday[i].notlar);
		printf("GANO Puani: %s\n",Aday[i].gano);
		printf("Telefon Numarasi: %s\n",Aday[i].telno);
		printf("---Adayin Diger Bilgileri---\n");
		printf("Kilosu: %d\n",Aday[i].bilgi.kilo);
		printf("Boyu: %d\n",Aday[i].bilgi.boy);
		printf("Dogum Yili: %d\n",Aday[i].bilgi.dogumyili);
		printf("Dogum Yeri: %s\n",Aday[i].bilgi.dogumyeri);
		printf("*****************************************\n\n");
	}
}

void kilo_boy_orani_bastir(struct aday Aday[5])
{
	int i, t=0, f;
	float oran, max=0, min=Aday[0].bilgi.kilo/Aday[0].bilgi.boy,kilo, boy;
	for(i=0; i<5; i++){
		kilo = Aday[i].bilgi.kilo;
		boy = Aday[i].bilgi.boy;
		//sonucun doðru olmasý için kilo ve boy deðiþkeni float olmalý
		oran = kilo / boy;
		if(oran > max){
			max = oran;
			t = i;
		}if(oran < min){
			min = oran;
			f = i;
		}
	}
	printf("En Yuksek Olan Aday: %d. aday\n",t+1);
	printf("En Dusuk Olan Aday: %d. aday\n",f+1);
}

void yds_notu_bastir(struct aday Aday[5])
{
	int i, min=100, max=0, j=0, k=0, yds;
	for(i=0; i<5; i++){
		yds = Aday[i].notlar;
		if(yds > max){
			max = yds;
			j = i;
		}if(yds < min){
			min = yds;
			k = i;
		}
	}
	printf("En Yuksek Olan Aday: %d. aday\n",j+1);
	printf("En Dusuk Olan Aday: %d. aday\n",k+1);
}

void gano_notu_bastir(struct aday Aday[5])
{
	int i, j=0, k=0;
	char  max="FF", min="AA", gano;
	for(i=0; i<5; i++){
		gano = Aday[i].gano;
		if(gano > min){
			min = gano;
			k = i;
		}if(gano < max){
			max = gano;
			j = i;
		}
	}
	printf("En Yuksek Olan Aday: %d. aday\n",j+1);
	printf("En Dusuk Olan Aday: %d. aday\n",k+1);
}

void bas_harf_bastir(struct aday Aday[5])
{
	int i, min=95, max=64, j=0, k=0, bas;
	for(i=0; i<5; i++){
		bas = Aday[i].isim[0];
		if(bas > max){
			max = bas;
			j = i;
		}if(bas < min){
			min = bas;
			k = i;
		}
	}
	printf("En Sonda Olan Aday: %d. aday\n",j+1);
	printf("En Onde Olan Aday: %d. aday\n",k+1);
}

int my_strlen(char ad[20])
{
	int i=0, tp=0;
	while(ad[i] != '\0'){
		tp++;
		i++;
	}
	return tp;
}

void isim_karakter_sayisi_bastir(struct aday Aday[5])
{
	int i, uzunluk, min=my_strlen(Aday[0].isim), max=0, j=0, k=0;
	char ad[15];
	for(i=0; i<5; i++){
		strcpy(ad, Aday[i].isim); /* (x, 5) x=sol taraf, 5=sag taraf */
		uzunluk = my_strlen(ad);
		if(uzunluk > max){
			max = uzunluk;
			j = i;
		}if(uzunluk < min){
			min = uzunluk;	
			k = i;
		}
	}
	printf("En Fazla Olan Aday: %d. aday\n",j+1);
	printf("En Az Olan Aday: %d. aday\n",k+1);
}

void my_reverse(char ad[20])
{
	int i, uzunluk;
	uzunluk = my_strlen(ad);
	for(i=uzunluk; i>0; i--){
		printf("%c",ad[i-1]);
	}
}

void isim_ters_bastir(struct aday Aday[5])
{
	int i, uzunluk, min=my_strlen(Aday[0].isim), k=0;
	char ad[15];
	for(i=0; i<5; i++){
		strcpy(ad, Aday[i].isim); /* (x, 5) x=sol taraf, 5=sag taraf */
		uzunluk = my_strlen(ad);
		if(uzunluk < min){
			min = uzunluk;	
			k = i;
		}
	}
	my_reverse(Aday[k].isim);
}

#include <iostream>
using namespace std;
// int yerine artýk tam sayý yazarýz
typedef int tamsayi;
//calisan yapisi
struct calisan{
	char *ad, *soyad, *dogum_yeri;
	int yas, dogum_tarihi;
}kisi;
//tarih yapisi
struct tarih{
	int gun, ay, yil;
}test;
// typedef yazdýðýmýz için altta tanýmlamak daha kýsa olur 
typedef struct otomobil{
	char * marka;
	int fiyat;
};
//
typedef struct Calisan{
	char *ad, *soyad, *gorevi;
	int calisanNo;
}eleman;
// tarih türünde nesne döndüren fonksiyon
struct tarih yas(struct tarih, struct tarih);
int main()
{ 
	//eðer üstte tanýmlanmasa bu þekilde tanýmlanýr
	struct calisan deneme;
	//deðer atama nokta ile yapýlýr
	kisi.ad = "burhan";
	kisi.soyad = "mutlu";
	kisi.yas = 20;
	kisi.dogum_yeri = "adana";
	kisi.dogum_tarihi =2001;
	//ekrana bastýrma
	cout << kisi.ad << " " << 
			kisi.soyad << " " <<
			kisi.yas << " " <<
			kisi.dogum_yeri << " " <<
			kisi.dogum_tarihi << " " <<endl << endl;
	system("pause");
	//. ile atamak yerine daha basit atama ama ayný sýrada olmasý gerek	
	calisan yeni = {"kemal", "mal", "mersin",
					25, 1996 
	};
	// yeni yapisini ekrana basma 
	cout << yeni.ad << " " << 
			yeni.soyad << " " <<
			yeni.yas << " " <<
			yeni.dogum_yeri << " " <<
			yeni.dogum_tarihi << " " <<endl << endl;  
	system("pause");
	// typedef ile int yerine tamsayi yazip deðiþken oluþturduk
	tamsayi x = 5;
	cout << x << endl << endl;
	system("pause");
	// typedef sayesinde struct anahtar kelimesini kullanmadan tanýmladýk
	otomobil araba;
	araba.marka = "bmw";
	cout << araba.marka << endl << endl;
	system("pause");
	// 118 en ust bidaha bak
/*	struct test d_tarihi[10];
	d_tarihi[0] = {15,12,2001};
	cout << d_tarihi[0].ay << endl << endl;
	system("pause");*/
	//
	eleman a[] = {"suha","eris","programci",1,
				  "muhammed","mastar","programci",2,
				  "tahir","vural","programci",3
	};
	cout << "calisanlar listesi" << endl;
	cout << "ad: soyad: gorevi: no:" << endl;
	for(int i=0;i<3;i++){
		cout << a[i].ad << " " << a[i].soyad << " " <<
			a[i].gorevi << " " << a[i].calisanNo << endl;	
	}
	cout << endl;
	system("pause");
	// kaç yýl yaþadýðýný hesaplayan kod
	struct tarih bugun, dogum, sonuc;
	cout << "bu gunun tarihini girin(gun,ay,yil):" << endl;
	cin >> bugun.gun >> bugun.ay >> bugun.yil;
	
	cout << "dogum tarihini girin(gun,ay,yil):" << endl;
	cin >> dogum.gun >> dogum.ay >> dogum.yil;
	
	sonuc = yas(bugun, dogum);
	
	cout << sonuc.yil << "yil" << sonuc.ay << "ay" << 
			sonuc.gun << "gundur hayattasin." << endl;
	system("pause");
	                                
}

struct tarih yas(struct tarih x, struct tarih y)
{
	struct tarih sonuc = {0,0,0};
	
	if(x.gun < y.gun){
		x.ay -= 1;
		sonuc.gun = 30 + x.gun - y.gun;
	}else{
		sonuc.gun = x.gun - y.gun;
	}
	if(x.ay<y.ay){
		x.yil -= 1;
		sonuc.ay += 12 + x.ay - y.ay;
	}else{
		sonuc.ay += x.ay - y.ay;
	}
	sonuc.yil += x.yil - y.yil;
	return sonuc;
}

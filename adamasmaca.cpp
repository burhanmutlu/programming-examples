//Gerekli kütüphaneler
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>
void enOrtala(int klmUzun) //metni boþluklarla ortaya kadar saða kaydýýrýr.
{
	int i,en=168;
	for(i=0;i<(en-klmUzun)/2;i++){printf(" ");}
	return;
}
void boyOrtala(int satirSayi) //metni satir atlayarak ortaya kadar taþýr.
{
	int j,boy=44;
	for(j=0;j<(boy-satirSayi)/2;j++){printf("\n");}
	return;
}
void adamCiz(int b) //oyunda kullanýlan adam asmaca figürlerini çizer
{
	switch (b)
	{
		case 1:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 2:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 3:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |    |    \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 4:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|    \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 5:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 6:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |   /     \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 7:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    X    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |   / \\  \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		default:{                     //hata yapýýlmamýþsa boþ býrakýr
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("Henuz adam asilmaya baslanmadi.\n");
			printf("===================================");
			break;
		}
	}
}
void kelimeDurumu(int sehirUzun,int bulunan,char dizi1[],int d1,char dizi2[],int d2)  //kelimenin bulunamayan karekterleri için nokta, 
{                                                                                     //bulunan karekterleri için harfi yerine koyan fonksiyon
	int i,j;                              //sayaclar
	printf("\nKelimenin Durumu: ");
	for(i=0;i<sehirUzun;i++){      		  //döngü kelimenin uzunluðunun tamamý için devam eder	
		for(j=0;j<=bulunan;j++){		  //bulunan karekter sayýsýnca devam eder
			if(dizi1[i]==dizi2[j]){
				printf("%c",dizi2[j]);    //harf vas ise harfi koy 
				break;	                  //ve dögüden çýk
			}	
		}
		if(dizi1[i]!=dizi2[j]){           //dögüden çýktýkdan sonra harfi tekrar kontrol eder yoksa nookta koyar
			printf(".");
		}
	}
}
char oyun(void) {//adam asmaca oyunudur. geri dönüþünün char olmasýnýn nedeni oyun menüsünde döngü kontrol etmek için
	char aciklama[]="Aciklama: Adam asmaca, bir harf tahmin oyunudur.Ve kelimeler sehir ismidir.\n\n\n";
	char oyunKural[]="-----------OYUN KURALLARI----------\n";
	char kural1[]=">7 tahmin hakkina sahipsiniz.\n";
	char kural2[]=">Harf veya kelime tahmin edebilirsiniz.\n";
	char kural3[]=">Yanlis tahmin yaptiginizda harf sayisinca tahmin hakki kaybedersiniz.\n";
	char kural4[]=">Harf disinda bir karakter girildiginde tekrar tahmin etmeniz istenecektir.\n";
	char kural5[]=">Tek tek harf girilirken pes pese 2 sesli harf giremezsiniz.\n";
	char kural6[]=">Turkce karakter girmeyiniz!\n";
	char basla[]="Baslamak icin Enter'a basiniz:";
	int aciklamaUzun=strlen(aciklama),baslaUzun=strlen(basla);
	system("CLS");
	boyOrtala(8);
	enOrtala(aciklamaUzun);
	printf("%s",aciklama);
	enOrtala(aciklamaUzun);
	printf("%s",oyunKural);
	enOrtala(aciklamaUzun);
	printf("%s",kural1);
	enOrtala(aciklamaUzun);
	printf("%s",kural2);
	enOrtala(aciklamaUzun);
	printf("%s",kural3);
	enOrtala(aciklamaUzun);
	printf("%s",kural4);
	enOrtala(aciklamaUzun);
	printf("%s",kural5);
	enOrtala(aciklamaUzun);
	printf("%s",kural6);
	//yukarýda oyun kurallarý ekranýn ortasýna yazdýrýlýr
//	sleep(5);//5 sn bekler
	system("CLS");//ekraný temizler
	boyOrtala(1);
	enOrtala(baslaUzun);
	printf("%s",basla);scanf("%c");getchar();//oyuna baþlamak için enter ý bekler
	system("CLS");
	char sehirler[16][15]={"AFYONKARAHISAR","MUS","VAN","ERZURUM","GAZIANTEP","BAYBURT","KIRIKKALE","KAHRAMANMARAS","CANKIRI","TRABZON","RIZE","KARS","ORDU","ANKARA","ANTALYA","ZONGULDAK"};
	//yukarýda kullanýlan kelimeler dizisi tanýmlanýr
	char sesliHarf[5]={'A','E','I','O','U'};// sesli harfler tanýmlanýr
	srand(time(NULL));//rand fonksiyonunu zamana baðlar
	int nu=rand() % 16;//rasgele sayý üretir ve bunu "nu" ya atar
	int tekrar,sesli,bul=0,yanlis=0,buldu=0,kontrol=0,ifade=0,bulunan=0,hak=0,l=0,k=1,i,j,n,t,q,y,w,e,u,p,r,s,c,b,m,a,sehirUzun=strlen(sehirler[nu]);
	//döngüde kullanýlan sayaçlar ve kontrol için gereken deðiþkenler                                                 //þehrin uzunluðu  
	char tahminEski[50],dy[5],tahmin[15],bulunanlar[15]="xxxxxxxxxxxxxx";
	//yukarýdakiler sýrasýyla eski tahmini,doðru yanlýþ ifadesini,tahmini,bulunanlarý char dizisinde tutar
    boyOrtala(4);
	printf("\n===================================\n");
    for(r=0;r<sehirUzun;r++){
    	printf(".");
	}
	printf("(%d Harfli bir sehir.)",sehirUzun);
	printf("\n===================================\n");
    //yukarýda oyun baslamadan önce þehrin uzunluðu gösterilir
	while(hak!=7 && bulunan!=sehirUzun) //oyunun harf tahmininin devam edeceði döngü 
	{
		k=1; //tekrarlana döngüden sonra kontolü ilk haline dönderir
		while(k==1){ //bu döngü sesli harf kontrolü için
			s=1;   //tekrarlana döngüden sonra kontolü ilk haline dönderir
			while(s==1){	//bu döngü cikmis harfin tekrar girilmemesi için	
				ifade=0;   //tekrarlana döngüden sonra kontolü ilk haline dönderir
				while(ifade==0){ //bu döngü girilen karakterin harf olup olmadýðýný kontrol etmek için
					printf("\nHarf veya harf grubu tahmin ediniz:");scanf("%s",&tahmin);//harf tahminini alýr
					for(w=0;w<strlen(tahmin);w++){
						ifade=isalpha(tahmin[w]);//girilern her karakterin harf olup olmadýðýný kontrol eder 
						if(ifade==0){printf("Hatali karakter girdiniz!");ifade=0;}//harf deðilse hata verir ve tekrar tahmin yapýlmasýn saðlar
						else{ifade=1;}//harf ise döngüden çýkartýr
					}
				}
				
				for(n=0;n<strlen(tahmin);n++){tahmin[n]=toupper(tahmin[n]);}//harfleri büyük harfe çevirir
		    	for(a=0;a<strlen(bulunanlar);a++){
		    		for(m=0;m<strlen(tahmin);m++){
		    			if(bulunanlar[a]==tahmin[m]){//tahmin içerisindeki harfler bulunan harf dizisini karþýlaþtýrýr
		    				tekrar=1;
						}
					}
				}
				if(strcmp(tahmin,sehirler[nu])!=0&&tekrar==1){              //tahmin þeihire eþit deðilse ve yukarýdaki koþul saðlanmþsa,
					printf("Lutfen cikmis harfleri tekrar kullanmayiniz!"); //hata verir
					s=1;                                                    //döngünün tekrar etmesi için gereken koþul
					tekrar=0;                                               //tekrar eden dögü için kontrolü sýfýrlar
				}
				else{
					s=0;                                                    //döngüden çýkartýr
					tekrar=0;												//kontrolü sýfýrlar
				}
			}
			if(kontrol==0){//sesli harf kontrol þartý  
				if(strlen(tahmin)==1){  //tek tek harf giriþini kontrol eder
					for(b=0;b<5;b++){
						if(tahmin[0]==sesliHarf[b]){sesli=1;}//tahmin sesli harflerde varsa sesli 1 olsun
					}
					if(sesli==1){//yukarýdaki koþullar saðlanmýþsa,
						k=0;     //1.tur için döngüden çýk
						kontrol=1;//kontrolü 1 yap ve 2. tur için harf sesli harf kontrolüne girilmesini saðlar
						sesli=0; //kontrolü sýfýrlar
					}
					else{//yukarýdaki koþullar saðlanmamýþsa, 
						kontrol=0;//2. tur için harf kontrolünü deðiþtirmez
						k=0;     //1. tur için dögüden çýkar
						sesli=0;//kontrolü sýfýrlar
					}
				}
				else{//kelime grubu tahmin edilmiþse sesli harf kontrolü yapma
					k=0;//döngüden çýk
					kontrol=0;
				}
			}
			else{//2. tur için kontrol 1 ise,
				if(strlen(tahmin)==1){//tek tek harf kontrolü yap
					for(c=0;c<5;c++){
						if(tahmin[0]==sesliHarf[c]){//2.turda tahmin sesli harf karþýlaþtýrmasý yap
							sesli=1;//kontrolü 1 yap
						}
					}
					if(sesli==1){//yukarýdaki koþul saðlanmýþsa,
						printf("%s",kural5);//hata mesajýný bas
						k=1;//sesli harf döngüsünü tekrarlat ve tekrar harf alýnmasýný saðla
						kontrol=1;//2.tur kontrolünü deðiþtirme
						sesli=0;//kontrolü sýfýrlar
					}
					else{//yukarýdaki koþýl saðlanmamýþsa,
						k=0;//döngüyü tekrarlama
						kontrol=0;//2. turda sesli harf girilmemiþse 1. tura geri göder
						sesli=0;//kontolü sýfýrlar
					}
				}
				else{//2. turda kelime grubu girilmiþse,
					k=0;//döngüden çýk
					kontrol=0;//2. turda kelime grubu girilmiþse 1. tura dön
				}
			}
		}
		if(strcmp(tahmin,sehirler[nu])!=0){//tahmin ile kelimenin karþýlaþtýrmasýný yap
			for(e=0;e<strlen(tahmin);e++){
				for(t=0;t<strlen(bulunanlar);t++){
					if(tahmin[e]==bulunanlar[t]){//kelime grubu tahmin edilirse hak artmamasi için bulunan sayisini azaltir
						bulunan--;
					//(bu döngü olmayýnca kelime grubu tahmin edilince hak artýyordu) 	
					}
				}	
			}
			if(strlen(tahmin)==1){//tek tek harf giriliyorsa,
				for(i=0;i<sehirUzun;i++){
					for(j=0;j<strlen(tahmin);j++){
						if(tahmin[j]==sehirler[nu][i]){//tahmin kelime içerisinde varsa,
							bulunanlar[l]=tahmin[0];//bulunanlar dizisine en son tahminin doðru olanlarýný ekle
							bulunan++;//bulunan karakter sayýsýmý arttýr
							buldu=1;//kontrolü 1 yap
							l++;//bulunanlar dizisinin sýradaki elemanýna geç
						}			
					}
				}
			}
			else{//kelime grubu tahmin ediliyorsa,
				for(u=0;u<sehirUzun;u++){
					for(p=0;p<strlen(tahmin);p++){
						if(tahmin[p]==sehirler[nu][u]){//tahmin kelime grubu içerisinde varsa,
							bulunanlar[l]=tahmin[p];//son tahminin doðru olanlarýný sýrasýyla bulunanlara ekle
							bulunan++;//doðru sayýsýnca bulunaný arttýr
							buldu=1;//kontrolü deðiþtir
							l++;//bulunanlar dizisinin sýradaki elamanýna geç
							bul++;//kelime grubu için bulunan karakter sayýsýný arttýýr
						}
					}
				}
			}
			if(strlen(tahmin)==1){//tahmin tek harf ise,
				if(buldu!=1){//bulunmamýþsa
					dy[0]='Y';//son harf tahmini yanlýþsa y yi dy dizisine ata
					hak++;// adam asma hakkýný arttýr
					bul=0;// kontrolü sýfýrla
				}
				else {//kontrol saðlanmýþsa,
					bul=0;	//kelime grubu kontrolü sýfýrla		
					buldu=0;//kontrolü sIfIrla
					dy[0]='D';	//doðruysa dy dizisine d ata
				}	
			}
			else{//tahmin kelime grubu ise,
				if(buldu!=1){//bulunmamIþsa,
					yanlis=strlen(tahmin)-bul;//yanlIIþ harf sayIIsInI hesapla
					hak=hak+yanlis;//yanlIIþ sayIsInca hak arttIr
					bul=0;//kelime grubu için kontrolü sIfIrla
				}
				else {//bulmuþsa
					yanlis=strlen(tahmin)-bul;//hem doðru hem hatali karekter varsa yanlIþ sayIsInI hesapla
					hak=hak+yanlis;//yanlIþ kadar hak arttIr
					bul=0;//kelime grubu için kontolü sIfIrla
					buldu=0;//kontrolü sIfIrla
				}
			}
			system("CLS");//ekranI temizle
			boyOrtala(12);
			printf("===================================\n");
			adamCiz(hak);
			kelimeDurumu(sehirUzun,bulunan,sehirler[nu],sehirUzun,bulunanlar,l);
			printf("\nKalan tahmin hakkiniz:");
			printf("%d",7-hak);
			printf("\nSon Tahmininiz: %s",tahmin);
			if(strlen(tahmin)==1){printf("=>%c",dy[0]);}
		//	tahminEski[50]=tahmin;
			printf("\nKullandiginiz harfler => %s",strcat(tahminEski,tahmin));
			//yukarIda adamI,kelimenin son durumunu,tahmin hakkIný, son tahminin doðruluðunu,kullanýlan harfleri yaz		
		}
		else{//tahmin kelimenin tamamý ise,
			bulunan=sehirUzun;//tüm döngüden çIk
		}
	}
	if(hak!=7){//oyun bittiðide hak kalmIþ ise,
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(40+sehirUzun);//ekranI ortala kelimenin uzunluðu dahil	
		printf("Tebrikler %s sehrini dogru tahmin ettiniz.",sehirler[nu]);//ekrana baþarI mesajIInI yaz
	}
	else{//oyun bittiðinde hak bitmiþse
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(27+sehirUzun);//ekranI ortala kelimenin uzunluðu dahil
		printf("Basarisiz oldunuz.  Kelime:%s",sehirler[nu]);//baþarIsIzlIk mesajInI ve kelimeyi ekrana yaz
	}
//	sleep(3);//3 sn beklet
	char yeni;		//bir daha oynamasI sorulmasI için gereken dizi
	int hatali=1;   // "   "      "         "       "     "   konrol
	while(hatali==1){//bir daha oynanmasI için sorulacak soru döngüsü
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(38);	
		printf("Yeniden oynamak istiyor musunuz? (E/H) :");scanf("%s",&yeni);//tekrarý sor ve karakter al
		yeni=toupper(yeni);//büyük harfe çevir
		if(yeni=='E'){// e ise tekrar oynamak için alttakileri yap
			hatali++;//döngüden çýkýlmasýný saðla
			system("CLS");//ekraný temizle
			boyOrtala(8);enOrtala(26);
			printf("Oyun yeniden baslatiliyor!");
			//sleep(1);
			oyun();//oyunu tekrar çaðýr
			}
			else if(yeni=='H'){//h ise,
				hatali++;// döngüden çýkýlmasýný saðla
				system("CLS");//ekraný temizle
				boyOrtala(8);enOrtala(22);
				printf("Menuye geri donuluyor.");
				//sleep(1);
				//main();//ana fonksiyonu çaðýr
			}
			else {//hatalý giriþ yapýlmasý durumunda alttakileri yap
				system("CLS");//ekraný temizle
				boyOrtala(2);enOrtala(22);
				printf("Hatali giris yaptiniz!\n");
				enOrtala(22);
				printf("Tekrar Deneyiniz!");
				//sleep(3);//döngüden çýkma ve tekrar sor
			}
			
		}
		return yeni;//char geridönüþü
	}
int main() {//ana fonksiyon
	HWND konsol = GetConsoleWindow();
    MoveWindow(konsol, 0, 0, 10000, 10000, TRUE);//konsolu tam ekran için ayarla    
	char baslik[]="----------OYUN LISTESI----------\n",sec1[]="1)Adam Asmaca\n",sec2[]="2)Oyun2\n",sec3[]="3)Cikis\n\n";
	char secimMesaj[]="Secim Yapiniz:",yeni='E';
	int secim,i=0;//sýrasýyla alýnan seçim,sayaç
	int en=strlen(baslik);//baþlýðýn uzunluðunu en'e ata 
	system("CLS");	
	boyOrtala(6);enOrtala(en);
	printf("%s",baslik);                                     
	enOrtala(en);
	printf("%s",sec1);
	enOrtala(en);
	printf("%s",sec2);
	enOrtala(en);
	printf("%s",sec3);
	enOrtala(en);
	printf("%s",secimMesaj);scanf("%d",&secim);
	//mesajlarý ekrana yaz
	switch(secim)//seçimin durumlarýý
	{
		case 1:{
			while(yeni=='E'){//oyundan gelen dönüþe göre tekrarlanan döngü
				oyun();//oyunu çaðýr
				yeni=oyun();//oyunun geridönüþünü yeni ye ata
			}
			break;
		}
		
		case 2:{
			char msj2_1[]="Oyun2 Yapim Asamasinda...";
			char msj2_2[]="Geri donmek icin Enter'a basiniz:";
			char hata[]="Hatali secim yaptiniz, program kapatiliyor!";
			int msj2_1Uzun=strlen(msj2_1),msj2_2Uzun=strlen(msj2_2),hataUzun=strlen(hata);//mesajlarý uzunluklarýný hesapla
			system("CLS");
			boyOrtala(3);
			enOrtala(msj2_1Uzun);
			printf("%s\n",msj2_1);
			enOrtala(msj2_2Uzun);
			printf("%s",msj2_2);
			//mesajlarý ekrana yaz
			scanf("%c");getchar();//enter'ý al (3 sn içerisinde enter'ý almayý yapamadým çünkü enter'ý almak için süresiz bekliyor)
			main();//menüye dönmek için ana fonksiyonu çaðýr
			break;	
		}
		case 3:{
			system("CLS");
			char msj3_1[]="Cikis secenegini tercih ettiniz";
			char msj3_2[]="Program sonlandiriliyor...";
			int msj3_1Uzun=strlen(msj3_1),msj3_2Uzun=strlen(msj3_2);
			boyOrtala(2);
			enOrtala(msj3_1Uzun);
			printf("%s\n",msj3_1);
			enOrtala(msj3_2Uzun);
			printf("%s\n",msj3_2);
		//	sleep(3);
			//çýkýþ için mesajlarý ekrana yaz
			return 0;//çýkýþ yap
			break;
		}
		default :{//seçime 1-2-3 den farklý karakter girerse,
			char hata2[]="Hatali secim yaptiniz, program kapatiliyor!";
			int hata2Uzun=strlen(hata2);
			system("CLS");
			boyOrtala(1);enOrtala(hata2Uzun);
			printf("%s",hata2);
		//	sleep(3);
			//hata ver ve 3 sn beklet
			return 0;//çýkýþ yap
			break;
		}
	}
	return 0;//çýkýþ yap
}

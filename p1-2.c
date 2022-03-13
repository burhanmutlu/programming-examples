#include<stdio.h> // standart kütüphane 
#include<math.h> // matematik kütüphanesi
#include<conio.h> // getch fonksiyonu için 

int main(){

    int satir, X=1; // sonuc deðerini 1 den baþlattýk 
    int Y, bosluk, Z; // Y satýr sayýsý, Z sütun sayýsýný ifade eder
    printf ("satir sayisini giriniz =");
    scanf("%d",&satir); // pascal üçgeninin satýr sayýsý girilir
    printf("%d  satirlik pascal ucgeni \n\n", satir ); // kaç satýrlýk olduðunu ekrana basar 
    for(Y=0;Y<satir;Y++) // döngü satir sayisina kadar döndü
    {// boþluk sayýsý azalýrken bastýrýlan sayý artar 
        for(bosluk=1;bosluk<=satir-Y;bosluk++) // bosluk sayýsý her döngüde 1 azalýr 
		{
            printf(" "); // üçgen görünümü oluþmasý için önce boþluk býrakýr 
        }
        for(Z=0;Z<=Y;Z++) // satýr sayýsý kadar ekrana sayý basar 
        {
        if(Z==0||Y==0) // en dýþta ise 1 bastýr 
        {
        	X=1;
      	}
	    else // üst durumlar saðlanmazsa X deðeri formüle göre hesaplanýr 
		{
	    	X=X*(Y-Z+1)/Z; // pascal üçgen formülü. x in deðeri hesaplandý 
	    }
	    	printf ("%d ", X); // üstte gelen duruma göre x sayýsý bastýrýlýr
        }
        printf ("\n"); // satýr sonunda diðer satýra geçmesi için 
    }
    getch(); // konsolun kapanmasýný engeller
	return 0; // main fonksiyonu geriye biþey döndürmez ve program sonlanýr 
}

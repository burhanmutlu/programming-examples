#include<stdio.h>

int main(){

int x,y,z;

printf("coronavirus testine hosgeldiniz.\n");
printf("vucut sicakliginizi giriniz:");
scanf("%d",&x);
printf("kuru oksurugunuz  var mi \n1.evet\n2.hayir");
scanf("%d",&y);
printf("agriniz varmi \n1.evet\n2.hayir");
scanf("%d",&z);

if (x>=38 && y==1 && z==1){
printf("en yakin zamanda hastaneye gidiniz.");

}
else {
printf("turp gibisiniz");
}
return 0;
}

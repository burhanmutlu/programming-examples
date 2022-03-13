#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void){
    int id;
    if (system(NULL)) {
	    id = system("date /T");
        printf ("Komut geri donus degeri: %d\n", id);
    }
    else printf("Sistem komut islemcisi mevcut degil!");
}


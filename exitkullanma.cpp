#include <stdio.h>
#include <stdlib.h>

void fonk(void);

int main(void)
{
    atexit(fonk);
    exit(EXIT_SUCCESS);

    printf("Bilgisayar"); /* Bu iþlem satýrý hiç devreye girmez. */

    return 0;
}

void fonk(void)
{
  printf("Program cikis fonksiyonu devreye girdi!");
}


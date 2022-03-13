#include <iostream>//iþlem oncelýgý onemlýdýr 
#include <ctime>
#include<stdlib.h>

using namespace std;

int main() {

  int enFazla = 250, enAz = 100;

  srand(time(0));

  for(int i = 0; i < 10; i++){
    cout << rand() %(enFazla - enAz + 1) + enAz<< endl;
  }

  return 0;
}

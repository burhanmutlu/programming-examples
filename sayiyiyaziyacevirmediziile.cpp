#include <iostream>
using namespace std;
int main() {

  int sayi = 0, rakam = 0;
  string yaziKarsiligi[] = {"sifir", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};

  cout << "Sayi giriniz: ";
  cin >> sayi;

  while (sayi != 0) {
    rakam = sayi % 10;
    cout << yaziKarsiligi[rakam] << " ";
    sayi /= 10;
  }
}

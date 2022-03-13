#include <iostream>
using namespace std;
int main() {

  int sayi = 0, rakam = 0;
  cout << "Sayi giriniz: ";
  cin >> sayi;

  while (sayi != 0) {
    rakam = sayi % 10;
    switch (rakam) {
    case 1:
      cout << "bir ";
      break;
    case 2:
      cout << "iki ";
      break;
    case 3:
      cout << "uc ";
      break;
    case 4:
      cout << "dort ";
      break;
    case 5:
      cout << "bes ";
      break;
    case 6:
      cout << "alti ";
      break;
    case 7:
      cout << "yedi ";
      break;
    case 8:
      cout << "sekiz ";
      break;
    case 9:
      cout << "dokuz ";
      break;
    case 0:
      cout << "sifir ";
      break;
    default:
      cout<<endl<<"gecersiz karakter... ";
      break;
    }
    sayi /= 10;
  }

  return 0;
}

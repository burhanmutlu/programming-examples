#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int sayi, basamak, tp = 0, b, b2;
    cout <<"sayi giriniz: ";
    cin >>sayi;
    b= sayi;

    while (b != 0)
    {
        b /= 10;
        tp++;
    }
    for (int i = tp; i > 0; i--){
        basamak = pow (10, i - 1); 
        b2 = sayi / basamak;
        sayi %= basamak;
        for (int j = 0; j < b2; j++) 
            cout << "*";
        cout << endl; 
    }
}

#include <iostream>
#include <ctime>
using namespace std;
int main(){
  clock_t baslangic=clock(),bitis;
  int sayi;
  cout<<clock()<<endl;
  cin>>sayi;
  cout<<clock()<<endl;
  bitis=clock();
  cout<<(float)(bitis - baslangic)/CLOCKS_PER_SEC;
}

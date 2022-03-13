#include <iostream>
using namespace std;
int main(){

  int sonuc = remove("bst.txt");
  if(sonuc == 0){
    cout << "Dosya silindi";
  }else {
    cerr << "Dosya silinemedi";
    return -1;
  }

  return 0;
}

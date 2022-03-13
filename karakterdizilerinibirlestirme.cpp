#include <iostream>
using namespace std;
int main(){
	
    string s1,s2,tp;
    cout<<"ilk metni giriniz:";
    getline (cin, s1);
    
    cout<<"ikinci metni giriniz:";
    getline (cin, s2);
    
    tp=s1+s2;
    cout<<"toplam = "<<tp;
    
}

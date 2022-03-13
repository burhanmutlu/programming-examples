#include <iostream>
using namespace std;
int main()
{
	int toplam =0;
	for(int i=10;i<1;i++){
		if(i%3 == 0){
			toplam = toplam + i;
	}
	}
	cout << toplam;
}

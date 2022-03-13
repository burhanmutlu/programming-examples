#include <iostream>
using namespace std;
int main()
{
	int tp=1;
	for(int i=21; true; i++){
		for(int j=1; j<21; j++){
			if(i%j==0){
				tp = tp + 1;
			}
		}
		if(tp == 20){
			cout << i;
			break;
		}
		tp = 0;
	}
}

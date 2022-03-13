#include <iostream>
using namespace std;
int main()
{
	int k=1,i; 
	for(i=3; true; i++){
		for(int j=2; j<=i/2+1; j++){
		if(i%j==0){
			break;
		}if(j == i/2+1){
			k++;
		}
		}
		if(k==10001){
			cout << i;
			break;
		}
	}
}

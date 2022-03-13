#include<iostream>
using namespace std;
int main(){
	char a;
	int i=5,j=6,k=2;
	int f=348;
	printf("%u   %d\n",&i,i);
	printf("%u   %d\n",&k,k);
	printf("%d   %d\n",&j,j);
	printf("%d   %d\n",&f,f);
	printf("%d   %d\n",&a,a);
	printf("%d\n",&i-&k);//ramdeki 4 = 1 eder 
}

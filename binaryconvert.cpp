// onluk tan ikiliðe çevirme
// 10/2 
#include <iostream>
#include <stdlib.h>
using namespace std;

struct n{
	int x;
	n * next;
}node;

class convertToBinary{
private:
	int kalan;
	struct node * root;
public:
	int *convertToBinary(int number){
		node * root = (node *)mallof(sizeof(node));
		while(number!=0){
			kalan = number % 2;
			number /= 2; 
			root->x = kalan;
			root = root -> next;
			root = (node *)malloc(sizeof(node)); 
	}
	return root;
}
};

int main()
{
	int number;
	cout << "sayiyi giriniz;" << endl;
	cin >> number;
	convertToBinary number1;
	number1.convertToBinary(number);
	
	
		
}

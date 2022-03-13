#include <stdio.h>
#include <iostream>
using namespace std;
struct n{
	//int x;
	n * next;
}node;
int main()
{
/*	int arr[] = {5,8,12,15,15,17,23,25,27};
	bool calismaDurumu = true;
	int count=0,i=0;
	while(calismaDurumu){
		if(arr[i] == 25){
			calismaDurumu = false;
		}
		else{
			count++;
			i++;
		}
	}
	cout << "sonuc " << count << ". adimda bulundu" << endl;*/
	cout << (&node)<<endl;
	cout << sizeof(node)<<endl;
	n->next = ;
	return 0;
}

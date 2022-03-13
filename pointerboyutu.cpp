#include<iostream>//hepsinin boyutu ayný dolayýsýyla pointerýn boyutu hepsini kullanmaya yeterlidir
using namespace std;
int main(){
	
		printf("%d \n",sizeof(int*));
		printf("%d \n",sizeof(float*));
		printf("%d \n",sizeof(char*));
		printf("%d \n",sizeof(double*));
		cout<<sizeof(void*);	
}

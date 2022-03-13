#include<iostream>
#include<stdlib.h>
using namespace std;
struct course{
	int marks;
	char subject[30];
};

int main(){
	
	struct course *ptr;
	int i,noOfRecords;
	cout<<"Kayitlarin sayisini girin:";
	cin>>noOfRecords;
	
	ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
	for(i=0;i<noOfRecords;i++){
		cout<<"sirasiyla konunun adini ve isaretleri girin:\n";
		cin>>(ptr+i)->subject>>(ptr+i)->marks;
	}
	cout<<"bilgi goruntuleme:\n";
	for(i=0;i<noOfRecords;i++){
		cout<<(ptr+i)->subject<<"	"<<(ptr+i)->marks;
	}
}

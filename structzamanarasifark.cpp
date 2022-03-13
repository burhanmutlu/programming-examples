#include<iostream>
#include<cmath>
using namespace std;
typedef struct time{
	int sy;
	int dk;
	int st;
};

void fark(struct time, struct time, struct time *);
int main(){
	
	struct time t1,t2,tp;
	cout<<"baslangic zamanini girin:"<<endl;
	cout<<"saat,dakika ve saniye girin:";
	cin>>t1.st>>t1.dk>>t1.sy;
	
	cout<<"bitis zamanini girin:"<<endl;
	cout<<"saat,dakika ve saniye girin:";
	cin>>t2.st>>t2.dk>>t2.sy;
	if(t1.st<t2.st){//negatif çýkmasýn diye.
		time temp=t1;
		t1=t2;
		t2=temp;
	}
	fark(t1,t2,&tp);
	cout<<endl<<"zaman farki: "<<t1.st<<":"<<t1.dk<<":"<<t1.sy;
	cout<<" - "<<t2.st<<":"<<t2.dk<<":"<<t2.sy;
	cout<<" = "<<tp.st<<":"<<tp.dk<<":"<<tp.sy;
	
}
void fark(struct time t1,struct time t2,struct time *tp){
	if(t2.sy>t1.sy){//22.10.00  20.30.20 --- son hali 21.69.60
		--t1.dk;
		t1.sy += 60;
	}
	tp->sy=t1.sy-t2.sy;//40
	if(t2.dk>t1.dk){
		--t1.st;
		t1.dk += 60;
	}
	tp->dk = t1.dk-t2.dk;//39
	tp->st = t1.st-t2.st; //1
}

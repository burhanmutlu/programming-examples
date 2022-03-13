#include<iostream>
using namespace std;
int main(){
	
	int a[2][3]={{5,2,4},{4,3,1}},b[2][3]={{1,2,3},{3,4,1}},tp[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			tp[i][j]=a[i][j]+b[i][j];
			cout<<tp[i][j];
		}
		cout<<endl;
	}
	
}

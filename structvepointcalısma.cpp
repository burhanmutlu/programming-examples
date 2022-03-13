#include <stdio.h>

using namespace std;
struct harf{
	int a;
};
void degerdegis(struct harf a)
{
	a.a = 4;
}
int main()
{
	
	harf b;
	degerdegis(b);
	cout << b.a;	
}

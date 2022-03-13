#include <stdio.h>
#include <stdlib.h>
typedef struct n{
	int x;
	n *next; // n sýnýfýnda bir nesne  içinde next ve x bulunur 
	// recursive fonksiyona benziyor 
	
}node;

int main()
{
	node * root;
	root = (node *)malloc(sizeof(node));
	root -> next = (node *)malloc(sizeof(node *));
	printf("yer acilmadan : %d\n", root -> next);
	printf("yer acilmadan : %d\n", root -> next + 1);
	root -> next -> x = 20;
	printf("yer acilmadan : %d\n", root -> next-> x);
	root -> next -> x = 30;
	printf("yer acilmadan : %d\n", root -> next -> x);
/*	root -> next = (node *)malloc(sizeof(node *));
	printf("yer verilince : %d\n", root -> next);
	printf("%d\n", root -> next + 1);
	printf("%d\n", root -> next + 2);
	*/
//	printf("%d\n", *root->next);  // tek bir deðer varsa basar ama birden
								// fazla deðiþken varsa basmaz 
	
	
	return 0;
}

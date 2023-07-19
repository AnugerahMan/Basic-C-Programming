#include <stdio.h>

int main(){
	int a;
	int b;
	int total;
	
	printf("masukan nilai a: ");
	scanf("%d", &a);
	printf("masukan nilai b: ");
	scanf("%d", &b);
	
	total = a+b;
	
	if(total>=0){
		printf("bilangan tersebut positif: %d\n", total);
	}
	else{
		printf("bilangan tersbut negatif: %d\n", total);
	}
	return 0;
}

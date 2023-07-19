#include<stdio.h>

int main(){
	int Tab[5];
	int i;
	printf("---Masukan 5 nilai---\n");
	for(i=0;i<5;i++){
		scanf("%d", &Tab[i]);
	}
	for(i=0;i<5;i++){
		printf("berikut nilai nya: %d\n", Tab[i]);
	}
	return 0;
}

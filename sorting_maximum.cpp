#include<stdio.h>

int main(){
	int Tab[10] = {3, 43, 12, 2, 35, 78, 94, 6, 13, 8};
	int i;
	int k;
	int temp;
	int max;
	
	for(i=0;i<9;i++){
		max = i;
		for(k=i+1;k<10;k++){
			if(Tab[k]>Tab[max]){
				max = k;
			}
		}
		temp = Tab[i];
		Tab[i] = Tab[max];
		Tab[max] = temp;
	}
	for(i=0;i<10;i++){
		printf("%d; ", Tab[i]);
	}
	return 0;
}

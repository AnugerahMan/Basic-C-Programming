#include<stdio.h>

int main(void){
	int Tab[8] = {2, 5, 8, 3, 14, 10, 7, 11};
	int i;
	int max;
	max = Tab[0];
	for(i=0;i<8;i++){
		if(Tab[i]>max){
			max = Tab[i];
		}
		
	}
	printf("%d", max);
}

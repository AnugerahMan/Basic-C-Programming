#include<stdio.h>

int main(){
	int Tab[10] = {4,2,5,11,3,8,9,7,13,10};
	int min;
	int i;
	
	min = Tab[0];
	
	for(i=1;i<=10;i++){
		if(Tab[i]<min){
			min =Tab[i];
		}		
	}
	printf("data yang paling kecil adalah %d\n", min);
	return 0;
}

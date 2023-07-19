#include<stdio.h>

int main(){
	int Tab[10] = {1, 4, 6, 9, 12, 17, 13, 20, 8, 15};
	int angka;
	int i;
	int k;
	
	printf("Masukan angka : ");
	scanf("%d", &angka);
	
	for(i=0;i<10;i++){
		if(Tab[i] == angka){
			printf("Angka tersebut ada : %d", angka);
			break;
		}
		else{
			printf("Coba lagi");
			break;
		}
	}
	return 0;
}

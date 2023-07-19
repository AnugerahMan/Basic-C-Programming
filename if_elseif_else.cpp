#include <stdio.h>

int main(){
	int Test1;
	int Test2;
	int Test3;
	float average;
	
	printf("------Program nilai ulangan------\n \n");
	printf("Masukan nilai test 1: ");
	scanf("%d", &Test1);
	printf("Masukan nilai test 2: ");
	scanf("%d", &Test2);
	printf("Masukan nilai test 3: ");
	scanf("%d", &Test3);
	
	average = (Test1+Test2+Test3)/3; 
	
	if(average>=85 && average<100){
		printf("Nilai anda SANGAT BAIK: %f\n", average);
	}
	else if(average>=70 && average<85){
		printf("Nilai anda CUKUP: %f\n", average);
	}
	else if(average<70){
		printf("Nilai anda KURANG: %f\n", average);
	}
	else{
		printf("Nilai yang anda input ERROR");
	}
	return 0;
}

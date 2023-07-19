#include<stdio.h>

int add(int a, int b){
	return (a+b);
}

int inc(int c){
	return(c+1);
}

int main(){
	int x = 5;
	int y = 6;
	
	printf("Nilai penjumlahan : %d\n", add(x,y));
	
	printf("Nilai y : %d\n", inc(y));
	printf("Nilai 5 setelah ditambah satu : %d\n", inc(5));
}

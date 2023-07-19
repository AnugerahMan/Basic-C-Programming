#include <stdio.h>

int main(){
	float luas;
	float alas;
	float tinggi;
	
	printf("masukan alas : ");
	scanf("%f", &alas);
	printf("masukan tinggi : ");
	scanf("%f", &tinggi);
	
	luas = 0.5*alas*tinggi;
	printf("luas segitiga = %.2f cm", luas);
	return 0;

}

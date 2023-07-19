#include <stdio.h>

int main(){
	int a = 5;
	int b = 8;
	
	printf("Nilai penjumlahan = %d\n", a+b);
	printf("Nilai penngurangan = %d\n", a-b);
	printf("Nilai peerkalian = %d\n", a*b);
	printf("Nilai pembagian = %d\n", a/b);
	printf("Nilai mod = %d\n", b%a);
	
	float c = 5;
	float d = 8;
	printf("Nilai pembagian = %5.2f\n", c/d);
	printf("Nilai pembagian = %5.2f\n", d/c);
}

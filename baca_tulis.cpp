#include <stdio.h>

int main()
{
	
	int umur;
	float ipk;
	char nama[10];
	
	printf("Masukan nama Anda : ");
	scanf("%c", &nama);
	printf("Masukan umur Anda : ");
	scanf("%d", &umur);
	printf("Masukan IPK Anda : ");
	scanf("%f", &ipk);
	
	printf("\n----DATA ANDA----\n");
	printf("\nNama Anda : %c \n", nama);
	printf("Umur Anda : %d \n", umur);
	printf("IPK Anda : %f \n", ipk);

}
 

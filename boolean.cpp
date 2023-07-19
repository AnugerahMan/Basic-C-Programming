#include <stdio.h>

int main(){
	int TRUE = 1;
	int FALSE = 0;
	
	/* Tanda && artinya logika AND, tanda || artinya or */
	printf("Ini adalah nilai TRUE : %d\n", TRUE && TRUE);
	printf("Ini adalah nilai TRUE : %d\n", TRUE || FALSE);
	printf("Ini adalah nilai TRUE : %d\n", FALSE && TRUE);
	printf("Ini adalah nilai TRUE : %d\n", FALSE || FALSE);
	printf("Ini adalah nilai TRUE : %d\n", !TRUE);
	printf("Ini adalah nilai TRUE : %d\n", !FALSE);
	return 0;
}

#include <stdio.h>
int main ()
{
	float f = 0.505;
	float x = 1.5E3;
	
	printf("Ini adalah nilai f : %f \n", f);
	printf("Ini adalah nilai f : %10.3f \n", f);
	/* makna %10.3 adalah %spasi, berapa angka dibelakang koma */
	printf("Ini adalah nilai x : %f \n", x);
	
	return 0;
}

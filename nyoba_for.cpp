#include <stdio.h>

int main() {
    int angka;
    int a;
    int b;
    
    printf("masukan angka yang anda mau : ");
    scanf("%d", &angka);
    
    if(angka > 0 && angka < 55){
        for(a=1;a<=3;a++)
        printf("Hai \n");
    }
    else if(angka>=55){
        for(b=1;b<=10;b++)
        printf("Hai \n");
    }
    return 0;
}

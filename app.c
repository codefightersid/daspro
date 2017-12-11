#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    int tebak,jml_tebakan=0;
    int nomor = rand() % 100;
    printf ("Random Number: %d\n", nomor);


    while(jml_tebakan<5)
    {
        printf("Masukan nomor tebakan mu : ");scanf("%d", &tebak);
        if(tebak < nomor)
        {
            printf("Tebakanmu terlalu rendah\n");
            jml_tebakan+=1;
        }
        else if(tebak > nomor)
        {
            printf("Tebakanmu terlalu tinggi\n");
            jml_tebakan+=1;
        }
        else
        {
            printf("Selamat Tebakanmu benar!\n");
            break;
        }
    }
    jml_tebakan++; //Aan Revisi 1.0
    if(jml_tebakan>5)
    {
        printf("\nTebakan mu salah!!!\n");
    }

    return 0;
}

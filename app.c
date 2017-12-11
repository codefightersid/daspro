#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    //Aan Revisi 1.1
    srand(time(NULL));
    int tebak,jml_tebakan=0;
    int nomor = rand() % 100;
    int count;
    ///Hidden Random Number
    //printf ("Random Number: %d\n\n", nomor);
    printf("Ayo main tebak angka\n\n");
    count=5;
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
            printf("\n==================\n");
            printf("\nAngka Tebak : %d\n",nomor);
            printf("Selamat Tebakanmu benar!\n");
            printf("\n==================\n");
            break;
        }
    count-=1;
        if(count<5&&count>0){
                printf("Sisa tebakanmu %d kali lagi, ayo semangat !\n\n",count);
            }
    }
    jml_tebakan++;
    if(jml_tebakan>5)
    {
        printf("\n==================\n");
        printf("\nAngka Tebak : %d\n",nomor);
        printf("\nTebakanmu salah!!!\n");
        printf("\n==================\n");
    }

    return 0;
}

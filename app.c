#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    //Contribute By @mfarchana, @progressriski, @reovaldo, @haqqer
    srand(time(NULL));
    int tebak,jml_tebakan=0;
    int nomor = rand() % 50;
    int count;
    printf("%d\n", nomor);
    printf("Ayo main tebak angka\n\n");
    printf("Aku adalah angka antara 0 - 100, siapakah aku?\n");
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
        printf("Mereka By @mfarchana, @progressriski, @reovaldo, @haqqer\n");
    }

    return 0;
}

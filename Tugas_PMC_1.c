#include <stdio.h>
void main()
{
    int a = 0, b = 0, inp;
    int isFound = 0;
    printf("Masalah kendi air\n");
    printf("Terdapat 2 buah kendi, yaitu kendi dengan label A berkapasitas 3 Liter dan kendi dengan label B berkapasitas 5 Liter\n");
    printf("Program ini akan berhenti jika ember A atau B berisi 4 Liter air\n\n");
    printf("=====Daftar perintah=====\n1. Isi kendi A\n2. Isi kendi B\n");
    printf("3. Kosongkan kendi A\n4. Kosongkan kendi B\n");
    printf("5. Tuang kendi A ke kendi B\n6. Tuang kendi B ke kendi A\n");
    while (b != 4)
    {
        printf("Perintah : ");
        scanf("%d", &inp);
        if (inp == 1){
            a = 3;
        }
        else if (inp == 2){
            b = 5;
        }
        else if (inp == 3){
            a = 0;
        }
        else if (inp == 4){
            b = 0;
        }
        else if (inp == 5){
            if (a + b > 5){
                if (b == 5){
                    printf("Kendi B penuh! Silakan pilih perintah lain.\n\n");
                } else {
                a -= (5 - b);
                b = 5;
                }
            } else {
                b += a;
                a = 0;
            }
        }
        else if (inp == 6){
            if (a + b > 3){
                if (a == 3){
                    printf("Kendi A penuh! Silakan pilih perintah lain.\n\n");
                } else {
                b -= (3 - a);
                a = 3;
                }
            } else {
                a += b;
                b = 0;
            }
        }
        else {
            printf("Perintah tidak valid! Input perintah yang valid.\n\n");
        }

        printf("Kendi A : %d Liter   Kendi B : %d Liter\n\n", a, b);
    }
    printf("Kendi B berisi 4 Liter air");
}

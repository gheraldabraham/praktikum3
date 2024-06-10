/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : FaktorBill.c
   Deskripsi    : Menentukan  faktor bilangan yang dapat dibentuk oleh masukan N
*/


#include <stdio.h>

int main() {
    int N, i;

    
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    
    printf("Faktor Bilangannya adalah: ");

    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d", i);

             
            if (i < N) {
                printf(", ");
            }

        }
    }
 

    printf("\n");

    return 0;
}

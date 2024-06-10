/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : CekBilSemp.c
   Deskripsi    : Mengecek apakah suatu inputan atau masukan tersebut bilangan sempurna atau tidak dan menampilkannya di layar
*/


#include <stdio.h>

int main() {
    int N, total_faktor = 0;

    //Algoritma
    printf("Masukkan sebuah bilangan integer positif N: ");
    scanf("%d", &N);


    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            total_faktor += i;
        }
    }

    
    if (total_faktor == N) {
        printf("%d adalah bilangan sempurna.\n", N);
    } else {
        printf("%d bukan bilangan sempurna.\n", N);
    }

    return 0;
}

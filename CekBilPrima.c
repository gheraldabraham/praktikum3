/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : CekBilPrima.c
   Deskripsi    : Mengecek dan menampilkan apakah suatu masukan bilangan prima atau bukan
*/


#include <stdio.h>

int main() {
    int N, isPrime = 1; 

    
    printf("Masukkan sebuah bilangan integer positif N: ");
    scanf("%d", &N);

    
    if (N <= 1)
        isPrime = 0; 
    else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    // Menampilkan hasil
    if (isPrime)
        printf("%d adalah bilangan prima.\n", N);
    else
        printf("%d bukan bilangan prima.\n", N);

    return 0;
}

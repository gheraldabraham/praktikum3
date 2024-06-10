/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : BillSempN.c
   Deskripsi    : Mengecek dan menampilkan inputan atau masukan i apakah bilangan int positif, nol, atau negatif
*/


#include <stdio.h>

int main() {
    
    //Kamus
    int N;
    
    //Algoritma
    printf("Masukkan sebuah bilangan integer positif N: ");
    scanf("%d", &N);
    

    printf("Bilangan sempurna sampai dengan %d adalah: ", N);
    for (int num = 2; num <= N; num++) {
        int total_faktor = 0;
        
        
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                total_faktor += i;
            }
        }
        
        
        if (total_faktor == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}

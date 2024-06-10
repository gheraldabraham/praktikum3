/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : JumDeret.c
   Deskripsi    : Mengecek dan menghitung jumlah deret dari masukan N
*/


#include <stdio.h>

int main(){

    //Kamus
    int N, i, sum;

    //Algoritma
    printf("Masukan nilai N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        sum += i;
    
    }

    printf("Jumlah total deret bilangan 1 sampai %d aladah %d\n", N, sum);

    return 0;
}

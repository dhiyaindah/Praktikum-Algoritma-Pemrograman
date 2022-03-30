// Nama File 	: JumArray.c
// Deskripsi 	: menghitung besarnya penjumlahan sub array/tabel T
// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016

#include<stdio.h>
#include<stdlib.h>

int main() {

    // Kamus
    int i, j, N, sum;
    sum = 0;

    // Algoritma
    printf("Membuat program yang menghitung penjumlahan sub array \n");
    printf("Masukkan banyaknya elemen : ");
    scanf("%d", &N);

    printf("Masukkan elemen : ");
    int T[N];
    for (i=1;i<=N;i++) {
        scanf("%d", &T[i]);
    }

    for (i=1;i<=N;i++) {
        for (j=i;j<=N;j++){
            sum = sum + T[j];
        }
    }

    printf("Total : %d", sum);

return 0;
}

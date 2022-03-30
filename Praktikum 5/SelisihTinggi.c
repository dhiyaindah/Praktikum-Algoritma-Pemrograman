// Nama File 	: SelisihTinggi.c
// Deskripsi 	: Menghitung selisih ketinggian terbesar antara puncak bukit dan lembah bukit
// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016

#include<stdio.h>
#include<stdlib.h>

int main() {

    // Kamus
    int i, N, max, min, selisih;

    // Algoritma
    printf("Membuat program yang menghitung selisih ketinggian terbesar \n");
    printf("Masukkan banyaknya jalur lintasan : ");
    scanf("%d", &N);

    printf("Masukkan data lintasan : ");
    int lint[N];
    for (i=1;i<=N;i++) {
        scanf("%d", &lint[i]);
    }

    min = lint[1];
    for (i=2;i<=N;i++) {
        if (lint[i] < min) {
            min = lint[i];
        }
    }

    max = lint[1];
    for (i=2;i<=N;i++) {
        if (lint[i] > max) {
            max = lint[i];
        }
    }

    //printf("%d \n", lint[i]);
    printf("Puncak bukit : %d \n", max);
    printf("Lembah bukit : %d \n", min);
    selisih = max - min;
    printf("Selisih : %d", selisih);

return 0;
}

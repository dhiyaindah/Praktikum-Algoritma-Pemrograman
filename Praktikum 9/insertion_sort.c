// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016
// Nama File 	: insertion_sort.c
// Deskripsi 	: mengurutkan tabel T dari terkecil hingga terbesar dengan insertion sort
// Tanggal      : 29 April 2022

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int T[], int n) {
    // Kamus Lokal
    int i, j, key, Temp;

    // Algoritma
    for(i=1; i<n; i++){
        key = T[i];
        j = i-1;
        while (j>=0 && T[j] > key){
            T[j+1] = T[j];
            j--;
        }
        T[j+1] = key;
    }
}

int main()
{
    // Kamus
    int T[] = {5,3,2,10,9,6,8,1,7,4};
    int i,n;

    // Algoritma
    n = sizeof(T)/sizeof(T[0]);
    insertionsort(T, n);

    for(i=0;i<n;i++){
        printf("%d ", T[i]);
    }

    return 0;
}

// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016
// Nama File 	: selection_sort.c
// Deskripsi 	: mengurutkan tabel T dari terkecil hingga terbesar dengan selection sort
// Tanggal      : 29 April 2022

#include <stdio.h>
#include <stdlib.h>

void selectionsort(int T[], int n) {
    // Kamus Lokal
    int i, j, min, Temp;

    // Algoritma
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            min = i;
            if (T[j] < T[i]){
                min = j;
            }
        Temp = T[i];
        T[i] = T[min];
        T[min] = Temp;
        }
    }
}

int main()
{
    // Kamus
    int T[] = {5,3,2,10,9,6,8,1,7,4};
    int i,n;

    // Algoritma
    n = sizeof(T)/sizeof(T[0]);
    selectionsort(T, n);

    for(i=0;i<n;i++){
        printf("%d ", T[i]);
    }

    return 0;
}

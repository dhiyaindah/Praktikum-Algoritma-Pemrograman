// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016
// Nama File 	: main.c
// Deskripsi 	: driver ADT BinSearch1
// Tanggal      : 14 April 2022

#include "binsearch.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int T[] = {-3,-2,1,3,6,9,15,20,22,30};
    int X = 30;
    int N = sizeof(T) / sizeof(T[0]);
    int IX;

    // Algoritma
    BinSearch1(T,N,X,&IX);
    if (IX == -1){
        printf("Elemen tidak ditemukan\n");
    }
    else {
        printf("Elemen ditemukan pada indeks ke-%d\n",IX);
    }

    return 0;
}

// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016
// Nama File 	: binsearch.h
// Deskripsi 	: body ADT SEQSearchX2
// Tanggal      : 14 April 2022

#include "binsearch.h"
#include <stdio.h>

void BinSearch1(int T[], int N, int X, int *IX){
    // Kamus Lokal
    int upper, lower, mid;

    // Algoritma
    upper = N-1;
    lower = 0;
    mid = (upper + lower) / 2;

    while (X != T[mid] && lower < upper){
        if (X > T[mid]){
            lower = mid + 1;
        }
        else {
            upper = mid - 1;
        }
        mid = (upper + lower) / 2;
    }
    if (X == T[mid]){
        *IX = mid;
    }
    else {
        *IX = -1;
    }
}

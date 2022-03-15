// Nama File 	: BiayaParkir.c
// Deskripsi 	: Menghitung dan menampilkan biaya parkir
// Nama         : Dhiya Indah Fatikasari
// NIM          : 24060121120016

#include <stdio.h>

int main(){
    // Kamus
    int t, biaya;

    // Algoritma
    printf("Membuat program yang menghitung biaya parkir \n");
    printf("Masukkan lamanya waktu parkir = ");
    scanf("%d", &t);

    if (t <= 2) {
    	biaya = 2000;
	} else {
		biaya = (t-2) * 500 + 2000;
	}

    printf("Biaya parkir yang harus dibayarkan: Rp%d", biaya);

    return 0;
}

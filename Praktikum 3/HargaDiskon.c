// Nama File 	: HargaDiskon.c
// Deskripsi 	: Menghitung dan menampilkan harga barang setelah didiskon
// Nama 		: Dhiya Indah Fatikasari
// NIM		 	: 24060121120016

#include <stdio.h>

int main(){
    // Kamus
    int harga, hb;
    float diskon;
    char jenis;

    // Algoritma
    printf("Membuat program yang menghitung harga barang setelah didiskon \n");
    printf("Masukkan jenis diskon = ");
    scanf("%c", &jenis);
    printf("Masukkan nilai harga barang = ");
    scanf("%d", &hb);

    if (jenis == 'A') {
    	diskon = 0.1;
    } else if (jenis == 'B') {
		diskon = 0.15;
	} else {
		diskon = 0.2;
	}

	harga = hb - (hb * diskon);

    printf("Harga akhir: Rp%d", harga);

    return 0;
}

// Nama File 	: UpahKerja.c
// Deskripsi 	: Menghitung dan menampilkan upah kerja
// Nama 		: Dhiya Indah Fatikasari
// NIM		 	: 24060121120016

#include <stdio.h>

int main(){
    // Kamus
    int gol, upj, jam, upah;

    // Algoritma
    printf("Membuat program jarak parabola \n");
    printf("Masukkan nilai gol = ");
    scanf("%d", &gol);
    printf("Masukkan nilai jam = ");
    scanf("%d", &jam);

    if (gol == 1) {
    	upj = 1000;
    } else if (gol == 2) {
		upj = 1500;
	} else if (gol == 3) {
		upj = 2000;
	} else {
		upj = 2500;
	}

	if (jam <= 40) {
		upah = upj * jam;
	} else {
		upah = upj * 40 + (jam-40) * 3/2 * upj;
	}

    printf("Upah: Rp%d", upah);

    return 0;
}

// Nama File 	: TunjAnak.c
// Deskripsi 	: Menghitung dan menampilkan tunjangan anak
// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016

#include <stdio.h>

int main(){
    // Kamus
    int anak, tunj, gaji;

    // Algoritma
    printf("Membuat program yang menghitung tunjangan anak \n");
    printf("Masukkan jumlah anak = ");
    scanf("%d", &anak);
    printf("Masukkan jumlah gaji pokok = ");
    scanf("%d", &gaji);

    if (anak <= 3) {
    	tunj = anak * 0.1 * gaji;
	} else {
		tunj = 3 * 0.1 * gaji;
	}

    printf("Tunjangan anak: Rp%d", tunj);

    return 0;
}

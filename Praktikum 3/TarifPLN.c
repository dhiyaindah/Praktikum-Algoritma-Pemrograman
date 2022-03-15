// Nama File 	: TarifPLN.c
// Deskripsi 	: Menghitung dan menampilkan tarif listrik
// Nama 		: Dhiya Indah Fatikasari
// NIM 			: 24060121120016

#include <stdio.h>

int main(){
    // Kamus
    int gol, daya, tarif, total;

    // Algoritma
    printf("Membuat program yang menghitung tarif listrik yang harus dibayarkan \n");
    printf("Masukkan golongan tarif = ");
    scanf("%d", &gol);
    printf("Masukkan pemakaian daya listrik = ");
    scanf("%d", &daya);

    if (gol == 1) {
    	tarif = 1000;
	} else {
		tarif = 2000;
	}

	if (daya < 100) {
        total = tarif * 100;
	} else if ((daya >= 100) && (daya < 1000)) {
        total = tarif * daya;
	} else {
        total = (tarif * daya) + (0.1 * tarif * daya);
	}

    printf("Total yang harus dibayarkan: Rp%d", total);

    return 0;
}

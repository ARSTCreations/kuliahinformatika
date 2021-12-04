//  comment dengan menggunakan '//' biar ga dianggep code yang harus dijalanin
/*
    bisa gini juga kalo mau
    bikin comment panjang, hehe
*/
// Jangan lupa! selalu akhiri line kode dengan tanda ';' (semi-colon/titik-koma)

#include <stdio.h>                                              // Basically "Ikutkan library 'stdio'!" 
                                                                // Library atau Header stdio.h berisi instruksi 'input-output'
int main(){                                                     // Deklarasi fungsi "main" (jelasin nya kapan-kapan hehe)
    int bilanganBulat = 12;                                     // Deklarasi variabel int (integer/bilangan bulat) yang diisi angka 12
    char huruf = 'a';                                           // Deklarasi variabel char (character) yang diisi huruf
    printf("Halo Gaes!!\n\n");                                  // Print out pake printf (print format) yang berisi kalimat
    printf("Jangan lupa pake newline ");                        // Print out '\n' (newline) setelah kalimat
    printf("saat mau print di baris baru\n");                   // biar kaga nyambung sama baris atasnya
    printf("biar ga nyambung");                                 // kalo ga dikasi '\n' ntar
    printf("kayak gini");                                       // malah nyambung sama baris atasnya
    printf("\nBisa juga newline sebelum print");                // print '\n' bisa juga di depan, tengah, antar huruf, selama di dalam tanda kutip ("") 
    printf("\natau kalo mau pake tab kayak \t gini");           // print '\t'  untuk 'tab' bisa diposisikan seperti 'newline'
    printf("\nini adalah format desimal --> %d",bilanganBulat); // %d adalah format specifier untuk tipe data Integer 
    printf("\nini adalah format --> %c",huruf);                 // %c adalah format specifier untuk tipe data Character
    printf("\ngabungan antara %d dan %c adalah %d%c",bilanganBulat,huruf,bilanganBulat,huruf);  // bisa juga dtumpuk-tumpuk kayak gini
    return 0;                                                   // keluar program dengan mengembalikan nilai 0 (kapan-kapan dijelasin kok)
}
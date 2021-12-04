
# Pemrograman Dasar #1

**TLDR;**
Di pemrograman, ada yang namanya Variabel yang bisa diisi berdasarkan tipe datanya, Fungsi yang bisa diisi kodingan, Header yang bisa diisi Library, dan Print out dapat dilakukan dengan printf()

## Sebelom Mulai Koding C...
Dalam ngoding pake bahasa pemrograman C, bakalan ada yang namanya Header, Fungsi, Variabel, dll.

Dah coba kalian liat contoh program C ini dulu
```
#include  <stdio.h>
int  main(){
	int  bilanganBulat = 12;
	char  huruf = 'a';
	printf("Halo Gaes!!\n\n");
	printf("Jangan lupa pake newline ");
	printf("saat mau print di baris baru\n");
	printf("biar ga nyambung");
	printf("kayak gini");
	printf("\nBisa juga newline sebelum print");
	printf("\natau kalo mau pake tab kayak \t gini");
	printf("\nini adalah format desimal --> %d",bilanganBulat);
	printf("\nini adalah format --> %c",huruf);
	return  0;
}
```
Bingung? wkwkk gaapa emang gajelas kalo gini<br>makanya kuy kita breakdown satu-satu<br><br>

|Istilah|Penjelasan|Contoh|
|--|--|--|
|Header|Kayak namanya "Bagian Atas" letaknya di atas,<br>diisi library yang pengen kita pake buat ngoding|#include \<nama-library\><br>#include \<stdio.h>|
|Fungsi|Fungsi nggak berarti secara literal loh,<br>kalo di sini singkatnya: badan dari kode yang bakal dieksekusi|void namaFungsi(){\*badan kode\*}<br>int main(){\*badan kode\*}|
|Variabel|Yaa sama kayak di matematika, sebuah kardus yang bisa diisi suatu nilai|long namaVariabel = 300;<br>int x=2;|
|..dsb|..dsb|..dsb|

**Dah paham??**<br>Penjabarannya lagi bisa dilihat di bawah ini

## Variabel
Variabel ni ada banyak macemnya, tapi kali ini kita cuma perlu beberapa aja kok<br>Macem-macem nya itu dikenal sebagai tipe data.<br>Kayak namanya sendiri, tipe data itu tipe nya data yang mau disimpen ke variabel ini.
|Tipe Data|Penjelasan|
|--|--|
|int (Integer)|Bisa diisi Bilangan Bulat|
|float (Float)|Bisa diisi Angka Koma (Desimal)|
|char (Character)|Bisa diisi Huruf dsb. (Karakter ASCII)|
contoh:
- int bilanganBulat = 12;
- float bilanganKoma = 31.4;
- char hurufKu = 'a';

## Fungsi
Bukan fungsi yaa, tapi 'Fungsi' as in 'Function / Method'<br>gunanya adalah untuk menampung perintah kode yang udah kita ketikkan ke file kode.
contoh:
- int main(){/* isi kode */}
- void tulis(){/* isi kode */}
- float namaFungsi(){/* isi kode */}

## Header
Ini juga ada banyak, tapi yang bakal kita pake ya cuma itu-itu aja sih nantinya hehe.<br>Header ini digunakan untuk menampung library.

Masih inget yang kayak gini?
```
#include <stdio.h>
```
nah itu dah salah satu contoh dari <u>Header yang nampung Library 'stdio.h'</u>.<br>Jadi jelasnya lagi, Library ini berisi sebuah fungsi (misalnya: printf(){..} ) yang bisa kita pakai setelah kita 'include' ke dalam program kita. 
|Library|Isinya|
|--|--|
|stdio.h|Berisi perintah Printout dan Input seperi scanf, printf, dsb.|
|string.h|Berisi perintah manipulasi String seperti menyalin string, membalik, dsb.|
|math.h|Berisi perintah operasi matematika seperti square-root, power, dsb.|
|..dsb|..dsb|
contoh:
- #include <stdio.h>
- #include <math.h>

Gimana.., dah paham belom?<br>masih inget contoh kode yang tadi?<br>nanti bakal kita bahas bareng-bareng di sesi berikutnya hehe.

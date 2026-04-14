/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : 13224024
 *   Nama File           : soal1.c
 *   Deskripsi           : Mencetak warna lampu berdasarkan prioritas tertentu
 * 
 */

#include <stdio.h>

int main(void){
    int N; // deklarasi variabel N

    scanf("%d", &N); // menerima input

    for (int i = 0; i < N; i++) // output terminal berdasarkan iterasi i
    {   
        // penjabaran kondisi if-else sesuai dengan soal
        if(i%2==0 && i%3 ==0 ){
            printf("BIRU");
        }
        else if (i%3 ==0){
            printf("MERAH");
        }
        else if (i%2 ==0){
            printf("KUNING");
        }
        else if (i>= 10 && i % 2 ==0){
            printf("HIJAU");
        }
        else{
            printf("%d", i);
        }
        // kalau tidak sedang berada di iterasi terakhir, print new line
        if (i!=N){printf("\n");}
        
    }
    return 0;
}

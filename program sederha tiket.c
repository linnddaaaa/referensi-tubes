#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    float eksekutif, bisnis, ekonomi, jumlah, hasil, total, diskon;

    puts("Jenis Tiket");
    puts("1. Eksekutif");
    puts("2. Bisnis");
    puts("3. Ekonomi");


    printf("Masukkan angka untuk memilih jenis tiket: ");
    scanf("%d", &menu);

    printf("\n");
    switch(menu)
    {
        case 1:
            puts("Anda Memilih menu 1");
            puts("Jenis Tiket Eksekutif");
            puts("Rute Tiket Eksekutif");
            puts("1. Bandung - Solo");
            puts("2. Bandung - Yogjakarta");

            printf("Masukkan angka untuk memilih rute : ");
            scanf("%f", &menu);

                switch(menu)
                {
                case 1:
                    puts("Anda memilih rute Bandung - Solo");
                    puts("Harga tiket 220000");
                    break;
                case 2:
                    puts("Anda memilih rute bandung - Yogyakarta");
                    puts("Harga tiket 195000");
                    break;
                }

                printf("Masukkan jumlah tiket yang Anda pesan : ");
                scanf("%f", &jumlah);

                if(jumlah >= 10){
                total = jumlah * 220000;
                diskon = total * 20/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.220.000,-\n ");
                printf("Total Harga Tiket = %.1f \n", hasil);
                }
                else if(jumlah >= 5) {
                total = jumlah * 220000;
                diskon = total * 10/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.220.000,-\n ");
                printf("Total Harga Tiket = %.2f \n", hasil);
                }
                else {
                hasil = jumlah * 220000;
                printf("Maaf Anda Tidak Mendapatkan Diskon\n");
                printf("Total Harga Tiket = %.1f\n", hasil);
                }
                break;
        case 2:
            puts("Anda Memilih menu 2");
            puts("Jenis Tiket Bisnis");
            puts("Rute Tiket Bisnis");
            puts("1. Bandung - Solo");
            puts("2. Bandung - Yogjakarta");

            printf("Masukkan angka untuk memilih rute : ");
            scanf("%f", &menu);

                switch(menu)
                {
                case 1:
                    puts("Anda memilih rute Bandung - Solo");
                    puts("Harga tiket 195000");
                    break;
                case 2:
                    puts("Anda memilih rute bandung - Yogyakarta");
                    puts("Harga tiket 195000");
                    break;
                }

                printf("Masukkan jumlah tiket yang Anda pesan : ");
                scanf("%f", &jumlah);

                if(jumlah >= 10){
                total = jumlah * 195000;
                diskon = total * 15/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.195.000,-\n ");
                printf("Total Harga Tiket = %.1f \n", hasil);
                }
                else if(jumlah >= 5) {
                total = jumlah * 195000;
                diskon = total * 5/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.195.000,-\n ");
                printf("Total Harga Tiket = %.2f \n", hasil);
                }
                else {
                hasil = jumlah * 195000;
                printf("Maaf Anda Tidak Mendapatkan Diskon\n");
                printf("Total Harga Tiket = %.1f\n", hasil);
                }
                break;
        case 3:
            puts("Anda Memilih menu 3");
            puts("Jenis Tiket Ekonomi");
            puts("Rute Tiket Ekonomi");
            puts("1. Bandung - Solo");
            puts("2. Bandung - Yogjakarta");

            printf("Masukkan angka untuk memilih rute : ");
            scanf("%f", &menu);

                switch(menu)
                {
                case 1:
                    puts("Anda memilih rute Bandung - Solo");
                    puts("Harga tiket 160000");
                    break;
                case 2:
                    puts("Anda memilih rute bandung - Yogyakarta");
                    puts("Harga tiket 160000");
                    break;
                }

                printf("Masukkan jumlah tiket yang Anda pesan : ");
                scanf("%f", &jumlah);

                if(jumlah >= 10){
                total = jumlah * 195000;
                diskon = total * 10/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.160.000,-\n ");
                printf("Total Harga Tiket = %.1f \n", hasil);
                }
                else if(jumlah >= 5) {
                total = jumlah * 160000;
                diskon = total * 5/100;
                hasil = total - diskon;
                printf("Harga Tiket = Rp.160.000,-\n ");
                printf("Total Harga Tiket = %.2f \n", hasil);
                }
                else {
                hasil = jumlah * 160000;
                printf("Maaf Anda Tidak Mendapatkan Diskon\n");
                printf("Total Harga Tiket = %.1f\n", hasil);
                }

                break;
    }
    }
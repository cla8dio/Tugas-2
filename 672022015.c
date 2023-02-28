#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

char pw1,uname1[100];
char password1[100] ="";


char pw2,uname2[100];
char password2[100] ="";


int coba = 2;


void regis() {

    char username[100];
    char pw[100];
    int i = 0, x = 10;

    printf(" Sign Up \n");
    printf("Username : ");
    scanf(" %[^\n]s",&uname1);
    printf("Password : ");
    //scanf(" %[^\n]s",&pw);
    //fflush(stdin);

   // strcpy(password1,pw);
    //strcpy(uname1,username);

    while((pw1=(char)_getch()) != '\r' ){
        if(pw1==8){
            password1[i]='\0';
            printf(" ");
            i--;
            x--;
        } else{
            password1[i] = pw1;
            printf("*");
            x++;
            i++;
        }
    }

    printf("\n");

    system("cls");
    printf("Pendaftaran berhasil!");
    getch();
    system("cls");
    login();


}

void login() {

     //====LOGIN=====

char username[100];
    char pw[100];
    int j = 0, y = 10;


    printf(" LOGIN \n");
    printf("Username :");
    scanf(" %[^\n]s",&uname2);
    printf("Password :");

   // scanf(" %[^\n]s",&password2);


	while((pw2=(char)_getch()) != '\r' ){
        if(pw2==8){
            password2[j]='\0';
            printf(" ");
            j--;
            y--;
        } else{
            password2[j] = pw2;
            printf("*");
            y++;
            j++;
        }
    }

    //fflush(stdin);

    //strcpy(password2,pw);
    //strcpy(uname2,username);


    printf("\n");



    if((strcmp(uname1,uname2)==0) && (strcmp(password1,password2)==0) && (coba >= 0)) {
        printf("login berhasil");
        getch();
        system("cls");
        menu();
    } else if(strcmp(uname1,uname2)!=0 || strcmp(password1,password2)!=0 && coba >= 0){
        printf("Password atau Username salah!\nAnda masih punya %d kesempatan", coba);
        coba--;
        getch();

        system("cls");
        login();
    } else {
        printf("");
    }



}


//==================tugas2=====================



//=========================================MENU 1==================================================

void pingporo() {

    system("cls");

    int pilihanUser;

    printf("   ==================\n   Ping Poro Lan Sudo\n   ==================\n\n");
    printf("   (1)Perkalian\n");
    printf("   (2)Pembagian\n");
    printf("   (3)Penjumlahan\n");
    printf("   (4)Pengurangan\n");
    printf("   (5)Kembali ke Menu Utama\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

    if(pilihanUser == 1) {
        perkalian();
    } else if (pilihanUser == 2) {
        pembagian();
    } else if (pilihanUser == 3) {
        penjumlahan();
    } else if (pilihanUser == 4) {
        pengurangan();
    } else if (pilihanUser == 5) {
        system("cls");
        menu();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        pingporo();
    }




}

//perkalian

void yatidakkali() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            perkalian();
        } else if(110 == yatidak) {
            pingporo();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakkali();
        }
}

void perkalian() {


    system("cls");
    int angkaPertama, angkaKedua;

        printf("\n   Perkalian\n\n");
        printf("   Masukkan angka pertama : ");
        scanf("%d", &angkaPertama);
        printf("   Masukkan angka kedua : ");
        scanf("%d", &angkaKedua);
        printf("\n   Hasil dari %d x %d adalah %d", angkaPertama, angkaKedua, angkaPertama*angkaKedua);

        getch();
        yatidakkali();
}
//akhir perkalian

//pembagian

void yatidakbagi() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            pembagian();
        } else if(110 == yatidak) {
            pingporo();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakbagi();
        }
}

void pembagian() {


    system("cls");
    float angkaPertama, angkaKedua;

        printf("\n   Pembagian\n\n");
        printf("   Masukkan angka pertama : ");
        scanf("%f", &angkaPertama);
        printf("   Masukkan angka kedua : ");
        scanf("%f", &angkaKedua);
        float hasil = angkaPertama/angkaKedua;
        printf("\n   Hasil dari %.0f / %.0f adalah %f", angkaPertama, angkaKedua, hasil);

        getch();
        yatidakbagi();
}
//akhir permbagian
//penjumlahan

void yatidakjumlah() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            penjumlahan();
        } else if(110 == yatidak) {
            pingporo();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakjumlah();
        }
}

void penjumlahan() {


    system("cls");
    float angkaPertama, angkaKedua;

        printf("\n   Penjumlahan\n\n");
        printf("   Masukkan angka pertama : ");
        scanf("%f", &angkaPertama);
        printf("   Masukkan angka kedua : ");
        scanf("%f", &angkaKedua);
        float hasil = angkaPertama+angkaKedua;
        printf("\n   Hasil dari %.0f + %.0f adalah %.0f", angkaPertama, angkaKedua, hasil);

        getch();
        yatidakjumlah();
}
//akhir penjumlahan
//pengurangan

void yatidakkurang() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            pengurangan();
        } else if(110 == yatidak) {
            pingporo();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakkurang();
        }
}

void pengurangan() {


    system("cls");
    float angkaPertama, angkaKedua;

        printf("\n   Pengurangan\n\n");
        printf("   Masukkan angka pertama : ");
        scanf("%f", &angkaPertama);
        printf("   Masukkan angka kedua : ");
        scanf("%f", &angkaKedua);
        float hasil = angkaPertama-angkaKedua;
        printf("\n   Hasil dari %.0f - %.0f adalah %.0f", angkaPertama, angkaKedua, hasil);

        getch();
        yatidakkurang();
}
//akhir pengurangan

//=========================================AKHIR MENU 1==================================================


//=========================================MENU 2==================================================

void yatidaksin() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            hitungsin();
        } else if(110 == yatidak) {
            sincostan();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidaksin();
        }
}

void hitungsin() {

    double deg, radian;

    system("cls");

    printf("\n   Masukkan derajat sinus : ");
    scanf("%lf", &deg);

    radian = deg * (M_PI / 180);

    double hasilSin = sin(radian);

    printf("\n   Hasil sinus adalah : %.2lf", hasilSin);

    getch();
    yatidaksin();
}




void yatidakcos() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            hitungcos();
        } else if(110 == yatidak) {
            sincostan();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakcos();
        }
}

void hitungcos() {

    double deg, radian;

    system("cls");

    printf("\n   Masukkan derajat cosinus : ");
    scanf("%lf", &deg);

    radian = deg * (M_PI / 180);

    double hasilCos = cos(radian);

    printf("\n   Hasil cotangen adalah : %.2lf", hasilCos);

    getch();
    yatidakcos();
}



void yatidaktan() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            hitungtan();
        } else if(110 == yatidak) {
            sincostan();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidaktan();
        }
}

void hitungtan() {

    double deg, radian;

    system("cls");

    printf("\n   Masukkan derajat tangen : ");
    scanf("%lf", &deg);

    radian = deg * (M_PI / 180);

    double hasilTan = tan(radian);

    printf("\n   Hasil tangen adalah : %.2lf", hasilTan);

    getch();
    yatidaktan();
}




void sincostan() {

    system("cls");

    int pilihanUser;

    printf("   ===========\n   Sin Cos Tan\n   ===========\n\n");
    printf("   (1)Sinus\n");
    printf("   (2)Cosinus\n");
    printf("   (3)Tangen\n");
    printf("   (4)Kembali ke Menu Utama\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

    if(pilihanUser == 1) {
        hitungsin();
    } else if (pilihanUser == 2) {
        hitungcos();
    } else if (pilihanUser == 3) {
        hitungtan();
    } else if (pilihanUser == 4) {
        system("cls");
        menu();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        sincostan();
    }


}

//=========================================AKHIR MENU 2==================================================

//=========================================MENU 3==================================================

void kelilingluas() {

    int pilihanUser;

    system("cls");

    printf("   ====================\n   Keliling Luas Volume\n   ====================\n");
    printf("   (1)Hitung Keliling Bangun Datar\n");
    printf("   (2)Hitung Luas Bangun Datar\n");
    printf("   (3)Hitung Volume Bangun Ruang\n");
    printf("   (4)Return ke Menu Utama\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

    if(pilihanUser == 1) {
        pilihan1();
    } else if (pilihanUser == 2) {
        pilihan2();
    } else if (pilihanUser == 3) {
        pilihan3();
    } else if (pilihanUser == 4) {
        system("cls");
        menu();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        kelilingluas();
    }

}

void pilihan1();
void kelpersegi();
void keltrapesium();
void kellayang();
void kellingkaran();

//fungsi yatidak pil 1
void yt11() {

    char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            kelpersegi();
        } else if(110 == yatidak) {
            pilihan1();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt11();
        }

}
void yt12() {
 char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            keltrapesium();
        } else if(110 == yatidak) {
            pilihan1();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt12();
        }
}
void yt13() {
 char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            kellayang();
        } else if(110 == yatidak) {
            pilihan1();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt13();
        }
}
void yt14() {
 char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            kellingkaran();
        } else if(110 == yatidak) {
            pilihan1();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt14();
        }
}



void pilihan2();
void luaspersegi();
void luastrapesium();
void luaslayang();
void luaslingkaran();
//fungsiyatidak pil 2
void yt21() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            luaspersegi();
        } else if(110 == yatidak) {
            pilihan2();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt21();
        }

}
void yt22() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            luastrapesium();
        } else if(110 == yatidak) {
            pilihan2();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt22();
        }

}
void yt23() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            luaslayang();
        } else if(110 == yatidak) {
            pilihan2();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt23();
        }

}
void yt24() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            luaslingkaran();
        } else if(110 == yatidak) {
            pilihan2();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt24();
        }

}





void pilihan3();
void volkubus();
void volprisma();
void vollimas();
void volbola();
//fungsiyatidak pil 3
void yt31() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();

        if(121 == yatidak) {
            volkubus();
        } else if(110 == yatidak) {
            pilihan3();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt31();
        }
}
void yt32() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();

        if(121 == yatidak) {
            volprisma();
        } else if(110 == yatidak) {
            pilihan3();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt32();
        }
}
void yt33() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();

        if(121 == yatidak) {
            vollimas();
        } else if(110 == yatidak) {
            pilihan3();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt33();
        }
}
void yt34() {

    char yatidak;

    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();

        if(121 == yatidak) {
            volbola();
        } else if(110 == yatidak) {
            pilihan3();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yt34();
        }
}




//=========================================AKHIR MENU 3==================================================

//========================================= MENU 4==================================================

void akar() {

    system("cls");

    double hasil, bil;

    printf("\n   ============\n   Akar Kuadrat\n   ============\n\n");
    printf("   Masukkan bilangan yang akan diakar : ");
    scanf("%lf", &bil);

    hasil = sqrt(bil);

    printf("\n   Hasil akar dari %lf adalah %lf", bil, hasil);

    getch();
    yatidakakar();



}

void yatidakakar() {

     char yatidak;


    printf("\n\n   Ingin mengulang lagi?(y/n)");
    yatidak = getch();


        if(121 == yatidak) {
            akar();
        } else if(110 == yatidak) {
            system("cls");
            menu();
        } else {
            system("cls");
            printf("\n   Pilihan tidak tersedia :("); yatidakakar();
        }

}

//========================================= AKhirMENU 4==================================================





void menu() {

    int pilihanUser;

    printf("   ==================\n   Tugas 2 Kalkulator\n   ==================\n\n");
    printf("   (1)PingPoroLanSudo\n");
    printf("   (2)SinCosTan\n");
    printf("   (3)Hitung Keliling dan Luas\n");
    printf("   (4)Hitung Akar Kuadrat\n");
    printf("   (5)Exit\n\n");

    printf("  Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

    if(pilihanUser == 1) {
        pingporo();
    } else if (pilihanUser == 2) {
        sincostan();
    } else if (pilihanUser == 3) {
        kelilingluas();
    } else if (pilihanUser == 4) {
        akar();
    } else if (pilihanUser == 5) {
        system("cls");
        printf("\n\n   TERIMA KASIH :)\n\n");
    } else {
        printf("Pilihan anda tidak ada di menu :(");
        fflush(stdin);
        getch();
        system("cls");
        menu();
    }

}

int main()
{
    system("COLOR f1");
    regis();
    return 0;
}



void pilihan1() {

    system("cls");
    int pilihanUser;

    printf("   =====================\n   Keliling Bangun Datar\n   =====================\n");
    printf("   (1)Keliling Persegi\n");
    printf("   (2)Keliling Trapesium\n");
    printf("   (3)Keliling Layang-layang\n");
    printf("   (4)Keliling Lingkaran\n");
    printf("   (5)Kembali ke Menu Sebelumnya\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

     if(pilihanUser == 1) {
        kelpersegi();
    } else if (pilihanUser == 2) {
        keltrapesium();
    } else if (pilihanUser == 3) {
        kellayang();
    } else if (pilihanUser == 4) {
        kellingkaran();
    } else if (pilihanUser == 5) {
        system("cls");
        kelilingluas();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        pilihan1();
    }


}

// pilihan 1 dari menu 3

void kelpersegi() {

    system("cls");
    int p, l;

    printf("\n   Masukkan panjang persegi : ");
    scanf("%d", &p);
    printf("   Masukkan luas persegi : ");
    scanf("%d", &l);

    float hasil = (p+l)*2;
    printf("\n   Keliling persegi adalah %0.2f", hasil);

    getch();
    yt11();
}
void keltrapesium() {

    system("cls");
    int atas, alas, samping;

    printf("\n   Masukkan sisi atas trapesium sama kaki : ");
    scanf("%d", &atas);
    printf("   Masukkan alas trapesium sama kaki : ");
    scanf("%d", &alas);
    printf("   Masukkan sisi miring trapesium sama kaki : ");
    scanf("%d", &samping);

    float hasil = (samping * 2) + alas + atas;
    printf("\n   Keliling trapesium sama kaki adalah %0.2f", hasil);

    getch();
    yt12();

}
void kellayang() {

    system("cls");
    int atas, bawah;

    printf("\n   Masukkan panjang sisi atas : ");
    scanf("%d", &atas);
    printf("   Masukkan panjang sisi bawah : ");
    scanf("%d", &bawah);

    float hasil = (atas+bawah)*2;
    printf("\n   Keliling layang-layang adalah %0.2f", hasil);

    getch();
    yt13();

}
void kellingkaran() {

    system("cls");
    int jari, diameter;
    double pi = M_PI;

    printf("\n   Masukkan panjang diameter : ");
    scanf("%d", &diameter);
    printf("   Masukkan panjang jari-jari : ");
    scanf("%d", &jari);

    float hasiljari = 2*jari*pi;
    float hasildiameter = diameter * pi;
    printf("\n   Keliling lingkaran berdasarkan diameter adalah %0.2f", hasildiameter);
    printf("\n\n   Keliling lingkaran berdasarkan jari-jari adalah %0.2f", hasiljari);

    getch();
    yt14();

}




void pilihan2() {

    system("cls");
    int pilihanUser;

    printf("   =================\n   Luas Bangun Datar\n   =================\n");
    printf("   (1)Luas Persegi\n");
    printf("   (2)Luas Trapesium\n");
    printf("   (3)Luas Layang-layang\n");
    printf("   (4)Luas Lingkaran\n");
    printf("   (5)Kembali ke Menu Sebelumnya\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

     if(pilihanUser == 1) {
        luaspersegi();
    } else if (pilihanUser == 2) {
        luastrapesium();
    } else if (pilihanUser == 3) {
        luaslayang();
    } else if (pilihanUser == 4) {
        luaslingkaran();
    } else if (pilihanUser == 5) {
        system("cls");
        kelilingluas();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        pilihan2();
    }

}

//pilihan 2 dari menu 3

void luaspersegi() {

    system("cls");
    int p, l;

    printf("\n   Masukkan panjang persegi : ");
    scanf("%d", &p);
    printf("   Masukkan luas persegi : ");
    scanf("%d", &l);

    float hasil = p*l;
    printf("\n   Luas persegi adalah %0.2f", hasil);

    getch();
    yt21();

}
void luastrapesium() {

    system("cls");
    int atas, alas, tinggi;

    printf("\n   Masukkan panjang sisi atas trapesium sama kaki : ");
    scanf("%d", &atas);
    printf("   Masukkan panjang alas trapesium sama kaki : ");
    scanf("%d", &alas);
    printf("   Masukkan panjang tinggi trapesium sama kaki : ");
    scanf("%d", &tinggi);

    float hasil = (atas+alas) * tinggi/2;
    printf("\n   Luas trapesium adalah %0.2f", hasil);

    getch();
    yt22();

}
void luaslayang() {

    system("cls");
    int p, l;

    printf("\n   Masukkan diagonal panjang : ");
    scanf("%d", &p);
    printf("   Masukkan diagonal lebar : ");
    scanf("%d", &l);

    float hasil = (p*l)/2;
    printf("\n   Luas layang-layang adalah %0.2f", hasil);

    getch();
    yt23();

}
void luaslingkaran() {

    system("cls");
    int jari, diameter;
    double pi = M_PI;

    printf("\n   Masukkan panjang diameter : ");
    scanf("%d", &diameter);
    printf("   Masukkan panjang jari-jari : ");
    scanf("%d", &jari);

    float hasiljari = jari*jari*pi;
    float hasildiameter = (diameter/2)*(diameter/2) * pi;
    printf("\n   Luas lingkaran berdasarkan diameter adalah %0.2f", hasildiameter);
    printf("\n\n   Luas lingkaran berdasarkan jari-jari adalah %0.2f", hasiljari);

    getch();
    yt24();

}



void pilihan3() {

    system("cls");
    int pilihanUser;

    printf("   ===================\n   Volume Bangun Ruang\n   ===================\n");
    printf("   (1)Volume Kubus\n");
    printf("   (2)Volume Prisma\n");
    printf("   (3)Volume Limas\n");
    printf("   (4)Volume Bola\n");
    printf("   (5)Kembali ke Menu Sebelumnya\n\n");

    printf("   Masukkan pilihan anda : ");
    scanf("%d", &pilihanUser);

     if(pilihanUser == 1) {
        volkubus();
    } else if (pilihanUser == 2) {
        volprisma();
    } else if (pilihanUser == 3) {
        vollimas();
    } else if (pilihanUser == 4) {
        volbola();
    } else if (pilihanUser == 5) {
        system("cls");
        kelilingluas();
    } else {
        printf("   Pilihan anda tidak ada di menu :(");
        getch();
        pilihan3();
    }

}

//pilihan 3 dari menu 3
void volkubus() {

    system("cls");
    int p;

    printf("\n   Masukkan panjang sisi kubus : ");
    scanf("%d", &p);

    float hasil = p*p*p;
    printf("\n   Volume kubus adalah %0.2f", hasil);

    getch();
    yt31();

}
void volprisma() {

    system("cls");
    int sisi, alastri, tinggitri, jari, diameter, tinggi;
    double pi = M_PI;

    printf("\n   Masukkan panjang sisi persegi : ");
    scanf("%d", &sisi);
    printf("\n   Masukkan panjang alas segitiga : ");
    scanf("%d", &alastri);
    printf("\n   Masukkan tinggi segitiga : ");
    scanf("%d", &tinggitri);
    printf("\n   Masukkan panjang jari-jari lingkaran : ");
    scanf("%d", &jari);
    printf("\n   Masukkan panjang diameter lingkaran : ");
    scanf("%d", &diameter);
    printf("\n   Masukkan tinggi prisma : ");
    scanf("%d", &tinggi);

    float hasilpersegi = sisi*sisi*tinggi;
    float hasilsegitiga = tinggitri*alastri*tinggi/2;
    float hasiljari = (jari*jari)*tinggi*pi;
    float hasildiameter = ((diameter/2)*(diameter/2))*tinggi*pi;

    printf("\n\n   Volume prisma persegi adalah %0.2f\n", hasilpersegi);
    printf("\n   Volume prisma segitiga adalah %0.2f\n", hasilsegitiga);
    printf("\n   Volume silinder berdasarkan jari-jari adalah %0.2f\n", hasiljari);
    printf("\n   Volume silinder berdasarkan diameter adalah %0.2f\n", hasildiameter);

    getch();
    yt32();


}
void vollimas() {

    system("cls");
    int sisi, alastri, tinggitri, jari, diameter, tinggi;
    double pi = M_PI;

    printf("\n   Masukkan panjang sisi persegi : ");
    scanf("%d", &sisi);
    printf("\n   Masukkan panjang alas segitiga : ");
    scanf("%d", &alastri);
    printf("\n   Masukkan tinggi segitiga : ");
    scanf("%d", &tinggitri);
    printf("\n   Masukkan panjang jari-jari lingkaran : ");
    scanf("%d", &jari);
    printf("\n   Masukkan panjang diameter lingkaran : ");
    scanf("%d", &diameter);
    printf("\n   Masukkan tinggi limas : ");
    scanf("%d", &tinggi);

    float hasilpersegi = sisi*sisi*tinggi/3;
    float hasilsegitiga = tinggitri*alastri*tinggi/2/3;
    float hasiljari = (jari*jari)*tinggi*pi/3;
    float hasildiameter = ((diameter/2)*(diameter/2))*tinggi*pi/3;

    printf("\n\n   Volume limas persegi adalah %0.2f\n", hasilpersegi);
    printf("\n   Volume limas segitiga adalah %0.2f\n", hasilsegitiga);
    printf("\n   Volume kerucut berdasarkan jari-jari adalah %0.2f\n", hasiljari);
    printf("\n   Volume kerucut berdasarkan diameter adalah %0.2f\n", hasildiameter);

    getch();
    yt33();

}
void volbola() {

    system("cls");
    int jari, diameter;
    double pi = M_PI;

    printf("\n   Masukkan panjang jari-jari lingkaran : ");
    scanf("%d", &jari);
    printf("\n   Masukkan panjang diameter lingkaran : ");
    scanf("%d", &diameter);

    float hasiljari = 1.333333*pi*jari*jari*jari;
    float hasildiameter = 1.333333*pi*(diameter/2)*(diameter/2)*(diameter/2);
    printf("\n   Volume bola berdasarkan jari-jari adalah %0.2f", hasiljari);
    printf("\n\n   Volume bola berdasarkan diameter adalah %0.2f", hasildiameter);

    getch();
    yt34();

}

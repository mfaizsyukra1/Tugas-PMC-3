//Muhammad Faiz Syukra
//18320027

#include <stdio.h>
#include <stdlib.h>

int main(){


    char NamaFile[] = "";
    unsigned char MagicNum[2];
    FILE *fpt;


    printf("Ketikkan nama file: "); // Input nama file.
    scanf("%s", NamaFile);

    fpt = fopen(NamaFile, "r");    // Buka file untuk dibaca.

    if (MagicNum == NULL) {
        printf("File tidak bisa dibaca.");
    }
    else {
        fread(MagicNum, 2, 1, fpt);

        if (MagicNum[0] == 0xFF && MagicNum[1] == 0xD8) {   // Memeriksa file signature
            printf("File memiliki ekstensi .jpg");
        }
        else if (MagicNum[0] == 0x25 && MagicNum[1] == 0x50) {
            printf("File memiliki ekstensi .pdf");
        }
        else {
            printf("File memiliki ekstensi bukan .pdf maupun .jpg");
        }
    }
    return(0);
}


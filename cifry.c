#include <stdio.h>

void analyza(int cislo) {
    int pocet = 0;
    int sucet = 0;
    int parne = 0;
    int neparne = 0;
    int nuly = 0;
    int cifra;

    if (cislo == 0) {
        pocet = 1;
        parne = 1;
        nuly = 1;
    } else {
        while (cislo > 0) {
            cifra = cislo % 10;

            pocet++;
            sucet += cifra;

            if (cifra % 2 == 0) {
                parne++;
            } else {
                neparne++;
            }

            if (cifra == 0) {
                nuly++;
            }

            cislo = cislo / 10;
        }
    }

    printf("Pocet cifier: %d\n", pocet);
    printf("Sucet cifier: %d\n", sucet);
    printf("Parne cifry: %d\n", parne);
    printf("Neparne cifry: %d\n", neparne);
    printf("Pocet cifier rovnych 0: %d\n", nuly);
}

int main() {
    int cislo;

    printf("Zadaj cele cislo od 0 do 1000000000: ");

    if (scanf("%d", &cislo) != 1 || cislo < 0 ||
        cislo > 1000000000) {
        printf("Chybny vstup!\n");
        return 1;
    }

    analyza(cislo);

    return 0;
}

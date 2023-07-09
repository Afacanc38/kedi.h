#include <stdio.h>
#include <stdlib.h>
#include <kedi.h>

int main (int argc, char* argv[])
{
    kedi* k = yeni_kedi ("Şakir", 0, TEKIR);
    kedi_bilgi (k);
    rahat_birak (k);

    return 0;
}
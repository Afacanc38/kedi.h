#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <kedi.h>

kedi* yeni_kedi (char* kedi_adi, int yas, enum kedi_cinsi cins)
{
    kedi *i = malloc(sizeof(kedi));
    i->ad = strdup (kedi_adi);
    i->yas = yas;
    i->cins = cins;

    return i;
}

void kedi_bilgi (kedi *k)
{
    printf ("Adı: %s\n", k->ad);
    printf ("Yaşı: %d\n", k->yas);
    printf ("Cinsi: %s\n", kedi_cins_bul(k));
}

char* kedi_cins_bul (kedi *k)
{
    switch (k->cins)
    {
        case TEKIR:
            return "tekir";
        case SIYAM:
            return "siyam";
        default:
            return "diğer";
    }
}

void rahat_birak (kedi *k)
{
    free (k->ad);
    free (k);
}
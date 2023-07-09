enum kedi_cinsi {TEKIR, SIYAM, DIGER};

typedef struct kedi
{
    char* ad;
    int yas;
    enum kedi_cinsi cins;
} kedi;

kedi* yeni_kedi (char* kedi_adi, int yas, enum kedi_cinsi cins);
void kedi_bilgi (kedi *k);
char* kedi_cins_bul (kedi *k);
void rahat_birak (kedi *k);
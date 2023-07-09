# kedi.h
Dinamik olarak bağlanabilir kitaplık denemeleri, aynı zamanda ilk C projem.
## Çalıştırmak için
```
make
make run
```
## kedi_cinsi [enum]
```c
enum kedi_cinsi
{
    TEKIR,
    SIYAM,
    DIGER
};
```
Kedi cinsini belirler.
## kedi [struct]
```c
typedef struct kedi
{
    char* ad;
    int yas;
    enum kedi_cinsi cins;
} kedi;
```
- **ad**: Kedinin adını belirtir.
- **yas**: Yıl biçiminden kedinin yaşını belirtir.
- **cins**: Kedinin cinsini belirtir.
## yeni_kedi [function]
```c
kedi* yeni_kedi (char* kedi_adi, int yas, enum kedi_cinsi cins)
{
    kedi *i = malloc(sizeof(kedi));
    i->ad = strdup (kedi_adi);
    i->yas = yas;
    i->cins = cins;

    return i;
}
```
Bellek yığınında yeni bir kedi oluşturur ve kedinin adresini dönderir.
## kedi_bilgi [function]
```c
void kedi_bilgi (kedi *k)
{
    printf ("Adı: %s\n", k->ad);
    printf ("Yaşı: %d\n", k->yas);
    printf ("Cinsi: %s\n", kedi_cins_bul(k));
}
```
Verilen kedinin kimliğini `stdout`'a yazdırır.
## kedi_cins_bul [function]
```c
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
```
Kedinin cinsini `enum`'dan `char*`'a çevirir.
## rahat_birak [function]
```c
void rahat_birak (kedi *k)
{
    free (k->ad);
    free (k);
}
```
Verilen kediyi bellek yığınından temizler. Bunu yapmayı unutmak bellek sızıntılarına yol açabilir.

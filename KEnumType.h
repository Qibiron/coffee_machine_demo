#ifndef KENUMTYPE_H
#define KENUMTYPE_H


// number all functions
enum class Espresso{
    Espresso1 =11,
    Espresso2 =12
    //...
};

enum class EspressoMacch{
    EspressoMacch1=21,
    EspressoMacch2=22
    //...
};

enum class CaffeCrema{
    CaffeCrema1 = 31,
    CaffeCrema2 = 32
    //...
};


enum class Cappuccino{
    Cappuccino1 =41,
    Cappuccino2 =42
    //...
};

enum class LatteMacchiato{
    LatteMacchiato1 =51,
    LatteMacchiato2 =52
    //...
};

enum class Milchkaffee{
    Milchkaffee1 = 61,
    Milchkaffee2 = 62
    //...
};

enum class Milchschaum{
    Milchschaum1 = 71,
    Milchschaum2 = 72
    //...
};

enum class SpezielleGetraenke{
    Flat_White  =81,
    Heisswasser =82,
    Warme_Milch =83,
    Americano   =84
};

enum class StartStop{
    stop = 0,
    start = 1
};


// zurück
// ok/bestätigung
// menü


enum class Zweitassen{
    ein = 101,
    zwei = 102
};

enum class Kaffeestaerke{
    schwach =201,
    normal = 202,
    stark =203};

enum class Tassengroesse{
    klein = 301,
    mittelgross = 302,
    gross =303};


// faviroit



enum class KButtonFunction{
    Espresso = 1001,
    EspressoMacch =1002,
    CaffeCrema = 1003,
    Cappuccino = 1004,
    LatteMacchiato = 1005,
    Milchkaffee = 1006,
    Milchschaum =1007,
    SpezielleGetraenke = 1008,
    StartStop = 1009,
    //zurueck =1011,
    //ok =1012,
    //menue = 1013,
    Zweitassen = 1014,
    Kaffeestaerke = 1015,
    Tassengroesse =1016,
    //favorit
};




#endif // KENUMTYPE_H

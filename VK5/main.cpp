
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;
bool DEBUG = false;

int main()
{
    Notifikaattori n;

    Seuraaja A("Alpo");
    Seuraaja B("Bertta");
    Seuraaja C("Cesilia");
    Seuraaja D("Daavid");

    n.lisaa(&A);
    n.lisaa(&B);
    n.lisaa(&C);
    n.lisaa(&D);

    n.tulosta();

    n.postita("Tama on viesti 1");

    n.poista(&A);

    n.postita("Tama on viesti 2");

    n.tulosta();

    return 0;
}

#include <iostream>

#include "Alarme.h"
#include "Capteur.h"

using namespace std;

using namespace nsDigicode;

void testAlarme (void)
{
    Alarme alarme;
    alarme.declencher();
}// testAlarme ()

void testCapteur (void)
{
    Capteur capteur;
    while (true) {
        if (capteur.detecter() != 0) break;
    }
}// testCapteur ()


int main(void)
{
    //cout << "A vous de compléter le code  !!!"  << endl;
    //testAlarme();
    //testCapteur();

    return 0;
}

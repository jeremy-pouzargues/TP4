#include <iostream>
#include <unistd.h>
using namespace std;
#include "Alarme.h"



void nsDigicode::Alarme::declencher()
{
    while (true)
    {
        cout << "Alarme : la porte n'a pas été refermée" << endl;
        sleep(1);
    }
}//declencher ()

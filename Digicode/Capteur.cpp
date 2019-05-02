#include <iostream>
using namespace std;
#include "kbhit.h"
#include "Capteur.h"


int nsDigicode::Capteur::detecter ()
{
    if (_kbhit() == 0)
        return 0;
    return 1;
}//detecter ()

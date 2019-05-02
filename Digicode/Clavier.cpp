#include <iostream>
using namespace std;
#include "kbhit.h"
#include "Clavier.h"


int nsDigicode::Clavier::saisirChiffre()
{
    if (_kbhit() == 0)
        return -1;
    else {
        return _kbhit() - '0';
    }

}//saisirChiffre ()

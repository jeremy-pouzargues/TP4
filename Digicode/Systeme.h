#ifndef SYSTEME_H
#define SYSTEME_H

#include "InterfaceDeSaisie.h"
#include "Porte.h"
#include "Alarme.h"
#include "BD.h"
#include "Archivage.h"
#include "Chrono.h"
namespace nsDigicode {
    class Systeme
    {
    private:
        InterfaceDeSaisie myInterface;
        Porte myPorte;
        Alarme myAlarm;
        BD myBD;
        Archivage myArchive;
        Chrono myChrono;
    public:
        Systeme(int delaiCode, int delaiPorte, int nbChiffres);
    };
}


#endif // SYSTEME_H


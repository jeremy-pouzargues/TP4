#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Chrono.h"
#include "Capteur.h"

namespace nsDigicode {



    class Porte : public ObjetTempo
    {
    private:
        Capteur myCapteur;
        bool fermer ();

    public:
        Porte(Chrono* pchrono, int delai);
        bool ouvrir ();

    };

} /* ns_Digicode */

#endif // PORTE_H

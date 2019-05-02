#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    private:
        int myDelai;

    protected:
        int myAttente;
        Chrono* mypChrono;

    public:
        ObjetTempo (Chrono* pchrono, int delai);
        Chrono* getChrono();
        void finTempo();
        int getDelai();


    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */

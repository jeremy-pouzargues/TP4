#include <iostream>
#include "Systeme.h"





namespace nsDigicode {

    Systeme::Systeme(int delaiCode, int delaiPorte, int nbChiffres) :
        myInterface(&myChrono, delaiCode, nbChiffres), myPorte(&myChrono, delaiPorte)

    {
        int c;
        while(true)
        {
            myArchive.archiver(c = myInterface.saisieCode());
            cout<<c<<endl;
            if(myBD.verifier (c))
            {
                if(!myPorte.ouvrir())
                    myAlarm.declencher();
            }
        }
    }



}


#include "char_manager.h"

CHAR_MANAGER::CHAR_MANAGER()
{

}

CHAR_MANAGER::~CHAR_MANAGER()
{

}

 void CHAR_MANAGER::Shaman()
    {
        cout << "Shamanilor." << endl;
        cout << "Samanii sunt caractere versatile, bazate pe magie, putand provoca daune mari cu ajutorul magiilor ofensive si in acelasi timp, imbunatatindu-si capabilitatile proprii sau ale aliatilor lor cu ajutorul magiilor de buff. Avand aceste competente unice, samanii pot fi indispensabili in jocul de grup, dar pot sa joace si singuri daca doresc.\n" << endl;
        cout << "Apasati [ENTER] pentru a continua..." << endl;
        getch();
        
    }
    
 void CHAR_MANAGER::Razboinic()
    {
        cout << "Razboinicilor." << endl;
        cout << "Datorita competentelor, armelor si abilitatii lor de a purta armuri grele, ei joaca un rol important in lupta de aproape. Aspiratiile lor vin mai ales din puterea fizica si din spiritul lor calm si echilibrat. In functie de abilitatile alese, razbunarea lor poate fi distrugatoare folosindu-se de armele manevrate cu ambele maini sau prin indemanarea utilizarii unei sabii si a scutului, ce pot pune piedici oricarui adversar.\n" << endl;
        cout << "Apasati [ENTER] pentru a continua..." << endl;
        getch();
    };
    
 void CHAR_MANAGER::Sura()
    {
      cout << "Sura." << endl;
      cout << "Sura sunt Luptatorii care au obtinut puteri magice cand au decis sa creasca in bratele lor Samburii malefici ai Raului. Din aceasta cauza sunt maestrii in lupte prin manuirea sabiei cauzand de asemenea chiar si damage de la distanta folosindu-se de magie. Dedicati abilitatilor lor, Sura isi pot dezvolta farmecele folosite in atac si pot spori puterea magica.\n" << endl;
      cout << "Apasati [ENTER] pentru a continua..." << endl;
      getch();
    };
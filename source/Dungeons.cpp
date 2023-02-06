#include "Dungeons.h"
#include <SFML/Audio.hpp>

DUNGEONS::DUNGEONS()
{
}

DUNGEONS::~DUNGEONS()
{

}

void DUNGEONS::crossRoads()
{

    system("cls");
    cout << "Alegeti Temnita in care doriti sa intrati." << std::endl;
    cout << " 1 [padure] Padurea Fermecata" << endl;
    cout << " 2 [oras] Orasul Pierdut" << endl;
    cout << " 3 [castel] Castelul Bantuit" << endl;
    cout << "Scrie numele sau numarul temnitei:\n";
    int alege;
    cin >> alege;
    // Temnita alegeenum = static_cast<Temnita>(alege);
    // Temnita alegeenum = (Temnita)alege;

    switch (alege)
    {
    case padure:
        padureFermecata();
        break;
    case oras:
        orasulPierdut();
        break;
    case castel:
        castelulBantuit();
        break;
    default:
        cout << "Eroare la alegere. Alege din nou.\n" << endl;
        crossRoads();
        return;
        break;
    }
    // system("cls");
}

void DUNGEONS::padureFermecata()
{
    system("cls");
    cout << "Ati ales drumul catre Padurea Fermecata." << std::endl;
}

void DUNGEONS::orasulPierdut()
{
    system("cls");
    cout << "Ati ales drumul catre Orasul Pierdut." << std::endl;
}

void DUNGEONS::castelulBantuit()
{
    system("cls");
    cout << "Ati ales drumul catre Castelul Bantuit." << std::endl;
}
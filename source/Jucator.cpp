#include "Jucator.h"

JUCATOR::JUCATOR(string nume) : nume(nume)
{
    std::cout << "Jucator creat\n";
}

JUCATOR::~JUCATOR()
{
std::cout << "Jucator stears\n";

}

void JUCATOR::alegeNume()
{
    system("cls");
    cout << "Scrie numele jucatorului:\n";
    cin >> nume;
    system("cls");
}


void JUCATOR::selectRasa()
{

    cout << "Alege rasa: " << endl;
    cout << " [1] Shaman" << endl;
    cout << " [2] Razboinic" << endl;
    cout << " [3] Sura" << endl;
    cout << "Alege numarul rasei!\n";
    int alege;
    cin >> alege;
    system("cls");
    switch (alege)
    {
    case 1:
        cout << "Bun venit " << getNume() << " din neamul "; 
        Shaman();
        break;
    case 2:
        cout << "Bun venit " << getNume() << " din neamul ";
        Razboinic();
        break;
    case 3:
        cout << "Bun venit " << getNume() << " din neamul ";
        Sura();
        break;
    default:
        system("cls");
        cout << "Eroare la alegere. Alege din nou.\n" << endl;
        selectRasa();
        return;
        break;
    }
    // cout << "\n";
}
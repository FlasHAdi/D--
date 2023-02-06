#include "Start.h"

START::START()
{
    std::cout << "start creat\n";
}

START::~START()
{
    std::cout << "start stears\n";
}

void START::intro()
{
    // PlaySound ("Main_Menu.wav", NULL, SND_SYNC);
    // PlaySound("*.wav", GetModuleHandle(NULL), SND_FILENAME);
    for(int i=0; i<101; i++)
    {
    system("cls");
    cout << "\rLoading: " << i << " % ";
        if(i==100)
        {    
            cout << "jocul a pornit\n";
        }
    }
    
    cout << "Bun venit in lumea D&C Fight RPG!" << endl;
    cout << "Vrei sa joci? (da/nu) ";
    string respuns;
    cin >> respuns;
    if (respuns != "da")
    {
        cout << "La revedere!\n" << endl;
        cout << "End Game!" << endl;
        exit(0);
    }
}

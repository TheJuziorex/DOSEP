#include <iostream>
#include <Windows.h>

using namespace std;

int loadingBar(){
    system("cls");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar = 177, barTwo = 219;
    cout << "\n\n\n\t\t\t\tStarting DOSEP...";
    cout << "\n\n\n\t\t\t\t";
    for(int i = 0; i<25;i++){
        cout << (char)bar;
    }
    cout << "\r";
    cout << "\t\t\t\t";
    for(int i = 0; i <25; i++){
        cout << (char)barTwo;
        Sleep(150);
    }
    system("cls");
    cout << endl;
    return 0;
}
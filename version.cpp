#include <iostream>
#include <Windows.h>

using namespace std;

int verSys(){
    system("cls");
    SetConsoleCP(837);
    SetConsoleOutputCP(837);
    int dTwo = 219;
    for(int i = 0; i < 7; i++){
        cout << (char)dTwo;
    }
    cout << "    ";
    for(int i = 0; i < 10; i++){
        cout << (char)dTwo;
    }    
    cout << "  ";
    for(int i = 0; i < 8; i++){
        cout << (char)dTwo;
    }
    cout << "  ";
    for(int i = 0; i < 6; i++){
        cout << (char)dTwo;
    }
    cout << "  ";
    for(int i = 0; i < 8; i++){
        cout << (char)dTwo;
    }
    cout << "\n";
}
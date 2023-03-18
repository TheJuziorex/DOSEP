#include <iostream>
#include <windows.h>

using namespace std;

int diskpart(){
    while(true){
        string choice;
        cout << "\t\t\t\t\tDOSEP disk Options\n";
        cout << "\t\t\t\t\tCurrent fixed disk drive: 1\n";
        cout << "\t\t\t\t\tChoose one of the following:\n\n\n\n";
        cout << "\t\t\t\t\t1. Create DOSEP partition or Logical DOSEP Drive\n";
        cout << "\t\t\t\t\t2. Set active partition\n";
        cout << "\t\t\t\t\t3. Delete partition or Logical DOSEP Drive\n";
        cout << "\t\t\t\t\t4. Display partition information\n";
        cout << "\t\t\t\t\t5. Exit\n";
        cout << "\t\t\t\t\tEnter choice:";
        cin >> choice;
        if(choice == "5"){
            system("cls");
            break;
        }
        if(choice != "5"){
            continue;
        }
    }
}
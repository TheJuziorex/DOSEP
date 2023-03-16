#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "loading.cpp"

using namespace std;

void help(){
    ifstream helpFile;
    string a;
    helpFile.open("help.txt");
    while(!helpFile.eof()){
        getline(helpFile,a,'\n');
        cout << a << endl;
    }
    helpFile.close();
}

int main(){
    loadingBar();
    while(true){
        string recomm;
        cout << "C:/>";
        cin >> recomm;
        if(recomm == "C:" || recomm == "c:"){
            continue;
        }
        else if(recomm == "help"){
            help();
        }
        else if(recomm == "exit"){
            exit(1);
        }
    }
}


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "loading.cpp"
#include "diskpart.cpp"
#include "version.cpp"
#include "filecreator.cpp"

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
        else if(recomm == "fdisk"){
            diskpart();
        }
        else if(recomm == "ver"){
            verSys();
        }
        else if(recomm == "mkdir"){
            std::wcout << L"Folder name: ";
            std::wstring dirname;
            std::wcin >> dirname;
            create_directory(dirname);
        }
        else if(recomm == "cf"){
            std::wcout << L"File name: ";
            std::wstring filename;
            std::wcin >> filename;

            std::wcout << L"Extension name: ";
            std::wstring extension;
            std::wcin >> extension;

            create_file(filename, extension);
        }
    }
}


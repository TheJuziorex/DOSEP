#include <iostream>
#include <Windows.h>

void create_directory(const std::wstring& dirname) {
    if (CreateDirectoryW(dirname.c_str(), NULL)) {
        std::wcout << L"Folder was created " << dirname << std::endl;
    } else {
        std::wcout << L"Failed to create folder " << dirname << std::endl;
    }
}

void create_file(const std::wstring& filename, const std::wstring& extension) {
    std::wstring filepath = filename + L"." + extension;
    HANDLE hFile = CreateFileW(filepath.c_str(), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

    if (hFile != INVALID_HANDLE_VALUE) {
        std::wcout << L"File was created succesfully!" << filepath << std::endl;
        CloseHandle(hFile);
    } else {
        std::wcout << L"Failed to create file" << filepath << std::endl;
    }
}
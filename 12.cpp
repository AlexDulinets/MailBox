//Основной файл int main
#include "Header.h"
using namespace std;

int main()
{
    fstream file;
    char path[] = "text.txt";
    file.open(path, fstream::in | fstream::out | fstream::app);
    /*if (!file.is_open()) {
        cout << "файл не найден!";
        exit(1);
    }*/

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    EMAIL email;
    const int n = 60;
    BOX mas[n];
    cout << endl;
    Input(email, n, file);
    Output(email, n);
    Sort(email, n);
    Search(email, n, file);
    return(0);
}



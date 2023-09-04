#include<iostream>
#include<string.h>
#include<Windows.h>
#include<iomanip>
#include <fstream>

#define maxbox 60

using namespace std;
struct BOX
{
    char* vzysk= new char;
    char* tekst = new char;
    int day;
    int month;
    int year;
    char* beg= new char;
    //char* z = new char;
    public:
   /* ~BOX() {
        delete[] vzysk;
        delete[] tekst;
        delete[] beg;
        cout << "\n\t\aDEV:Вызов деструктора\n";
    }
   */ 
};
struct EMAIL
{
    BOX box[maxbox];
};



char* readFile(std::fstream& file);
void Input(EMAIL&email, int n, std::fstream& file);
void Output(EMAIL& email, int n);
void Sort(EMAIL& email,  int n);
void Search(EMAIL& email,   int n, std::fstream& file);

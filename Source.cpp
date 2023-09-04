
#include "Header.h"
int m = 0;
using namespace std;
//// ���������� ��������� �����
std::istream& operator >> (std::istream& file, char* A) {
    char* str = new char;
    file.getline(A, 100);
    //cout << "\n\n ------------------------------������ � ������ �� �����.\n\n";
    return file;
}
//// ���������� ��������� �����
int operator << (int ii, std::fstream& file) {
    char* str = new char;
    file.getline(str, 100);
    return std::atoi(str);
}

char* readFile(std::fstream& file) {
    char* str = new char;
    file.getline(str, 60);
    return str;
}

void Input(EMAIL& email, int n, std::fstream& file)
{
    char* z;
    z = new char[3];

    for (int i = m; i < m + 1; i++) {

      

        cout << "���������� ��������� " << ":" << "\n";
        cout << "������� ������������ �����������: ";
        
        
      
       file >> email.box[i].vzysk;
       cout << email.box[i].vzysk << "\n";
       cout << "������� ����� ���������: ";
        
        file >> email.box[i].tekst;
        cout << email.box[i].tekst << "\n";
        cout << "������� ���� ��������� (����� ������): " << "\n";
        file >> email.box[i].day;
        cout << email.box[i].day << "\n";
        file >> email.box[i].month;
        cout << email.box[i].month << "\n";
        file >> email.box[i].year;
        cout << email.box[i].year << "\n";
        
        while (email.box[i].day > 31 || email.box[i].day <= 0 ||
            email.box[i].month > 12 || email.box[i].month <= 0 ||
            email.box[i].year > 2021 || email.box[i].year <= 0)
        {
            cout << "������������ ������ ����. ������� ���������:";
            file >> email.box[i].day;
            cout << email.box[i].day;

            file >> email.box[i].month;
            cout << email.box[i].month;

            file >> email.box[i].year;
            cout << email.box[i].year;
        }
        file >> email.box[59].beg;
        cout << "-------------------------------------------------------------------------------------------------------" << email.box[59].beg << "\n";
       

        cout << "�� ������ �������� ��� ���������? ��/���: ";
        file >> email.box[57].beg;
        cout << email.box[57].beg << "\n\n";
        if (strcmp(email.box[57].beg, "���") == 0)
        {
            m = m + 1;
            break;
        }
        else { m = m + 1; }

    }

}

void Output(EMAIL& email, int n)
{
    cout << left << setw(30) << "|*********�����������**********";
    cout << left << setw(40) << "|**********����� ���������***************";
    cout << "|********���� ���������********\n";
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        cout << left << setw(30) << email.box[i].vzysk;
        cout << "|";
        cout << left << setw(40) << email.box[i].tekst;
        cout << "|";
        printf("%02d", email.box[i].day);
        cout << ".";
        printf("%02d", email.box[i].month);
        cout << "." << email.box[i].year << "\n";
    }
}

void Sort(EMAIL& email, int n)
{
    cout << "\n";
    cout << left << setw(70) << "*************************************�� �������� ���� �����������:*************************************";
    cout << "\n";
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (email.box[j].year < email.box[j + 1].year)
            {
                BOX tmp = email.box[j];
                email.box[j] = email.box[j + 1];
                email.box[j + 1] = tmp;

            }
        }
    }

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (email.box[j].year == email.box[j + 1].year)
            {
                if (email.box[j].month < email.box[j + 1].month)
                {
                    BOX tmp = email.box[j];
                    email.box[j] = email.box[j + 1];
                    email.box[j + 1] = tmp;
                }
            }
        }
    }

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (email.box[j].month == email.box[j + 1].month)
            {
                if (email.box[j].day < email.box[j + 1].day)
                {
                    BOX tmp = email.box[j];
                    email.box[j] = email.box[j + 1];
                    email.box[j + 1] = tmp;
                }
            }
        }
    }

    cout << left << setw(30) << "|*********�����������**********";
    cout << left << setw(40) << "|**********����� ���������***************";
    cout << "|********���� ���������********\n";

    for (int i = 0; i < m; i++)
    {
        cout << "|";
        cout << left << setw(30) << email.box[i].vzysk;
        cout << "|";
        cout << left << setw(40) << email.box[i].tekst;
        cout << "|";
        printf("%02d", email.box[i].day);
        cout << ".";
        printf("%02d", email.box[i].month);
        cout << "." << email.box[i].year << "\n";
    }
}

void Search(EMAIL& email, int n, std::fstream& file)
{
    
    cout <<"\n����� �� �����������: ";

  
    file >> email.box[56].beg;
    cout << email.box[56].beg;
   
    cout << "\n";

    cout << left << setw(30) << "|*********�����������**********";
    cout << left << setw(40) << "|**********����� ���������***************";
    cout << "|********���� ���������********\n";

    for (int i = 0; i < m; i++)
    {
        if (strcmp(email.box[i].vzysk, email.box[56].beg) == 0)
        {
            {
                cout << "|";
                cout << left << setw(30) << email.box[i].vzysk;
                cout << "|";
                cout << left << setw(40) << email.box[i].tekst;
                cout << "|";
                printf("%02d", email.box[i].day);
                cout << ".";
                printf("%02d", email.box[i].month);
                cout << "." << email.box[i].year << "\n";

            }
        }
    }
}


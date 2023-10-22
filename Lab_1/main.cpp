#include <iostream>
#include "Keeper.h"
#include "Base.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    Keeper keeper;
    while (1)
    {
        string choice; // ���������� ������
        cout << "\n\n��������, ��� �� ������ �������:\n";
        cout << "1 - �������� �������\n"
            << "2 - �������� �������� ���� ���������\n"
            << "3 - �������� �������� ���������� ��������\n"
            << "4 - ������� �������\n"
            << "5 - �������� �������\n"
            << "6 - ��������� ������ �� �����\n"
            << "7 - ��������� ������ � ����" << endl;

        try
        {
            cin >> choice;
            if (choice != "7" and choice != "6" and choice != "5" and choice != "4" and choice != "3" and
                choice != "2" and choice != "1") throw "Errand";
        }
        catch (const std::exception& e)
        {
            cout << "�������� ����" << endl;
        }
        catch (const char* mssg)
        {
            cout << "�������� �����" << endl;
            break;
        }

        if (choice == "1")
        {
            keeper.Set();
        }

        else if (choice == "2")
        {
            keeper.Get();
        }

        else if (choice == "3")
        {
            keeper.GetChoice();
        }

        else if (choice == "4")
        {
            keeper.Delete();
        }

        else if (choice == "5")
        {
            keeper.Change();
        }

        else if (choice == "6")
        {
            //  keeper.Load();
        }

        else
        {
            // keeper.Save();
        }
    }
}

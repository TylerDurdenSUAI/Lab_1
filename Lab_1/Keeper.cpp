#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Base.h"

using namespace std;

// ����� Keeper
// ����������� �� ���������
Keeper::Keeper()
{
    this->array = new Base * [1];
    this->size = 1;
    this->countElement = 0;

    cout << "������ ����������� �� ��������� ������ - Keeper" << endl;
}

// ����������� c ����������
Keeper::Keeper(int size)
{
    this->array = new Base * [size];
    this->size = size;
    this->countElement = 0;

    cout << "������ ����������� � ���������� ������ - Keeper" << endl;
}

// ����������� �����������
Keeper::Keeper(const Keeper& K)
{
    this->array = new Base * [K.size];
    this->size = K.size;
    this->countElement = K.countElement;

    for (int count = 0; count < countElement; count++)
    {
        this->array[count] = K.array[count];
    }

    cout << "������ ����������� ����������� ������ - Keeper" << endl;
}

// ����������
Keeper::~Keeper()
{
    delete[] array;

    cout << "������ ���������� ������ - Keeper" << endl;
}

// �������� ������
// ����� ���������� ��������
void Keeper::Set()
{
    cout << "��������, ��� �� ������ ��������:" << endl;
    cout << "1 - ����� \n"
        << "2 - �������� \n"
        << "3 - ����������" << endl;
    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 3) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� �����" << endl;
    }

    // ���� ������ ����������
    if (this->countElement == this->size)
    {
        Base** buf_array = new Base * [size]; // ������� �������� ������ ��� ����������� ��������

        for (int count = 0; count < size; count++)
        {
            buf_array[count] = this->array[count]; // �������� ��������
        }

        delete[] this->array; // ������� ������ ��� ������

        // �������� ����� ������ ��� ��� ������
        try
        {
            this->array = new Base * [size * 2]; // �������� ���. ������
        }
        catch (const std::exception& e)
        {
            std::cerr << "������ �� ������� ��������" << endl;
            exit(1);
        }

        this->size = size * 2; // ����������� ������ �������

        // �������� ������ ��������
        for (int count = 0; count < countElement; count++)
        {
            this->array[count] = buf_array[count]; // �������� ��������
        }
    }

    if (stoi(choice) == 1)
    {
        Base* ptr_book = new Book();
        array[countElement++] = ptr_book;
        ptr_book->Set();
    }

    else if (stoi(choice) == 2)
    {
        Base* ptr_studybook = new StudyBook();
        array[countElement++] = ptr_studybook;
        ptr_studybook->Set();
    }

    else
    {
        Base* ptr_chancellery = new Chancellery();
        array[countElement++] = ptr_chancellery;
        ptr_chancellery->Set();
    }
}

// ����� ��������� ���������
void Keeper::Get()
{
    cout << "������:" << endl;
    for (int count = 0; count < countElement; count++)
    {
        array[count]->Get();
    }
}

// ����� ��������� ���������
void Keeper::GetChoice()
{
    cout << "������� �����, ������� �� ������ �������: ";
    string id;
    try
    {
        cin >> id;
        for (int i = 0; i < id.length(); i++)
        {
            if (id[i] >= 'A' and id[i] <= 'Z' or id[i] >= 'a' and id[i] <= 'z') throw "Error";
        }
        if (stoi(id) > countElement or stoi(id) < 0) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� �����" << endl;
    }

    array[stoi(id)]->Get();
}

// ����� ��������
void Keeper::Delete()
{
    cout << "������� �����, ������� �� ������ �������: ";
    string id;
    try
    {
        cin >> id;
        for (int i = 0; i < id.length(); i++)
        {
            if (id[i] >= 'A' and id[i] <= 'Z' or id[i] >= 'a' and id[i] <= 'z') throw "Error";
        }
        if (stoi(id) > countElement or stoi(id) < 0) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� �����" << endl;
    }

    *this -= stoi(id);
}

Keeper& Keeper::operator-=(int element)
{
    // �������� ��� ��������

    for (int count = element; count < countElement - 1; count++)
    {
        int buf_count = count + 1;
        array[count] = array[buf_count];
    }
    this->countElement--;
    return *this;
}

// ����� ���������
void Keeper::Change()
{
    cout << "������� �����, ������ �������� �� ������ ��������: ";
    string id;
    try
    {
        cin >> id;
        for (int i = 0; i < id.length(); i++)
        {
            if (id[i] >= 'A' and id[i] <= 'Z' or id[i] >= 'a' and id[i] <= 'z') throw "Error";
        }
        if (stoi(id) > countElement or stoi(id) < 0) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� �����" << endl;
    }

    array[stoi(id)]->Change();
}


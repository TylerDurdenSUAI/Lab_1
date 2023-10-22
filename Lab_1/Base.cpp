#include <iostream>
#include "Base.h"

using namespace std;

Base::Base()
{
    cout << "������ ����������� ������ Base" << endl;
}
Base::Base(int size)
{
    cout << "������ ����������� � ���������� ������ Base" << endl;
}
Base::Base(const Base& B)
{
    cout << "������ ����������� ����������� ������ Base" << endl;
}
Base::~Base()
{
    cout << "������ ���������� ������ Base" << endl;
}

// ����� Book
// ����������� �� ���������
Book::Book()
{
    this->name = "NONE"; // ��������
    this->author = "NONE"; // �����
    this->year = "NONE"; // ��� �������
    this->annotation = "NONE"; // ���������
    this->genre = "NONE"; // ����
    this->volume_of_page = "NONE"; // ����� �������
    this->cost = "NONE"; // ����

    cout << "������ ����������� �� ��������� ������ - Book" << endl;
}

// ����������� � ����������
Book::Book(string name, string author, string year, string annotation, string genre, string volume_of_page, string cost)
{
    this->name = name; // ��������
    this->author = author; // �����
    this->year = year; // ��� �������
    this->annotation = annotation; // ���������
    this->genre = genre; // ����
    this->volume_of_page = volume_of_page; // ����� �������
    this->cost = cost; // ����

    cout << "������ ����������� � ���������� ������ - Book" << endl;
}

// ����������� �����������
Book::Book(const Book& B)
{
    this->name = B.name; // ��������
    this->author = B.author; // �����
    this->year = B.year; // ��� �������
    this->annotation = B.annotation; // ���������
    this->genre = B.genre; // ����
    this->volume_of_page = B.volume_of_page; // ����� �������
    this->cost = B.cost; // ����

    cout << "������ ����������� ����������� ������ - Book" << endl;
}

// ����������
Book::~Book()
{
    cout << "������ ���������� ������ - Book" << endl;
}

// �������� ������
// ����� ��������� ��������
void Book::Set()
{
    string buf;
    getline(cin, buf);

    cout << "������� ������ � �����:" << endl;

    cout << "��������: ";
    getline(cin, this->name);
    //cin >> this->name;

    cout << "�����: ";
    getline(cin, this->author);
    //cin >> this->author;

    cout << "��� �������: ";
    getline(cin, this->year);
    //cin >> year;

    cout << "���������: ";
    getline(cin, this->annotation);
    //cin >> this->annotation;

    cout << "����: ";
    getline(cin, this->genre);
    //cin >> this->genre;

    cout << "����� �������: ";
    getline(cin, this->volume_of_page);
    //cin >> this->volume_of_page;

    cout << "����: ";
    getline(cin, this->cost);
    //cin >> this->cost;
}

// ����� ��������� ��������
void Book::Get()
{
    cout << "~~~���������� � �����~~~" << endl;
    cout << "��������: " << this->name << endl;
    cout << "�����: " << this->author << endl;
    cout << "��� �������: " << this->year << endl;
    cout << "���������: " << this->annotation << endl;
    cout << "����: " << this->genre << endl;
    cout << "����� �������: " << this->volume_of_page << endl;
    cout << "����: " << this->cost << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// ����� �������� ������
void Book::Delete()
{
    this->name = "NONE"; // ��������
    this->author = "NONE"; // �����
    this->year = "NONE"; // ��� �������
    this->annotation = "NONE"; // ���������
    this->genre = "NONE"; // ����
    this->volume_of_page = "NONE"; // ����� �������
    this->cost = "NONE"; // ����
}

// ����� ��������� ������
void Book::Change()
{
    cout << "��������, ��� �� ������ ��������:" << endl;
    cout << "1 - �������� \n"
        << "2 - ����� \n"
        << "3 - ��� ������� \n"
        << "4 - ��������� \n"
        << "5 - ���� \n"
        << "6 - ����� ������� \n"
        << "7 - ���� \n"
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 7) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� ����" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "��������: ";
        getline(cin, this->name);
        //cin >> this->name;
    }

    else if (stoi(choice) == 2)
    {
        cout << "�����: ";
        getline(cin, this->author);
        //cin >> this->author;
    }

    else if (stoi(choice) == 3)
    {
        cout << "��� �������: ";
        getline(cin, this->year);
        //cin >> year;
    }

    else if (stoi(choice) == 4)
    {
        cout << "���������: ";
        getline(cin, this->annotation);
        //cin >> this->annotation;
    }

    else if (stoi(choice) == 5)
    {
        cout << "����: ";
        getline(cin, this->genre);
        //cin >> this->genre;
    }

    else if (stoi(choice) == 6)
    {
        cout << "����� �������: ";
        getline(cin, this->volume_of_page);
        //cin >> this->volume_of_page;
    }

    else
    {
        cout << "����: ";
        getline(cin, this->cost);
        //cin >> this->cost;
    }
}

// ����� StudyBook
// ����������� �� ���������
StudyBook::StudyBook()
{
    this->name = "NONE"; // ��������
    this->author = "NONE"; // �����
    this->year = "NONE"; // ��� �������
    this->educational_institution = "NONE"; // ������� ���������
    this->year_of_study = "NONE"; // ��� ��������
    this->volume_of_page = "NONE"; // ����� �������
    this->cost = "NONE"; // ����

    cout << "������ ����������� �� ��������� ������ - StudyBook" << endl;
}

// ����������� � ����������
StudyBook::StudyBook(string name, string author, string year, string educational_institution, string year_of_study, string volume_of_page, string cost)
{
    this->name = name; // ��������
    this->author = author; // �����
    this->year = year; // ��� �������
    this->educational_institution = educational_institution; // ������� ���������
    this->year_of_study = year_of_study; // ��� ��������
    this->volume_of_page = volume_of_page; // ����� �������
    this->cost = cost; // ����

    cout << "������ ����������� � ���������� ������ - StudyBook" << endl;
}

// ����������� �����������
StudyBook::StudyBook(const StudyBook& S)
{
    this->name = S.name; // ��������
    this->author = S.author; // �����
    this->year = S.year; // ��� �������
    this->educational_institution = S.educational_institution; // ���������
    this->year_of_study = S.year_of_study; // ����
    this->volume_of_page = S.volume_of_page; // ����� �������
    this->cost = S.cost; // ����

    cout << "������ ����������� ����������� ������ - StudyBook" << endl;
}

// ����������
StudyBook::~StudyBook()
{
    cout << "������ ���������� ������ - StudyBook" << endl;
}

// �������� ������
// ����� ��������� ��������
void StudyBook::Set()
{
    string buf;
    getline(cin, buf);

    cout << "������� ������ � �����:" << endl;

    cout << "��������: ";
    getline(cin, this->name);
    //cin >> this->name;

    cout << "�����: ";
    getline(cin, this->author);
    //cin >> this->author;

    cout << "��� �������: ";
    getline(cin, this->year);
    //cin >> year;

    cout << "������� ���������: ";
    getline(cin, this->educational_institution);
    //cin >> educational_institution;

    cout << "��� ��������: ";
    getline(cin, this->year_of_study);
    //cin >> year_of_study;

    cout << "����� �������: ";
    getline(cin, this->volume_of_page);
    //cin >> this->volume_of_page;

    cout << "����: ";
    getline(cin, this->cost);
    //cin >> this->cost;
}

// ����� ��������� ��������
void StudyBook::Get()
{
    cout << "~~~���������� �� ��������~~~" << endl;
    cout << "��������: " << this->name << endl;
    cout << "�����: " << this->author << endl;
    cout << "��� �������: " << this->year << endl;
    cout << "������� ���������: " << this->educational_institution << endl;
    cout << "��� ��������: " << this->year_of_study << endl;
    cout << "����� �������: " << this->volume_of_page << endl;
    cout << "����: " << this->cost << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// ����� �������� ������
void StudyBook::Delete()
{
    this->name = "NONE"; // ��������
    this->author = "NONE"; // �����
    this->year = "NONE"; // ��� �������
    this->educational_institution = "NONE"; // ���������
    this->year_of_study = "NONE"; // ����
    this->volume_of_page = "NONE"; // ����� �������
    this->cost = "NONE"; // ����
}

// ����� ��������� ������
void StudyBook::Change()
{
    cout << "��������, ��� �� ������ ��������:" << endl;
    cout << "1 - �������� \n"
        << "2 - ����� \n"
        << "3 - ��� ������� \n"
        << "4 - ������� ��������� \n"
        << "5 - ��� �������� \n"
        << "6 - ����� ������� \n"
        << "7 - ���� \n"
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 7) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� ����" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "��������: ";
        getline(cin, this->name);
        //cin >> this->name;
    }

    else if (stoi(choice) == 2)
    {
        cout << "�����: ";
        getline(cin, this->author);
        //cin >> this->author;
    }

    else if (stoi(choice) == 3)
    {
        cout << "��� �������: ";
        getline(cin, this->year);
        //cin >> year;
    }

    else if (stoi(choice) == 4)
    {
        cout << "������� ���������: ";
        getline(cin, this->educational_institution);
        //cin >> educational_institution;
    }

    else if (stoi(choice) == 5)
    {
        cout << "��� ��������: ";
        getline(cin, this->year_of_study);
        //cin >> year_of_study;
    }

    else if (stoi(choice) == 6)
    {
        cout << "����� �������: ";
        getline(cin, this->volume_of_page);
        //cin >> this->volume_of_page;
    }

    else
    {
        cout << "����: ";
        getline(cin, this->cost);
        //cin >> this->cost;
    }
}

// ����� Chancellery
// ����������� �� ���������
Chancellery::Chancellery()
{
    this->type = "NONE"; // ��������
    this->color = "NONE"; // �����
    this->appointment = "NONE"; // ��� �������
    this->cost = "NONE"; // ���������

    cout << "������ ����������� �� ��������� ������ - Chancellery" << endl;
}

// ����������� � ����������
Chancellery::Chancellery(string type, string color, string appointment, string cost)
{
    this->type = type; // ��������
    this->color = color; // �����
    this->appointment = appointment; // ��� �������
    this->cost = cost; // ���������

    cout << "������ ����������� � ���������� ������ - Chancellery" << endl;
}

// ����������� �����������
Chancellery::Chancellery(const Chancellery& C)
{
    this->type = C.type; // ��������
    this->color = C.color; // �����
    this->appointment = C.appointment; // ��� �������
    this->cost = C.cost; // ���������

    cout << "������ ����������� ����������� ������ - Chancellery" << endl;
}

// ����������
Chancellery::~Chancellery()
{
    cout << "������ ���������� ������ - Chancellery" << endl;
}

// �������� ������
// ����� ��������� ��������
void Chancellery::Set()
{
    string buf;
    getline(cin, buf);

    cout << "������� ������ � ����������:" << endl;

    cout << "���: ";
    getline(cin, this->type);
    //cin >> this->type;

    cout << "����: ";
    getline(cin, this->color);
    //cin >> this->color;

    cout << "����������: ";
    getline(cin, this->appointment);
    //cin >> appointment;

    cout << "����: ";
    getline(cin, this->cost);
    //cin >> this->cost;
}

// ����� ��������� ��������
void Chancellery::Get()
{
    cout << "~~~���������� � ����������~~~" << endl;
    cout << "���: " << this->type << endl;
    cout << "����: " << this->color << endl;
    cout << "����������: " << this->appointment << endl;
    cout << "����: " << this->cost << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// ����� �������� ������
void Chancellery::Delete()
{
    this->type = "NONE"; // ��������
    this->color = "NONE"; // �����
    this->appointment = "NONE"; // ��� �������
    this->cost = "NONE"; // ���������
}

// ����� ��������� ������
void Chancellery::Change()
{
    cout << "��������, ��� �� ������ ��������:" << endl;
    cout << "1 - ��� \n"
        << "2 - ���� \n"
        << "3 - ���������� \n"
        << "4 - ���� \n"
        << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 4) throw "Error";
    }
    catch (const std::exception& e)
    {
        cout << "������������ ����" << endl;
    }
    catch (const char* mssg)
    {
        cout << "�������� ����" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "���: ";
        getline(cin, this->type);
        //cin >> this->type;
    }

    else if (stoi(choice) == 2)
    {
        cout << "����: ";
        getline(cin, this->color);
        //cin >> this->color;
    }

    else if (stoi(choice) == 3)
    {
        cout << "����������: ";
        getline(cin, this->appointment);
        //cin >> appointment;
    }

    else
    {
        cout << "����: ";
        getline(cin, this->cost);
        //cin >> this->cost;
    }
}

// ������� GetType

int Book::TypeID()
{
    return 1;
}
int StudyBook::TypeID()
{
    return 2;
}
int Chancellery::TypeID()
{
    return 3;
}

string Book::Save(int count)
{
    if (count == 0) return this->name;
    else if (count == 1) return this->author;
    else if (count == 2) return this->year;
    else if (count == 3) return this->annotation;
    else if (count == 4) return this->genre;
    else if (count == 5) return this->volume_of_page;
    else if (count == 6) return this->cost;
}

string StudyBook::Save(int count)
{
    if (count == 0) return this->name;
    else if (count == 1) return this->author;
    else if (count == 2) return this->year;
    else if (count == 3) return this->educational_institution;
    else if (count == 4) return this->year_of_study;
    else if (count == 5) return this->volume_of_page;
    else if (count == 6) return this->cost;
}

string Chancellery::Save(int count)
{
    if (count == 0) return this->type;
    else if (count == 1) return this->color;
    else if (count == 2) return this->appointment;
    else if (count == 3) return this->cost;
}

void Book::Load(int count, string line)
{
    if (count == 0) this->name = line;
    else if (count == 1) this->author = line;
    else if (count == 2) this->year = line;
    else if (count == 3) this->annotation = line;
    else if (count == 4) this->genre = line;
    else if (count == 5) this->volume_of_page = line;
    else if (count == 6) this->cost = line;
}

void StudyBook::Load(int count, string line)
{
    if (count == 0) this->name = line;
    else if (count == 1) this->author = line;
    else if (count == 2) this->year = line;
    else if (count == 3) this->educational_institution = line;
    else if (count == 4) this->year_of_study = line;
    else if (count == 5) this->volume_of_page = line;
    else if (count == 6) this->cost = line;
}

void Chancellery::Load(int count, string line)
{
    if (count == 0) this->type = line;
    else if (count == 1) this->color = line;
    else if (count == 2) this->appointment = line;
    else if (count == 3) this->cost = line;
}

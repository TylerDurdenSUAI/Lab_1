#pragma once
#ifndef BASE_H
#define BASE_H

#include <string>
using namespace std;

// �������� �����
class Base
{
    // �������� ������
public:
    Base();
    Base(int size);
    Base(const Base& B);
    ~Base();
    virtual void Set() = 0; // �������� �������
    virtual void Get() = 0; // �������� �������
    virtual void Delete() = 0; // ������� �������
    virtual void Change() = 0; // �������� ������
    virtual void Load(int count, string line) = 0; // ��� �������� ������ �� �����
    virtual string Save(int count) = 0; // ��� �������� ������ � ����
    virtual int TypeID() = 0; // ����� ����� ������� ���  ������� ��� �������������
};

class Book :public Base
{
private:
    string name; // ��������
    string author; // �����
    string year; // ��� �������
    string annotation; // ���������
    string genre; // ����
    string volume_of_page; // ����� �������
    string cost; // ����

public:
    // �������� ������������� � �����������
    Book(); // ����������� �� ���������
    Book(string name, string author, string year, string annotation, string genre, string volume_of_page, string cost); // ����������� � ����������
    Book(const Book& B); // ����������� �����������
    ~Book(); // ����������

    // �������� �������� �������
    void Set() override; // ���������� ������ � �����
    void Get() override; // ��������na� ������ � �����
    void Delete() override; // �������� ������ � �����
    void Change() override; // ��������� ������ � �����
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class StudyBook :public Base
{
private:
    string name; // ��������
    string author; // �����
    string year; // ��� �������
    string educational_institution; // ������� ���������
    string year_of_study; // ��� ��������
    string volume_of_page; // ����� �������
    string cost; // ����

public:
    // �������� ������������� � �����������
    StudyBook(); // ����������� �� ���������
    StudyBook(string name, string author, string year, string educational_institution, string year_of_study, string volume_of_page, string cost); // ����������� � ����������
    StudyBook(const StudyBook& S); // ����������� �����������
    ~StudyBook(); // ����������

    // �������� �������� �������
    void Set() override; // ���������� ������ �� ��������
    void Get() override; // ��������� ������ �� ��������
    void Delete() override; // �������� ������ �� ��������
    void Change() override; // ��������� ������ �� ��������
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class Chancellery :public Base
{
private:
    string type; // ���
    string color; // ����
    string appointment; // ����������
    string cost; // ����

public:
    // �������� ������������� � �����������
    Chancellery(); // ����������� �� ���������
    Chancellery(string type, string color, string appointment, string cost); // ����������� � ����������
    Chancellery(const Chancellery& C); // ����������� �����������
    ~Chancellery(); // ����������

    // �������� �������� �������
    void Set() override; // ���������� ������ � ����������
    void Get() override; // ��������� ������ � ����������
    void Delete() override; // �������� ������ � ����������
    void Change() override; // ��������� ������ � ����������
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

#endif
#pragma once

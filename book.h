#ifndef BOOK_H_INCLUDED         //��������� �������������: ������������ �������� ���������� ��� ��������������� ������������� ���������.
#define BOOK_H_INCLUDED         //��������� �������������: ����� ���������������� (������) ��� ������������� ���������.

using namespace std;            //������������ ����������� ���.

#include<iostream>              //������������ ���� � ��������, ��������� � ����������� ��� ����������� �����-������ � ����� ���������������� C++.
#include<string>                //����� � �������� � ����������� ��� ����������� ������ �� �������� � ����� ���������������� C++.

class Book                      //���������� ������ Book.
{
private:                        //����������� ������� private: ������ ������ ������ ������ (�.�. ��������-������ ������� ������) � ������� (friend) ������� ������ - ��� ��������, ��� � �������.
    string name;                //���������� ����� �����.
    string author;
    int countPage;
public:                         //����������� ������� public: ������ ������ ����, ��� ����� ����������� ������� ������.
    Book();                                                                                     //���������� ������������ ��� ����������.
    Book(string NameBook, string AuthorBook, int NumPageBook);                                  //���������� ������������ � �����������.
    void setName(string NameBook);                                                              //���������� ������ setName.
    void setAuthor(string AuthorBook);                                                          //���������� ������ setAuthor.
    void setCountPage(int NumPageBook);                                                         //���������� ������ setCountPage.
    string getName() const;                                                                     //���������� ������ getName.
    string getAuthor() const;                                                                   //���������� ������ getAuthor.
    int getCountPage() const;                                                                   //���������� ������ getCountPage.
    void print() const;                                                                         //���������� ������ print.
    Book(const Book &pp);                                                                       //���������� ������������ �����������.
    Book operator = (const Book &pp);                                                           //���������� ���������� ��������� ������������ (=).
    bool const operator < (const Book &pp) const;                                               //���������� ���������� ��������� ������ (<).
    bool const operator > (const Book &pp) const;                                               //���������� ���������� ��������� ������ (>).
    bool const operator <= (const Book &pp) const;                                              //���������� ���������� ��������� ������ ��� ����� (<=).
    bool const operator >= (const Book &pp) const;                                              //���������� ���������� ��������� ������ ��� ����� (>=).
    bool const operator == (const Book &pp) const;                                              //���������� ���������� ��������� ��������� (==).
    bool const operator != (const Book &pp) const;                                              //���������� ���������� ��������� ����������� (!=).
    friend ostream& operator << (ostream &pp1, const Book &pp2)                                 //���������� ���������� ��������� ������ � ����� (<<).
    {                                                                                           //�������� ����� friend ����� �������� ������������ ������ ������, ����� ���� ����� ���� ������� ����������������� � ��������� ������� ������ (private, protected).
        pp1 << '(' << pp2.name << ", " << pp2.author << ", " << pp2.countPage << ')';
        return pp1;
    }
    friend istream& operator >> (istream &pp1, Book &pp2)                                       //���������� ���������� ��������� ����� �� ������ (>>).
    {                                                                                           //ostream � istream � ������� ������: ���������� ��� ���������� ������� ������ (cout) � ����� (cin).
        cout<<"������� ������ � �����.\nName: ";
        cin>>pp2.name;
        cout<<"Author: ";
        cin>>pp2.author;
        cout<<"CountPage: ";
        cin>>pp2.countPage;
        return pp1;
    }
    ~Book();                                                                                    //���������� �����������.
};

#endif // BOOK_H_INCLUDED                                                                       //��������� �������������: ����� ����� �������� ����������.

using namespace std;                                                        //������������ ����������� ���.

#include"book.h"                                                            //����� � �������� � �����������, ������� �� ������� ��� ������ � ���.

Book::Book()                                                                //����������� ��� ����������.
    {
        setName("");
        setAuthor("");
        setCountPage(0);
    }
Book::Book(string NameBook, string AuthorBook, int NumPageBook)             //����������� � �����������.
    {
        setName(NameBook);
        setAuthor(AuthorBook);
        setCountPage(NumPageBook);
    }
void Book::setName(string NameBook)                                         //���������� ������ setName,
    {
        this->name = NameBook;
    }
void Book::setAuthor(string AuthorBook)                                     //���������� ������ setAuthor.
    {
        this->author = AuthorBook;
    }
void Book::setCountPage(int NumPageBook)                                    //���������� ������ setCountPage.
    {
        if(NumPageBook>=0)
        this->countPage = NumPageBook;
    }
string Book::getName() const                                                //���������� ������ getName.
    {
        return name;
    }
string Book::getAuthor() const                                              //���������� ������ getAuthor.
    {
        return author;
    }
int Book::getCountPage() const                                              //���������� ������ getCountPage.
    {
        return countPage;
    }
void Book::print() const                                                    //���������� ������ print.
    {
        cout<<"Name: "<<name<<"."<<endl;
        cout<<"Author: "<<author<<"."<<endl;
        cout<<"CountPage: "<<countPage<<"."<<endl;
    }
Book::Book(const Book &pp)                                                  //����������� �����������.
    {
        this->name = pp.name;
        this->author = pp.author;
        this->countPage = pp.countPage;
    }
Book Book::operator = (const Book &pp)                                                                         //���������� ��������� ������������ (������ Book - ��� ������������� ��������, ������ Book - ��������� �� ��, ��� ������ �������� ����������� � ������ Book, �������� �����������, ����� ������ ���� �������� ��������� ������ ����).
    {
        if(&pp == this)                                                                                        //��������� �������� ������������ p=p.
            return *this;
        return Book(this->name = pp.name,this->author = pp.author,this->countPage = pp.countPage);             //������������ ����� ������ ������ ������� (������ ������ ������������� ���� ������� ������).
    }
bool const Book::operator < (const Book &pp) const                                                             //���������� ��������� ������ (<).
    {
        return this->countPage < pp.countPage;
    }
bool const Book::operator > (const Book &pp) const                                                             //���������� ��������� ������ (>).
    {
        return this->countPage > pp.countPage;
    }
bool const Book::operator <= (const Book &pp) const                                                            //���������� ��������� ������ ��� ����� (<=).
    {
        return this->countPage <= pp.countPage;
    }
bool const Book::operator >= (const Book &pp) const                                                            //���������� ��������� ������ ��� ����� (>=).
    {
        return this->countPage >= pp.countPage;
    }
bool const Book::operator == (const Book &pp) const                                                            //���������� ��������� ��������� (==).
    {
        return this->name == pp.name,this->author == pp.author,this->countPage == pp.countPage;
    }
bool const Book::operator != (const Book &pp) const                                                            //���������� ��������� ����������� (!=).
    {
        return !(this->name == pp.name,this->author == pp.author,this->countPage == pp.countPage);
    }
Book::~Book()                                                                                                  //���������� ��� ���������� (��� �� ���������, �.�. �� ���������� ������������ ������).
    {

    }

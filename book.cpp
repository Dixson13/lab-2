using namespace std;                                                        //пространство стандартных имён.

#include"book.h"                                                            //класс с методами и переменными, который мы создали для работы с ним.

Book::Book()                                                                //конструктор без параметров.
    {
        setName("");
        setAuthor("");
        setCountPage(0);
    }
Book::Book(string NameBook, string AuthorBook, int NumPageBook)             //конструктор с параметрами.
    {
        setName(NameBook);
        setAuthor(AuthorBook);
        setCountPage(NumPageBook);
    }
void Book::setName(string NameBook)                                         //реализация метода setName,
    {
        this->name = NameBook;
    }
void Book::setAuthor(string AuthorBook)                                     //реализация метода setAuthor.
    {
        this->author = AuthorBook;
    }
void Book::setCountPage(int NumPageBook)                                    //реализация метода setCountPage.
    {
        if(NumPageBook>=0)
        this->countPage = NumPageBook;
    }
string Book::getName() const                                                //реализация метода getName.
    {
        return name;
    }
string Book::getAuthor() const                                              //реализация метода getAuthor.
    {
        return author;
    }
int Book::getCountPage() const                                              //реализация метода getCountPage.
    {
        return countPage;
    }
void Book::print() const                                                    //реализация метода print.
    {
        cout<<"Name: "<<name<<"."<<endl;
        cout<<"Author: "<<author<<"."<<endl;
        cout<<"CountPage: "<<countPage<<"."<<endl;
    }
Book::Book(const Book &pp)                                                  //конструктор копирования.
    {
        this->name = pp.name;
        this->author = pp.author;
        this->countPage = pp.countPage;
    }
Book Book::operator = (const Book &pp)                                                                         //перегрузка оператора присваивания (первый Book - тип возвращаемого значения, второй Book - указывает на то, что данный оператор принадлежит к классу Book, оператор константный, чтобы нельзя было изменить параметры внутри него).
    {
        if(&pp == this)                                                                                        //исключает операцию присваивания p=p.
            return *this;
        return Book(this->name = pp.name,this->author = pp.author,this->countPage = pp.countPage);             //присваивание полей одного класса другому (левому классу присваиваются поля правого класса).
    }
bool const Book::operator < (const Book &pp) const                                                             //перегрузка оператора меньше (<).
    {
        return this->countPage < pp.countPage;
    }
bool const Book::operator > (const Book &pp) const                                                             //перегрузка оператора больше (>).
    {
        return this->countPage > pp.countPage;
    }
bool const Book::operator <= (const Book &pp) const                                                            //перегрузка оператора меньше или равно (<=).
    {
        return this->countPage <= pp.countPage;
    }
bool const Book::operator >= (const Book &pp) const                                                            //перегрузка оператора больше или равно (>=).
    {
        return this->countPage >= pp.countPage;
    }
bool const Book::operator == (const Book &pp) const                                                            //перегрузка оператора равенства (==).
    {
        return this->name == pp.name,this->author == pp.author,this->countPage == pp.countPage;
    }
bool const Book::operator != (const Book &pp) const                                                            //перегрузка оператора неравенства (!=).
    {
        return !(this->name == pp.name,this->author == pp.author,this->countPage == pp.countPage);
    }
Book::~Book()                                                                                                  //деструктор без реализации (она не требуется, т.к. не выделяется динамическая память).
    {

    }

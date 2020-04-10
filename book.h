#ifndef BOOK_H_INCLUDED         //директива препроцессора: осуществляет условную компиляцию при неопределённости символической константы.
#define BOOK_H_INCLUDED         //директива препроцессора: задаёт макроопределение (макрос) или символическую константу.

using namespace std;            //пространство стандартных имён.

#include<iostream>              //заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++.
#include<string>                //класс с методами и переменными для организации работы со строками в языке программирования C++.

class Book                      //объявления класса Book.
{
private:                        //модификатор доступа private: доступ открыт самому классу (т.е. функциям-членам данного класса) и друзьям (friend) данного класса - как функциям, так и классам.
    string name;                //объявление полей класс.
    string author;
    int countPage;
public:                         //модификатор доступа public: доступ открыт всем, кто видит определение данного класса.
    Book();                                                                                     //объявление конструктора без параметров.
    Book(string NameBook, string AuthorBook, int NumPageBook);                                  //объявление конструктора с параметрами.
    void setName(string NameBook);                                                              //объявление метода setName.
    void setAuthor(string AuthorBook);                                                          //объявление метода setAuthor.
    void setCountPage(int NumPageBook);                                                         //объявление метода setCountPage.
    string getName() const;                                                                     //объявление метода getName.
    string getAuthor() const;                                                                   //объявление метода getAuthor.
    int getCountPage() const;                                                                   //объявление метода getCountPage.
    void print() const;                                                                         //объявление метода print.
    Book(const Book &pp);                                                                       //объявление конструктора копирования.
    Book operator = (const Book &pp);                                                           //объявление перегрузки оператора присваивания (=).
    bool const operator < (const Book &pp) const;                                               //объявление перегрузки оператора меньше (<).
    bool const operator > (const Book &pp) const;                                               //объявление перегрузки оператора больше (>).
    bool const operator <= (const Book &pp) const;                                              //объявление перегрузки оператора меньше или равно (<=).
    bool const operator >= (const Book &pp) const;                                              //объявление перегрузки оператора больше или равно (>=).
    bool const operator == (const Book &pp) const;                                              //объявление перегрузки оператора равенства (==).
    bool const operator != (const Book &pp) const;                                              //объявление перегрузки оператора неравенства (!=).
    friend ostream& operator << (ostream &pp1, const Book &pp2)                                 //реализация перегрузки оператора вывода в поток (<<).
    {                                                                                           //Ключевое слово friend перед функцией используется внутри класса, чтобы дать право этой функции взаимодействовать с закрытыми членами класса (private, protected).
        pp1 << '(' << pp2.name << ", " << pp2.author << ", " << pp2.countPage << ')';
        return pp1;
    }
    friend istream& operator >> (istream &pp1, Book &pp2)                                       //реализация перегрузки оператора ввода из потока (>>).
    {                                                                                           //ostream и istream — базовые классы: необходимы для реализации потоков вывода (cout) и ввода (cin).
        cout<<"Введите данные о книге.\nName: ";
        cin>>pp2.name;
        cout<<"Author: ";
        cin>>pp2.author;
        cout<<"CountPage: ";
        cin>>pp2.countPage;
        return pp1;
    }
    ~Book();                                                                                    //объявление деструктора.
};

#endif // BOOK_H_INCLUDED                                                                       //директива препроцессора: конец ветки условной компиляции.

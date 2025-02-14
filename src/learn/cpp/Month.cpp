#include <iostream>

using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

public:
    Month()
    {
        monthNumber = 1;
        name = "January";
    }

    Month(string nm)
    {
        name = nm;
        setNumber(name);
    }

    Month(int number)
    {
        if (number >= 1 && number <= 12)
        {
            monthNumber = number;
        }
        setName(monthNumber);
    }

    void setName(int number)
    {
        if (number == 1)
            name = "January";
        else if (number == 2)
            name = "February";
        else if (number == 3)
            name = "March";
        else if (number == 4)
            name = "April";
        else if (number == 5)
            name = "May";
        else if (number == 6)
            name = "June";
        else if (number == 7)
            name = "July";
        else if (number == 8)
            name = "August";
        else if (number == 9)
            name = "September";
        else if (number == 10)
            name = "October";
        else if (number == 11)
            name = "November";
        else if (number == 12)
            name = "December";
        else
            cout << "Invalid number!!" << endl;
    }

    void setNumber(string nm)
    {
        if (nm == "January")
            monthNumber = 1;
        else if (nm == "February")
            monthNumber = 2;
        else if (nm == "March")
            monthNumber = 3;
        else if (nm == "April")
            monthNumber = 4;
        else if (nm == "May")
            monthNumber = 5;
        else if (nm == "June")
            monthNumber = 6;
        else if (nm == "July")
            monthNumber = 7;
        else if (nm == "August")
            monthNumber = 8;
        else if (nm == "September")
            monthNumber = 9;
        else if (nm == "October")
            monthNumber = 10;
        else if (nm == "November")
            monthNumber = 11;
        else if (nm == "December")
            monthNumber = 12;
        else
            cout << "Invalid String!!" << endl;
    }

    int getNumber()
    {
        return monthNumber;
    }

    string getName()
    {
        return name;
    }

    Month Month::operator++();
    Month Month::operator--();

    friend ostream &operator<<(ostream &, const Month &);
    friend istream &operator>>(istream &, Month &);
};

Month Month::operator++()
{
    monthNumber++;
    if (monthNumber == 13)
    {
        monthNumber = 1;
        name = "January";
    }
    setName(monthNumber);

    return *this;
}

/*
prefix overload:
Class::operator--()

postfix overload:
Class::operator--(int) //Note dummy value

*/
Month Month::operator--()
{
    monthNumber--;
    if (monthNumber == 0)
    {
        monthNumber = 12;
        name = "December";
    }
    setName(monthNumber);
    return *this;
}

ostream &operator<<(ostream &strm, const Month &obj)
{
    strm << "Month Name: " << obj.name << "\nNumber:" << obj.monthNumber;
    return strm;
}

istream &operator>>(istream &strm, Month &obj)
{

    cout << "Enter in month number: ";
    strm >> obj.monthNumber;
    cout << "Enter in month name: ";
    strm >> obj.name;

    return strm;
}
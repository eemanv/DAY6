#include <iostream>
using namespace std;
float studio(string, int);
float Apartment(string, int);

main()
{
    while (1)
    {
        string month;
        int days;
        cout << "Enter the month : ";
        cin >> month;
        cout << "Enter the the number of days to stay : ";
        cin >> days;
        float output;
        float output1;
        output = studio(month, days);
        output1 = Apartment(month, days);
        cout << "Studio : " << output << '$' << endl;
        cout << "Apartment : " << output1 << '$' << endl;
    }
}
float studio(string month, int days)
{
    float price;
    if (month == "may" || month == "october")
    {
        if (days > 7 && days <= 14)
        {
            price = days * 50;
            price = price - price * 0.05;
        }
        else if (days > 14)
        {
            price = days * 50;
            price = price - price * 0.3;
        }
    }

    if (month == "june" || month == "september")
    {
        if (days <= 14)
        {
            price = days * 75.20;
        }
        else if (days > 14)
        {
            price = days * 75.20;
            price = price - price * 0.2;
        }
    }
    if (month == "july" || month == "august")
    {
        if (days >= 14)
        {
            price = days * 76;
        }
    }
    return price;
}
float Apartment(string month, int days)
{
    float price;
    if (month == "may" || month == "october")
    {
        if (days <= 14)
        {
            price = days * 65;
        }
        else if (days > 14)
        {
            price = days * 65;
            price = price - price * 0.1;
        }
    }
    if (month == "june" || month == "september")
    {
        if (days <= 14)
        {
            price = days * 68.70;
        }
        else if (days > 14)
        {
            price = days * 68.70;
            price = price - price * 0.1;
        }
    }
    if (month == "july" || month == "august")
    {
        if (days <= 14)
        {
            price = days * 77;
            
        }
        else if (days > 14)
        {
            price = days * 77;
            price = price - price * 0.1;
        }
    }
    return price;
}

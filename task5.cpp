#include <iostream>
using namespace std;

float Weekday(string fruit , string day , float quantity);
float Weekend(string fruit , string day , float quantity);


main ()
{
    string fruit;
    string day;
    float quantity;
    float func1;
    float func2;

    cout << "Fruit name: ";
    cin >> fruit;
    cout << "Week Day: ";
    cin >> day;
    cout << "Quantity: ";
    cin >> quantity;


    if (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes")
    {
      if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" )
      {
        func1= Weekday(fruit , day , quantity);
        cout << "Final price will be: " << func1;
      }
     if (day == "Saturday" || day == "Sunday")
     {
        func2 = Weekend(fruit , day , quantity);
        cout << "final price will be: " << func2;
     }
    }
    else
    {
       cout << "Invalid Information";
    }
       
}

float Weekend(string fruit , string day , float quantity)
{
    float price;
    if ( day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            price = quantity * 2.70;
        }
        if (fruit == "apple")
        {
            price = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            price = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            price = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            price = quantity * 3.00;
        }
        if (fruit == "pineapple")
        {
            price = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            price = quantity * 4.20;
        }

        return price;
    }
}

   float Weekday(string fruit , string day , float quantity)
{
         float price;
         if ( day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" ||day == "Friday" )
           {
            if (fruit == "banana")
             {
                price = quantity * 2.50;
             }
            if (fruit == "apple")
             {
                 price = quantity * 1.20;
             }
             if (fruit == "orange")
             {
                price = quantity * 0.85;
             }
            if (fruit == "grapefruit")
             {
                price = quantity * 1.45;
             }
            if (fruit == "kiwi")
             {
                price = quantity * 2.70;
             }
            if (fruit == "pineapple")
              {
                price = quantity * 5.50;
              }
            if (fruit == "grapes")
            {
                price = quantity * 3.85;
            }
           }

    return price;
}

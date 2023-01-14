#include <iostream>
using namespace std;

float serviceCode(char letter , float mins , char time1);

main ()
{
    char letter;
    float mins;
    char time1;
    float func;
    cout << "Enter which type of customer you are..Select (r/p): " ;
    cin >> letter;
    if (letter =='p')
    {
        cout << "(Press 'D' for day time or Press 'N' for night time) call: ";
        cin >> time1;
    }
    cout << "Enter number of mins you used the service: ";
    cin >> mins;

    func= serviceCode(letter , mins , time1);
    cout << "The charges are: $" << func ;
}
float serviceCode(char letter , float mins , char time1 )
{
    float price;

    if (letter == 'r' &&  mins <=50)
    {
       price = 10.00;
    }
    else
    {
        price = 10.00 + ((mins - 50)*0.20) ;
    }

    if (letter == 'p' && time1 == 'D')
    {
        if (mins <=75)
        {
            price = 25.00;
        }
        else 
        {
            price = 25.00 + ((mins -75)*0.10) ;
        }
    }
    if (letter == 'p' && time1 == 'N')
    {
        if (mins <=100)
        {
            price = 25.00;
        }
        else 
        {
            price = 25.00 + ((mins-100)* 0.05);
        }
    } 

        return price;
}
   

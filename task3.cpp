#include <iostream>
using namespace std;

string ZodiacSign(int date , string month);

main ()
{
    int date;
    string month;
    string func;

    cout << "Enter date: ";
    cin >> date;
    cout << "Enter month: ";
    cin >> month;

    func = ZodiacSign(date , month);
    cout << "Your Zodiac Sign is ' " << func << " '";

}
string ZodiacSign(int date , string month)
{
    string sign;
    if ((month == "March" && (date >=21 && date <=31)) || (month == "April" && (date >=1 && date <=19)))
    {
        sign = "Aries";
    }
    else if ((month == "April" && (date >=20 && date <=30)) || (month == "May" && (date >=1 && date <=20)))
    {
        sign = "Taurus";
    }
    else if ((month == "May" && (date >=21 && date <=31)) || (month == "June" && (date >=1 && date <=20)))
    {
        sign = "Gemini";
    }
    else if ((month == "June" && (date >=21 && date <=30)) || (month == "July" && (date >=1 && date <=22)))
    {
        sign = "Cancer";
    }
    else if ((month == "July" && (date >=23 && date <=31)) || (month == "August" && (date >=1 && date <=22)))
    {
        sign = "Leo";
    }
    else if ((month == "August" && (date >=23 && date <=31)) || (month == "September" && (date >=1 && date <=22)))
    {
        sign = "Virgo";
    }
    else if ((month == "September" && (date >=23 && date <=30)) || (month == "October" && (date >=1 && date <=22)))
    {
       sign = "Libra";
    }
    else if ((month == "October" && (date >=23 && date <=31)) || (month == "November" && (date >=1 && date <=21)))
    {
       sign = "Scorpio";
    }
    else if ((month == "November" && (date >=22 && date <=30)) || (month == "December" && (date >=1 && date <=21)))
    {
      sign = "Sagittarius";
    }
    else if ((month == "December" && (date >=22 && date <=31)) || (month == "January" && (date >=1 && date <=19)))
    {
      sign = "Capricon";
    }
    else if ((month == "January" && (date >=20 && date <=31)) || (month == "February" && (date >=1 && date <=18)))
    {
      sign = "Aquarius";
    }
    else if ((month == "February" && (date >=19 && date <=29)) || (month == "March" && (date >=1 && date <=20)))
    {
      sign = "Pisces";
    }
     
      return sign;

    }  
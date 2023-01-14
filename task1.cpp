#include <iostream>
using namespace std;

string func1(string temp , string humidity);

main ()
{
    string temp;
    string humidity;
    string func;
    
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Enter humidity: ";
    cin >> humidity;

    func = func1(temp , humidity);
    cout << "Activity will be: " << func ;

}
string func1(string temp , string humidity)
{
    string result;

    if (temp == "warm" && humidity == "dry")
    {
        result = "Play tennis";
    }
    else if (temp == "warm" && humidity == "humid")
    {
        result = "Swim";
    }
    else if (temp == "cold" && humidity == "dry")
    {
        result = "Play BasketBall";
    }
    else if (temp == "cold" && humidity == "humid")
    {
        result = "Watch tv";
    }
      return result;
}
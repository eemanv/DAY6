#include <iostream>
using namespace std;

string totalMarks(float totalmarks , string grade , float percent);

main ()
{
    float s1;
    float s2;
    float s3;
    float s4;
    float s5;
    float totalmarks;
    string name;
    string grade;
    float percent;
    string func;

    cout << "Enter Name:";
    cin >> name;
    cout << "Enter subject1 marks: ";
    cin >> s1;
    cout << "Enter subject2 marks: ";
    cin >> s2;
    cout << "Enter subject3 marks: ";
    cin >> s3;
    cout << "Enter subject4 marks: ";
    cin >> s4;
    cout << "Enter subject5 marks: ";
    cin >> s5;
    
    totalmarks= s1+ s2+ s3+ s4 + s5;
    cout << "Total marks: " << totalmarks << endl ;

    func = totalMarks(totalmarks , grade , percent);
    cout << "Your grade is '" << func << "'";

}
string totalMarks( float totalmarks , string grade , float percent)
{

    percent = ((totalmarks)/500)*100;
    cout << "percentage: " << percent << endl;

    if (percent >90 && percent <=100)
    {
        grade = "A+";
    }
    else if (percent >80 && percent <=90 )
    {
        grade = "A";
    }
    else if (percent >70 && percent <=80)
    {
        grade = "B+";
    }
    else if (percent >60 && percent <=70 )
    {
        grade = "B";
    }
    else if (percent >50 && percent <=60)
    {
        grade = "C";
    }
    else if (percent >=40 && percent <=50)
    {
        grade = "D";
    }
    else if (percent < 40)
    {
        grade = "F";
    }

    return grade;

}
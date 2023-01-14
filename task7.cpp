#include <iostream>
using namespace std;


int Diff(int examHour, int examMin, int arrivalHour, int arrivalMinute);

main()
{
    int examHour, examMin, arrivalHour, arrivalMinute, diffFirstDigit, diffSecondDigit;
    cout << "Exam starting time (hours): ";
    cin >> examHour;
    cout << "Exam starting time (minutes): ";
    cin >> examMin;
    cout << "Student hour of arrival (hours): ";
    cin >> arrivalHour;
    cout << "Student minutes of arrival: ";
    cin >> arrivalMinute;

    int diff = Diff(examHour, examMin, arrivalHour, arrivalMinute);
    
    if (diff < 0)
    {
        diff = 0  - diff;
        if (diff >= 1)
        {
            if (diff <= 30)
            {
                cout << "On Time" << endl;
                cout << diff << " minutes before exam" << endl;
            }
            else if (diff > 30 && diff < 60)
            {
                cout << "Early" << endl;
                cout << diff << " minutes before the exam" << endl;
            }
            else if (diff >= 60)
            {
                int diffHour = diff/60;
                int diffMinutes = diff - diffHour*60;
                if (diffMinutes < 10)
                {
                    diffFirstDigit = 0;
                    diffSecondDigit = diffMinutes;
                }
                else if (diffMinutes >=10)
                {
                    diffFirstDigit = diffMinutes/10;
                    diffSecondDigit = diffMinutes%10;
                }
                cout << "Early" << endl;

                cout << diffHour << ":" << diffFirstDigit << diffSecondDigit << " hours before exam" << endl;
            }
        }
    }
    else if (diff > 0)
    {
        if (diff >= 1)
        {
            if (diff >=60)
            {
                int diffHour = diff/60;
                int diffMinutes = diff - diffHour*60;
                if (diffMinutes < 10)
                {
                    diffFirstDigit = 0;
                    diffSecondDigit = diffMinutes;
                }
                else if (diffMinutes >=10)
                {
                    diffFirstDigit = diffMinutes/10;
                    diffSecondDigit = diffMinutes % 10;
                }
                cout << "Late" << endl;
                cout << diffHour << ":" << diffFirstDigit << diffSecondDigit << " hours after exam" << endl; 
            }
            else if (diff < 60)
            {
                cout << "Late" << endl;
                cout << diff << " minutes after exam" << endl;
            }
        }
    }
    else if (diff == 0)
    {
        cout << "On time" << endl;
    }

}


int Diff(int examHour, int examMin, int arrivalHour, int arrivalMinute)
{
    int diff;
    int examMinutesOverall = examHour*60 + examMin;
    int arrivalMinutesOverall = arrivalHour*60 + arrivalMinute;
    diff = arrivalMinutesOverall - examMinutesOverall;
    return diff;
}
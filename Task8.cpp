#include <iostream>
using namespace std;
void output(int, int, int);

main()
{
    while (1)
    {
        int x;
        int y;
        int h;
        cout << "Enter point of h : ";
        cin >> h;
        cout << "Enter coordinates of x : ";
        cin >> x;
        cout << "Enter coordinates of y : ";
        cin >> y;
        output(x, y, h);
    }
}

void output(int x, int y, int h)
{
    if ((x > 0 && x < 3 * h && y > 0 && y < h) || (x > h && x < 2 * h && y > 0 && y < 4 * h))
    {
        cout << "point is inside" << endl;
    }
    else if ((x >= 0 && x <= 3 * h && y >= 0 && y <= h) || (x >= h && x <= 2 * h && y >= 0 && y <= 4 * h))
    {
        cout << "point is on border" << endl;
    }
    else
    {
        cout << "point is outside" << endl;
    }
}
//Bresenham's_Line_Drawing
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x_start,y_start,x_end,y_end,dx,dy,dx2,dy2,di;

    cout<<"\nEnter value of x_start and y_start:\n";//x_start=30,y_start=20;
    cin>>x_start>>y_start;
    cout<< x_start<<" " << y_start;

    cout<<"\nEnter value of x_end and y_end :\n";//x_end=40,y_end=28
    cin>>x_end>>y_end;
    cout<< x_end <<" "<<y_end<< "\n";

    dx = x_end - x_start;
    dy = y_end - y_start;

    dx2 = 2 * dx;
    dy2 = 2* dy;
    di = dy2 - dx;

    while(x_start != x_end && y_start != y_end)
    {
        if(di >= 0)
        {
            di = di + dy2 -dx2;
            y_start += 1;
            x_start += 1;
            cout<< "Pk("<< x_start <<","<< y_start << ")\n";
        }
        else
        {
            di = di + dy2;
            y_start = y_start;
            x_start += 1;
            cout<< "Pk("<< x_start <<","<< y_start << ")\n";
        }
    }
    return 0;
}

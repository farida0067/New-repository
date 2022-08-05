//MidPoint_circle_drawing
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,x1,y1,pi,r,n;

    cout<<"Enter the value of x and y : \n";//x=0,y=0
    cin>>x1>>y1;

    cout<<"Enter the value of r : \n";//10
    cin>>r;
    pi = 1 - r;
    cout<< "\n";

    x = 0;
    y = r;
    n=0;

    while(x != y)
    {
        if(pi>=0)
        {

            x += 1;
            y -= 1;
            pi = pi + 2 * x + 1 - 2*y;
            cout<< "Pk("<< x <<","<< y<< ")\n";
        }
        else if(pi<0)
        {

            x += 1;
            y = y;
            pi = pi + 2 * x + 1;
            cout<< "Pk("<< x <<","<< y<< ")\n";
        }
    }
    return 0;
}




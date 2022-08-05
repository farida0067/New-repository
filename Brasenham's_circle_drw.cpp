//Brasenham's_circle_drawing
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,x1,y1,pi,r,n;


    cout<<"Enter the value of x and y : \n";//x=0,y=0
    cin>>x1>>y1;

    cout<<"Enter the value of r : \n";//r=20
    cin>>r;
    pi = 3 - 2*r;
    cout<< "\n";

    x = 0,y=r,n=0;
    while(x != y)
    {
        if(pi>=0)
        {
            pi = pi + 4 * (x - y) + 10;
            cout<< "Pk("<< x <<","<< y<< ")\n";
            x += 1;
            y -= 1;

        }
        else if(pi<0)
        {
            pi = pi + 4 * x + 6;
            cout<< "Pk("<< x <<","<< y<< ")\n";
            x += 1;
            y = y;
        }
        if(x==y)
        {
            cout<< "Pk("<< x <<","<< y<< ")\n";
        }
    }
    return 0;
}



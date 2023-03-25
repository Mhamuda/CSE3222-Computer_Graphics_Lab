#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void bezierCurve(int x[4],int y[4])
{
    double put_x,put_y,u;

    for(u=0;u<=1;u+=0.0001)
    {
        put_x = x[0]*pow((1-u),3)+x[1]*3*u*pow((1-u),2)+x[2]*3*pow(u,2)*(1-u)+x[3]*pow(u,3);
        put_y = y[0]*pow((1-u),3)+y[1]*3*u*pow((1-u),2)+y[2]*3*pow(u,2)*(1-u)+y[3]*pow(u,3);
        putpixel(put_x,put_y,WHITE);
    }
}

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBO\\BGI");

    int x[4],y[4];
    x[0]=50,y[0]=50;
    x[1]=100,y[1]=150;
    x[2]=200,y[2]=50;
    x[3]=250,y[3]=150;

    bezierCurve(x,y);

    getch();
    closegraph();
    return 0;
}

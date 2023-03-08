#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void rectangle()
{
    setcolor(GREEN);
    rectangle(50,50,120,100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);
}

void triangle()
{
    setcolor(RED);
    line(100,70,60,130);
    line(100,70,140,130);
    line(60,130,140,130);
    setfillstyle(SOLID_FILL,RED);
    floodfill(100,100,RED);
}

void circle()
{
    setcolor(BLUE);
    circle(140,130,30);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(141,131,BLUE);
}

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBO\\BGI");

    string ch="CTR";

    for(int i=0;i<3;i++)
    {
        if(ch[i]=='R')
            rectangle();
        else if(ch[i]=='T')
            triangle();
        else
            circle();
    }

    getchar();
    return 0;
}

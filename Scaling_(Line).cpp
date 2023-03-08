#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gm,gd;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBO\\BGI");

    setcolor(RED);
    line(50,50,100,150);

    double sx =5 ,sy=2;

    setcolor(GREEN);
    line(50*sx,50*sy,100*sx,150*sy);


    getchar();
    return 0;
}


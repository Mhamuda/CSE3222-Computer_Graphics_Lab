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

    int tx =50 ,ty=50;

    setcolor(MAGENTA);
    line(50+tx,50+ty,100+tx,150+ty);

    getchar();
    return 0;
}

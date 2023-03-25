#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawCircle(int xc,int yc,int x,int y)
{
   putpixel(xc+x,yc+y,WHITE);
   putpixel(xc-x,yc+y,WHITE);
   putpixel(xc+x,yc-y,WHITE);
   putpixel(xc-x,yc-y,WHITE);
   putpixel(xc+y,yc+x,WHITE);
   putpixel(xc-y,yc+x,WHITE);
   putpixel(xc+y,yc-x,WHITE);
   putpixel(xc-y,yc-x,WHITE);
}

void midpointCircle(int xc,int yc,int r)
{
    int p,x=0,y=r;
    p=1-r;

    while(x<y)
    {
        x++;
        drawCircle(xc,yc,x,y);

        if(p>=0)
        {
            y--;
            p += 2*x+1-2*y;
        }
        else
            p+=2*x+1;

        delay(10);
    }
}

int main()
{
    int gm,gd;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBO\\BGI");

    int x=200,y=200,r=100;
    midpointCircle(x,y,r);

    getch();
    closegraph();
    return 0;
}


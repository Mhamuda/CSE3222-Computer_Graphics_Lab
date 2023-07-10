#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void Triangle()
{
    setcolor(RED);
    line(10, 100, 50, 20);
    line(50, 20, 100, 100);
    line(100, 100, 10, 100);
    setfillstyle(SOLID_FILL, RED);
    floodfill(50, 22, RED);
}

void Rectangle()
{
    setcolor(GREEN);
    rectangle(100, 100, 180, 180);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(101, 101, GREEN);
}

void Circle()
{
    setcolor(BLUE);
    circle(100, 100, 45);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(101, 101, BLUE);
}

int main()
{
    string seq;
    cin >> seq;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    for (auto ch : seq)
    {
        if (ch == 'T')
            Triangle();
        else if (ch == 'R')
            Rectangle();
        else
            Circle();
    }

    getch();
    closegraph();
    return 0;
}

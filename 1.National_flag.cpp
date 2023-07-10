#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    rectangle(40, 40, 340, 220);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(41, 41, GREEN);

    setcolor(RED);
    circle(190, 130, 60);
    setfillstyle(SOLID_FILL, RED);
    floodfill(191, 131, RED);

    setcolor(WHITE);
    rectangle(30, 30, 40, 450);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(31, 31, WHITE);

    setcolor(WHITE);
    rectangle(20, 450, 50, 460);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(21, 451, WHITE);

    setcolor(WHITE);
    rectangle(10, 460, 60, 470);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(11, 461, WHITE);

    setcolor(WHITE);
    rectangle(0, 470, 70, 480);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(1, 471, WHITE);

    getch();
    closegraph();
    return 0;
}

#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircle(int xc, int yc, int r)
{
    int x = 0, y = r, p = 1 - r;

    while (x < y)
    {
        x++;
        p += 2 * x + 1;

        if (p >= 0)
        {
            y--;
            p -= 2 * y;
        }
        drawCircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    int x = 150, y = 150, r = 100;
    midpointCircle(x, y, r);

    getch();
    closegraph();
    return 0;
}

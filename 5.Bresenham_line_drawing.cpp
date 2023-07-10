#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
void bresenhamsLine(int x0, int y0, int x1, int y1)
{
    int p, x, y, dx, dy;
    x = x0, y = y0;
    dx = x1 - x0, dy = y1 - y0;
    p = 2 * dy - dx;

    while (x <= x1)
    {
        putpixel(x, y, WHITE);

        x++;
        p += 2 * dy;

        if (p >= 0)
        {
            y++;
            p -= 2 * dx;
        }
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    int x0 = 100, y0 = 100, x1 = 300, y1 = 00;
    bresenhamsLine(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}

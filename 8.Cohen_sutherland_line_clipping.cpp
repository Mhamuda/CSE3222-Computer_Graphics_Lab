#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

double x_left = 120, y_bottom = 100, x_right = 500, y_top = 350;
int Left = 1, Right = 2, Bottom = 4, Top = 8;

int getCode(double x, double y)
{
    int code = 0;

    if (x < x_left)
        code |= Left;
    else if (x > x_right)
        code |= Right;

    if (y < y_bottom)
        code |= Bottom;
    else if (y > y_top)
        code |= Top;

    return code;
}

void cohenSutherland(double x0, double y0, double x1, double y1)
{
    int p1, p2;
    bool ac = false;
    double x, y, m;

    p1 = getCode(x0, y0);
    p2 = getCode(x1, y1);

    while (1)
    {
        m = (y1 - y0) / (x1 - x0);

        if (!(p1 | p2)) // Completely inside
        {
            ac = true;
            break;
        }
        else if (p1 & p2) // Completely outside
            break;
        else // Partially inside
        {
            int code;

            if (p1)
                code = p1;
            else
                code = p2;

            if (code & Top)
            {
                x = x0 + (y_top - y0) / m;
                y = y_top;
            }
            else if (code & Bottom)
            {
                x = x0 + (y_bottom - y0) / m;
                y = y_bottom;
            }
            else if (code & Left)
            {
                x = x_left;
                y = y0 + (x_left - x0) * m;
            }
            else if (code & Right)
            {
                x = x_right;
                y = y0 + (x_right - x0) * m;
            }

            if (code == p1)
            {
                x0 = x;
                y0 = y;
                p1 = getCode(x0, y0);
            }
            else
            {
                x1 = x;
                y1 = y;
                p2 = getCode(x1, y1);
            }
        }
    }

    if (ac)
    {
        setcolor(WHITE);
        line(x0, y0, x1, y1);
    }
}
int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(CYAN);
    rectangle(x_left, y_bottom, x_right, y_top);
    line(50, 200, 500, 400);
    cohenSutherland(50, 200, 500, 400);

    getch();
    closegraph();
    return 0;
}

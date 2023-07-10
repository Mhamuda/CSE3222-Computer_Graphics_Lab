#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void koch(int n, int x1, int y1, int x5, int y5)
{
    int x2, y2, x3, y3, x4, y4, dx, dy;

    if (!n)
        line(x1, y1, x5, y5);
    else
    {
        delay(1);
        dx = (x5 - x1) / 3;
        dy = (y5 - y1) / 3;
        x2 = dx + x1;
        y2 = dy + y1;
        x3 = (0.5 * (x1 + x5) + sqrt(3) * (y1 - y5) / 6);
        y3 = (0.5 * (y1 + y5) + sqrt(3) * (x5 - x1) / 6);
        x4 = 2 * dx + x1;
        y4 = 2 * dy + y1;

        koch(n - 1, x1, y1, x2, y2);
        koch(n - 1, x2, y2, x3, y3);
        koch(n - 1, x3, y3, x4, y4);
        koch(n - 1, x4, y4, x5, y5);
    }
}

int main()
{
    int n;
    cout << "Enter the number of iterations : ";
    cin >> n;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    koch(n, 150, 20, 20, 280);
    koch(n, 20, 280, 280, 280);
    koch(n, 280, 280, 150, 20);

    getch();
    closegraph();
    return 0;
}

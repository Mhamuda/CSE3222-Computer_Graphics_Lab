#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int factorial(int n)
{
    if (!n)
        return 1;
    return n * factorial(n - 1);
}

double nCr(int n, int r)
{
    return factorial(n) / (double)(factorial(r) * factorial(n - r));
}

double bezierFunction(int i, int n, double u)
{
    return nCr(n, i) * pow(u, i) * pow((1 - u), (n - i));
}

void bezierCurve(vector<pair<int, int>> xy)
{
    int n = xy.size() - 1;
    for (double u = 0; u <= 1; u += 0.0001)
    {
        double x = 0, y = 0;

        for (int i = 0; i <= n; i++)
        {
            double bez = bezierFunction(i, n, u);
            x += xy[i].first * bez;
            y += xy[i].second * bez;
        }
        putpixel(x, y, WHITE);
    }

    for (auto x : xy)
    {
        putpixel(x.first, x.second, WHITE);
        circle(x.first, x.second, 5);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    vector<pair<int, int>> xy{{50, 50}, {100, 150}, {200, 50}, {250, 150}};
    bezierCurve(xy);

    getch();
    closegraph();
    return 0;
}

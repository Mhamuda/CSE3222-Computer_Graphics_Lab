#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
#define pi 2 * acos(0.0)

vector<int> x, y;
int points, sx, sy;

void draw()
{
    for (int i = 0; i < points; i++)
        line(x[i], y[i], x[(i + 1) % points], y[(i + 1) % points]);
}

void scaling()
{
    for (int i = 0; i < points; i++)
    {
        x[i] *= sx;
        y[i] *= sy;
    }
}

int main()
{
    int a, b;
    cout << "Enter the number of vertex of the polygon : ";
    cin >> points;

    x.clear();
    y.clear();

    for (int i = 0; i < points; i++)
    {
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    cout << "Enter the scaling factors : ";
    cin >> sx >> sy;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    draw();
    scaling();
    setcolor(YELLOW);
    draw();

    getch();
    closegraph();
    return 0;
}

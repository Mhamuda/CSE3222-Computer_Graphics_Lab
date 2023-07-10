#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
#define pi 2 * acos(0.0)

vector<int> x, y;
int points, angle, x_pivot, y_pivot;

void draw()
{
    for (int i = 0; i < points; i++)
        line(x[i], y[i], x[(i + 1) % points], y[(i + 1) % points]);
}

void rotation()
{
    double radian, sin_term, cos_term;
    int x_shift, y_shift;
    radian = (angle * pi) / 180;
    sin_term = sin(radian);
    cos_term = cos(radian);

    for (int i = 0; i < points; i++)
    {
        x_shift = x[i] - x_pivot;
        y_shift = y[i] - y_pivot;
        x[i] = x_pivot + (x_shift * cos_term) - (y_shift * sin_term);
        y[i] = y_pivot + (x_shift * sin_term) + (y_shift * cos_term);
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

    cout << "Enter the rotation angle : ";
    cin >> angle;

    cout << "Enter the pivot point coordinates : ";
    cin >> x_pivot >> y_pivot;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    draw();
    rotation();
    setcolor(CYAN);
    draw();

    getch();
    closegraph();
    return 0;
}

#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

vector<int> x, y;
int points, tx, ty;

void draw()
{
    for (int i = 0; i < points; i++)
        line(x[i], y[i], x[(i + 1) % points], y[(i + 1) % points]);
}

void translate()
{
    for (int i = 0; i < points; i++)
    {
        x[i] += tx;
        y[i] += ty;
    }
}

int main()
{
    int a, b;
    cout << "Enter the number of vertex : ";
    cin >> points;

    x.clear();
    y.clear();

    for (int i = 0; i < points; i++)
    {
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    cout << "Enter the translation factors : ";
    cin >> tx >> ty;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    draw();
    translate();
    setcolor(MAGENTA);
    draw();

    getch();
    closegraph();
    return 0;
}

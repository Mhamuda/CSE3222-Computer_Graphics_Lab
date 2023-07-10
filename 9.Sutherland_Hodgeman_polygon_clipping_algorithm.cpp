#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int xMin = 120, xMax = 500, yMin = 100, yMax = 350;

void drawPolygon(vector<int> &polygon_points)
{
    for (int i = 0; (i + 3) < polygon_points.size(); i += 2)
        line(polygon_points[i], polygon_points[i + 1], polygon_points[i + 2], polygon_points[i + 3]);
}

int intersection_type(int x1, int y1, int x2, int y2, int clip_type)
{
    if (clip_type == 1)
    {
        if (x1 < xMin && x2 < xMin)
            return 4;
        else if (x1 < xMin)
            return 1;
        else if (x2 < xMin)
            return 2;
        else
            return 3;
    }
    else if (clip_type == 2)
    {
        if (x1 > xMax && x2 > xMax)
            return 4;
        else if (x1 > xMax)
            return 1;
        else if (x2 > xMax)
            return 2;
        else
            return 3;
    }
    else if (clip_type == 3)
    {
        if (y1 < yMin && y2 < yMin)
            return 4;
        else if (y1 < yMin)
            return 1;
        else if (y2 < yMin)
            return 2;
        else
            return 3;
    }
    else if (clip_type == 4)
    {
        if (y1 > yMax && y2 > yMax)
            return 4;
        else if (y1 > yMax)
            return 1;
        else if (y2 > yMax)
            return 2;
        else
            return 3;
    }
}

void sutherland_hodgeman(vector<int> &polygon_points)
{
    vector<int> clipped;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; (j + 3) < polygon_points.size(); j += 2)
        {
            double x, y;

            if (i == 1)
            {
                x = xMin;
                if ((polygon_points[j + 2] - polygon_points[j]) != 0)
                    y = polygon_points[j + 1] + (double)(polygon_points[j + 3] - polygon_points[j + 1]) / (polygon_points[j + 2] - polygon_points[j]) * (x - polygon_points[j]);
            }
            else if (i == 2)
            {
                x = xMax;
                if ((polygon_points[j + 2] - polygon_points[j]) != 0)
                    y = polygon_points[j + 1] + (double)(polygon_points[j + 3] - polygon_points[j + 1]) / (polygon_points[j + 2] - polygon_points[j]) * (x - polygon_points[j]);
            }
            else if (i == 3)
            {
                y = yMin;
                if ((polygon_points[j + 3] - polygon_points[j + 1]) != 0)
                    x = polygon_points[j] + (double)(polygon_points[j + 2] - polygon_points[j]) / (polygon_points[j + 3] - polygon_points[j + 1]) * (y - polygon_points[j + 1]);
            }
            else if (i == 4)
            {
                y = yMax;
                if ((polygon_points[j + 3] - polygon_points[j + 1]) != 0)
                    x = polygon_points[j] + (double)(polygon_points[j + 2] - polygon_points[j]) / (polygon_points[j + 3] - polygon_points[j + 1]) * (y - polygon_points[j + 1]);
            }

            int type = intersection_type(polygon_points[j], polygon_points[j + 1], polygon_points[j + 2], polygon_points[j + 3], i);
            if (type == 1)
            {
                clipped.push_back(x);
                clipped.push_back(y);
                clipped.push_back(polygon_points[j + 2]);
                clipped.push_back(polygon_points[j + 3]);
            }
            else if (type == 2)
            {
                clipped.push_back(x);
                clipped.push_back(y);
            }
            else if (type == 3)
            {
                clipped.push_back(polygon_points[j + 2]);
                clipped.push_back(polygon_points[j + 3]);
            }
        }

        clipped.push_back(clipped[0]);
        clipped.push_back(clipped[1]);

        polygon_points.clear();
        polygon_points = clipped;
        clipped.clear();
    }

    setcolor(WHITE);
    drawPolygon(polygon_points);
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(BLUE);
    rectangle(xMin, yMin, xMax, yMax);

    vector<int> polygon_points = {70, 200, 300, 250, 350, 450, 580, 200, 225, 50, 70, 200};
    setcolor(GREEN);
    drawPolygon(polygon_points);
    sutherland_hodgeman(polygon_points);

    getch();
    closegraph();
    return 0;
}

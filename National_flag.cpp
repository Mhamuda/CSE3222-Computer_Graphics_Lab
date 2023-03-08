/*#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int driver = DETECT, mode=0;
initgraph (&driver, &mode, "..\\bgi");
delay(1000);
printf ("\n\n\n\t\t\t National Flag of Bangladesh");
printf("\n\t\t\t Programmed by Mst: Mhamuda Khatun");
delay(1000);

setcolor(2); //Flag's Rectangle
//rectangle(200, 150, 450, 300);
rectangle(200,150,400,250);
setfillstyle(1,2);
floodfill(325,225,2);
delay(1000);

setcolor(4); // Flag's Circle
//circle(325,225,50);
circle(300,200,30);
setfillstyle(1,4);
floodfill(300,200,4);
delay(1000);

setcolor(3); // Flag's Stand
rectangle(190,150,200,400);
setfillstyle(1,5);
floodfill(190,350,3);
delay(1000);

setcolor(3); // Ground Stand
rectangle(180,400,210,410);
rectangle(170,410,220,420);
rectangle(160,420,230,430);
delay(1000);

getch();
}
*/

#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBO\\BGI");

    setcolor(GREEN);
    rectangle(50,50,220,150);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);

    setcolor(WHITE);
    rectangle(40,40,50,300);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(41,41,WHITE);

    setcolor(RED);
    circle(130,100,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(131,101,RED);

    setcolor(YELLOW); // Ground Stand
    rectangle(30,300,60,310);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(31,301,YELLOW);

    setcolor(BLUE);
    rectangle(20,310,70,320);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(21,311,BLUE);

    setcolor(CYAN);
    rectangle(10,320,80,330);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(11,321,CYAN);


    getchar();
    return 0;
}

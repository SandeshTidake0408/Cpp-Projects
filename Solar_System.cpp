#include <graphics.h>
#include <math.h>
#include <iostream>
class sun
{
public:
    int radius;
    sun()
    {
        radius = 150;
        outtextxy(140, 120, "SUN");
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(0, 0, radius);
        floodfill(0, 0, YELLOW);
    }
};
class orbit
{
public:
    orbit()
    {
        setcolor(WHITE);
        circle(0, 0, 300);
        circle(0, 0, 450);
        circle(0, 0, 600);
        circle(0, 0, 750);
        circle(0, 0, 900);
        circle(0, 0, 1050);
        circle(0, 0, 1200);
        circle(0, 0, 1350);
    }
};
class Planet : public sun
{
public:
    Planet(double pr, double OR, int colour, int cx, int cy, char name[10])
    {
        setcolor(WHITE);
        outtextxy(cx + pr, cy, name);
        setfillstyle(SOLID_FILL, colour);
        setcolor(colour);
        circle(cx, cy, pr);
        floodfill(cx, cy, colour);
    }
};
int main()
{
    char p1[10] = "MERCURY";
    char p2[10] = "VENUS";
    char p3[10] = "EARTH";
    char p4[10] = "MARS";
    char p5[10] = "JUPITER";
    char p6[10] = "SATURN";
    char p7[10] = "URANUS";
    char p8[10] = "NEPTUNE";
    initwindow(1500, 800);
    int gd = DETECT, gm, i;
    setbkcolor(BLACK);

    int o[8] = {300, 450, 600, 750, 900, 1050, 1200, 1350};
    int x1 = o[0], y1 = 0;
    int x2 = o[1], y2 = 0;
    int x3 = o[2], y3 = 0;
    int x4 = o[3], y4 = 0;
    int x5 = o[4], y5 = 0;
    int x6 = o[5], y6 = 0;
    int x7 = o[6], y7 = 0;
    int x8 = o[7], y8 = 0;
    double theta1 = 0;
    double theta2 = 0;
    double theta3 = 0;
    double theta4 = 0;
    double theta5 = 0;
    double theta6 = 0;
    double theta7 = 0;
    double theta8 = 0;
    for (i = 0; i < 55; i++)
    {
        sun Sun;
        orbit Orbit;

        x1 = (o[0] * cos((theta1 * 3.14) / 180));
        y1 = (o[0] * sin((theta1 * 3.14) / 180));
        Planet m1(25, 300, 8, x1, y1, p1);
        theta1 = theta1 + 4.7;

        x2 = (o[1] * cos((theta2 * 3.14) / 180));
        y2 = (o[1] * sin((theta2 * 3.14) / 180));
        Planet m2(30, o[1], 6, x2, y2, p2);
        theta2 = theta2 + 3.5;

        x3 = (o[2] * cos((theta3 * 3.14) / 180));
        y3 = (o[2] * sin((theta3 * 3.14) / 180));
        Planet m3(40, o[2], 1, x3, y3, p3);
        theta3 = theta3 + 2.9;
        x4 = (o[3] * cos((theta4 * 3.14) / 180));
        y4 = (o[3] * sin((theta4 * 3.14) / 180));
        Planet m4(35, o[3], 4, x4, y4, p4);
        theta4 = theta4 + 2.4;

        x5 = (o[4] * cos((theta5 * 3.14) / 180));
        y5 = (o[4] * sin((theta5 * 3.14) / 180));
        Planet m5(60, o[4], 14, x5, y5, p5);
        theta5 = theta5 + 1.3;

        x6 = (o[5] * cos((theta6 * 3.14) / 180));
        y6 = (o[5] * sin((theta6 * 3.14) / 180));
        Planet m6(50, o[5], 8, x6, y6, p6);
        theta6 = theta6 + 1;

        x7 = (o[6] * cos((theta7 * 3.14) / 180));
        y7 = (o[6] * sin((theta7 * 3.14) / 180));
        Planet m7(45, o[6], 3, x7, y7, p7);
        theta7 = theta7 + 0.68;

        x8 = (o[7] * cos((theta8 * 3.14) / 180));
        y8 = (o[7] * sin((theta8 * 3.14) / 180));
        Planet m8(45, o[7], 9, x8, y8, p8);
        theta8 = theta8 + 0.54;

        delay(140);
        if (i == 15)
        {
            delay(5000);
        }
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}

#include "TXLib.h"
#include <windows.h>

int b=80;
int c=75;
int r=50;

int x1=20+460;
int x11=60+460;
int x111=40+460 ;
int x1111=500 ;
int yy1=442-30;
int y11=442-30;
int y111=400-30;
int y1111=310;
int x2=40+460;
int x22=40+460;
int x222=40+460 ;

int y2=400-30;
int y22=400-30;
int y222=350-30;

int xarmr1=500;
int xarmr2=477;
int yarmr1=332;
int yarmr2=368;

int xarml1=500;
int xarml2=477+40;
int yarml1=332;
int yarml2=368;



void manI(){
    txSetColor(TX_YELLOW)  ;
    txSetFillColor(TX_YELLOW) ;
    txLine(x1,yy1,x2,y2);
    txLine(x11,y11,x22,y22);
    txLine(x111,y111,x222,y222);
    txCircle(x1111,y1111,10);
    txLine(xarmr1,yarmr1,xarmr2,yarmr2);
    txLine(xarml1,yarml1,xarml2,yarml2);


}



void manD(){
    manI();
    while(x1==100){
        manI();
        x1=x1-10;
        x11=x11-10;

    }
}








int main()
    {
    txCreateWindow (800, 600);

    while (c<400){

    txSetColor(TX_YELLOW)  ;
    txSetFillColor(TX_YELLOW) ;
    txCircle(b,c,r);
    txSleep(10);
    b=b+10;
    c=c+5;

    txSetColor(TX_BLUE)  ;
    txSetFillColor(RGB(0,188,255)) ;
    txRectangle   (0,0,800,400) ;



    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN) ;
    txRectangle   (0,400,800,600) ;




    txSetColor(TX_BROWN)  ;
    txSetFillColor(RGB(150, 111, 51)) ;
    txRectangle   (440,420,640,200) ;


    txSetColor(TX_RED)  ;
    txSetFillColor(TX_RED) ;
    txRectangle(480,285 ,540,400);





    txSetColor(TX_LIGHTBLUE)  ;
    txSetFillColor(TX_LIGHTBLUE) ;
    txRectangle   (570,290,620,340) ;



    continue;


    }





    txSetColor(TX_BLUE)  ;
    txSetFillColor(RGB(5,1,44)) ;
    txRectangle   (0,0,800,400) ;

    txSetColor(TX_BROWN)  ;
    txSetFillColor(RGB(150, 111, 51)) ;
    txRectangle   (440,420,640,200) ;



    txSetColor(TX_RED)  ;
    txSetFillColor(TX_RED) ;
    txRectangle(480,285 ,540,400);

    txSetColor(TX_YELLOW)  ;
    txSetFillColor(TX_YELLOW) ;
    txRectangle   (570,290,620,340) ;


    manI();
    txSetColor (TX_LIGHTGREEN);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (450, 250, "Finally returned from shift");


    Sleep(2000);
    txSetColor(RGB(128,64,0));
    txSetFillColor(RGB(128,64,0));
    txRectangle(0,0,800,600);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txLine(220,600,220,400);
    txLine(720,600,720,400);
    txLine(220,400,720,400);
    txRectangle(600,250,700,400);

    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(385,260,50);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(270,270,500,600);

    txSetColor (TX_LIGHTGREEN);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (260, 100, "I should call the guys and let's play Dota");

    Sleep(2000);
    txSetColor (TX_WHITE);
    txRectangle(0,0,800,600);
    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txRectangle(300,170,470,430);
    txSetColor (TX_WHITE);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (380, 300, "Discord");




    Sleep(5000);
    txSetColor(RGB(128,64,0));
    txSetFillColor(RGB(128,64,0));
    txRectangle(0,0,800,600);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txLine(220,600,220,400);
    txLine(720,600,720,400);
    txLine(220,400,720,400);
    txRectangle(600,250,700,400);

    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(385,260,50);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(270,270,500,600);

    txSetColor (TX_WHITE);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (380, 300, "Something is not loading, you need to read on the website");




    Sleep(2000);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle(0,0,800,600);
    txSetFillColor(TX_GRAY);
    txRectangle(30,30,750,55);
    txSetColor (TX_BLACK);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (120, 33, "https://rkn.gov.ru/");




    Sleep(2000);
    txSetColor(RGB(128,64,0));
    txSetFillColor(RGB(128,64,0));
    txRectangle(0,0,800,600);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txLine(220,600,220,400);
    txLine(720,600,720,400);
    txLine(220,400,720,400);
    txRectangle(600,250,700,400);

    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(385,260,50);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(270,270,500,600);
    txSetColor (TX_BLACK);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (150, 33, "They also blocked discord");

    Sleep(2000);
    txRectangle(0,0,800,600);

    txSetColor (TX_WHITE);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (300, 33, "Looks like there's a wiring problem again");

    Sleep(2000);
    txSetColor(RGB(0,30,0));
    txSetFillColor(RGB(0,30,0));

    txRectangle(0,0,800,600);




    txSetColor(RGB(157,141,0));
    txSetFillColor(RGB(157,141,0));
    txRectangle(580,100,700,220);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);








    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(620,140,660,180);







    txSetColor(RGB(157,141,0));
    txSetFillColor(RGB(157,141,0));
    txRectangle(240,400,140,300);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(210,370,170,330);







    txSetColor(RGB(157,141,0));
    txSetFillColor(RGB(157,141,0));
    txRectangle(515,550,420,450);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(490,520,450,480);



    Sleep(2000);
    txSetColor(RGB(128,64,0));
    txSetFillColor(RGB(128,64,0));
    txRectangle(0,0,800,600);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txLine(750,600,750,450);
    txLine(340,450,750,450);
    txLine(340,450,340,700);
    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(720,400,50);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(350,400,700,530);

    txSetColor (TX_WHITE);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (300, 33, "Phew it was just a dream");



    Sleep(2000);
    txSetColor(RGB(17,17,34));
    txSetFillColor(RGB(17,17,34));
    txRectangle(0,0,800,600);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_WHITE);
    txRectangle(300,130,500,500);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txSelectFont ("Times", 60);
    txSetTextAlign (TA_CENTER);
    txTextOut (400, 150, "5:40");
    txCircle(400,470,15);

    txSetColor(TX_WHITE);
    txSetFillColor(TX_WHITE);
    txSelectFont ("Times", 20);
    txSetTextAlign (TA_CENTER);
    txTextOut (300, 33, "Time to go to work");






    txTextCursor (false);
    return 0;
    }

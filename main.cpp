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


    while (x1==100){

      manI();
      x1=x1-10 ;

    }















    txTextCursor (false);
    return 0;
    }









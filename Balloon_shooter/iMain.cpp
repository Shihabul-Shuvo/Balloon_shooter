#include "iGraphics.h"

#include "bitmap_loader.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

 

int x=10, y= 0, mx=10, my=9,clear1 =0 ;
int x2=10, y2= 999, mx2=10, my2=10,clear2 = 0;
int x3=1849, y3= 0, mx3=9, my3=10,clear3 = 0;
int x4=1849, y4= 999, mx4=9, my4=9,clear4 = 0;
int x5=900, y5=500 , mx5=10, my5=11,clear5 = 0;
int x6=0, y6=500 , mx6=11, my6=11,clear6 = 0;
int x7=0, y7=0 , mx7=12, my7=17,clear7 = 0;
int x8=900, y8=0 , mx8=20, my8=15,clear8 = 0;
int x9=900, y9=50 , mx9=15, my9=11,clear9 = 0;
int x10=90, y10=600 , mx10=23, my10=11,clear10 = 0;
int x11=1800, y11=300 , mx11=30, my11=20,clear11 = 0;
int x12=1200, y12=100 , mx12=20, my12=31,clear12 = 0;
int x13=1000, y13=500 , mx13=27, my13=19,clear13 = 0;
int x14=300, y14=999 , mx14=30, my14=30,clear14 = 0;
int x15=200, y15=0 , mx15=27, my15=27,clear15 = 0;

int i;
int aimx,aimy;
static int dump=0;


int flag = 0;
int flagA= 0;
static int life=4;
int level = 0;
int gameover = 0;
int complete = 0;
int balloon =0;

void iDraw()

{
iClear();


if(flag == 0){

           iShowBMP(0,0,"Background1.bmp");
  iShowBMP2(750,400,"newgame.bmp",0);
}

if(flag == 1 /*&& flagA == 0*/){

           iShowBMP(0,0,"Background1.bmp");

           iShowBMP2(690,700,"level1.bmp",0);

           iShowBMP2(690,500,"level2.bmp",0);

           iShowBMP2(690,300,"level3.bmp",0);

}
//Show player life

if(level == 1 || level == 2 || level == 3){
 
iClear();
if(level == 1 || level == 2 || level == 3){

           if(life == 3){

                      iShowBMPAlternativeSkipWhite(1780,950,"heart6.bmp");
                      iShowBMPAlternativeSkipBlack(1720,950,"heart6.bmp");
                      iShowBMPAlternativeSkipBlack(1660,950,"heart6.bmp");
  }

           else if(life == 2){

                      iShowBMPAlternativeSkipBlack(1780,950,"heart6.bmp");
                      iShowBMPAlternativeSkipBlack(1720,950,"heart6.bmp");
 }

           else if(life == 1){

                      iShowBMPAlternativeSkipBlack(1780,950,"heart6.bmp");
  }
}
           if(clear1!=1)

                      iShowBMPAlternativeSkipBlack(x, y, "Balloon4.bmp");

           if(clear2!=2)

                      iShowBMPAlternativeSkipBlack(x2, y2, "Balloon4.bmp");

           if(clear3!=3)

                      iShowBMPAlternativeSkipBlack(x3, y3, "Balloon4.bmp");

           if(clear4!=4)

                      iShowBMPAlternativeSkipBlack(x4, y4, "Balloon4.bmp");

           if(clear5!=5)

                      iShowBMPAlternativeSkipBlack(x5, y5, "Balloon4.bmp");

 

           if(level == 2 || level == 3){

                      if(clear6!=6)

                                 iShowBMPAlternativeSkipBlack(x6, y6, "Balloon4.bmp");

                      if(clear7!=7)

                                 iShowBMPAlternativeSkipBlack(x7, y7, "Balloon4.bmp");

                      if(clear8!=8)

                                 iShowBMPAlternativeSkipBlack(x8, y8, "Balloon4.bmp");

                      if(clear9!=9)

                                 iShowBMPAlternativeSkipBlack(x9, y9, "Balloon4.bmp");

                      if(clear10!=10)

                                 iShowBMPAlternativeSkipBlack(x10, y10, "Balloon4.bmp");


           if(level == 3){

                      if(clear11!=11)

                                 iShowBMPAlternativeSkipBlack(x11, y11, "Balloon4.bmp");

                      if(clear12!=12)

                                 iShowBMPAlternativeSkipBlack(x12, y12, "Balloon4.bmp");

                      if(clear13!=13)

                                 iShowBMPAlternativeSkipBlack(x13, y13, "Balloon4.bmp");

                      if(clear14!=14)

                                 iShowBMPAlternativeSkipBlack(x14, y14, "Balloon4.bmp");

                      if(clear15!=15)

                                 iShowBMPAlternativeSkipBlack(x15, y15, "Balloon4.bmp");
 
           }

}

  if(gameover == 1){
  
  iClear();
  iShowBMPAlternativeSkipBlack(550,400, "gameover.bmp");}
if(complete == 1){
  
  iClear();
iShowBMPAlternativeSkipBlack(550,400, "complete.bmp");
  }
}
           iShowBMPAlternativeSkipBlack(aimx-55, aimy-55, "aim5.bmp");

}

void movementforball()

{
if(level==1){

           x=x+mx; y=y+my;

           if(x>1850 || x<0)
           {
           mx=-mx;
           }

           if(y>1000 || y<0)
           {
           my=-my;
           }

           x2=x2+mx2; y2=y2+my2;
           if(x2>1850 || x2<0)
           {
           mx2=-mx2;
           }

           if(y2>1000 || y2<0)
           {
           my2=-my2;
           }

           x3=x3+mx3; y3=y3+my3;
           if(x3>1850 || x3<0)
           {
           mx3=-mx3;
           }

           if(y3>1000 || y3<0)
           {
           my3=-my3;
           }

           x4=x4+mx4; y4=y4+my4;
           if(x4>1850 || x4<0)
           {
           mx4=-mx4;
           }

           if(y4>1000 || y4<0)
           {
           my4=-my4;
           }

           x5=x5+mx5; y5=y5+my5;
           if(x5>1850 || x5<0)
           {
           mx5=-mx5;
           }

           if(y5>1000 || y5<0)
           {
           my5=-my5;
           }
}
if(level == 2){
//**level==2**

           x=x+mx; y=y+my;

           if(x>1850 || x<0)

           {

           mx=-mx;

           }

           if(y>1000 || y<0)

           {

           my=-my;

           }

 

           x2=x2+mx2; y2=y2+my2;

           if(x2>1850 || x2<0)

           {

           mx2=-mx2;

           }

           if(y2>1000 || y2<0)

           {

           my2=-my2;

           }

 

           x3=x3+mx3; y3=y3+my3;

           if(x3>1850 || x3<0)

           {

           mx3=-mx3;

           }

           if(y3>1000 || y3<0)

           {

           my3=-my3;

           }

 

           x4=x4+mx4; y4=y4+my4;

           if(x4>1850 || x4<0)

           {

           mx4=-mx4;

           }

           if(y4>1000 || y4<0)

           {

           my4=-my4;

           }

 

           x5=x5+mx5; y5=y5+my5;

           if(x5>1850 || x5<0)

           {

           mx5=-mx5;

           }

           if(y5>1000 || y5<0)

           {

           my5=-my5;

           }

 

           x6=x6+mx6; y6=y6+my6;

           if(x6>1850 || x6<0)

           {

           mx6=-mx6;

           }

           if(y6>1000 || y6<0)

           {

           my6=-my6;

           }

           x7=x7+mx7; y7=y7+my7;

           if(x7>1850 || x7<0)

           {

           mx7=-mx7;

           }

           if(y7>1000 || y7<0)

           {

           my7=-my7;

           }

           x8=x8+mx8; y8=y8+my8;

           if(x8>1850 || x8<0)

           {

           mx8=-mx8;

           }

           if(y8>1000 || y8<0)

           {

           my8=-my8;

           }

           x9=x9+mx9; y9=y9+my9;

           if(x9>1850 || x9<0)

           {

           mx9=-mx9;

           }

           if(y9>1000 || y9<0)

           {

           my9=-my9;

           }

           x10=x10+mx10; y10=y10+my10;

           if(x10>1850 || x10<0)

           {

           mx10=-mx10;

           }

           if(y10>1000 || y10<0)

           {

           my10=-my10;

           }

}

//**level==3**

if(level == 3){

           x=x+mx; y=y+my;

           if(x>1850 || x<0)

           {

           mx=-mx;

           }

           if(y>1000 || y<0)

           {

           my=-my;

           }

 

           x2=x2+mx2; y2=y2+my2;

           if(x2>1850 || x2<0)

           {

           mx2=-mx2;

           }

           if(y2>1000 || y2<0)

           {

           my2=-my2;

           }

 

           x3=x3+mx3; y3=y3+my3;

           if(x3>1850 || x3<0)

           {

           mx3=-mx3;

           }

           if(y3>1000 || y3<0)

           {

           my3=-my3;

           }

 

           x4=x4+mx4; y4=y4+my4;

           if(x4>1850 || x4<0)

           {

           mx4=-mx4;

           }

           if(y4>1000 || y4<0)

           {

           my4=-my4;

           }

 

           x5=x5+mx5; y5=y5+my5;

           if(x5>1850 || x5<0)

           {

           mx5=-mx5;

           }

           if(y5>1000 || y5<0)

           {

           my5=-my5;

           }

 

           x6=x6+mx6; y6=y6+my6;

           if(x6>1850 || x6<0)

           {

           mx6=-mx6;

           }

           if(y6>1000 || y6<0)

           {

           my6=-my6;

           }

           x7=x7+mx7; y7=y7+my7;

           if(x7>1850 || x7<0)

           {

           mx7=-mx7;

           }

           if(y7>1000 || y7<0)

           {

           my7=-my7;

           }

           x8=x8+mx8; y8=y8+my8;

           if(x8>1850 || x8<0)

           {

           mx8=-mx8;

           }

           if(y8>1000 || y8<0)

           {

           my8=-my8;

           }

           x9=x9+mx9; y9=y9+my9;

           if(x9>1850 || x9<0)

           {

           mx9=-mx9;

           }

           if(y9>1000 || y9<0)

           {

           my9=-my9;

           }

           x10=x10+mx10; y10=y10+my10;

           if(x10>1850 || x10<0)

           {

           mx10=-mx10;

           }

           if(y10>1000 || y10<0)

           {

           my10=-my10;

           }

 

           x11=x11+mx11; y11=y11+my11;

           if(x11>1850 || x11<0)

           {

           mx11=-mx11;

           }

           if(y11>1000 || y11<0)

           {

           my11=-my11;

           }

           x12=x12+mx12; y12=y12+my12;

           if(x12>1850 || x12<0)

           {

           mx12=-mx12;

           }

           if(y12>1000 || y12<0)

           {

           my12=-my12;

           }

           x13=x13+mx13; y13=y13+my13;

           if(x13>1850 || x13<0)

           {

           mx13=-mx13;

           }

           if(y13>1000 || y13<0)

           {

           my13=-my13;

           }

           x14=x14+mx14; y14=y14+my14;

           if(x14>1850 || x14<0)

           {

           mx14=-mx14;

           }

           if(y14>1000 || y14<0)

           {

           my14=-my14;

           }

           x15=x15+mx15; y15=y15+my15;

           if(x15>1850 || x15<0)

           {

           mx15=-mx15;

           }

           if(y15>1000 || y15<0)

           {

           my15=-my15;

           }

 

}

 

}

 

 

 

/*function iMouseMove() is called when the user presses and drags the mouse.

(mx, my) is the position where the mouse pointer is.

*/

 

 

void iMouseMove(int mx, int my)

{

 

}

//*******************************************************************ipassiveMouse***********************************************************************//

void iPassiveMouseMove(int mx, int my)

{

if(mx>=0)

           aimx=mx;

if(mx<0)

           aimx=-mx;

if(my>=0)

           aimy=my;

if(my<0)

           aimy=-my;

}

 

void iMouse(int button, int state, int mx, int my)

{

 

if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)

{

           printf("%d %d \n",mx,my);

//New game

if(flag == 0 && mx >= 750 && mx <= 1090 && my >= 400 && my <= 515)

{

flag = 1;

//flagA = 1;

}

 

/*Level Option

if(flag == 1 && mx >= 690 && mx <= 1020 && my >= 500 && my <=590 )

{

flag = 1;
flagA = 0;
}*/

 

// Level Selection

if(flag == 1 && (mx >= 690 && mx <= 890) && (my >= 700 && my <=790) ){

           level = 1;}
if(flag == 1 && mx >= 650 && mx <= 890 && my >= 500 && my <=590 ){

           level = 2;}
if(flag == 1 && mx >= 650 && mx <= 890 && my >= 300 && my <=390 ){

           level = 3;}
//level 01 start
if(level == 1){

if((aimx>x+44 && aimx <x+87) && (aimy>y+105 && aimy<y+148))
{dump=1;clear1=dump;balloon++;}
else if((aimx>x+85 && aimx<x+126) && (aimy<y+148 && aimy>y+105))
{dump=1;clear1=dump;balloon++;}
else if((aimx> x+85 && aimx<x+24) && (aimy>y+52 && aimy<y+105))
{dump=1;clear1=dump;balloon++;}
else if((aimx>x+44 && aimx <x+85) && (aimy>y+52 && aimy<y+105))
{dump=1;clear1=dump;balloon++;}
else if((aimx>x2+44 && aimx <x2+87) && (aimy>y2+105 && aimy<y2+148))
{dump=2;clear2=dump;balloon++;}
else if((aimx>x2+85 && aimx<x2+126) && (aimy<y2+148 && aimy>y2+105))
{dump=2;clear2=dump;balloon++;}
else if((aimx> x2+85 && aimx<x2+24) && (aimy>y2+52 && aimy<y2+105))
{dump=2;clear2=dump;balloon++;}
else if((aimx>x2+44 && aimx <x2+85) && (aimy>y2+52 && aimy<y2+105))
{dump=2;clear2=dump;balloon++;}
else if((aimx>x3+44 && aimx <x3+87) && (aimy>y3+105 && aimy<y3+148))
{dump=3;clear3=dump;balloon++;}
else if((aimx>x3+85 && aimx<x3+126) && (aimy<y3+148 && aimy>y3+105))
{dump=3;clear3=dump;balloon++;}
else if((aimx> x3+85 && aimx<x3+24) && (aimy>y3+52 && aimy<y3+105))
{dump=3;clear3=dump;balloon++;}
else if((aimx>x3+44 && aimx <x3+85) && (aimy>y3+52 && aimy<y3+105))
{dump=3;clear3=dump;balloon++;}
else if((aimx>x4+44 && aimx <x4+87) && (aimy>y4+105 && aimy<y4+148))
{dump=4;clear4=dump;balloon++;}
else if((aimx>x4+85 && aimx<x4+126) && (aimy<y4+148 && aimy>y4+105))
{dump=4;clear4=dump;balloon++;}
else if((aimx> x4+85 && aimx<x4+24) && (aimy>y4+52 && aimy<y4+105))
{dump=4;clear4=dump;balloon++;}
else if((aimx>x4+44 && aimx <x4+85) && (aimy>y4+52 && aimy<y4+105))
{dump=4;clear4=dump;balloon++;}
else if((aimx>x5+44 && aimx <x5+87) && (aimy>y5+105 && aimy<y5+148))
{dump=5;clear5=dump;balloon++;}
else if((aimx>x5+85 && aimx<x5+126) && (aimy<y5+148 && aimy>y5+105))
{dump=5;clear5=dump;balloon++;}
else if((aimx> x5+85 && aimx<x5+24) && (aimy>y5+52 && aimy<y5+105))
{dump=5;clear5=dump;balloon++;}
else if((aimx>x5+44 && aimx <x5+85) && (aimy>y5+52 && aimy<y5+105))
{dump=5;clear5=dump;balloon++;}
else
life--;
if(life==0 ){gameover = 1;}  
if(balloon == 5){complete = 1;}
}

  //level 2

 

if(level == 2){

           if((aimx>x+44 && aimx <x+87) && (aimy>y+105 && aimy<y+148)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx>x+85 && aimx<x+126) && (aimy<y+148 && aimy>y+105)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx> x+85 && aimx<x+24) && (aimy>y+52 && aimy<y+105)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx>x+44 && aimx <x+85) && (aimy>y+52 && aimy<y+105)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx>x2+44 && aimx <x2+87) && (aimy>y2+105 && aimy<y2+148)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x2+85 && aimx<x2+126) && (aimy<y2+148 && aimy>y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx> x2+85 && aimx<x2+24) && (aimy>y2+52 && aimy<y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x2+44 && aimx <x2+85) && (aimy>y2+52 && aimy<y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x3+44 && aimx <x3+87) && (aimy>y3+105 && aimy<y3+148)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x3+85 && aimx<x3+126) && (aimy<y3+148 && aimy>y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx> x3+85 && aimx<x3+24) && (aimy>y3+52 && aimy<y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x3+44 && aimx <x3+85) && (aimy>y3+52 && aimy<y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x4+44 && aimx <x4+87) && (aimy>y4+105 && aimy<y4+148)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x4+85 && aimx<x4+126) && (aimy<y4+148 && aimy>y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx> x4+85 && aimx<x4+24) && (aimy>y4+52 && aimy<y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x4+44 && aimx <x4+85) && (aimy>y4+52 && aimy<y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x5+44 && aimx <x5+87) && (aimy>y5+105 && aimy<y5+148)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x5+85 && aimx<x5+126) && (aimy<y5+148 && aimy>y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx> x5+85 && aimx<x5+24) && (aimy>y5+52 && aimy<y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x5+44 && aimx <x5+85) && (aimy>y5+52 && aimy<y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x6+44 && aimx <x6+87) && (aimy>y6+105 && aimy<y6+148)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x6+85 && aimx<x6+126) && (aimy<y6+148 && aimy>y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx> x6+85 && aimx<x6+24) && (aimy>y6+52 && aimy<y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x6+44 && aimx <x6+85) && (aimy>y6+52 && aimy<y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x7+44 && aimx <x7+87) && (aimy>y7+105 && aimy<y7+148)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x7+85 && aimx<x7+126) && (aimy<y7+148 && aimy>y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx> x7+85 && aimx<x7+24) && (aimy>y7+52 && aimy<y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x7+44 && aimx <x7+85) && (aimy>y7+52 && aimy<y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x8+44 && aimx <x8+87) && (aimy>y8+105 && aimy<y8+148)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x8+85 && aimx<x8+126) && (aimy<y8+148 && aimy>y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx> x8+85 && aimx<x8+24) && (aimy>y8+52 && aimy<y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x8+44 && aimx <x8+85) && (aimy>y8+52 && aimy<y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x9+44 && aimx <x9+87) && (aimy>y9+105 && aimy<y9+148)){

                      dump=9;clear9=dump;balloon++;}

           else if((aimx>x9+85 && aimx<x9+126) && (aimy<y9+148 && aimy>y9+105)){

                      dump=9;clear9=dump;balloon++;}

           else if((aimx> x10+85 && aimx<x10+24) && (aimy>y10+52 && aimy<y10+105)){

                      dump=10;clear10=dump;balloon++;}

           else if((aimx>x10+44 && aimx <x10+85) && (aimy>y10+52 && aimy<y10+105)){

                      dump=10;clear10=dump;balloon++;}

           else{

                      life--;}

           }
  if(life == 0){ gameover = 1; }
  if(balloon == 10){complete = 1;}
}




//level 03 start

if(level == 3){

           if((aimx>x+44 && aimx <x+87) && (aimy>y+105 && aimy<y+148)){

                      dump=1;

                      clear1=dump;balloon++;}

           else if((aimx>x+85 && aimx<x+126) && (aimy<y+148 && aimy>y+105)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx> x+85 && aimx<x+24) && (aimy>y+52 && aimy<y+105)){

                                 dump=1;clear1=dump;balloon++;}

           else if((aimx>x+44 && aimx <x+85) && (aimy>y+52 && aimy<y+105)){

                      dump=1;clear1=dump;balloon++;}

           else if((aimx>x2+44 && aimx <x2+87) && (aimy>y2+105 && aimy<y2+148)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x2+85 && aimx<x2+126) && (aimy<y2+148 && aimy>y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx> x2+85 && aimx<x2+24) && (aimy>y2+52 && aimy<y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x2+44 && aimx <x2+85) && (aimy>y2+52 && aimy<y2+105)){

                      dump=2;clear2=dump;balloon++;}

           else if((aimx>x3+44 && aimx <x3+87) && (aimy>y3+105 && aimy<y3+148)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x3+85 && aimx<x3+126) && (aimy<y3+148 && aimy>y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx> x3+85 && aimx<x3+24) && (aimy>y3+52 && aimy<y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x3+44 && aimx <x3+85) && (aimy>y3+52 && aimy<y3+105)){

                      dump=3;clear3=dump;balloon++;}

           else if((aimx>x4+44 && aimx <x4+87) && (aimy>y4+105 && aimy<y4+148)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x4+85 && aimx<x4+126) && (aimy<y4+148 && aimy>y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx> x4+85 && aimx<x4+24) && (aimy>y4+52 && aimy<y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x4+44 && aimx <x4+85) && (aimy>y4+52 && aimy<y4+105)){

                      dump=4;clear4=dump;balloon++;}

           else if((aimx>x5+44 && aimx <x5+87) && (aimy>y5+105 && aimy<y5+148)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x5+85 && aimx<x5+126) && (aimy<y5+148 && aimy>y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx> x5+85 && aimx<x5+24) && (aimy>y5+52 && aimy<y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x5+44 && aimx <x5+85) && (aimy>y5+52 && aimy<y5+105)){

                      dump=5;clear5=dump;balloon++;}

           else if((aimx>x6+44 && aimx <x6+87) && (aimy>y6+105 && aimy<y6+148)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x6+85 && aimx<x6+126) && (aimy<y6+148 && aimy>y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx> x6+85 && aimx<x6+24) && (aimy>y6+52 && aimy<y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x6+44 && aimx <x6+85) && (aimy>y6+52 && aimy<y6+105)){

                      dump=6;clear6=dump;balloon++;}

           else if((aimx>x7+44 && aimx <x7+87) && (aimy>y7+105 && aimy<y7+148)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x7+85 && aimx<x7+126) && (aimy<y7+148 && aimy>y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx> x7+85 && aimx<x7+24) && (aimy>y7+52 && aimy<y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x7+44 && aimx <x7+85) && (aimy>y7+52 && aimy<y7+105)){

                      dump=7;clear7=dump;balloon++;}

           else if((aimx>x8+44 && aimx <x8+87) && (aimy>y8+105 && aimy<y8+148)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x8+85 && aimx<x8+126) && (aimy<y8+148 && aimy>y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx> x8+85 && aimx<x8+24) && (aimy>y8+52 && aimy<y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x8+44 && aimx <x8+85) && (aimy>y8+52 && aimy<y8+105)){

                      dump=8;clear8=dump;balloon++;}

           else if((aimx>x9+44 && aimx <x9+87) && (aimy>y9+105 && aimy<y9+148)){

                      dump=9;clear9=dump;balloon++;}

           else if((aimx>x9+85 && aimx<x9+126) && (aimy<y9+148 && aimy>y9+105)){

                      dump=9;clear9=dump;balloon++;}

           else if((aimx> x10+85 && aimx<x10+24) && (aimy>y10+52 && aimy<y10+105)){

                      dump=10;clear10=dump;balloon++;}

           else if((aimx>x10+44 && aimx <x10+85) && (aimy>y10+52 && aimy<y10+105)){

                      dump=10;clear10=dump;balloon++;}

           else if((aimx>x11+44 && aimx <x11+87) && (aimy>y11+105 && aimy<y11+148)){

                      dump=11;clear11=dump;balloon++;}

           else if((aimx>x11+85 && aimx<x11+126) && (aimy<y11+148 && aimy>y11+105)){

                      dump=11;clear11=dump;balloon++;}

           else if((aimx> x11+85 && aimx<x11+24) && (aimy>y11+52 && aimy<y11+105)){

                      dump=11;clear11=dump;balloon++;}

           else if((aimx>x11+44 && aimx <x11+85) && (aimy>y11+52 && aimy<y11+105)){

                      dump=11;clear11=dump;balloon++;}

           else if((aimx>x12+44 && aimx <x12+87) && (aimy>y12+105 && aimy<y12+148))

                      {dump=12;clear12=dump;balloon++;}

           else if((aimx>x13+85 && aimx<x13+126) && (aimy<y13+148 && aimy>y13+105))

                      {dump=13;clear13=dump;balloon++;}

           else if((aimx> x13+85 && aimx<x13+24) && (aimy>y13+52 && aimy<y13+105))

                      {dump=13;clear13=dump;balloon++;}

           else if((aimx>x13+44 && aimx <x13+85) && (aimy>y13+52 && aimy<y13+105))

                      {dump=13;clear13=dump;balloon++;}

           else if((aimx>x14+44 && aimx <x14+87) && (aimy>y14+105 && aimy<y14+148))

                      {dump=14;clear14=dump;balloon++;}

           else if((aimx>x14+85 && aimx<x14+126) && (aimy<y14+148 && aimy>y14+105))

                      {dump=14;clear14=dump;balloon++;}

           else if((aimx> x14+85 && aimx<x14+24) && (aimy>y14+52 && aimy<y14+105))

                      {dump=14;clear14=dump;balloon++;}

           else if((aimx>x14+44 && aimx <x14+85) && (aimy>y14+52 && aimy<y14+105))

                      {dump=14;clear14=dump;balloon++;}

           else if((aimx>x15+44 && aimx <x15+87) && (aimy>y15+105 && aimy<y15+148))

                      {dump=15;clear15=dump;balloon++;}

           else if((aimx>x15+85 && aimx<x15+126) && (aimy<y15+148 && aimy>y15+105))

                      {dump=15;clear15=dump;balloon++;}

           else if((aimx> x15+85 && aimx<x15+24) && (aimy>y15+52 && aimy<y15+105))

                      {dump=15;clear15=dump;balloon++;}

           else if((aimx>x15+44 && aimx <x15+85) && (aimy>y15+52 && aimy<y15+105))

                      {dump=15;clear15=dump;balloon++;}

           else{life--;}
  if(life == 0){ gameover = 1;}
  if(balloon == 15){complete = 1;}
}



 

 

if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)

{

 

}

 

}

 

 

/*

function iKeyboard() is called whenever the user hits a key in keyboard.

key- holds the ASCII value of the key pressed.

*/

 

void iKeyboard(unsigned char key)

{

if (key == '\r')

{

 

}

 

 

}

 

 

/*

function iSpecialKeyboard() is called whenver user hits special keys like-

function keys, home, end, pg up, pg down, arraows etc. you have to use

appropriate constants to detect them. A list is:

GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,

GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,

GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,

GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT

*/

void iSpecialKeyboard(unsigned char key)

{

 

 

if (key == GLUT_KEY_RIGHT)

{

 

}

if (key == GLUT_KEY_LEFT)

{

 

}

 

if (key == GLUT_KEY_HOME)

{

 

}

 

}

 

 

int main()

{

 

///srand((unsigned)time(NULL));

iSetTimer(5, movementforball);

iInitialize(1880, 1010, "Balloon Shooter");

 

///updated see the documentations

iStart();

 

return 0;

}

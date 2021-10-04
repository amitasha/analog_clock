Analog Clock Program

#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x=320,y=240,r=200,i,h,m,s,thetamin,thetasec;
struct  time t;
char n[12][3]={"3","2","1","12","11","10","9","8","7","6","5","4"};
initgraph(&gd,&gm,"f:\arun\tc");\put the directory which contains
egavga.bgi
circle(x,y,210);
setcolor(4);
settextstyle(4,0,5);
for(i=0;i<12;i++)
{
if(i!=3)
outtextxy(x+(r-14)*cos(M_PI/6*i)-10,y-(r-14)*sin(M_PI/6*i)-26,n[i]);
else
outtextxy(x+(r-14)*cos(M_PI/6*i)-20,y-(r-14)*sin(M_PI/6*i)-26,n[i]);
}
gettime(&t);
printf("The current time is: %2d:%02d:%02d.%02d
",t.ti_hour, t.ti_min,
t.ti_sec, t.ti_hund);
  //initgraph(&gm,&gd,"  ");
front();
closegraph();
//delay(10);
//sta();
 a:
initgraph(&gd,&gm," ");
flag=0;
setbkcolor(0);
s=-60;e=60;

sound(221.38);
for(f=1;f<=20;f++)
 {
 setcolor(BLUE);
 line(280,f+360,360,f+360);
       }
       setcolor(RED);
       settextstyle(SMALL_FONT,HORIZ_DIR,4);
       outtextxy(305,364,"SHOOT");
arrows(0);

setcolor(GREEN+WHITE);
rectangle(5,5,634,474);
rectangle(6,6,633,473);
setcolor(YELLOW);
rectangle(7,7,632,472);
setcolor(GREEN+WHITE);
rectangle(8,8,631,471);
rectangle(9,9,630,470);
rectangle(10,10,629,469);

setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(530,20,"SCORE");
scor=0;
score(200);
m=6;
equip();
arrow1(0,14);
alh=0;
mousereg();
while(m>1)         /* while start */
{
	    //button=0;
    for(j=-70;j<=70;j+=2)           /* start for*/
       {   c=1;
	   tar(j,c);
	   delay(10);
while(!kbhit())
{
setcolor(5);
setfillstyle(1,5);
circle(x,y,10);
floodfill(x,y,5);
gettime(&t);
if(t.ti_min!=m)
{
setcolor(0);
line(x,y,x+(r-60)*cos(thetamin*(M_PI/180)),y-(r-60)*sin(thetamin*(M_PI/180
)));
circle(x+(r-80)*cos(thetamin*(M_PI/180)),y-(r-80)*sin(thetamin*(M_PI/180))
,10);
line(x,y,x+(r-110)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-110)*sin(M_PI/6*h
-((m/2)*(M_PI/180))));
circle(x+(r-130)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-130)*sin(M_PI/6*h-(
(m/2)*(M_PI/180))),10);
}
if(t.ti_hour>12)
t.ti_hour=t.ti_hour-12;
if(t.ti_hour<4)
h=abs(t.ti_hour-3);
else
h=15-t.ti_hour;
m=t.ti_min;
if(t.ti_min<=15)
thetamin=(15-t.ti_min)*6;
else
thetamin=450-t.ti_min*6;
if(t.ti_sec<=15)
thetasec=(15-t.ti_sec)*6;
else
thetasec=450-t.ti_sec*6;
setcolor(4);
line(x,y,x+(r-110)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-110)*sin(M_PI/6*h
-((m/2)*(M_PI/180))));
circle(x+(r-130)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-130)*sin(M_PI/6*h-(
(m/2)*(M_PI/180))),10);
line(x,y,x+(r-60)*cos(thetamin*(M_PI/180)),y-(r-60)*sin(thetamin*(M_PI/180
)));
circle(x+(r-80)*cos(thetamin*(M_PI/180)),y-(r-80)*sin(thetamin*(M_PI/180))
,10);
setcolor(15);
line(x,y,x+(r-70)*cos(thetasec*(M_PI/180)),y-(r-70)*sin(thetasec*(M_PI/180
)));
delay(1000);
setcolor(0);
line(x,y,x+(r-70)*cos(thetasec*(M_PI/180)),y-(r-70)*sin(thetasec*(M_PI/180
)));
}
}

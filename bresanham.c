#include<stdio.h>
#include<graphics.h>
int main()
{
float x1,y1,x2,y2,dx,dy,p,x,y;
int gd=DETECT,gm;
// Taking two input points from the user
printf("Enter the first point of x and y value");
scanf("%f %f",&x1,&y1);
printf("Enter the end point of x and y value");
scanf("%f%f",&x2,&y2);

detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
x=x1;
y=y1;
// Calculate the DX and DY
dx=x2-x1;
dy=y2-y1;
//plot the point
putpixel(x,y,15);
// Calculate Decision parameter
p=2*dy-dx;
// for going to end point
 while(x!=x2)
 {
if(p<0)
{
  x=x+1; 
  p=p-2*dy;
  //plot the point
  putpixel(x,y,15);
  }
  else{
  x=x+1;
  y=y+1;
  p=p+2*dy-2*dx;
  //plot the point
  putpixel(x,y,15);
  }
  
}

getch();
closegraph();
return 0;
}

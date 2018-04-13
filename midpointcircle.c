#include<stdio.h>
#include<graphics.h>
int main()
{
	float r,centre_of_circle,p,x,y,midx,midy;
	int gd=DETECT,gm;
	printf("Enter the radious of the circle");
	scanf("%f",&r);
	printf("Enter the center point of cirlce");
	scanf("%f",&centre_of_circle);
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	midx=getmaxx()/2;
	midy=getmaxy()/2;
	
	x=0;
	y=r;
	p=1-r;

	
do{
	putpixel(midx+x,midy+y,RED);
	putpixel(midx-x,midy+y,WHITE);
	
	putpixel(midx+y,midy+x,GREEN);
	putpixel(midx-y,midy+x,BROWN);
	
	putpixel(midx+x,midy-y,YELLOW);
	putpixel(midx-x,midy-y,BLUE);
	
	putpixel(midx+y,midy-x,CYAN);
	putpixel(midx-y,midy-x,MAGENTA);
	
	delay(10);
		if(p<0)
		{
			x=x+1;
			p=p+2*x+3;
			
		}
		else{
			x=x+1;
			y=y-1;
			p=p+2*(x-y)+5;
			
		}
	}while(x<y);
	getch();
	closegraph();
	return 0;
}

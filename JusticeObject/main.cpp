#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <iostream>

#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

using namespace std;

void bezier(int x[], int y[]){
	int tempx[4], tempy[4];
	for (int j = 0; j < 4; j++){
		tempx[j] = x[j];
	}
	for (int j = 0; j < 4; j++){
		tempy[j] = y[j];
	}
	int i;
	double t, xt, yt;
	
	for (t = 0.0; t < 1.0; t += 0.0005){
		xt = pow(1-t,3)*tempx[0]+3*t*pow(1-t,2)*tempx[1]+3*pow(t,2)*(1-t)*tempx[2]+pow(t,3)*tempx[3];
		yt = pow(1-t,3)*tempy[0]+3*t*pow(1-t,2)*tempy[1]+3*pow(t,2)*(1-t)*tempy[2]+pow(t,3)*tempy[3];
		putpixel (xt, yt,WHITE);
	}
	
}

class Dog{
	public:
	void draw(int, int);
};

void Dog::draw(int x, int y){
   
   //arcs
	arc(x+163, y+84, (int)-70.35, (int)49.18, 30); //b1
	arc(x+25, y+89, 90, 180, 25); //b2
	arc(x+212, y+34, -90, (int)95.19, 12); //f1
	arc(x+189, y+20, (int)41.63, (int)112.62, 13); //f2
	arc(x+216, y+4, (int)-156.04, (int)-104.74, 20); //f3
	arc(x+189, y+27, (int)122.28, (int)-153.43, 23); //f4
	arc(x+221, y+25, (int)161.57, (int)-71.57, 7); //f5
	arc(x+155, y+105, (int)143.97, (int)-138.01, 14); //fl1
	arc(x+152, y+111, (int)-59.04, (int)-15.26, 12); //fl2
	arc(x+160, y+111, (int)-53.97, (int)-4.40, 14); //fl3
	arc(x+4, y+114, (int)-42.27, (int)15.95, 30); //bl1
	arc(x+58, y+147, (int)157.89, (int)-146.77, 35); //bl2
	arc(x+29, y+178, (int)4.76, 90, 13); //bf1
	arc(x+22, y+113, (int)-42.51, (int)-1.79, 33); //bl3
	arc(x+68, y+152, (int)142.31, (int)-151.56, 28); //bl4
	arc(x+43, y+176, (int)-5.19, (int)84.81, 12); //bf2
	arc(x+157, y+168, (int)-6.71, (int)73.30, 11); //ff1
	arc(x+169, y+168, (int)-5.76, 90, 13); //ff2
	
	//lines
		//ears
		line(x+180,y+0,x+177,y+8);
		line(x+184,y+8,x+180,y+0);
		line(x+184,y+8,x+186,y+0);
		line(x+186,y+0,x+191,y+8);
		//neck & chin
		line(x+162,y+55,x+168,y+36);
		line(x+182,y+62,x+186,y+47);
		line(x+186,y+47,x+212,y+46);
		//body
		line(x+162,y+55,x+24,y+64);
		line(x+54,y+114,x+145,y+114);
		//frontLegs & feet
		line(x+147,y+170,x+145,y+114);
		line(x+158,y+121,x+160,y+158);
		line(x+168,y+122,x+169,y+156);
		line(x+147,y+170,x+181,y+169);	
		//backLegs & feet
		line(x+0,y+88,x+10,y+178);
		line(x+10,y+178,x+54,y+177);
		
	//bezier curves
		//smile
		int sX[] = {x+197,x+208,x+218,x+223};
		int sY[] = {y+38,y+40,y+38,y+34};
		bezier(sX,sY);
		//tail
			//tail bezier 1 
			int t1X[] = {x+12,x+3,x+20,x+32};
			int t1Y[] = {y+68,y+58,y+19,y+36};
			bezier(t1X,t1Y);
			//tail bezier 2
			int t2X[] = {x+5,x-5,x+29,x+35};
			int t2Y[] = {y+75,y+37,y+20,y+34};
			bezier(t2X,t2Y);
			//tail bezier 3 
			int t3X[] = {x+32,x+32,x+36,x+35};
			int t3Y[] = {y+36,y+39,y+36,y+34};
			bezier(t3X,t3Y);
	
	//eye
	circle(x+193,y+18,2);
   
}

int main()
{	
   //initialize window
   initwindow(1600,900);
   //initialize
   int x=0;
   int y=0;
   Dog justice;
   Dog justice2;
   Dog justice3;
   Dog justice4;
   Dog justice5;
   Dog justice6;
   justice.draw(x,y);
   justice2.draw(x+224,y);
   justice3.draw(x+448,y);
   justice4.draw(x,y+179);
   justice5.draw(x+224,y+179);
   justice6.draw(x+448,y+179);
   char c;
   while (true){
   	c = (char)getch();
   	int speed=10;
   	switch(c){
   		case KEY_UP: y-=speed;
   					 cleardevice();
   					 justice.draw(x, y);
   					 justice2.draw(x+224, y);
   					 justice3.draw(x+448, y);
   					 justice4.draw(x, y+179);
   					 justice5.draw(x+224, y+179);
   					 justice6.draw(x+448, y+179);
   					 break;
   		case KEY_DOWN: y+=speed;
   					 cleardevice();
   					 justice.draw(x, y);
   					 justice2.draw(x+224, y);
   					 justice3.draw(x+448, y);
   					 justice4.draw(x, y+179);
   					 justice5.draw(x+224, y+179);
   					 justice6.draw(x+448, y+179);
   					 break;
   		case KEY_LEFT: x-=speed;
   					 cleardevice();
					 justice.draw(x, y);
   					 justice2.draw(x+224, y);
   					 justice3.draw(x+448, y);
   					 justice4.draw(x, y+179);
   					 justice5.draw(x+224, y+179);
   					 justice6.draw(x+448, y+179);
   					 break;
   		case KEY_RIGHT: x+=speed;
   					 cleardevice();
   					 justice.draw(x, y);
   					 justice2.draw(x+224, y);
   					 justice3.draw(x+448, y);
   					 justice4.draw(x, y+179);
   					 justice5.draw(x+224, y+179);
   					 justice6.draw(x+448, y+179);
   					 break;
	   }
   }
   closegraph();
   return 0;
}



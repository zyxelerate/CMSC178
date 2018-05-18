#include <conio.h>
#include<graphics.h>
#include <math.h>
#include<iostream>

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

void drawt(){
	//inner curve
	int t1X[] = {233,235,246,251};
	int t1Y[] = {247,259,254,252};
	bezier(t1X, t1Y);
	//outer curve
	int t2X[] = {220,225,244,251};
	int t2Y[] = {250,268,268,261};
	bezier(t2X, t2Y);
	line(220,179,220,196);
	line(220,196,209,196);
	line(209,196,209,207);
	line(209,207,220,207);
	line(220,207,220,250);
	line(251,261,251,252);
	line(233,247,233,207);
	line(233,207,251,207);
	line(251,207,251,196);
	line(251,196,233,196);
	line(233,196,233,179);
	line(233,179,220,179);
}

void drawr(){
	//inner curve
	int r1X[] = {278,283,285,303};
	int r1Y[] = {220,214,201,209};
	bezier(r1X, r1Y);
	//outer curve
	int r2X[] = {277,283,284,303};
	int r2Y[] = {206,202,191,197};
	bezier(r2X, r2Y);
	line(265,196,265,264);
	line(265,264,278,264);
	line(278,264,278,220);
	line(303,208,303,196);
	line(277,206,277,196);
	line(277,196,265,196);
}

void drawc(){
	//inner curve
	int c1X[] = {359,310,305,359};
	int c1Y[] = {245,286,180,213};
	bezier(c1X, c1Y);
	//outer curve
	int c2X[] = {359,287,294,359};
	int c2Y[] = {257,298,162,203};
	bezier(c2X, c2Y);
	line(359,203,359,213);
	line(359,245,359,257);
}

void drawfont(){
	drawt();
	drawr();
	drawc();
}

int main(){
  	initwindow(632,468);
	//draw
	drawfont();
	   
   	getch();
  	closegraph();
  	return 0;
}

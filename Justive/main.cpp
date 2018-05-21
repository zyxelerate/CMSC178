#include <graphics.h>
#include <conio.h>
#include <math.h>

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
int main()
{
   //int gd = DETECT, gm;
 	initwindow(678,548);
   //initgraph(&gd, &gm, "C:\\TC\\BGI");
   
   //arc hell starts here
   arc(664, 75, (int)166.61, (int)-79.22, 22); //h1
   arc(635, 103, -90, (int)76.37, 34); //h2
   arc(585, 85, (int)135.94 , (int)-159.48, 84); //h3
   arc(644, 19, (int)-154.44, (int)-91.12, 52); //h4
   arc(555, 77, (int)27.95, (int)100.30, 56); //h5
   arc(554, 72, (int)116.08, (int)123.39, 53); //h6
   arc(488, 253, (int)-68.32, (int)51.84, 90); //b1
   arc(76, 270, 90, 180, 75); //b2
   arc(5, 343, (int)-35.19, (int)14.62, 96); //bl1
   arc(170, 446, (int)151.11, (int)-147.75, 100); //bl2
   arc(63, 339, (int)-44.19, (int)-2.86, 101); //bl3
   arc(224, 459, (int)150.67, (int)-159.97, 103); //bl4
   arc(87, 535, (int)1.59, (int)91.64, 37); //bf1
   arc(126, 530, (int)-5.76, (int)86.82, 37); //bf2
   arc(475, 316, (int)147.62, (int)-145.98, 49); //fl1
   arc(449, 325, (int)-54.16, (int)-22.52, 45); //fl2
   arc(461, 323, (int)-44.34, (int)-12.23, 62); //fl3
   arc(460, 512, (int)2.66, (int)64.03, 44); //ff1
   arc(503, 510, (int)2.79, (int)83.05, 42); //ff2
   arc(580, 56, 0, 360, 5); //eye
   //arc hell ends here
   
   //line hell begins
   line(531,25,539,0);
   line(539,0,552,22);
   line(552,22,558,0);
   line(558,0,572,24);
   line(534,26,540,9);
   line(540,9,548,22);
   line(545,183,556,143);
   line(556,143,635,136);
   line(76,196,487,164);
   line(487,164,506,113);
   line(2,269,30,535);
   line(30,535,162,533);
   line(163,344,435,343);
   line(442,512,435,343);
   line(544,508,442,512);
   line(475,361,479,473);
   line(508,469,505,364);
   //line hell end
   
   //smile start
   int x[] = {590,600,642,667};
   int y[] = {113,121,119,107};
   bezier(x,y);
   //smile end
   
   //tail
   int t1x[] = {40,8,50,91};
   int t1y[] = {205,163,82,101};
   bezier(t1x, t1y);
   int t2x[] = {17,-16,58,103};
   int t2y[] = {224,158,56,100};
   bezier(t2x, t2y);
   int t3x[] = {91,102,108,103};
   int t3y[] = {101,126,103,100};
   bezier(t3x, t3y); 
   
   getch();
   closegraph();
   return 0;
}



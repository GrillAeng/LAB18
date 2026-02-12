#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double overlapX,overlapY,overlapR,overlapB;
	double R1r = R1.x+R1.w;
	double R2r = R2.x+R2.w;
	double R1b = R1.y-R1.h;
	double R2b = R2.y-R2.h; 
	if (R1.x>R2.x) overlapX = R1.x;
	else overlapX = R2.x;
	if (R1.y<R2.y) overlapY = R1.y;
	else overlapY = R2.y;
	if (R1r<R2r) overlapR = R1r;
	else overlapR = R2r;
	if (R1b>R2b) overlapB = R1b;
	else overlapB = R2b;
	if (overlapR-overlapX <= 0 || overlapY-overlapB <= 0) return 0;
	else return (overlapR-overlapX)*(overlapY-overlapB);
}

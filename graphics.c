#ifndef _graphics_h
#define _graphics_h
void InitGraphics();
void MovePen(double x,double y);
void DrawLine(double dx,double dy);
void DrawArc(double r,double start,double sweep);
double GetWindowWidth(void);
double GetWindowHeight(void);

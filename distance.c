//WAP to find the distance between two point using 4 functions.
i have interchange the 6 activity with 7. "sorry sir" 

#include<stdio.h>
#include<math.h>
void inp();
void calculate(float x1, float y1, float x2, float y2);
void show(float d,float x1, float y1, float x2, float y2);
void main()
{
    inp();
}
void inp()
{
    printf("Enter points of first co-ordinate\n");
    float x1,y1,x2,y2;
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of point2\n");
    scanf("%f%f",&x2,&y2);
    calculate(x1,y1,x2,y2);
}
void calculate(float x1, float y1, float x2, float y2)
{
   float distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    show(distance,x1,y1,x2,y2);
}
void show(float d,float x1, float y1, float x2, float y2)
{
    printf("The distance between given points %f,%f and %f,%f is %f\n",x1,y1,x2,y2,d);
}

#include<stdio.h>
#include<math.h>

void main()
{
    float a=0.,b=2*M_PI,x,delta_x=1.e-2;
    //float y;
    printf("\tx\t\tsin(x)\t\tsin\'an(x)\t\tsin\'sk(x)\n");
    x = a;
    while (x < b)
    {
        //y = sin(x);
        printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,sin(x),cos(x),
                (sin(x + delta_x)-sin(x))/delta_x);

        //printf("%10.2f\t%10.2f\n",x,y);
        x += delta_x;
        //x = x+delta_x;
    }
}
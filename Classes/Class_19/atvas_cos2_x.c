#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,x,x2,delta_x2=1.e-2;

    printf("lūdzu ievadi A vērtību sekojošajam vienādojumam : cos2(x)=A\n");
    scanf("%f",&a);
    printf("lūdzu ievadi robežas beigas sekojošajam vienādojumam : cos2(x)=A\n");
    scanf("%f",&b);

    printf("\tx2\t\tcos2(x)\t\tsin2(x)\t\tcos2'(x)\n");
    x = a;
    x2 = x*x;
    while (x2 < b)
    {
        printf("%12.2f\t%12.2f\t%12.2f\t%12.2f\n",x2,cos(x2),sin(x2),
                (cos(x2 + delta_x2) - cos(x2))/delta_x2);

        x2 += delta_x2;

    }
}
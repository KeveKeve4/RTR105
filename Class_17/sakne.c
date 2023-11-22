#include<stdio.h>
#include<math.h>

float m_cos_a (float a,float A) 
{
    return cos(a*a)-A;
}
float m_cos_b (float b,float A) 
{
    return cos(b*b)-A;
}

int main() 
{
    float a=0.01 , b=1.5*M_PI,x,delta_x =1.e-3/* 0.001 */ , funkca , funkcb , funkcx, A ;
    int k=0;

    printf("lūdzu ievadi A vērtību sekojošam vienādojumam : cos2(x)=A\n");
    scanf("%f",&A);

    x = A;


    funkca =m_cos_a(a,A); funkcb =m_cos_b(b,A);
    //if (funkca * funkcb >0)
    //{
    //    printf( "Intervaalaa [%.2f;%.2f] m_cos(x) funkcijai",a,b);
    //    printf( "saknju nav (vai taajaa ir paaru saknju skaits)\n");
    //    return 1;
    //}

    printf("               cos2(%7.3f)=%7.3f\t\t\t\t",a,m_cos_a(a,A));
    printf("cos2(%7.3f)=%7.3f\n",b,m_cos_b(b,A));

    while ((b-a)>delta_x) 
    {
        k++;//k=k+1;//k+=1;
        x = (a+b)/2.;
        if (funkca*cos(x)>0) //pie a=0 -> funkca=0 -> reizinaajums ir preciizi 0 visulaiku -> visulaika "straadaa" b=x
        a = x;
        else
        b = x;
        printf( "%2d. iteraacija:cos2(%7.3f)=%7.3f\t",k,a,m_cos_a(a,A));
        printf( "cos2(%7.3f)=%7.3f\t",x,cos(x*x));
        printf( "cos2(%7.3f)=%7.3f\n",b,m_cos_b(b,A)); 
    }

    printf("Saakne atrodas pie x=%.3f , jo cos2(x) ir %.3f\n",x,cos(x));

    return 0;
}

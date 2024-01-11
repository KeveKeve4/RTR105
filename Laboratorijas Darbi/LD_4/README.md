# 4. Laboratorijas Darbs - integrālis

funkcija: cos^2(x)

funkcijas laukumu var notiekt lietojot integrāli, to ir iespējams darīt ar šīm 3 metodēm
- tainstūra laukumu;
- trapeces laukumu;
- Simpsona metodi (manā kodā nestrādā);

cos^2(x) integrāļa [grafiks]()

formulas uz kā integrāļa aprēķins balstās

S(tains) = a * b 
integralis = (b-a) * f((a+b)/2)

S(trap) = ((a+b)/2) * h 
integralis = (b-a) * ((f(a)+f(b))/2)

Simspona formula integraalim = ((b-a)/6) * (f(a)+4f((a+b)/2)+f(b))

Programmas kods:
```
#include<stdio.h>
#include<math.h>

float taisn(float);
float trapece(float);
float simpsons(float);

float a,b,preciz,h,s,s1,s2, integr1=0, integr2;
int k, n=2;

int main()
{
printf("lūdzu ievadiet sākuma robežu a:\n");
scanf("%f",&a);
  
printf("lūdzu ievadiet beigu robežu b:\n");
scanf("%f",&b);
  
printf("lūdzu izvēlieties aprēķinu precizitāti:\n");
scanf("%f",&preciz);

printf("Rezultāts izmantojot taisnstūra metodi: %f\n", taisn(integr1));
printf("Rezultāts izmantojot trapeces metodi: %f\n", trapece(integr1));
printf("Rezultāts izmantojot Simpsona metodi: %f\n", simpsons(integr1));
}

float taisn(float integr1)
{
	integr2=(b-a)*pow(cos((a+b)/n),2);
	while(fabs(integr2-integr1)>preciz)
  {
	  n*=2;
	  h=(b-a)/n;
	  integr1=integr2;
	  integr2=0;

		for(k=0;k<n;k++)
    {
		integr2+=h*pow(cos(a+(k+0.5)*h),2);
		}
	}
return integr1;
}

float trapece(float integr1)
{
	integr2=((b-a)/n)*(pow(cos(a),2)*pow(cos(b),2))/n;
	while(fabs(integr2-integr1)>preciz)
  {
  	n*=2;
  	h=(b-a)/n;
  	integr1=integr2;
  	integr2=0;

		for(k=0;k<n;k++)
    {
		integr2+=h*pow(cos(a+(k+0.5)*h),2);
		}
	}
return integr1;
}

/*
float simpsons(float integr1)
{
  integr1=((b-a)/6)*(pow(cos(a),2)-4*(pow(cos((a+b)/2),2)+pow(cos(b),2)));
	while(fabs(integr2-integr1)>preciz)
  {
		integr1=integr2;
		integr2=0;
		for(k=1;k<n;k++)
    {
			if(k%2==0)
      {
				integr2+=2*pow(cos(a+k*h),2);
			}
			else
      {
				integr2+=4*pow(cos(a+k*h),2);
			}
		}
		integr1=(h/6)*((pow(cos(a),2)+pow(cos(b),2)+integr2));
  }
return integr1;
}
*/

```
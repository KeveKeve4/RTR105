# 4. Laboratorijas Darbs - integrālis

funkcija: cos^2(x)

funkcijas laukumu var notiekt lietojot integrāli, to ir iespējams darīt ar šīm 3 metodēm
- tainstūra laukumu;
- trapeces laukumu;
- Simpsona metodi;

cos^2(x) integrāļa [grafiks](https://github.com/KeveKeve4/RTR105/blob/main/Laboratorijas%20Darbi/LD_4/cos2%20laukums.png)

Programmas kods:
```
#include<stdio.h>
#include<math.h>

double taisnsturis(double,double,int);
double trapec(double,double,int);
double simpsons(double,double,int);

int main() 
{
    double a,b;
    int n;

	printf("lūdzu ievadiet sākuma robežu a:\n");
	scanf("%lf",&a);
  
	printf("lūdzu ievadiet beigu robežu b:\n");
	scanf("%lf",&b);
  
	printf("lūdzu izvēlieties aprēķinu precizitāti:\n");
	scanf("%d",&n);

    double taisn_summa = taisnsturis(a, b, n);
    printf("Rezultāts izmantojot taisnstūra metodi: %f\n", taisn_summa);
    double trapec_summa = trapec(a, b, n);
    printf("Rezultāts izmantojot trapeces metodi: %f\n", trapec_summa);
    double simpson_summa = simpsons(a, b, n);
    printf("Rezultāts izmantojot Simpsona metodi: %f\n", simpson_summa);

    return 0;
}

double cos2(double x) 
{
    return pow(cos(x), 2);
}

double taisnsturis(double a, double b, int n) 
{
    double h = (b - a) / n;
    double summa = 0.0;

    for (int i = 0; i < n; i++) 
	{
        double x = a + i * h;
        summa += cos2(x);
    }

    return h * summa;
}

double trapec(double a, double b, int n) 
{
    double h = (b - a) / n;
    double summa = 0.5 * (cos2(a) + cos2(b));

    for (int i = 1; i < n; i++) 
	{
        double x = a + i * h;
        summa += cos2(x);
    }

    return h * summa;
}

double simpsons(double a, double b, int n) 
{
    if (n % 2 != 0) 
	{
        n++;
    }

    double h = (b - a) / n;
    double summa = cos2(a) + cos2(b);

    for (int i = 1; i < n; i++) 
	{
        double x = a + i * h;
        summa += (i % 2 == 0) ? 2 * cos2(x) : 4 * cos2(x);
    }

    return h / 3 * summa;
}
```

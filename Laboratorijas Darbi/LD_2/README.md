# 2. Laboratorijas Darbs - Sakne

funkcija: cos^2(x)

Pēc lietotāja ievadītajiem mainīgajiem ir iespējams veikt funkcijas mainīgā aprēķinu lai parādītu lietotājam kurās x vērtībās viņa izvēlētā funcijas vērtība būs 0.

Links uz funkcijas cos^2(x) saknēm pie vārtībām [(0;3) y=0,2](https://github.com/KeveKeve4/RTR105/blob/main/Laboratorijas%20Darbi/LD_2/cos2(x)%20sakne.png)

```
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, x, delta_x ,funkca, funkcb, funkcx;
	int k=0;


	printf("Lūdzu ievadiet sākuma robežu:  \n");
	scanf("%f",&a);
	printf("Lūdzu ievadiet beigu robežu:  \n");
	scanf("%f",&b);
	printf("Lūdzu ievadiet vēlamo precizitāti (no 0 līdz 1):  \n");
	scanf("%f",&delta_x);
	printf("Lūdzu ievadiet, kādai f(x) vērtībai aprēķināt x vērtību (no 0 līdz 1):  \n");
	scanf("%f",&c);

	
	funkca=(cos(a)*cos(a))-c;
	funkcb=(cos(b)*cos(b))-c;

	if(funkca*funkcb>0)
	{
	  printf("Izvēlētajā intrvāla [%.2f;%.2f]  ar šīm vērtībām nav iespējams veikt darbības f-jai cos(x)*cos(x)!\n" ,a,b);
	  return 0;
	}
  
	while((b-a)>delta_x)
  {
		x=(a+b)/2.;
		if(funkca*((cos(x)*cos(x)-c)>0))
    {
			a=x;
    }
    else
    {
			b=x;
    }
		k++;
	}
  
	printf("%2d. iterācija: cos2(%.3f)=%.3f\n" ,k,a,cos(x)*cos(x));
	printf("cos2(%.3f)=%.3f\n" ,x,cos(x)*cos(x));
	printf("cos2(%.3f)=%.3f\n" ,b,funkcb);
  
	printf("Sakne atrodas pie x=%.3f, jo cos2(x) ir %.3f\n",x,pow(cos(x),2));

return 0;
}
}
```

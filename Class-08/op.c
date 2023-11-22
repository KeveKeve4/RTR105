#include <stdio.h>

int main(void)
 {

char	c1 = 45, 		c2 = 065,	c3;
int 	i1 = 'f', 		i2 = 0x5695,	i3;
float	f1 = 8.895, 		f2 = 74.3e-2,	f3;
double	d1 = 0.000000001, 	d2 = 1.e-10,	d3;

 // / operācija pētīšana
 printf("/ operācijas pētīšana\n");
 c3 = c2 / c1;
 printf("%d / %d = %d (rezultāta izmērs baitos - %ld),",c2,c1,c2/c1,sizeof(c2/c1));
 printf(" rezultāts no atmiņas - %d\n",c3);

 f3 = c2 / c1;
 printf("%d / %d = %d (rezultāta izmērs baitos - %ld),",c2,c1,c2/c1,sizeof(c2/c1));
 printf(" rezultāts no atmiņas - %f\n",f3);

 f3 = (float)c2 / c1;
 printf("%d / %d = %d (rezultāta izmērs baitos - %ld),",c2,c1,c2/c1,sizeof(c2/c1));
 printf(" rezultāts no atmiņas - %f\n",f3);

 // % operācija pētīšana
 printf("\n%c operācijas pētīšana\n",'%');
 i3 = i2 % i1;
 printf("%d %c %d = %d (rezultāta izmērs baitos - %ld),",i2,'%',i1,i2%i1,sizeof(i2%i1));
 // printf("%d %c %d = %d (rezultāta izmērs baitos - %ld),",i2,37,i1,i2%i1,sizeof(i2%i1));
 // printf("%d %c %d = %d (rezultāta izmērs baitos - %ld),",i2,0X25,i1,i2%i1,sizeof(i2%i1));
 printf(" rezultāts no atmiņas - %d\n",i3);

 //f3 = f2 % f1;
 //printf("%f %c %f = %f (rezultāta izmērs baitos - %ld),",f2,'%',f1,f2%f1,sizeof(f2%f1));
 //printf(" rezultāts no atmiņas - %f\n",f3);

 // >> operācija pētīšana
 printf("\n>> operācijas pētīšana\n");
 i3 = i2 >> 1;
 printf("%d >> 1 = %d (rezultāta izmērs baitos - %ld),",i2,i2>>1,sizeof(i2>>1));
 printf(" rezultāts no atmiņas - %d\n",i3);
 i3 = i2 >> 2;
 printf("%d >> 2 = %d (rezultāta izmērs baitos - %ld),",i2,i2>>2,sizeof(i2>>2));
 printf(" rezultāts no atmiņas - %d\n",i3);

 //f3 = f2 >> 1;
 //printf("%f >> 1 = %f (rezultāta izmērs baitos - %ld),",f2,f2>>1,sizeof(f2>>1));
 //printf(" rezultāts no atmiņas - %f\n",f3);

 return 0;
 }

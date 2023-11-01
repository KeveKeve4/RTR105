#include <stdio.h>
int main ()
{
  FILE * pFile;
  char c;

  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
    printf ("norāde uz failu - %p\n",pFile);
    fputs ("fopen - testa ierakstīts failā\n",pFile);
    scanf("%c",&c);
    fclose (pFile);
  }
  else
  {
    fputs ("fopen - failu nav izdevies atvērt\n",stderr);
  }
  return 0;
}

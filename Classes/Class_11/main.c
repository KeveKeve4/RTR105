#include "foo.h"
#include <stdio.h>
int main(void)
{

 //char *name_main = "bar";
 char name_main[] = "bar";
 printf("name_main atrašanās vieta atmiņā %p\n", name_main);
 printf("name_main vērtība pirms foo izpildīšanas %s\n", name_main);

 int id_main = 42;
 printf("id_main atrašanās vieta atmiņā %p\n", &id_main);
 printf("id_main vērtība pirms foo izpildīšanas %d\n", id_main);

 //foo(42, "bar");
 foo(id_main, name_main);

 printf("\nname_main atrašanās vieta atmiņā %p\n", name_main);
 printf("name_main vērtība pēc foo izpildīšanas %s\n", name_main);

 printf("id_main atrašanās vieta atmiņā %p\n", &id_main);
 printf("id_main vērtība pēc foo izpildīšanas %d\n", id_main);

    return 0;
}

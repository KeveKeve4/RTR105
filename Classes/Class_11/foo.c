#include "foo.h"    // Always include the header file that declares something
#include "string.h" /* in the C file that defines it. This makes sure that the
                     * declaration and definition are always in-sync.  Put this
                     * header first in foo.c to ensure the header is self-contained.
                     */
#include <stdio.h>
                       
/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
void foo(int id, char *name)
{
    fprintf(stderr, "foo(%d, \"%s\");\n", id, name);
    /* This will print how foo was called to stderr - standard error.
     * e.g., foo(42, "Hi!") will print `foo(42, "Hi!")`
     */
    printf("(izdrukāta no foo funkcijas)name atrašanās vieta atmiņā %p\n", name);
    printf("(izdrukāta no foo funkcijas)name vērtība: %s\n" ,name);

    printf("(izdrukāta no foo funkcijas)name atrašanās vieta atmiņā %p\n", &id);
    printf("(izdrukāta no foo funkcijas)name vērtība: %d\n" ,id);
    printf("\n");
    //name = "car"; //NB! nestrādā
    strcpy(name, "car");
    id = 50;
}

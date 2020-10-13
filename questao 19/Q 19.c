#include "libgc.h"
#include <assert.h>
#include <stdio.h>

int main ()
{
  int i, **p, **r;

  GC_INIT (); / * Opcional no Linux / X86; ver abaixo. * /
  para (i = 0; i <60000000; ++ i)
   {
     int ** p = (int **) GC_MALLOC (sizeof (int *));
     int * r = (int *) GC_MALLOC_ATOMIC (sizeof (int));
     afirmar (* p == 0);
     * p = (int *) GC_REALLOC (r, 2 * sizeof (int));
     if (i% 200000 == 0)
       printf ("Tamanho do heap =% d\n", GC_get_heap_size ());
   }
  return 0;
}

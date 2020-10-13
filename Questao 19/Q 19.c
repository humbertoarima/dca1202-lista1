#include "libgc.h"
#include <assert.h>
#include <stdio.h>

int main (void)
{
  int i, **p, **r;

  GC_INIT ();
  for (i = 0; i <60000000; ++ i)
   {
     int ** p = (int **) GC_MALLOC (sizeof (int *));
     int * r = (int *) GC_MALLOC_ATOMIC (sizeof (int));
     assert(* p == 0);
     * p = (int *) GC_REALLOC (r, 2 * sizeof (int));
     if (i% 200000 == 0)
       printf ("Tamanho do heap =% d \ n", GC_get_heap_size ());
   }
  return 0;
}

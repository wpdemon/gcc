/* { dg-options "-mabicalls -mshared -mabi=64" } */
/* { dg-final { scan-assembler-not "(\\\$28|%gp_rel|%got)" } } */
/* { dg-final { scan-assembler-not "\tjr\t\\\$1\n" } } */

#include "branch-helper.h"

NOMIPS16 void
foo (void (*bar) (void), volatile int *x)
{
  bar ();
  if (__builtin_expect (*x == 0, 1))
    OCCUPY_0x1fff8;
}

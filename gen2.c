/*
   ______
  / ____/
 / /     
/ /___   
\____/   
    126 characters

Usage:
gcc gen2.c -o gen2
gen2 [KEY] [SITE]
*/

int i;f(int x){putchar(((29-2*x)*x-91)*x/2
+97);}main(int c,char**v){printf(v[1]);for
(;i<4;++i)f(--v[2][i]%16/4),f(v[2][i]%4);}

/*
   ______
  / ____/
 / /     
/ /___   
\____/   
     73 characters

Usage:
gcc gen.c -o gen
gen [KEY] [SITE]
*/

int i;main(int c,char**v){printf(v[1]);for(;i<4;++i)putchar(v[2][i]^37);}

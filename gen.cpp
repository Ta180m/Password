/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
     96 characters

Usage:
g++ gen.cpp -o gen
gen [KEY] [SITE]
*/

#include<cstdio>
main(int c,char**v){printf(v[1]);for(int i=0;i<4;++i)putchar(char(v[2][i]^37));}

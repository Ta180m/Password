/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
    112 characters

Usage:
g++ gen.cpp -o gen
gen [KEY] [SITE]
*/

#include<iostream>
#define o(x) std::cout<<x
main(int c,char**v){o(v[1]);for(int i=0;i<4;++i)o(char(v[2][i]^37));}

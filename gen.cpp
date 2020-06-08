/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
    125 characters

Usage:
g++ gen.cpp -o pgen
gen [KEY] [SITE]
*/

#include<iostream>
#define o(x) std::cout<<x
main(int argc,char*argv[]){o(argv[1]);for(int i=0;i<4;++i)o(char(argv[2][i]^37));}

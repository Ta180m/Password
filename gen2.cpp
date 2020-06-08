/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
    171 characters

Usage:
g++ gen2.cpp -o gen2
gen2 [KEY] [SITE]
*/

#include<iostream>
char f(int x){return x*(x*(29-2
*x)-91)/2+97;}main(int d,char**
v){std::cout<<v[1];for(int i=0;
i<4;++i){char x=(v[2][i]-97)%16
;std::cout<<f(x/4)<<f(x%4);}}//

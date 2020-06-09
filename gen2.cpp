/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
    160 characters

Usage:
g++ gen2.cpp -o gen2
gen2 [KEY] [SITE]
*/

#include<iostream>
int f(int x){std::cout<<char(((29-2*x)*x-91)*x/2+97);}main(int d,char**v){std::cout<<v[1];for(int i=0;i<4;++i)f(--v[2][i]%16/4),f(v[2][i]%4);}

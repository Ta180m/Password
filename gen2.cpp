/*
   ______         
  / ____/__    __ 
 / /  __/ /___/ /_
/ /__/_  __/_  __/
\____//_/   /_/   
    228 characters

Usage:
g++ gen2.cpp -o gen2
gen2 [KEY] [SITE]
*/

#include<iostream>
#define c case
#define r return
char f(int x){switch(
x){c 0:r'a';c 1:r'A';
c 2:r'8';}r'@';} main
(int argc,char*argv[]
){std::cout<<argv[1];
for(int i=0;i<4;++i){
char x=(argv[2][i]-97
)%16;std::cout<<f(x/4
)<<f(x%4);}}

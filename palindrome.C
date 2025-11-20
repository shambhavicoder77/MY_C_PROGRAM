#include<stdio.h>
#include<string.h>
int main() {
   int num=121,original,rev=0,rem;
   original=num;
   while(num!=0) {
       rem=rev*10;
       rev=rev*10+rem;
       num=num/10;
   }
       if(original==rev) 
           printf("palindrome");
           else
               printf("it is not palindrome");
   }
           
           o/p
it is not palindrome

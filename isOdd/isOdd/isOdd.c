#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<stdbool.h>  

bool isOdd(int n) {  
   if (n % 2 == 1)  
       return true; // Corrected "ture" to "true"  
   else  
       return false;  
}  

int main() {  
   int n;  
   printf("Enter an integer: ");  
   scanf("%d", &n);
   if (isOdd(n))  
       printf("%d is odd.\n", n);  
   else  
       printf("%d is even.\n", n);  
   return 0;  
}
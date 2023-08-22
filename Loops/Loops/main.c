//
//  main.c
//  Loops
//
//  Created by Gokhan Kaya on 12.08.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
////    Example questions for "for loop"
//
//
////   1- Write a program in C to read 10 numbers from the keyboard and find their sum and average.
//
//
//    /*int number,i,sum;
//    float avg;
//    for(i = 1; i <=10; i++){
//        printf("Please enter number %d : ", i);
//        scanf("%d",&number);
//
//        sum = sum+number;
//    }
//
//    avg = sum/10.0;
//    printf("Avarage is %f \n",avg);*/
//
////   2- Write a program in C to display the cube of the number up to an integer.
//    int i,ctr;
//       printf("Input number of terms : ");
//       scanf("%d", &ctr);
//       for(i=1;i<=ctr;i++)
//       {
//        printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));
//       }

////   3- Finding Factorial
//    int i;
//    int factorial = 1;
//
//    for(i=1;i<=3;i++){
//        factorial = factorial * i;
//    }
//    printf("%d",factorial);
//
////   4- Fibonacci Series
    /* int i,a,b,c;
    b= 1;
    a = 1;
    
    for(i=0;i<8;i++){
        c=a+b;
        a=b;
        b=c;
        
        printf("%d \n",c);
    }*/
    
////   5-  Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.
    /*int i,j,n;
     printf("Input number of rows for this pattern :");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         for(j=1;j<=n-i;j++)
         printf(" ");
         for(j=1;j<=2*i-1;j++)
           printf("*");
         printf("\n");
     }*/
    
////   6-  Write a program in C to display the multiplication table for a given integer.
    /*int i,a,b;
    a=15;
    for(i=1;i<=15;i++){
        b=a*i;
        printf("%d * %d = %d",a,i,b);
        printf("\n");
    }*/
    
////   6-  Write a program in C to display a pattern like a right angle triangle using an asterisk.
    
    int i,j,b;
    b=10;
    for(i=1;i<b;i++){
        printf("*");
        printf("\n");
    }
        


    
    
    
    return 0;
}

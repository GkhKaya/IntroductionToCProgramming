//
//  main.c
//  ExampleQuestions
//
//  Created by Gokhan Kaya on 4.09.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //MARK: - How many 3-digit numbers are there with different digits?
    /*int counter = 0;
    int i;
    int a,b,c;
    
    for (i=100; i<999; i++) {
        a = i/100;
        b = ((i/10)%10);
        c= i%10;
        if(a != b && a !=c && b!=c){
            counter ++;
        }
    }
    printf("%d",counter);*/
    
    //MARK: - Code the algorithm that finds the exact divisors of the number entered from the keyboard
   /* int a = 0,i;
    printf("Please enter a number: ");
    scanf("%d",&a);
    
    for (i=0; i<=a; i++) {
        if(a%i==0){
            printf("%d \n",i);
        }
    }*/
    
    //MARK: - code a program that takes the cube of the number entered from the keyboard
    /*int a,b;
    printf("Plese enter a number: ");
    scanf("%d", &a);
    b = a*a*a;
    printf("%d of cube is = %d \n", a,b);*/
    
    //MARK: - One type of bacteria reproduces by dividing itself in half every hour. In this laboratory How many bacteria will there be after 24 hours?
    
    /*int i,a;
    a = 1;
    for (i=1; i<=24; i++) {
        a = a*2;
    }
    printf("%d",a);*/
    
    //MARK: - Code a program that takes 4 whole numbers from the keyboard and finds their sum.
   /* int a,b,c,d,e;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    printf("Enter fourth number: ");
    scanf("%d",&d);
    e = a+b+c+d;
    printf("Their sum is = %d \n", e);*/
    
    //MARK: - Numbers entered from the keyboard until 0 is entered: program that adds
    /*int a,b = 0;
    
    while (a != 0) {
        printf("Please enter a number = ");
        scanf("%d", &a);
        b = b+a;
        
    }
    printf("%d",b);*/
    
    
    
    return 0;
}

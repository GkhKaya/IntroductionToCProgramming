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
    int a,b;
    printf("Plese enter a number: ");
    scanf("%d", &a);
    b = a*a*a;
    printf("%d of cube is = %d \n", a,b);
    
    return 0;
}

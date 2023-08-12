//
//  main.c
//  IfElse
//
//  Created by Gokhan Kaya on 12.08.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
//    if else part one
//    int number = 5;
//
//    if(number == 5){
//        printf("Entered value is correct: %d \n", number);
//    }else{
//        printf("Entered value is incorrect \n");
//    }
//
//    int number1,number2,total;
//
//    number1 = 99;
//    number2=8585;
//    total = number1 + number2;
//
//    if(total >= 50){
//        printf("Total is: %d greater than 50 \n",total);
//    }else if(total == 40){
//        printf("Total is: %d equal to 50 \n",total);
//    }else{
//        printf("Total is: %d less than 50 \n",total);
//    }
//
//    printf("Student average account information system");
//    printf(" \n \n");
//    int s1,s2,avarage;
//
//    printf("Plese enter first exam grade: ");
//    scanf("&d",&s1);
//
//    printf("\n Plese enter second exam grade: \n");
//    scanf("&d",&s2);
//
//    avarage = (s1 + s2)/2;
//
//    if(total < 50){
//        printf("Your avarage is less than 50. Your avarage is: %d",avarage);
//    }else if(total == 50){
//        printf("Your avarage is equal to 50. Your avarage is: %d",avarage);
//    }else{
//        printf("Your avarage is greater than 50. Your avarage is: %d",avarage);
//    }
    
//    if else part two
    
//    int number;
//    number  =8;
//
//    if(number % 2 == 0){
//        printf("Number is even");
//    }else{
//        printf("Number is odd");
//    }
//
//    int number2;
//    number2  =80;
//
//    if(number2 % 3 == 0 && number2 %5 == 0){
//        printf("true");
//    }else{
//        printf("false");
//    }
//
    int exam1,exam2,exam3,project,avarage;
    
    printf("Please entar first exam grade: ");
    scanf("%d",&exam1);
    
    printf("Please entar second exam grade: ");
    scanf("%d",&exam2);
    
    printf("Please entar third exam grade: ");
    scanf("%d",&exam3);
    
    printf("Please entar project grade: ");
    scanf("%d",&project);
    
    avarage = (exam1 + exam2 + exam3 + project)/4;
    
    if (avarage < 50) {
        printf("Your avarage is: %d = ff \n",avarage);
    }else if (avarage >= 50 && avarage < 60){
        printf("Your avarage is %d = dd \n" ,avarage);
    }else if(avarage >= 60 && avarage < 70){
        printf("Your avarage is %d = cc \n" ,avarage);
    }else if(avarage >= 70 && avarage < 85){
        printf("Your avarage is %d = bb \n" ,avarage);
    }else{
        printf("Your avarage is %d = aa  \n" ,avarage);
    }
        
    
    
    
    return 0;
}

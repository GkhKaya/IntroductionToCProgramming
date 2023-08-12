//
//  main.c
//  IfElse
//
//  Created by Gokhan Kaya on 12.08.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number = 5;
    
    if(number == 5){
        printf("Entered value is correct: %d \n", number);
    }else{
        printf("Entered value is incorrect \n");
    }
    
    int number1,number2,total;
    
    number1 = 99;
    number2=8585;
    total = number1 + number2;
    
    if(total >= 50){
        printf("Total is: %d greater than 50 \n",total);
    }else if(total == 40){
        printf("Total is: %d equal to 50 \n",total);
    }else{
        printf("Total is: %d less than 50 \n",total);
    }
    
    printf("Student average account information system");
    printf(" \n \n");
    int s1,s2,avarage;
    
    printf("Plese enter first exam grade: ");
    scanf("&d",&s1);
    
    printf("\n Plese enter second exam grade: \n");
    scanf("&d",&s2);
    
    avarage = (s1 + s2)/2;
    
    if(total < 50){
        printf("Your avarage is less than 50. Your avarage is: %d",avarage);
    }else if(total == 50){
        printf("Your avarage is equal to 50. Your avarage is: %d",avarage);
    }else{
        printf("Your avarage is greater than 50. Your avarage is: %d",avarage);
    }
    
    
    
    
    return 0;
}

//
//  main.c
//  MultidimensionalArrays
//
//  Created by Gokhan Kaya on 22.08.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int myArray[2][2];
    myArray[0][0] = 10;
    myArray[0][1] = 20;
    myArray[1][0] = 30;
    myArray[1][1] = 40;
    printf("0-1 element is: %d \n", myArray[0][1]);
    
    int matris[2][3] = {10,20,30,40,50,60};
    printf("%d", matris[0][2]);
    return 0;
}

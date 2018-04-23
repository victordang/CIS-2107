//
//  main.c
//  lab2-3
//
//  Created by Victor Dang on 9/10/17.
//  Copyright © 2017 Victor Dang. All rights reserved.
//

#include <stdio.h>


int main () {
    
    int n;
    
    
    printf("Please enter your number to check if it is a power of 2:\n");
    scanf("%d",&n);
    
    if ((n != 0) && !(n&(n-1))){
        printf("This number is a power of 2\n");
    }
    else {
        printf("This number is not a power of 2\n");
    }
    
    return 0;
}

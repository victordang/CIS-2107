//
//  main.c
//  lab2-1
//
//  Created by Victor Dang on 9/10/17.
//  Copyright © 2017 Victor Dang. All rights reserved.
//
#include <stdio.h>
int main (){
    
    
    
    int n1, n2;
    printf("Enter number 1:\n");
    scanf("%d" , &n1);
    printf("Enter number 2:\n");
    scanf("%d", &n2);
    
    if ((n1^n2)==0)
        printf("0\n");
    else
        printf ("Numbers are not the same\n");
    
    

    
    return 0;
}

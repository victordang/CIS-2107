//
//  main.c
//  lab2-2
//
//  Created by Victor Dang on 9/10/17.
//  Copyright © 2017 Victor Dang. All rights reserved.

#include <stdio.h>
int main (){
    
    short int n1, n2;
    int n3;
    
    printf("Enter First Number\n");
    scanf("%hu",&n1);
    printf("Enter Second Number\n");
    scanf("%hu",&n2);
    n3 = n1<<16;
    n3 = n3|n2;
    
    printf("%d\n",n3);
    
    return 0;
}

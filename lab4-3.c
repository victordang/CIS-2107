// Victor Dang
// CIS 2107
// Lab 4 - 3
// This program is designed to use function intArrayToString to convert an array of numbers to its corrct ASCII value

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int intArrayToString(int array_of_ints[]){
    
    int j;
    
    for (j=0; j <sizeof(array_of_ints); j++){
        printf("%c", array_of_ints[j]);
    }
    printf("\n");
    
    return 0;
}

int main() {
    
    int i,n;
    
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    int array [n];

    
    for(i = 0 ; i<n; i++){
        printf ("Please enter your number(s)\n");
        scanf("%d", &array[i]);
    }
    
    intArrayToString(array);
    
    return 0;
}

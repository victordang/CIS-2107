//Victor Dang
//CIS 2107
//Lab 4-2
//This program is very similar to the first program, instead of returning whether the 2 strings contain same amount of characters. This program uses the standard deviation formula to find the mismatch between the strings. If the mismatch is 0, then the 2 strings are the same

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//CompareString function that compares the length of two strings to see if they contain same number of characters

char CompareString(char*string1 , char*string2){
    
    int i , j;
    double mismatch = 0.0;

    int freq1[200] = {0} , freq2[200] = {0};
    
    //if the length of the 2 strings dont match , automatically doesnt work
    if (strlen(string1)!=strlen(string2)){
        printf("Strings are not equal in length\n");
        return 0;
    }
    
    for (i=0; string1[i];i++){
        freq1[string1[i]]++;
    }
    for (i=0; string2[i];i++){
        freq2[string2[i]]++;
    }
    
    
    for (j=0 ; j < 200; j++){
        mismatch += pow(freq1[j]-freq2[j],2);
    }
   

   printf("The mismatch is: %f\n", sqrt(mismatch/sizeof(freq1)));

    return 0;
}


int main() {
    
    char str1[200];
    char str2[200];
    printf("Please enter string 1:\n");
    fgets(str1,200,stdin);
    printf("Please enter string 2:\n");
    fgets(str2,200,stdin);
    
    CompareString(str1, str2);
    
    return 0;
    
}

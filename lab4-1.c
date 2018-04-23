// Victor Dang
// CIS 2107
// Lab 4 - 1
// This program takes in 2 strings and uses the CompareString function to check if the 2 strings contain the same number of characters.Ex)cat & dog do not contain same characters , but cat & tac do



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//CompareString function that compares the length of two strings to see if they contain same number of characters

char CompareString(char*string1 , char*string2){
    
    
    int i, freq1[200] ={0} , freq2[200] = {0};
  
        if (strlen(string1)!=strlen(string2)){
            return 0;
        }
    //2 for loops to keep counter of frequency of each character in the string
    for (i=0; string1[i];i++){
        freq1[string1[i]]++;
    }
    for (i=0; string2[i];i++){
        freq2[string2[i]]++;
    }
    
    for (i=0; i<200 ; i++){
        if (freq1[i] != freq2[i])
            return 0;
    }
        
    return 1;
}



int main() {
    
    char str1[200];
    char str2[200];
    
    printf("Please enter string 1:\n");
        fgets(str1,200,stdin);
    printf("Please enter string 2:\n");
        fgets(str2,200,stdin);
    
    if (CompareString(str1,str2) == 0){
        printf("Strings do not contain same amount of characters\n");
        
    }
    else {
        printf("Strings contain same characters\n");
    }
    
    
    return 0;

}

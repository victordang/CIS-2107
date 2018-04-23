//Victor Dang
//CIS 2107
//LAb 3 -1 , this program is designed to take an integer and display an inverse pyramid of * based on that integer

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int n,i,j,k;
    
    printf("Please enter an integer:\n");
    scanf("%d",&n);
    
    for (i=n; i>=1;i-=2){
        
        for(k=0; k<n-i;++k){
            printf(" ");
        }
       
        for (j=i;j>0;--j){
            printf(" *");
        
        }
        printf("\n");
        
        
    }//end of for loop
   
    
    if (n %2 == 0){
        for(k=1; k<=n;++k)
            printf(" ");
            printf("*\n");
    }
    return 0;
}

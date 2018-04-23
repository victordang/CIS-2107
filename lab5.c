// Victor Dang & Zach Adams
// Lab 5
//
//

#include <stdio.h>

int main(){
    int dsize=0;
    int msize=0;
    int csize=0;
    int value=0;
    int done=1;
    
    printf("Disk Size? "); //asking for size of disk
    scanf("%d" , &dsize);
    int disk [dsize];
    
    printf("Memory Size? "); //asking for size of memory
    scanf("%d", &msize);
    int memory[msize];
    
    printf("Cache Size? "); //asking for size of cache
    scanf("%d" , &csize);
    int cache[csize];
    
    for(int i=0;i<dsize;i++){ //setting initial values to 0
        disk[i]=i;
    }
    
    for(int i=0;i<msize;i++){ //setting initial values to 0
        memory[i]=0;
    }
    
    for(int i=0;i<csize;i++){//setting initial values to 0
        cache[i]=0;
    }
    
    printf("\n");
    
    
    
    //counters for hit, miss and request
    int total_hit = 0;
    int total_miss = 0;
    int total_request = 0;
    
    
    
    
    while(done!=0){
        printf("Enter a number: ");
        scanf("%d", &value);
        int x , p = 0;
        int cacheSpot = ((value)%(csize));
        int memSpot = ((value)%(msize));
        
        
        
        if((cache[cacheSpot])&&(value==cache[cacheSpot])) //if the value is already in cache its a hit
        {
            printf("Cache Hit:\n");
            total_hit++; //increases total hits
            
        }else if(((memory[memSpot])!=0) || ((cache[cacheSpot])!=0))
            //if something is in another values spot will find another place to put the value
        {
            printf("\nConflict Miss: \n");
            x=0;
            for(int i=0; i<msize && x==0;i++){ //finding spot for value in memory if not full
                printf("i");
                if(memory[i]==0){
                    memory[i]=value;
                    x=1;
                }
                total_miss++; // increase total misses

            }
            for(int i = 0;(i<msize && (value!=memory[memSpot]) && (x==0));i++){
                //finding spot for value in memory if full
                memory[memSpot]=value;
            }
            x=0;
            for(int i=0; i<csize && x==0;i++){ //finding spot for value in cache if not full
                printf("i");
                if(cache[i]==0){
                    cache[i]=value;
                    x=1;
                }
            }
            for(int i = 0;(i<csize && (value!=cache[cacheSpot]) && (x==0));i++){
                //finding spot for value in cache if full
                cache[cacheSpot]=value;
            }
        }else{ //if there is no data in spot where value is will put there
            printf("Compulsory Miss: \n");
            memory[memSpot]=value;
            cache[cacheSpot]=memory[memSpot];
            total_miss++; //increases total misses
        }
        
        
        //printing memory and cache
        printf("Memory: ");
        for(int i=0;i<msize;i++){
            printf("%d ", memory[i]);
        }
        printf("\n");
        printf("Cache: ");
        for(int i=0;i<csize;i++){
            printf("%d ", cache[i]);
        }
        printf("\n");
        printf("Enter 1 to enter another number 0 to end: ");
        scanf("%d", &done);
        total_request++; //increase number of requests
        
    }
    
    int miss_rate = total_miss / total_request;
    int hit_rate = total_hit / total_request;
    int accCache = ((1) * (csize)/4);
    int accMem = ((100) * (msize)/16);
    int accDisk = ((100000) * (dsize)/256);
    
    
    printf("Miss-rate: %d", miss_rate);
    printf("\nHit-rate: %d",hit_rate);
    printf("\n");

    
    printf("Cache access time: %d", accCache);
    printf("\nMemory access time: %d", accMem);
    printf("\nDisk access time: %d ", accDisk);
    printf("\n");
    printf ("Total request: %d\n", total_request);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int i=0;
    int a[10];

    

    while(argv[i] != NULL){
    	a[i]=system(argv[i+1]);
    		i++;
    }
    
    return 0;
}
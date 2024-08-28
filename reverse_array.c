#include <stdio.h>

int main() {
    // Write C code here
    int array[]= {2,3,4,5,6,7,7};
   int n=7;
   int temp;
    for (int i =0;i<7/2;i++){
     temp =array[i];
     array[i] = array[n-1-i]; 
     array[n-1-i]= temp; 
    }
    printf("array %d",array[5]);

    return 0;
}

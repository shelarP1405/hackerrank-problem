#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i); 
    }
    // 1000=10
   //  1004=11
   //  1008=12
   //  1012=13
   //  1016=14
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
      printf("\n");  
    for(i = 0; i < num; i++)
        printf("%d ", (arr + i));
        
        /* Write the logic to reverse the array. */
        printf("\n");
       for(i =num-1; i>=0; i--)
        printf("%d ", *(arr + i)); 
    return 0;
}

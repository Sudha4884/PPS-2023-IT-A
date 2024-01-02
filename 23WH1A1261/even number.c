#include <stdio.h>
int main(){
    int i, num;
    
  
    printf("Enter The Maximum Value: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}

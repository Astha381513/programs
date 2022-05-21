#include <stdio.h>
int main(){
    int num, sum = 0;
    float avg;
    
    printf("Enter the 10 numbers: \n");
    for (int i = 1; i <= 10; i++){
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    
    avg = sum / 10;
    
    printf("Sum of 10 numbers: %d\n", sum);
    printf("Average of 10 numbers: %.2f", avg);
    
    return 0;
}

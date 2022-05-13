#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int number;
int main()
{
    int low = 0, up = 100;
    srand(time(0));
    int num = (rand() % (up - low + 1)) + low;
    printf("you have 10 chances.\nyour answer is between 0 and 100.\n");
    for (int i = 0; i <= 9; i++){
        printf("guess the number: ");
        scanf("%d", &number);
        if (number > num){
            printf("wrong too high\n");
        }else if (number < num){
            printf("wrong too low\n");
        }else if (number == num){
            printf("correct!");
            break;}
   
        

        }

}
           
           
        
        



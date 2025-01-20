#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play_fun(int u, int cmp);

int main(){
    srand(time(0));
    int random = rand() % 3;
    int x,n;
    printf("Enter number (0 for rock//1 for paper//2 for Scissors):");
    scanf("%d",&x);

    play_fun(x,random);

     printf("\nIf you want to play again press 1 else 0:");
    scanf("%d",&n);

    if (n == 1){
    
    do
    {
         printf("Enter number (0 for rock//1 for paper//2 for Scissors):");
         scanf("%d",&x);
         if( x < 0 || x > 2){
            printf("Invalid input.Choice 0\\1\\2");
            break;
         }

        srand(time(0));
        //random = rand() % 3;
        play_fun(x,random);
        printf("\nIf you want to play again press 1 else 0:");
        scanf("%d",&n);
        if(x < 0 || x > 2){
         printf("Invalid input.Choice 0\\1\\2");
         break;
         }
        
    } while (n == 1);

    }

    printf("Thanks for playing Rock Paper Scissors");
   
    
    
    return 0;

}

void play_fun(int u, int cmp){

    if(cmp == u){
        printf("Match draw");
    }

    else if(cmp == 0 && u == 2){
        printf("Computer wins");
    }

    else if(cmp == 2 && u == 0){
        printf("You win");
    }

    else if (cmp == 1 && u == 2)
    {
        printf("You win");
    }

    else if(cmp == 2 && u ==1){
        
        printf("Computer wins");
    }

    else if(cmp == 0 && u ==1)
    {
        printf("You win");
    }

     else if(cmp == 1 && u ==0)
    {
        printf("Computer wins");
    }


   

}
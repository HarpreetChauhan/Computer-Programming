#include<stdbool.h>
#include<stdio.h>
int main(){
    printf("Lets Play Rock, Papers, Scissors\n\n");
    printf("Choose 1 for Rock, \nChoose 2 for Paper, \nChoose 3 for Scissors\n");
    
    int user1, user2;
    printf("Player 1 Enter you choose: ");
    scanf("%d", &user1);
    
    printf("Player 2 Enter you choose: ");
    scanf("%d", &user2);
    
    
    bool flag = true;
    if((user1 < 1 || user1 > 3) && (user2 < 1 || user2 > 3)){
        printf("Invalid Choose!");
        flag = false;
    }
    
    if(flag){
        if(user1 == user2){
            printf("It's a draw!");
        }
        else if( (user1 == 1 && user2 == 3) || (user1 == 2 && user2 == 1) || (user1 == 3 && user2 == 2) ){
            printf("Player 1 wins!");
        }
        else{
            printf("Player 2 wins!");
        }
    }
    
    return 0;
}

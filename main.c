#include<stdio.h>

int PrintMenu();
void CreateNewGame();
void LoadNewGame();
int GetNumPlayers();

//hold info for a player
typedef struct{
    char* name;
    int position;
} Player;

//holds info for a game
typedef struct{
    int numPlayers;
    Player[] players;
} Game;


int main(int argc, char *argv[]){
    int choice =  PrintMenu();
    switch(choice){
    case(1):
        CreateNewGame();
        break;
    case(2):
        LoadNewGame();
    case(3):
        return 0;
    default:
        return 1; 
    }
}

int PrintMenu(){
    int i = 0;
    while(!i){
     printf("What would you like to do?\n");
     printf("1. New Game\n");
     printf("2. Load Old Game\n");
     printf("3. Exit \n");
    
     scanf("%d", &i);
     //TODO change to not cause errors if number is entered
     if(i<=0 || i > 3){
         i = 0;
         printf("Invalid option\n");
     }
    }
}

void CreateNewGame(){
    int i, numPlayers= GetNumPlayers();
    printf("Creating new game! num Players : %d \n", numPlayers);

   for(i=0; i<numPlayers; i++){
        //create players

   }

    
}
void LoadNewGame(){
    printf("Loading old game! \n");
}

int GetNumPlayers(){
    int i = 0 ;
    while(!i){
        printf("How many players? (2-8 players)\n" );
        scanf("%d" , &i);
        if(i > 8 || i<=1){
            printf("Invalid number of players.");
        }
    }
    return i;
}

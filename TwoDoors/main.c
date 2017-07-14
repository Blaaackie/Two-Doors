//
//  main.c
//  Assignment #2
//
//  Created by Tye Blackie on 2017-05-14.
//  Copyright © 2017 Tye Blackie. All rights reserved.
//

#include <stdio.h>
    
    int main(int argc, const char * argv[]) {
        
        
        
    
    //Declaration of variables.
        char playAgain = '\0';
        char play;
        int choice;
        char answer [127]= "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
   
        
    //Output message to the user, and asks if the user would like to play.
        printf("Welcome to Two doors.\n");
        printf("Would you like to play? (y/n): ");
        scanf("%s", &play);
    
        
    //This is the beginning of the do while loop, it comes after the "would you like to play" to avoid asking the user twice every time "Play Again" is selected.
            do {
    
                
    //If statement that runs the game if User inputs Y.
            if (play=='y') {
            
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
        
            
            scanf("%d", &choice);
    
    //Switch statement to accept the users choice of Doors.
            switch(choice) {
                case 1:printf("%s\n", answer);break;
                case 2:printf("%s\n", answer);break;
                case 3:printf("%s\n", answer);break;
                default:
                    break;
            }
      
                
    //Output to console, asking player to play again / or not.
            printf("Would you like to play again? (y/n): \n");
            
            scanf("%s", &playAgain);
        }
            
        }
    //The other half of the 'do while' loop. If "y" the program runs again. If "n" the program ends.
        while (playAgain == 'y'|| playAgain == 'Y');

        
        return 1;
    }

/*INTRODUCTION TO MY MINI PROJECT: This is a mini project that I made for implementing the knowledge that I acquired in my first semester while learning
C Language.
It basically implements the tic-tac-toe game which is a two player game one uses cross and another uses zero. The player who firstly makes any of the
horizontal ,vertical or diagonal elements same wins.In case, both the players fail to do so then it ends in a draw and nobody wins .
*/
#include <stdio.h>
#include <conio.h>

char box[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };//This line assigns the box which represents an array representing each box of tic tactoe game

int winner();
void boundary();

int main()
{//player 1 is assigned the first chance and hence player is set .
 //choice is the variable that is going to take the choice of user for the game.
    int player = 1, i, choice;
 //Mark variable is used here to do cross and check at the box which was selected via choice
    char mark;
    do
    {
        boundary();//To give the boundary of tic-tac-toe game
        player = (player % 2) ? 1 : 2;
//PLAYER WILL CHOOSE  AT WHAT PLACE HE WANT TO ADD CROSS OR ZERO
        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
//PLAYER ONE IS GIVEN THE CROSS MARK AND IF IT IS PLAYER 2 THEN HE IS GIVEN ZERO
        mark = (player == 1) ? 'X' : 'O';
//IF THE CHOICE AND BOX ARE SAME IT MEANS PLACE WAS NOT EARLIER MARKED WITH CROSS OR ZERO AND IS HENCE FREE TO GET MARRKED AS ZERO OR CROSS
        if (choice == 1 && box[1] == '1')
            box[1] = mark;

        else if (choice == 2 && box[2] == '2')
            box[2] = mark;

        else if (choice == 3 && box[3] == '3')
            box[3] = mark;

        else if (choice == 4 && box[4] == '4')
            box[4] = mark;

        else if (choice == 5 && box[5] == '5')
            box[5] = mark;

        else if (choice == 6 && box[6] == '6')
            box[6] = mark;

        else if (choice == 7 && box[7] == '7')
            box[7] = mark;

        else if (choice == 8 && box[8] == '8')
            box[8] = mark;

        else if (choice == 9 && box[9] == '9')
            box[9] = mark;
//IF THE CHOICE AND BOX NUMBER CONDITION IS NOT SATISFIED THEN IT MEANS THAT YOU HAVE CHOSEN THE WRONG BOX AND YOU NEED TO REENTER AND HENCE PLAYER NO IS DECREMENTED
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = winner();//THIS IS USED TO CALL THE FUNCTION WINNER TO CHECK IF THE WINNER WAS DECIDED AFTER LAST MOVE

        player++; //TO MAKE NEXT PLAYER PLAY THE MOVE
    }while (i ==  - 1);

    boundary();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

//FUNCTION  CHECK THE THE STATUS OF GAME WHETHER ITS OVER OR NOT

int winner()
{//THESE CASES ARE TO CHECK IF THE HORIZONTAL ROW ARE EQUAL IF THEY ARE EQUAL IN TERMS OF NUMBER THEN IT MEANS THE WINNER IS DECIDED AND GAME NEED TO END NOW
    if (box[1] == box[2] && box[2] == box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] ==box[9])
        return 1;
//THESE CASES ARE TO HECK IF THE VERTICAL ROW ARE EQUAL IF THEY ARE EQUAL RETURN STATUS WILL BE 1 WHICH MEANS THE WINNER IS DECIDED NOW
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;

    else if (box[2] == box[5] && box[5] == box[8])
        return 1;

    else if (box[3] == box[6] && box[6] == box[9])
        return 1;
//THESE CASES CHECK IF THE DIAGONAL ROW ARE EQUAL IF THEY ARE EQUAL ITS RETURN STATUS WILL BE 1 WHICH MEANS THE WINNWR IS DECIDED
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;

    else if (box[3] == box[5] && box[5] == box[7])
        return 1;
//THIS CASE WILL CHECK IF ALL THE BOXES ARE ALREADY FILLED WITH ZEROES AND CROSS IT MEANS NO ONE HAS WON AND THE GAME IS ENDED NOW

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
        != '7' && box[8] != '8' &&box[9] != '9')

        return 0;
//IF NONE OF THE ABOVE CASES HAS BEEN TRUE THEN IT MEANS THAT GAME STILL NEEDS TO CONTINUE AND RETURNS -1
    else
        return  - 1;
}


//THIS FUNCTION WILL DRAW THE BOUNDARY OF TIC TAC TOE GAME



void boundary()
{//THE || ARE USED TO GIVE THE VERTICAL BOUNDARY AND _ IS USED TO GIVE THE HORIZONTAL BOUNDARY
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);//THESE LINES ARE USED HERE TO INTIALLY DISPLAY THE BOX NUMBER 1 2 3
    printf("_____|_____|_____\n");

    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
}

/*
END OF PROJECT
  THANKS FOR VISITING */

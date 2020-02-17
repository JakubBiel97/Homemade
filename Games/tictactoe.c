#include <stdio.h>

char array[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice, player;

int checkForWin()
{
    int returnValue;

    /***************************
    Return 1; gdy koniec
    return 0; koniec bez wyniku
    return -1; gra trwa
    ****************************/

    if(array[1] == array[2] && array[2] == array[3])
        returnValue = 1;
    else if(array[1] == array[4] && array[4] == array[7])
        returnValue = 1;
    else if(array[1] == array[5] && array[5] == array[9])
        returnValue = 1;
    else if(array[1] == array[5] && array[5] == array[8])
        returnValue = 1;
    else if(array[3] == array[5] && array[5] == array[7])
        returnValue = 1;
    else if(array[3] == array[6] && array[6] == array[9])
        returnValue = 1;
    else if(array[4] == array[5] && array[5] == array[6])
        returnValue = 1;
    else if(array[7] == array[8] && array[8] == array[9])
        returnValue = 1;
    else if(array[1] != '1' && array[2] != '2' && array[3] != '3' && array[4] != '4' && array[5] != '5' &&
            array[6] != '6' && array[7] != '7' && array[8] != '8' && array[9] != '9')
                returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}


void displayBoard()
{
    system("cls");

    printf("\t Kolko i krzyzyk\n\nPlayer 1 (X) - Player 2 (O)\n\n");

    printf("\t    |   |   \n");
    printf("\t %c  | %c | %c \n", array[1], array[2], array[3]);
    printf("\t____|___|____\n");
    printf("\t    |   |   \n");
    printf("\t %c  | %c | %c \n", array[4],array[5], array[6]);
    printf("\t____|___|____\n");
    printf("\t    |   |   \n");
    printf("\t %c  | %c | %c \n", array[7],array[8], array[9]);
    printf("\t    |   |   \n");
}


void markBoard(char mark)
{
    if(choice == 1 && array[1] == '1')
        array[1] = mark;
    else if(choice == 2 && array[2] == '2')
        array[2] = mark;
    else if(choice == 3 && array[3] == '3')
        array[3] = mark;
    else if(choice == 4 && array[4] == '4')
        array[4] = mark;
    else if(choice == 5 && array[5] == '5')
        array[5] = mark;
    else if(choice == 6 && array[6] == '6')
        array[6] = mark;
    else if(choice == 7 && array[7] == '7')
        array[7] = mark;
    else if(choice == 8 && array[8] == '8')
        array[8] = mark;
    else if(choice == 9 && array[9] == '9')
        array[9] = mark;
    else
    {
        printf("Invalid move.");

        player--;
        getch();
    }
}



int main()
{
    int i;

    char mark;

    player = 1;

    do
    {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number to mark:", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);
        displayBoard();

        i = checkForWin();

        player++;
    }
    while(i == -1);

    if(i == 1)
        printf("\nPlayer %d won!!\n", player);
    else
        printf("It's a draw!");



    return 0;
}

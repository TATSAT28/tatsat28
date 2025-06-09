#include <stdio.h>
#include <stdlib.h>

void main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char sign = 'O';
    int number;

    while (1)
    {
        system("cls");

        printf("\n\t %c | %c | %c ", board[0], board[1], board[2]);
        printf("\n\t-----------");
        printf("\n\t %c | %c | %c ", board[3], board[4], board[5]);
        printf("\n\t-----------");
        printf("\n\t %c | %c | %c \n", board[6], board[7], board[8]);

        printf("\nPlayer '%c', Enter your move ( 0 - 8 ) : ", sign);
        scanf("%d", &number);

        if (board[number] == ' ')
        {
            board[number] = sign;

            if ((board[0] == sign && board[1] == sign && board[2] == sign) ||
                (board[3] == sign && board[4] == sign && board[5] == sign) ||
                (board[6] == sign && board[7] == sign && board[8] == sign) ||
                (board[0] == sign && board[3] == sign && board[6] == sign) ||
                (board[1] == sign && board[4] == sign && board[7] == sign) ||
                (board[2] == sign && board[5] == sign && board[8] == sign) ||
                (board[0] == sign && board[4] == sign && board[8] == sign) ||
                (board[2] == sign && board[4] == sign && board[6] == sign))
            {
                system("cls");
                printf("\n\t %c | %c | %c ", board[0], board[1], board[2]);
                printf("\n\t-----------");
                printf("\n\t %c | %c | %c ", board[3], board[4], board[5]);
                printf("\n\t-----------");
                printf("\n\t %c | %c | %c \n", board[6], board[7], board[8]);

                printf("\nPlayer '%c' win's...!!\n", sign);
                break;
            }

            else
            {
                if (board[0] != ' ' && board[1] != ' ' && board[2] != ' ' && board[3] != ' ' && board[0] != ' ' && board[4] != ' ' && board[5] != ' ' && board[6] != ' ' && board[7] != ' ' && board[8] != ' ')
                {
                    printf("\n 'GAME OVER' \n");
                    break;
                }
            }

            if (sign == 'O')
            {
                sign = 'X';
            }
            else
            {
                sign = 'O';
            }
        }

        else
        {
            printf("\nInvalid move...!!");
        }
    }
}
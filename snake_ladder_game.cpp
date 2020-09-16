#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int dice;
int checkposition();
int position,newposition;
int choice,count=0;

int main()
{
    srand(time(NULL));
    int n;
    printf("Press 1 for Read Rules and 2 for Play the game\n");
    scanf("%d",&choice);
    if(choice==1)
    {
            printf("Rules the simple  \n Press enter to roll the dice\n");
            printf("Welcome to the Snake Ladder Game\n");
            printf("|100 99 98 97 96 95 94 93 92 91 |      1= Start            4=ladder to 14  \n");
            printf("| 81 82 83 84 85 86 87 88 89 90 |      9=ladder to 31      17=snake to 7   \n");
            printf("| 80 79 78 77 76 75 74 73 72 71 |      21=ladder to 42     46=snake to 13  \n");
            printf("| 61 62 63 64 65 66 67 68 69 70 |      28=ladder to 84     62=snake to 19  \n");
            printf("| 60 59 58 57 56 55 54 53 52 51 |      37=ladder to 61     54=snake to 25  \n");
            printf("| 41 42 43 44 45 46 4 7 48 49 50 |      87=snake to 36      51-ladder to 67 \n");
            printf("| 40 39 38 37 36 35 34 33 32 31 |      72=ladder to 91     64=snake to 44  \n");
            printf("| 21 22 23 24 25 26 27 28 29 30 |      89=snake to 53      95=snake to 75  \n");
            printf("| 20 19 18 17 16 15 14 13 12 11 |      98=snake to 79      100=END         \n");
            printf("|  1  2  3  4  5  6  7  8  9 10 |      80=ladder to 99                     \n");
            printf("\n WINNER WILL BE THE ONE WHO GETS TO 100 FIRST .THAT IS WITH MINIMUM NUMBER OF DICE THROWS..\n");
    }
            if(choice==1||choice==2)
            {
            do
            {
                printf("\nPress any key to roll the dice\n");
                dice=dice-(getche());
                dice=((rand()%6)+1);
                printf("\nYou rolled a dice \n");
                printf("\nGot %d after rolling the dice\n",dice);
                position=position+dice;
                if(dice==6)
                {
                    printf("\n6 came up on the dice throw you get one more dice throw\n");
                    continue;
                }
                if(position<100)
                printf("\nYou landed on number %d.\n",position);
                count++;
                checkposition();
                 position=newposition;
            }while(position<100);
            printf("\nCongratulation you have won in %d dice throws\n",count);
          }
        getch();
        return 0;
}
int checkposition()
{
    switch(position)
    {
    case 4 :
        newposition=14;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
    case 9 :
        newposition=31;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
    case 17 :
        newposition=7;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
    case 21 :
        newposition=42;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
    case 46 :
        newposition=13;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 37 :
        newposition=61;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
      case 54 :
        newposition=25;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 87 :
        newposition=36;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 51 :
        newposition=67;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
      case 72 :
        newposition=91;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
      case 64 :
        newposition=44;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 89 :
        newposition=53;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 95 :
        newposition=75;
        printf("\nUNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d\n",position,newposition);
        break;
      case 98 :
        newposition=79;
        printf("UNLUCKY,YOU GET BITE FROM SNAKE AT %d,NOW ON SPACE %d",position,newposition);
        break;
      case 80 :
        newposition=99;
        printf("\nWOW, YOU GOT  LADDER AT %d ,NOW ON SPACE %d\n",position,newposition);
        break;
      default :
        return newposition=position;
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct PlayerInfo
{
    int lives;
    char symbol;
    int treasures;
    char history[50];
} p;
struct GameInfo
{
    int moves;
    int path;
    int bombs[70];
    int treasure[70];
} g;
int main()
{
    printf("================================\n");
    printf("         Treasure Hunt!         \n");
    printf("================================\n\n");

    printf("PLAYER Configuration\n");
    printf("--------------------\n");

    printf("Enter a single character to represent the player: ");
    scanf("%c", &p.symbol);
label1:
    printf("Set the number of lives: ");
    scanf("%d", &p.lives);

    if (p.lives < 1 || p.lives > 10)
    {
        printf("     Must be between 1 and 10!\n");
        goto label1;
    }

    printf("Player configuration set-up is complete\n\n");

    printf("GAME Configuration\n");
    printf("------------------\n");

label2:
    printf("Set the path length (a multiple of 5 between 10-70): ");
    scanf("%d", &g.path);

    if (g.path % 5 != 0)
    {
        printf("     Must be a multiple of 5 and between 10-70!!!\n");
        goto label2;
    }

label3:
    printf("Set the limit for number of moves allowed: ");
    scanf("%d", &g.moves);

    if (g.moves < 3 || g.moves > 26)
    {
        printf("    Value must be between 3 and 26\n");
        goto label3;
    }

    printf("\nBOMB Placement\n");
    printf("--------------\n");

    printf("Enter the bomb positions in sets of 5 where a value\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");

    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", g.path);

    int a = 0, b = 5;
    int i;
    while (b <= g.path)
    {
        printf("   Positions [%2d-%2d]: ", a + 1, b);
        for (i = a; i < b; i++)
        {
            scanf("%d", &g.bombs[i]);
        }

        a += 5;
        b += 5;
    }
    printf("BOMB placement set\n\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");

    printf("Enter the treasure placements in sets of 5 where a value\nof 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");

    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", g.path);

    int m = 0, n = 5;
    int j;
    while (n <= g.path)
    {
        printf("   Positions [%2d-%2d]: ", m + 1, n);
        for (j = m; j < n; j++)
        {
            scanf("%d", &g.treasure[j]);
        }

        m += 5;
        n += 5;
    }
    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");

    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    printf("Player:\n");
    printf("   Symbol     : %c\n", p.symbol);
    printf("   Lives      : %d\n", p.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n");

    printf("\nGame:\n");
    printf("   Path Length: %d\n", g.path);
    printf("   Bombs      : ");
    int q = g.path;
    int k;
    for (k = 0; k < q; k++)
    {
        printf("%d", g.bombs[k]);
    }
    printf("\n");
    printf("   Treasure   : ");
    q = g.path;
    int o;
    for (o = 0; o < q; o++)
    {
        printf("%d", g.treasure[o]);
    }
    printf("\n\n");
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n\n");
    int zx=g.path%10;
    int sd=g.path/10;
    for(int j=0;j<g.path;j++)
    {
        printf("-");
    }
    printf("\n");
    int aswe=1;
    for(int k=0;k<sd;k++)
    {
        printf("|||||||||%d",aswe);
        aswe++;
    }
    if(zx!=0)
    {
        printf("|||||");
    }
    printf("\n");
    for(int k=0;k<sd;k++)
    {
        printf("1234567890");
    }
    if(zx!=0)
    {
        printf("12345");
    }
    printf("\n");
    int tre=0;
    printf("+--------------------------------------------+\n");
    printf("Lives:  %d  | Treasures:  %d  | Moves Remainning: %d\n",p.lives,tre,g.moves);
    printf("+--------------------------------------------+\n");
    char xyz[g.path+1];
    while(p.lives!=0 || g.moves!=0)
    {
        //char abc[g.path+1];
        int sdf;
        printf("Next Move [1-%d]:",g.path);
        scanf("%d",&sdf);
        if(sdf<1 || sdf>g.path)
        {
            printf("Out of Range!!!\n");
        }
        else if(sdf>=1 && sdf<=g.path)
        {
            if(g.bombs[sdf]==0 && g.treasure[sdf]==0)
            {
                printf("=================> [.] ...Nothing found here... [.]\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("%c",p.symbol);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                printf("\n");
                int aswe1=1;
               for(int k=0;k<sd;k++)
               {
                   printf("|||||||||%d",aswe1);
                   aswe1++;
               }
               if(zx!=0)
                {
                  printf("|||||");
                }
                 printf("\n");
               for(int k=0;k<sd;k++)
               {
                       printf("1234567890");
               }
                 if(zx!=0)
                   {
                         printf("12345");
                   }
                   g.moves--;
                   printf("\n");
                   printf("+--------------------------------------------+\n");
                   printf("Lives:  %d  | Treasures:  %d  | Moves Remainning: %d\n",p.lives,tre,g.moves);
                printf("+--------------------------------------------+\n");
            }
            else if(g.bombs[sdf]==0 && g.treasure[sdf]==1)
            {
                printf("=================> [$] $$$ Found Treasure! $$$[$]\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("%c",p.symbol);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("&");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                printf("\n");
                int aswe2=1;
               for(int k=0;k<sd;k++)
               {
                   printf("|||||||||%d",aswe2);
                   aswe2++;
               }
               if(zx!=0)
                {
                  printf("|||||");
                }
                 printf("\n");
               for(int k=0;k<sd;k++)
               {
                       printf("1234567890");
               }
                 if(zx!=0)
                   {
                         printf("12345");
                   }
                   g.moves--;
                   tre++;
                   printf("\n");
                   printf("+--------------------------------------------+\n");
                   printf("Lives:  %d  | Treasures:  %d  | Moves Remainning: %d\n",p.lives,tre,g.moves);
                printf("+--------------------------------------------+\n");
            }
            else if(g.bombs[sdf]==1 && g.treasure[sdf]==0)
            {
                printf("=================> [!] !!! BOOOOM !!! [!]\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("%c",p.symbol);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("!");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                printf("\n");
                int aswe3=1;
               for(int k=0;k<sd;k++)
               {
                   printf("|||||||||%d",aswe3);
                   aswe3++;
               }
               if(zx!=0)
                {
                  printf("|||||");
                }
                 printf("\n");
               for(int k=0;k<sd;k++)
               {
                       printf("1234567890");
               }
                 if(zx!=0)
                   {
                         printf("12345");
                   }
                   g.moves--;
                   p.lives--;
                   printf("\n");
                   printf("+--------------------------------------------+\n");
                   printf("Lives:  %d  | Treasures:  %d  | Moves Remainning: %d\n",p.lives,tre,g.moves);
                printf("+--------------------------------------------+\n");
            }
            else if(g.bombs[sdf]==1 && g.treasure[sdf]==1)
            {
                printf("=================> [&] !!! BOOOOM !!![&]\n");
                printf("=================> $$$ Life Insurance Payout !!![&]\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("%c",p.symbol);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                for(int i=1;i<=g.path;i++)
                {
                    if(i==sdf)
                    {
                        printf("&");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                printf("\n");
                int aswe4=1;
               for(int k=0;k<sd;k++)
               {
                   printf("|||||||||%d",aswe4);
                   aswe4++;
               }
               if(zx!=0)
                {
                  printf("|||||");
                }
                 printf("\n");
               for(int k=0;k<sd;k++)
               {
                       printf("1234567890");
               }
                 if(zx!=0)
                   {
                         printf("12345");
                   }
                   g.moves--;
                   tre++;
                   p.lives--;
                   printf("\n");
                   printf("+--------------------------------------------+\n");
                   printf("Lives:  %d  | Treasures:  %d  | Moves Remainning: %d\n",p.lives,tre,g.moves);
                printf("+--------------------------------------------+\n");
            }
        }
    }
    return 0;
}
    
    
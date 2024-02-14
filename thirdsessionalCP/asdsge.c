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
    printf("\tTreasure Hunt!\n");
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
        printf("\tMust be between 1 and 10!\n");
        goto label1;
    }

    printf("Player configuration set-up is complete\n\n");

    printf("GAME Configuration\n");
    printf("--------------------\n");

label2:
    printf("Set the path length (a multiple of 5 between 10-70):");
    scanf("%d", &g.path);

    if (g.path % 5 != 0)
    {
        printf("\tMust be a multiple of 5 and between 10-70!!!\n");
        goto label2;
    }

label3:
    printf("Set the limit for number of moves allowed: ");
    scanf("%d", &g.moves);

    if (g.moves < 3 || g.moves > 26)
    {
        printf("\tValue must be between 3 and 26\n");
        goto label3;
    }

    printf("BOMB Placement\n");
    printf("--------------------\n");

    printf("Enter the bomb positions in sets of 5 where a value of 1=BOMB,and 0=NO BOMB. Space-delimit your input.\n");

    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set\n", g.path);

    int a = 0, b = 5;
    while (b <= g.path)
    {
        printf("Positions [ %d- %d]:", a + 1, b);
        for (int i = a; i < b; i++)
        {
            scanf("%d", &g.bombs[i]);
        }

        a += 5;
        b += 5;
    }
    printf("BOMB placement set\n\n");

    printf("TREASURE Placement\n");
    printf("--------------------\n");

    printf("Enter the treasure placements in sets of 5 where a value of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");

    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set\n", g.path);

    int m = 0, n = 5;
    while (n <= g.path)
    {
        printf("Positions [ %d- %d]:", m + 1, n);
        for (int i = m; i < n; i++)
        {
            scanf("%d", &g.treasure[i]);
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
    printf("\tSymbol      : %c\n", p.symbol);
    printf("\tLives       : %d\n", p.lives);
    printf("\tTreasure    : [ready for gameplay]\n");
    printf("\tHistory     : [ready for gameplay]\n");

    printf("Game:\n");
    printf("\tPath Length : %d\n", g.path);
    printf("\tBombs       : ");
    int q = g.path;
    for (int i = 0; i < q; i++)
    {
        printf("%d", g.bombs[i]);
    }
    printf("\n\n");

    printf("\tTreasure    : ");
    q = g.path;
    for (int i = 0; i < q; i++)
    {
        printf("%d", g.treasure[i]);
    }
    printf("\n\n");
    printf("================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("================================\n\n");
}
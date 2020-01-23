//  15.11.2019  //  GitHub: enes-telli
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n1, n2, result, symbol, mistake=0;
    int add=0, sub=0, mul=0, div=0, all=0;
    srand(time(NULL));
    printf("Calculation game!\n");
    printf("Dividing takes place as integer-specific!\n");
    printf("Operators within the game:[+][-][x][/]\n");
    printf("If you give 3 wrong answers, the game ends!\n\n");
    
    while(mistake != 3)
    {
        n1=rand()%30-9;
        n2=rand()%30-9;
        symbol=rand()%4;
        if(symbol == 0)
        {
            printf("(%d)+(%d)=",n1,n2);
            scanf("%d",&result);
            if (result == n1+n2)
            {
                printf("Correct answer!\n");
                add++;
            }
            else
            {
                mistake++;
                printf("%d.wrong answer!\n",mistake);
                printf("That was the correct answer:%d\n",n1+n2);
            }
        }
        else if(symbol == 1)
        {
            printf("(%d)-(%d)=",n1,n2);
            scanf("%d",&result);
            if (result == n1-n2)
            {
                printf("Correct answer!\n");
                sub++;
            }
            else
            {
                mistake++;
                printf("%d.wrong answer!\n",mistake);
                printf("That was the correct answer:%d\n",n1-n2);
            }
        }
        else if(symbol == 2)
        {
            printf("(%d)x(%d)=",n1,n2);
            scanf("%d",&result);
            if (result == n1*n2)
            {
                printf("Correct answer!\n");
                mul++;
            }
            else
            {
                mistake++;
                printf("%d.wrong answer!\n",mistake);
                printf("That was the correct answer:%d\n",n1*n2);
            }
        }
        else
        {
            if(n2 == 0)
                continue;
            printf("(%d)/(%d)=",n1,n2);
            scanf("%d",&result);
            if (result == n1/n2)
            {
                printf("Correct answer!\n");
                div++;
            }
            else
            {
                mistake++;
                printf("%d.wrong answer!\n",mistake);
                printf("That was the correct answer:%d\n",n1+n2);
            }
        }
        all++;
    }
    printf("\nGame over!\n");
    printf("You have answered %d of the %d questions correctly!\n",add+sub+mul+div,all);
    float success = 100*((float)(add+sub+mul+div))/all;
    printf("Your success rate is %.0f%%\n",success);
    if(add != 0)
        printf("[+]:%d correct answer\n",add);
    if(sub != 0)
        printf("[-]:%d correct answer\n",sub);
    if(mul != 0)
        printf("[*]:%d correct answer\n",mul);
    if(div != 0)
        printf("[/]:%d correct answer\n",div);

}

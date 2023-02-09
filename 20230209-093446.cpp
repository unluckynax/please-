#include<stdio.h>
#include<conio.h>
int main()
{
    char choice;
    do
    {
        clrscr();
        printf("\n               will you be my valentine?");
        printf("\n                [y] Yes");
        printf("\n                [n] No");
        printf("\n                [e] exit");
        printf("\n                pogi pili na,ano gusto mo?");
        choice = getch();

        if(choice =='y')
        {
            int a;
            clrscr();
            printf("LUHHH OMFGGGG,THANKNYOUUUUU!!");
            
            getch();
        }
        if(choice=='n')
        {
            int a;
            clrscr();
            printf("Awww,thank you.");
            getch();
        }

        getch();
    }
    while(choice!='e');
    
    int e;
    clrscr();
    printf("Bye,thank you huhu");
    getch();
}
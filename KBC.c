#include<stdio.h>
int main()
{
    char a[50];
printf("\t\t\t  << KBC GAME >>\n");
printf("\n\t\t****************************************\n\t\t\t     WELCOME\n \n\t\t\t        to\n \n\t\t\t KAUN BANEGA CORERPATI GAME ");
printf("\n\t\t");
printf("\n\t\t****************************************");
printf("\n\t\t   BECOME RICH EARN UPTO 15 LAKH ;-) ");
printf("\n\t\t****************************************");
printf("\nplease enter your name: ");
gets(a);
printf("welcome to KBC mr/ms:");
puts(a);
getch();
system("cls");
printf("RULES for KBC:\n");
printf("\t1.The game consists of 2 levels,Level one consists of 10 questions and other consists of 5 questions.\n");
printf("\t2.Every question consists of 4 options there will be only one correct answer.\n");
printf("\t3.For every correct answer you will be getting 10000 rs of money of level one and 20 lakh rupees for each correct answer in level 2\n");
printf("\t4.You will be exit out of game for wrong answer.\n");
printf("\t5.You can use 50-50 option only one time.\n");
printf("\t6.50-50 option is available only after 8th question,till 10th question.\n");
printf("\t7.flip the question lifeline is available after 10th question.\n");
printf("\t8.double dip is available after 13th question but after using it you wont be able to use any other lifeline.\n");
printf("\nIf you are interest to play game press enter to ENTER into game..: ");
getch();
system("cls");
f1();
system("cls");
printf("\t\t\t\t\t****LEVEL 2****");
getch();
system("cls");
printf("***Note:now you have flip the question option from here***\n");
printf("your next question:");
getch();
system("cls");
f11(1);
f14(1);
}
void OUT()
{
    printf("you are out of the game");
    exit(0);
}

void f1()
{
int ans;
system("cls");
printf("\nThere we go....");
printf("\tThe game starts now....Best of luck ");
system("cls");
printf("\t\t\t\t\t****LEVEL 1*****\n");
getch();
printf("your first question:\n");
printf("1.who is the father of c language?\n");printf("1.Bjarne Stroustrup\t\t2.James A Gousling\n3.Dennis Ritchie\t\t4.Dr.E.F.codd\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
    printf("****Congrats u won 10000 rs...****");
    f2();}
else
  OUT();
}
void f2()
{
    int ans;
getch();
system("cls");
printf("your next question:\n");
printf("2.C Language developed at..?\n");
printf("1.AT & T's Bell Laboratories of USA in 1972\t\t2.AT & T's Bell Laboratories of USA in 1970\n");
printf("3.Sun Microsystems in 1973\t\t4.Cambridge University in 1972\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==1){
    printf("****Congrats u won 20000 rs...****");
    f3();
}
else
    OUT();
}
void f3()
{
    int ans;
getch();
system("cls");
printf("your next question:\n");
printf("3.For 16-bit compiler allowable range for integer constants is ________?\n");
printf("		1. -3.4e38 to 3.4e38              		2. -32767 to 32768\n");
printf("		3.-32668 to 32667        		4. -32768 to 32767\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
    printf("****Congrats u won 30000 rs...****");
    f4();
}
else
    OUT();
}
void f4()
{
    int ans;
    getch();
system("cls");
printf("your next question:\n");
printf("4.C programs are converted into machine language with the help of..?\n");
printf("1. An Editor             		2. A Compiler\n");
printf("3.An operating system           4.None of these\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
    printf("****Congrats u won 40000 rs...****");
    f5();
}
else
    OUT();
}
void f5()
{
    int ans;
    getch();
system("cls");
printf("your next question\n");
printf("5.C was primarily developed as..?\n");
printf("1.System programming language               		2.General purpose language\n");
printf("3.Data processing language               		    4.None of above\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==1)
{
    printf("****Congrats u won 50000 rs...****");
    f6();
}
else
    OUT();
}
void f6()
{
    int ans;
    getch();
system("cls");
printf("your next question\n");
printf("6.Standard ANSI C recognizes ______ number of keywords?\n");
printf("1.30           		2.32\n");
printf("3.24      		4.36\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
    printf("****Congrats u won 60000 rs...****");
    f7();
}
else
    OUT();
}
void f7()
{
    int ans;
    getch();
system("cls");
printf("your next question:\n");
printf("7.Which one of the following is not a reserved keyword for C?\n");
printf("1.auto           		2.case\n");
printf("3.main             		4.default\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
    printf("****Congrats u won 70000 rs...****");
    f8();}
else
    OUT();
}
void f8()
{
int ans;
getch();
system("cls");
printf("your next question:\n");
printf("8.A C variable cannot start with...\n");
printf("1.A number                   2.special symbol other than undersco\n");
printf("3.both 1 and 2               4.An alphabet\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
    printf("****Congrats u won 80000 rs...****");
    f9(1);
}
else
    OUT();
}


void f9(int i)
{

int ans;char ch;
getch();
system("cls");
if(i==0)
{
printf("your next question:\n");
printf("9.What is the correct value to return to the operating system upon the successful completion of a program?\n");
printf("1.1                         2.-1\n");
printf("3.0                  		4.2\n");
printf("enter your answer:");
        scanf("%d",&ans);
        if(ans==3)
            printf("****Congrats u won 90,000 rs...****");
        else
            OUT();
}
else if(i==1)
{
printf("***Note:you can use your 50-50 option from here***\n");
printf("your next question:\n");
printf("9.What is the correct value to return to the operating system upon the successful completion of a program?\n");
printf("1.1                         2.-1\n");
printf("3.0                  		4.2\n");
printf("Do you want to use 50-50?\n");
printf("press 'y' for yes:\n");
printf("press 'n' for no:\n");
printf("enter your choice: \n");
ch=getch();
printf(" you choosen %c:",ch);
if(ch=='y')
{
    f9(2);
    f10(0);
}
else if(ch=='n')
    {
    f9(0);
    f10(1);
}}
else if(i==2)
        {
        printf("\n1.                       		2.-1\n");
        printf("3.0                   		    4.  \n");
        printf("enter your answer:");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("****Congrats u won 90000 rs...****");printf("\n*!Remember you have used your 50-50 lifeline*");}
else
    OUT();

        }

}
void f10(int i)
{
int ans;char ch;
getch();
system("cls");
if(i==0)
{
printf("Here is your last question of level 1:\n");
printf("10.Which is the only function all C programs must contain?\n");
printf("1.getch()                     		2.return 0\n");
printf("3.printf()                      		4.main()\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
    printf("****Congrats u won ONE LAKH RUPEES****");printf("\nyou have completed 10 questions:");
}
else
   OUT();
}
else if(i==1)
{
    printf("Here is your last question of level 1:\n");
printf("10.Which is the only function all C programs must contain?\n");
printf("1.getch()                     		2.return 0\n");
printf("3.printf()                      		4.main()\n");
printf("do you want to use fifty\n");
     printf("press 'y' for yes:\n");
     printf("press 'n' for no:\n");
     printf("enter your choice: ");
     ch=getch();
     if(ch=='y')
     {
         f10(2);

     }
     else if(ch=='n')
     {
         f10(0);

     }
}
else if(i==2)
{
       printf("1.getch()                        2.      \n");
       printf("3.                         		4.main()\n");
            printf("enter your answer:");
            scanf("%d",&ans);
if(ans==4)
printf("****Congrats u won 100,000 rs...****");
else
OUT();
}
}
void f11(int i)
{
int ans;char ch;

if(i==0)
{
            printf("11.if ASCII value of 'x' is 120, then what is the value of the H, if H = ('x' – 'w' ) / 3;?\n");
            printf("1.2                         2.3\n");
            printf("3.0                  		4.1\n");
            printf("enter your answer:");
            scanf(" %d",&ans);
            if(ans==3)
                printf("****Congrats u won 21,00,000 rs...****");
            else
               OUT();
}
if(i==1)
{
printf("11.if ASCII value of 'x' is 120, then what is the value of the H, if H = ('x' – 'w' ) / 3;?\n");
printf("1.2                         2.3\n");
printf("3.0                  		4.1\n");
printf("Do you want to use flip the question lifeline?\n");
printf("press 'y' for yes:\n");
printf("press 'n' for no:");
printf("enter your choice:\n");
scanf(" %c",&ch);
if(ch=='y')
{
    f11(2);
    f12(0);
    f13(0);
}
else if(ch=='n')
    {
    f11(0);
    f12(1);
}
}
else if(i==2)
{
        printf("11.How many main() function we can have in our project??\n");
        printf("1.2                       		2.none of these\n");
        printf("3.1                   		    4.depends on compiler  \n");
        printf("enter your answer:");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("****Congrats u won 2100000 rs...****");printf("\n*Remember that you are not having flip the question chance*");
        }
        else
           OUT();
}}

void f12(int i)
{
int ans;char ch;
getch();
system("cls");
if(i==0)
{
printf("your next question:\n");
printf("12.Which programming language is more faster among these?\n");
printf("1.C                        2.java\n");
printf("3.C++                  		4.python\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==1)
{
    printf("****Congrats u won 4100000 rs...****");
}
else
   OUT();
}
else if(i==1)
{
printf("your next question:\n");
    printf("12.Which programming language is more faster among these?\n");
    printf("1.C                        2.java\n");
    printf("3.C++                  		4.python\n");
    printf("Do you want to use flip the question lifeline?\n");
    printf("press 'y' for yes:\n");
    printf("press 'n' for no:\n");
    printf("enter your choice: \n");
    ch=getch();
    if(ch=='y')
    {
        f12(2);
        f13(0);
    }
    else if(ch=='n')
    {
        f12(0);
        f13(1);
}}
else if(i==2)
{
            printf("12. Which of the following is executed by Preprocess??\n");
            printf("1.#include<stdio.h>                       		2.return 0\n");
            printf("3.#include<conio.h                   		    4.none of the above  \n");
            printf("enter your answer:");
            scanf("%d",&ans);
            switch(ans)
            if(ans==1)
                printf("****Congrats u won 41,00,000 rs...****\n");
            else
               OUT();
}}
void f13(int i)
{
int ans; char ch;
if(i==0)
{
printf("13.How many loops are there in C?\n");
printf("1.2                         2.3\n");
printf("3.0                  		4.1\n");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==2)
printf("****Congrats u won 6100000 rs...****");
else
   OUT();
}
else if(i==1)
{
    printf("13.How many loops are there in C?\n");
    printf("1.2                         2.3\n");
    printf("3.0                  		4.1\n");
    printf("Do you want to use flip the question lifeline?\n");
    printf("press 'y' for yes:\n");
    printf("press 'n' for no:\n");
    printf("enter your choice:\n");
    ch=getch();
    if(ch=='y')
        f13(2);
    else
        f13(0);
}
else if(i==2)
{
    printf("13.When C Language was invented?\n");
            printf("1.1970                       		2.1972\n");
            printf("3.1978                  		    4.1979  \n");
            printf("enter your answer:");
            scanf("%d",&ans);
            if(ans==2)
            printf("****Congrats u won 61,00,000 rs...****");
            else
               OUT();
}}
void f14(int i)
{
int ans;char ch;
getch();
system("cls");
if(i==1)
{
printf("14.which is correct code to make .objective file in windows command prompt if file name is a.c?\n");
printf("1.GCC -G A.C              2.gcc -c a.c\n");
printf("3.a.c -c gcg               4.none of these\n");
printf("Do you want to use double dip:(you can guess two options:)\n");
printf(" Enter 'y' for yes:\n");
printf(" Enter 'n' for no:\n");
ch=getch();
printf(" you choosen %c:\n",ch);
if(ch=='y')
{
    f14(2);
    f15(0);
}
else if(ch=='n')
 {
     f14(0);
     f15(1);
}}
else if(i==0)
{
            printf("14.which is correct code to make .objective file in windows command prompt if file name is a.c?\n");
            printf("1.GCC -G A.C              2.gcc -c a.c\n");
            printf("3.a.c -c gcg               4.none of these\n");
            printf("enter your answer:");
            scanf("%d",&ans);
            if(ans==2)
                printf("****Congrats u won 8100000 rs...****\n");
            else
               OUT();
}
else if(i==2)
    {
        printf("14.which is correct code to make .objective file in windows command prompt(gcc compiler)if file name is a.c?\n");
            printf("1.GCC -G A.C              2.gcc -c a.c\n");
            printf("3.a.c -c gcg               4.none of these\n");
            printf("enter your answer:");
            scanf("%d",&ans);
            if(ans==2)
            {
                printf("you won 8100000 rs..:\n");
            }
            else
            {
            printf("you have one more chance left\n");
           printf("enter the answer again\n");
           int ans2;
           scanf("%d",&ans2);
           if(ans2==2)
           {
               printf("you won 8100000 rs..:\n");
           }

        else
           OUT();
        }}
}
void f15(int i)
{
int ans;
                getch();char ch;
                system("cls");
                if(i==0)
                {
                printf("15.which is correct code to make .objective file in kali linux (gcc compiler) if file name is a.c?\n");
                printf("1.gcc a.c -c compilefile              2.gcc a.c -0 filecompile\n");
                printf("3.a.c -0 -c compilefile             4.gcc a.c -o compilefile\n");
                printf("enter your answer:");
                scanf("%d",&ans);
                if(ans==4)
                    printf("****Congrats u won 1,01,00,000 rs...****");
                else
                   OUT();
                }
                else if(i==1)
                {
            printf("15.which is correct code to make .objective file in kali linux (gcc compiler) if file name is a.c?\n");
            printf("1.gcc a.c -c compilefile              2.gcc a.c -o compilefile\n");
            printf("3.a.c -0 -c compilefile             4.gcc a.c -0 filecompile\n");
            printf("Do you want to use double dip:(you can guess two options:)\n");
            printf(" Enter 'y' for yes:\n");
            printf(" Enter 'n' for no:\n");
            ch=getch();
            printf(" you choosen %c:\n",ch);
            if(ch=='y')
                f15(2);
            else if(ch=='n')
                f15(0);
                }
               else if(i==2)
               {printf("15.which is correct code to make .objective file in kali linux (gcc compiler) if file name is a.c?\n");
                    printf("1.gcc a.c -c compilefile              2.gcc a.c -o compilefile\n");
                    printf("3.a.c -0 -c compilefile             4.gcc a.c -0 filecompile\n");
            printf("enter your answer:");
            scanf("%d",&ans);
            if(ans==4)
            {
                printf("you won 15lakh rupees...YOU ARE NOW A CROREPATI\n");
            }
            else
            {
            printf("you have one more chance left\n");
           printf("enter the answer again\n");
           int ans2;
           if(ans2==2)
           {
               printf("you won 8100000 rs..:\n");
           }

        else
           OUT();
               }
               }
}

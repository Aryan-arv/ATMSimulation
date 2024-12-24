#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int database();
int layout();
int operation();
int temp=0;
int c,j,tp,t=0;
char tn[10];
double tb=0,nt=0;
int main()
{
    printf("\n\t\t\t\t\t\tPlease Insert the Card");
    Sleep(1000);
    printf("\n\t\t\t\t\t\tPlease Enter Your Pin\n");
    scanf("%d",&temp);
    database();
    return 0;
}
database()
{
    int ps[50]={1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,
                1011,1012,1013,1014,1015,1016,1017,1018,1019,1020,
                1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,
                1031,1032,1033,1034,1035,1036,1037,1038,1039,1040,
                1041,1042,1043,1044,1045,1046,1047,1048,1049,1050};
    char nm[][50]={"Raman ","Aryan ","Avinash ","Prajwal ","Ayushi ","Aditya ","Adri ","Agni ","Agrata ","Aishwarya ",
                   "Darshan ","Nitara ","Nitesh ","Nithanya ","Sunil ","Nitish ","Nitya " ,"Daru ","Vinita ","Daruka ",
                   "Deepak ","Gaurav ","Gauri ","Vinita ","Gautam ","Gayatri ","Rupin ","Rushil ","Geet ","Sai ",
                   "Girija ","Gita ","Gopi ","Gopinath ","Jagat ","Jai ","Mahari ","Taia ","Mahatma ","Reyansh ",
                   "Sanjay ","Rhynisha ","Ridhi ","Ripam ","Rishi ","Utcha ","Uttam ","Rishika ","Mahendra ","Vinita "};
    double bal[50]={2055.02,5711.55,456.54,7888.56,7155.12,458458.65,79761.53,678972.23,679563.85,79456.23,
                    7922.09,124.04,571.26,4632.03,1547.01,2387897.56,154723.02,68652.60,463.00,761.02,
                    786.50,313.35,4796.53,4651.20,6476.56,3456.45,356.65,143.25,346.52,353.36,
                    5.65,762.20,3413.54,1346.85,3462.26,5433.00,1346.03,7465.63,5232.34,11335.54,
                    53623.34,6464.33,3433.00,347.56,7664.56,676.63,797.64,322.85,4872.10,4545.21};
    for(int i=0;i<50;i++)
    {
        if(temp==ps[i])
        {
            tp=ps[i];
            j=i;
            tb=bal[j];
            nt=tb;
            break;
        }
        else
        {
            tp=0;
            continue;
        }
    }
    strcpy(tn,nm[j]);
    if(temp==tp)
        {
            Sleep(1000);
            printf("\nPlease Wait ...");
            Sleep(1000);
            printf("....\n");
            Sleep(1000);
            printf("\n\t\t\t\t\t\t   Pin Verified\n\t\t\t\t\t\tWelcome To The ATM\n");
            layout();
        }
        else
        {
            Sleep(1000);
            printf("\nPlease Wait ...");
            Sleep(1000);
            printf("....\n");
            Sleep(1000);
            printf("\n\t\t\t\t\t\t  Invalid Pin\n\t\t\t\t\t\tPlease Try Again\n");
        }
        return 0;
}
layout()
{
    do
    {
        printf("\n`~``~``~``~``~``~``~``~``~``~``~``~`");
        printf("\nPress 1: For Balance Enquiry");
        printf("\nPress 2: For Cash Withdrawal");
        printf("\nPress 3: For Cash Deposit");
        printf("\nPress 4: To Exit The ATM");
        printf("\n`~``~``~``~``~``~``~``~``~``~``~``~`\n");
        printf("\nPlease Enter Your Choice\n");
        scanf("%d",&c);
        operation();
    }
    while(c!=4);
    return 0;
}
operation()
{
    switch (c)
    {
    case 1:
        {
                printf("\n\t\t\t\t\t\t~~ Balance Enquiry Section ~~\n\n");
                printf("Account Holder's Name- ");
                puts(tn);
                printf("\nAvailable Balance- %lf\n",nt);
                Sleep(1000);
        }
        break;
    case 2:
        {
                printf("\n\t\t\t\t\t\t~~ Cash Withdrawal Section ~~\n\n");
                printf("Enter the Amount to be Withdrawn- ");
                scanf("%d",&t);
                nt-=t;
                printf("\n\t\t\t\t\t\t  Please Collect the Cash\n");
                Sleep(1000);
                printf("\t\t\t\t\t\t      Cash Withdrawn\n");
                printf("Available Balance- %lf\n",nt);
                Sleep(1000);
        }
        break;
    case 3:
        {
                printf("\n\t\t\t\t\t\t~~ Cash Deposite Section ~~\n\n");
                printf("Enter the Amount to be Deposited- ");
                scanf("%d",&t);
                nt+=t;
                printf("\n\t\t\t\t\t\t  Please Put the Cash\n");
                Sleep(1000);
                printf("\t\t\t\t\t\t    Cash Deposited\n");
                printf("Available Balance- %lf\n",nt);
                Sleep(1000);
        }
        break;
    case 4:
        {
                printf("\n\t\t\t\t\t\t    Thank You\n");
                printf("\t\t\t\t\t\tPlease Visit Again\n");
                printf("\t\t\t\t\t     Please Collect Your Card\n");
        }
        break;
    default:printf("\nEnter a Valid Choice\n");
    }
    return 0;
}

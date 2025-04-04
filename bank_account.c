#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


void creat_account(void);
void checkbalance(char*);
void display(char*);
void person(char*);
int login(char*,char*);
void loginpass(void);
void account(void);
void afterlogin(void);
void logout(void);
void transfermoney(void);

char username_main[20],password_main[32];

//set up cursor point//
void gotoxy(int x,int y){
    COORD c = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

    struct data
    {
        char username[20];
        char firstname[20];
        char lastname[20];
        int day,month,year;
        char nid[20];
        char fathername[50];
        char mothername[50];
        char pnumber[11];
        char address[100];
        char typeacco[20];
        char password[32];

    };

    struct password32
    {
        char password2[32];
    };
    
    struct money
    {
       char touser[50];
       char fromme[50];
       long int amount;
    };
    


 //working place//   
int main(){

    //char username[20],password[32];//
    gotoxy(20,3);
    printf("WELCOME TO BANKING SYSTEM\n");
    gotoxy(17,5);
    printf("*********************************");
    gotoxy(22,7);
    printf("CREATED BY:POROSH");
    gotoxy(20,8);
    printf("*********************************\n");
    gotoxy(20,10);
    printf("1.....CREATE ACCOUNT\n");
    gotoxy(20,12);
    printf("2.....Are you already a customer?Sign in\n");
    gotoxy(20,14);
    printf("3.....EXIT\n\n\n");
    int choice;
    printf("After enter a number press enter button\n");
    printf(".....Inter your choice.....\n");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
        system("cls");
        account();
        break;
    case 2:
        login(username_main, password_main);
        break;
    case 3:
        exit(0);
    
     getch();
    }
    

}

void account(void){
    char password[32];
    int passwordlength,i,point = 0;
    char ch;
    FILE *fu;
    struct data d1;
    //fp = fopen("password.txt","ab");//
    fu = fopen("account.txt","ab");
   /* if(fp==NULL || fu==NULL){
        printf("Error in opening file\n");
    }*/

    system("cls");
    gotoxy(20,2);
    printf("!!!CREATE ACCOUNT!!!\n");
    gotoxy(18,4);
    printf("*********************************\n");
    gotoxy(2,6);
    printf("Enter your first name: ");
    scanf("%s",&d1.firstname);
    gotoxy(2,8);
    printf("Enter your last name: ");
    scanf("%s",&d1.lastname);
    gotoxy(2,10);
    printf("Enter your Date of Birth: \n");
    printf("Date : ");
    scanf("%d",&d1.day);
    printf("\nMonth : ");
    scanf("%d",&d1.month);
    printf("\nYear : ");
    scanf("%d",&d1.year);
    printf("Enter NID number :");
    scanf("%s",&d1.nid);
    printf("\nEnter your Father's Name :");
    getchar();
    fgets(d1.fathername,50,stdin);
    d1.fathername[strcspn(d1.fathername,"\n")] = 0;
    printf("\n Enter your Mother's Name :");
    fgets(d1.mothername,50,stdin);
    d1.mothername[strcspn(d1.mothername,"\n")] = 0;
    printf("\nEnter your Phone number :");
    scanf("%s",&d1.pnumber);
    printf("\nEnter your Address :");
    scanf("%s",&d1.address);
    printf("\nEnter your ACCOUNT TYPE :");
    scanf("%s",&d1.typeacco);
    printf("\nEnter a username... :");
    scanf("%s",&d1.username);
    printf("\nEnter a password... :");

    //char ch;
    
    for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			d1.password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}
		else
			break;
	}

    d1.password[i] = '\0';


    fwrite(&d1,sizeof(d1),1,fu);
    //fwrite(&password,sizeof(password),1,fp);//
    fclose(fu);
   // fclose(fp);//

    strcpy(username_main, d1.username);
    strcpy(password_main,d1.password);

    creat_account();
    
}

void creat_account(void)
{
    char ch;

    system("cls");
    gotoxy(1,3);
    printf("PLEASE WAIT.....YOUR DATA IS PROCESSING.......\n");
    Sleep(3000);

    gotoxy(1,6);
    printf("YOUR DATA HAS BEEN SAVED SUCCESSFULLY\n");
    Sleep(2000);
    printf("CONGRATULATION!!!!...YOUR ACCOUNT HAS BEEN CREATED\n");
    Sleep(2000);

    printf("PRESS ENTER TO LOGIN......................");
    getch();
    login(username_main,password_main);

}

int login(char username_main[],char password_main[])
{
    char username1[20];
    char password[32];
    char ch;
    int i,j,k;
    FILE *fu;
    struct data d1;
    struct password32 p1;

    
    fu = fopen("account.txt","rb");
    if(fu==NULL)
    {
        printf("file not found");
        exit(1);
    }

    system("cls");
    gotoxy(1,3);
    printf("PLEASE WAIT.....THERE ALLMOST READY FOR YOU.......\n");
    Sleep(2000);
    gotoxy(34,7);
    printf("USER LOGIN PAGE");
    gotoxy(7,9);
    printf("***********************************************"
		"********************************");
    gotoxy(37,11);
    printf("==< LOGIN >==");

   


    gotoxy(39,13);
    //fflush(stdin);//
    printf("1...USERNAME :");
    /*fgets(username,20,stdin);
    username[strcspn(username, "\n")] = 0;*/
    scanf("%s",username1);
    //fflush(stdin);//
    gotoxy(39,14);
    
    printf("2...PASSWORD :");
    fflush(stdin);

    for ( i = 0; i < sizeof(password) - 1; i++)
    {
        ch = getch();
        if (ch == 13)
        {
            break;
        }

        else
        password[i] = ch;
        ch = '*';
        printf("%c",ch);
    }

        password[i] = '\0';

        int found = 0;
        while (fread(&d1, sizeof(d1), 1, fu))
        {
            if (strcmp(username1, d1.username)==0)
            {   
                found = 1;
                if (strcmp(password,d1.password)==0)
                {
                    loginpass();
                    display(username1);
                    fclose(fu);
                    return 1;
                }
                else
                {
                    printf("\n\nIncorrect password!\n");
                    fclose(fu);
                    return 0;
                }
            }
        }
        
        if (!found) {
            printf("\n\nInvalid username!\n");
        }
        fclose(fu);
        
       
        
        return 0;
    

}

    void loginpass(void)
    {
        char ch;
        system("cls");
        gotoxy(30,10);
        printf(".....LOGIN SUCCESSFUL!.....\n");
        Sleep(2000);
        gotoxy(1,20);
        printf("PRESS ENTER TO CONTINUE...");
        getch();
    }

void display(char username1[])
{
    system("cls");
    struct data d1;

    FILE *fu;
    fu = fopen("account.txt", "rb");
    if (fu == NULL)
    {
        printf("\n\nFILE NOT FOUND!\n");
    }

    while (fread(&d1,sizeof(d1),1,fu))
    {
        if (strcmp(username1, d1.username) == 0)
        {
            gotoxy(30,1);
            printf("WELCOME MR. %s %s", d1.firstname,d1.lastname);
            gotoxy(27,2);
            printf("!==============================!");
            gotoxy(55,6);
            printf("=====YOUR ACCOUNT INFO=====");
            gotoxy(55,7);
            printf("............................");
            gotoxy(55,8);
            printf("NAME: %s %s", d1.firstname,d1.lastname);
            gotoxy(55,9);
            printf("FATHER'S NAME : %s", d1.fathername);
            gotoxy(55,10);
            printf("MOTHER'S NAME : %s", d1.mothername);
            gotoxy(55,11);
            printf("DATE OF BIRTH : %d %d %d", d1.day,d1.month,d1.year);
            gotoxy(55,12);
            printf("NID NUMBER : %s ", d1.nid);
            gotoxy(55,13);
            printf("CONTACT NUMBER : %s ", d1.pnumber);
            gotoxy(55,14);
            printf("ADDRESS : %s ", d1.address);
            gotoxy(55,15);
            printf("ACCOUNT TYPE : %s ", d1.typeacco);

        }
    }

    fclose(fu);
    gotoxy(0,6);

    printf("HOME");
    gotoxy(0,7);
    printf("*-----*");
    gotoxy(1,10);
    printf("1....CHEAK BALANCE INFO");
    gotoxy(1,12);
    printf("2....TRANSFER MONEY");
    gotoxy(1,14);
    printf("3....LOGOUT");
    gotoxy(1,16);
    printf("4....EXIT");
    gotoxy(0,19);

    int choice;
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        checkbalance(username1);
        break;
    
    case 2:
        transfermoney();
        break;

    case 3:
        logout();
        login(username_main,password_main);

    
    
    default:
        exit(0);
        break;
    }

}

void transfermoney(void)
{
    FILE *fu,*fm;
    struct  data d1;
    struct money m1;

    char subf1[20];
    char subf2[20];

    system("cls");

    fu = fopen("username.txt","rb");
    fm = fopen("money.txt","rb");

    gotoxy(30,3);
    printf("------TRANSFER MONEY------");
    gotoxy(30,4);
    printf("----------------------------");
    gotoxy(1,7);
    printf("Enter the username of the sender: ");
    scanf("%s",subf1);
    gotoxy(1,9);
    printf("Enter the username of the receiver: ");
    scanf("%s",subf2);

    while(fread(&d1,sizeof(d1),1,fu))
    {
        if(strcmp(d1.username,subf1)==0){
            strcpy(m1.touser,d1.username);
            strcpy(m1.fromme,subf2);
        }
    }

    gotoxy(1,11);
    printf("Enter the amount to be transferred: ");
    scanf("%f",&m1.amount);

    fwrite(&m1,sizeof(m1),1,fm);

    gotoxy(0, 26);
	printf(
		"--------------------------------------------------"
		"--------------------------------------------");

	gotoxy(0, 28);
	printf(
		"--------------------------------------------------"
		"--------------------------------------------");

	gotoxy(0, 29);
	printf("transferring amount, Please wait..");
    Sleep(2000);
    printf("*");

    gotoxy(35,40);
    Sleep(2000);
    printf("=====Transaction Successful=====");

    fclose(fu);
    fclose(fm);

    display(subf1);

    
}


void checkbalance(char username2[])
{
    system("cls");
	FILE* fm;
	struct money m1;
	char ch;
	int i = 1, summoney = 10000000;

	// Opening amount file record
	fm = fopen("Porosh_mon.txt", "rb");

	int k = 5, l = 10;
	int m = 30, n = 10;
	int u = 60, v = 10;

	gotoxy(30, 2);
	printf("==== BALANCE DASHBOARD ====");
	gotoxy(30, 3);
	printf("***************************");
	gotoxy(k, l);
	printf("S no.");
	gotoxy(m, n);
	printf("TRANSACTION ID");
	gotoxy(u, v);
	printf("AMOUNT");

	
	while (fread(&m1, sizeof(m1),
				1, fm)) {
		if (strcmp(username2,
				m1.touser)
			== 0) {
			gotoxy(k, ++l);
			printf("%d", i);
			i++;
			gotoxy(m, ++n);
			printf("%s", m1.fromme);

			gotoxy(u, ++v);
			printf("%d", m1.amount);
			
			summoney = summoney + m1.amount;
		}
	}

	gotoxy(80, 10);
	printf("TOTAL AMOUNT");

	gotoxy(80, 12);
	printf("%d", summoney);

	getch();

	
	fclose(fm);
	display(username2);
}

void logout(void)
{
    system("cls");
    gotoxy(30, 2);
    printf("==== LOGOUT ====\n");
    printf("PLEASE WAIT.........");
    Sleep(2000);

    int i;
    for ( i = 0; i < 20; i++)
    {
        printf("*");
    }
    
    gotoxy(30,10);
    printf("=====LOGOUT SUCCESSFULLY=====");
    Sleep(2000);

    printf("PRESS ANY KEY TO CONTINUE");
    getch();
}


    
    

   
    
    

    
    
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<conio.h>

int account_crt(void);
void login(void);
void old_usr(void);
void teacher(void);
int attendance(int n);
int ct(int n);
int display(char username[], char password[]);
void dis_attendance(void);
void dis_ct(void);


void gotoxy(int x,int y){
    COORD c ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

struct data
{
    char name[100];
    char pass[32];
    char id[10];
    char username[100];
    

    
};

struct student{
    int id;
    char name[100];
};

struct ct_entry {
    int ct_no;
    int id;
    int total_marks;
};




int main(){
    int n;
    gotoxy(20,5);
    printf("WELCOME TO ACCADEMIC SYSTEM\n\n");
    gotoxy(18,7);
    printf("**********************************");
    gotoxy(25,9);
    printf("DEVELOPER-Porosh\n");
    gotoxy(20,12);
    printf("Enter type\n");
    gotoxy(20,14);
    printf("1.... Teacher\n");
    gotoxy(20,16);
    printf("2.... Student\n");
    gotoxy(20,18);
    printf("3.... Exit\n");
    gotoxy(20,20);
    printf("Enter your choice: ");
    scanf("%d",&n);
    system("cls");
    switch(n){
        case 1:
            teacher();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            main();
    }

    return 0;
}

void teacher(void){
    int n,m;
    gotoxy(20,5);
    printf("WELCOME TO TEACHER SECTION\n\n");
    gotoxy(18,7);
    printf("**********************************");
    gotoxy(25,9);
    printf("Enter your id :");
    scanf("%d",&n);
    system("cls");
  //minhaj SIR id 24628//
  if (n == 24628)
  {
    gotoxy(20,5);
    printf("WELCOME MR MINHAJ ABEDIN\n\n");
    gotoxy(18,7);
    printf("Enter Choice\n");
    gotoxy(20,9);
    printf("1.... Attendance Cheak\n");
    gotoxy(20,11);
    printf("2.... CT number\n");
    gotoxy(20,13);
    //printf("3.... Assignment Cheak\n");
    gotoxy(20,15);
    printf("..........");
    scanf("%d",&m);
    system("cls");
    switch(m){
        case 1:
            attendance(n);
            break;
        case 2:
            ct(n);
            break;
       /* case 3:
            assignment(n);
            break;*/
        default:
            printf("Invalid choice! Please try again.\n");
            teacher();
    }
  }
  //devid sir id 24625//
  else if (n == 24625)
  {
    gotoxy(20,5);
    printf("WELCOME MR DEVID CHANDRA ROY\n\n");
    gotoxy(18,7);
    printf("Enter Choice\n");
    gotoxy(20,9);
    printf("1.... Attendance Cheak\n");
    gotoxy(20,11);
    printf("2.... CT number\n");
    gotoxy(20,13);
   // printf("3.... Assignment Cheak\n");
    gotoxy(20,15);
    printf("..........");
    scanf("%d",&m);
    system("cls");
    switch(m){
        case 1:
            attendance(n);
            break;
        case 2:
            ct(n);
            break;
       /* case 3:
            assignment(n);
            break;*/
        default:
            printf("Invalid choice! Please try again.\n");
            teacher();
    }
  }

   //TASEEN sir id 24629//

    else if (n == 24629)
  {
    gotoxy(20,5);
    printf("WELCOME MR TASINUL ISLAM TASEEN\n\n");
    gotoxy(18,7);
    printf("Enter Choice\n");
    gotoxy(20,9);
    printf("1.... Attendance Cheak\n");
    gotoxy(20,11);
    printf("2.... CT number\n");
    gotoxy(20,13);
    //printf("3.... Assignment Cheak\n");
    gotoxy(20,15);
    printf("..........");
    scanf("%d",&m);
    system("cls");
    switch(m){
        case 1:
            attendance(n);
            break;
        case 2:
            ct(n);
            break;
        /*case 3:
            assignment(n);
            break;*/
        default:
            printf("Invalid choice! Please try again.\n");
            teacher();
    }
  }
  

  //firoj sir id 24725//
   
    else if (n == 24725)
  {
    gotoxy(20,5);
    printf("WELCOME MR FIROJ KOBIR\n\n");
    gotoxy(18,7);
    printf("Enter Choice\n");
    gotoxy(20,9);
    printf("1.... Attendance Cheak\n");
    gotoxy(20,11);
    printf("2.... CT number\n");
    gotoxy(20,13);
    //printf("3.... Assignment Cheak\n");
    gotoxy(20,15);
    printf("..........");
    scanf("%d",&m);
    system("cls");
    switch(m){
        case 1:
            attendance(n);
            break;
        case 2:
            ct(n);
            break;
        /*case 3:
            assignment(n);
            break;*/
        default:
            printf("Invalid choice! Please try again.\n");
            teacher();
    }
  }

  //SATHEE MEM id 24624//

    else if (n == 24624)
    {
        gotoxy(20,5);
        printf("WELCOME MRS SATHEE \n\n");
        gotoxy(18,7);
        printf("Enter Choice\n");
        gotoxy(20,9);
        printf("1.... Attendance Cheak\n");
        gotoxy(20,11);
        printf("2.... CT number\n");
        gotoxy(20,13);
        //printf("3.... Assignment Cheak\n");
        gotoxy(20,15);
        printf("..........");
        scanf("%d",&m);
        system("cls");
        switch(m){
            case 1:
                attendance(n);
                break;
            case 2:
                ct(n);
                break;
            /*case 3:
                assignment(n);
                break;*/
            default:
                printf("Invalid choice! Please try again.\n");
                teacher();
        }
    }
   
    
    //SOHIDUL sir id 24621//`

    else if (n == 24621)
    {
        gotoxy(20,5);
        printf("WELCOME MR SOHIDUL ISLAM\n\n");
        gotoxy(18,7);
        printf("Enter Choice\n");
        gotoxy(20,9);
        printf("1.... Attendance Cheak\n");
        gotoxy(20,11);
        printf("2.... CT number\n");
        gotoxy(20,13);
       // printf("3.... Assignment Cheak\n");
        gotoxy(20,15);
        printf("..........");
        scanf("%d",&m);
        system("cls");
        switch(m){
            case 1:
                attendance(n);
                break;
            case 2:
                ct(n);
                break;
            /*case 3:
                assignment(n);
                break;*/
            default:
                printf("Invalid choice! Please try again.\n");
                teacher();
        }
    }

    
}

int attendance(int n){
    printf("Please wait...\n");
   Sleep(2000);
   int sm,k;
   if (
    n == 24628
   )
   {
    printf("Enter semester :");
    scanf("%d",&sm);

    printf("Enter number of students     :");
    scanf("%d",&k);
    struct student s[k];
     for (int i = 0; i < k; i++)
     {
         printf("Enter student id [no %d] :",i+1);
         scanf("%d",&s[i].id);
         getchar(); // Clear the newline character from the input buffer
         printf("Enter student name [no %d] :",i+1);
         fgets(s[i].name, sizeof(s[i].name), stdin);
         s[i].name[strcspn(s[i].name, "\n")] = 0; // Remove newline character
     }
    /*for (int i = 0; i < k; i++) 
    {
        printf("Enter student id [no %d]: ", i + 1);
        scanf("%d", &s[i].id);

        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            // Discard characters until end-of-line or end-of-file
        }

        printf("Enter student name [no %d]: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // Remove newline character
    }*/

        time_t t = time(NULL);
        struct tm tm_info = *localtime(&t);
        char date_str[11];
        strftime(date_str, sizeof(date_str), "%m-%d-%y", &tm_info);
       
        FILE *att_minhaj;
        att_minhaj = fopen("att_minhaj.txt", "a");
        if (att_minhaj == NULL) {
            perror("Error opening file!\n");
            return 1;
        }
        fprintf(att_minhaj, "Semester %d\n", sm);
        fprintf(att_minhaj, "%-12s %-10s %-20s\n", "Date", "ID", "Name");

        for (int i = 0; i < k; i++) {
            fprintf(att_minhaj, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
        }
        fclose(att_minhaj);
        Sleep(1000);
        printf("Attendance recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
   
   }

   // Devid sir attendance recording//

   else if (n == 24625)
   {
        printf("Enter semester :");
        scanf("%d",&sm);

        printf("Enter number of students     :");
        scanf("%d",&k);
        struct student s[k];
        for (int i = 0; i < k; i++)
        {
            printf("Enter student id no[%d] :",i+1);
            scanf("%d",&s[i].id);
            getchar(); // Clear the newline character from the input buffer

            printf("Enter student name no[%d] :",i+1);
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name , "\n")] = 0;

            time_t t = time(NULL);
            struct tm tm_info = *localtime(&t);
            char date_str[11];
            strftime(date_str,sizeof(date_str), "%m-%d-%y", &tm_info);


            FILE *att_devid;
            att_devid = fopen("att_devid.txt", "a");
            if (att_devid == NULL) {
                perror("Error opening file!\n");
                return 1;
            }
            fprintf(att_devid, "Semester %d\n", sm);
            fprintf(att_devid, "%-12s %-10s %-20s\n", "Date", "ID", "Name");
            for (int i = 0; i < k; i++)
            {
                fprintf(att_devid, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
            }
            fclose(att_devid);
            Sleep(1000);
            printf("Attendance recorded successfully!\n");
             printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
            
        }
        
   }

   //Taseen sir attendance recording//

   else if (n == 24629)
   {
        printf("Enter semester :");
        scanf("%d",&sm);

        printf("Enter number of students     :");
        scanf("%d",&k);
        struct student s[k];
        for (int i = 0; i < k; i++)
        {
            printf("Enter student id no[%d] :",i+1);
            scanf("%d",&s[i].id);
            getchar(); // Clear the newline character from the input buffer

            printf("Enter student name no[%d] :",i+1);
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name , "\n")] = 0;

            time_t t = time(NULL);
            struct tm tm_info = *localtime(&t);
            char date_str[11];
            strftime(date_str,sizeof(date_str), "%m-%d-%y", &tm_info);
            FILE *att_taseen;
            att_taseen = fopen("att_taseen.txt", "a");
            if (att_taseen == NULL) {
                perror("Error opening file!\n");
                return 1;
            }
            fprintf(att_taseen, "Semester %d\n", sm);
            fprintf(att_taseen, "%-12s %-10s %-20s\n", "Date", "ID", "Name");
            for (int i = 0; i < k; i++)
            {
                fprintf(att_taseen, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
            }
            fclose(att_taseen);
            Sleep(1000);
            printf("Attendance recorded successfully!\n");
             printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
        }

   }

   //Firoj sir attendance recording//

   else if (n == 24725)
   {
        printf("Enter semester :");
        scanf("%d",&sm);

        printf("Enter number of students     :");
        scanf("%d",&k);
        struct student s[k];
        for (int i = 0; i < k; i++)
        {
            printf("Enter student id no[%d] :",i+1);
            scanf("%d",&s[i].id);
            getchar();

            printf("Enter student name no[%d] :",i+1);
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name , "\n")] = 0;

            time_t t = time(NULL);
            struct tm tm_info = *localtime(&t);
            char date_str[11];
            strftime(date_str,sizeof(date_str), "%m-%d-%y", &tm_info);
            FILE *att_firoj;
            att_firoj = fopen("att_firoj.txt", "a");
            if (att_firoj == NULL) {
                perror("Error opening file!\n");
                return 1;
            }
            fprintf(att_firoj, "Semester %d\n", sm);
            fprintf(att_firoj, "%-12s %-10s %-20s\n", "Date", "ID", "Name");
            for (int i = 0; i < k; i++)
            {
                fprintf(att_firoj, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
            }
            fclose(att_firoj);
            Sleep(1000);
            printf("Attendance recorded successfully!\n");
             printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
        }

   }

   //Sathee mem attendance recording//

   else if (n == 24624)
   {
        printf("Enter semester :");
        scanf("%d",&sm);

        printf("Enter number of students     :");
        scanf("%d",&k);
        struct student s[k];
        for (int i = 0; i < k; i++)
        {
            printf("Enter student id no[%d] :",i+1);
            scanf("%d",&s[i].id);
            getchar();

            printf("Enter student name no[%d] :",i+1);
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name , "\n")] = 0;

            time_t t = time(NULL);
            struct tm tm_info = *localtime(&t);
            char date_str[11];
            strftime(date_str,sizeof(date_str), "%m-%d-%y", &tm_info);
            FILE *att_sathee;
            att_sathee = fopen("att_sathee.txt", "a");
            if (att_sathee == NULL) {
                perror("Error opening file!\n");
                return 1;
            }
            fprintf(att_sathee, "Semester %d\n", sm);
            fprintf(att_sathee, "%-12s %-10s %-20s\n", "Date", "ID", "Name");
            for (int i = 0; i < k; i++)
            {
                fprintf(att_sathee, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
            }
            fclose(att_sathee);
            Sleep(1000);
            printf("Attendance recorded successfully!\n");
             printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
        }

   }

   //Sohidul sir attendance recording//

   else if (n == 24621)
   {
        printf("Enter semester :");
        scanf("%d",&sm);

        printf("Enter number of students     :");
        scanf("%d",&k);
        struct student s[k];
        for (int i = 0; i < k; i++)
        {
            printf("Enter student id no[%d] :",i+1);
            scanf("%d",&s[i].id);
            getchar();

            printf("Enter student name no[%d] :",i+1);
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name , "\n")] = 0;

            time_t t = time(NULL);
            struct tm tm_info = *localtime(&t);
            char date_str[11];
            strftime(date_str,sizeof(date_str), "%m-%d-%y", &tm_info);
            FILE *att_sohidul;
            att_sohidul = fopen("att_sohidul.txt", "a");
            if (att_sohidul == NULL) {
                perror("Error opening file!\n");
                return 1;
            }
            fprintf(att_sohidul, "Semester %d\n", sm);
            fprintf(att_sohidul, "%-12s %-10s %-20s\n", "Date", "ID", "Name");
            for (int i = 0; i < k; i++)
            {
                fprintf(att_sohidul, "%-12s %-10d %-20s\n", date_str, s[i].id, s[i].name);
            }
            fclose(att_sohidul);
            Sleep(1000);
            printf("Attendance recorded successfully!\n");
             printf("Press any key to  go to main menu..\n");
        getch();
        attendance(n); // Call attendance function again to return to the main menu
        }

   }

   else
   {
        printf("Invalid teacher id!\n");
        Sleep(1000);
        teacher();
   }

   
   
    
}

int ct(int n){
    int ct_no;
    int k;
    if (n == 24628)
    {
        printf("Enter CT number for Minhaj sir :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%d", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_minhaj.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
        printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
    else if (n == 24625)
    {
       printf("Enter CT number for Devid sir :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%d", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_devid.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
         printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
    else if (n == 24629)
    {
       printf("Enter CT number for Taseen sir :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%s", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_taseen.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
         printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
     else if (n == 24725)
    {
        printf("Enter CT number for Firoj sir :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%d", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_firoj.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
         printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
    else if (n == 24624)
    {printf("Enter CT number for Sathee mem :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%d", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_sathee.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
         printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
    else if (n == 24621)
    {
        printf("Enter CT number for Sohidul sir :");
        scanf("%d",&ct_no);
        
        printf("Enter number of students: ");
        scanf("%d", &k);
       
        struct ct_entry data[k];

        for (int i = 0; i < k; i++) {
            data[i].ct_no = ct_no;
            printf("Enter student ID [%d]: ", i + 1);
            scanf("%d", &data[i].id);
            printf("Enter total marks for student ID %d: ", data[i].id);
            scanf("%d", &data[i].total_marks);
        }
         FILE *ct_file = fopen("ct_sohidul.txt", "a");
        if (ct_file == NULL) {
            perror("Error opening file!\n");
            return 1;
        }

         fprintf(ct_file, "%-15s %-15s %-15s\n", "CT", "ID", "Total Marks");
        for (int i = 0; i < k; i++) {
            fprintf(ct_file, "%-15d %-15d %-15d\n", 
                    data[i].ct_no, data[i].id, data[i].total_marks);
        }
        fprintf(ct_file, "\n");  // For separation between CTs
        fclose(ct_file);
         printf("CT data recorded successfully!\n");
        printf("Press any key to  go to main menu..\n");
        getch();
        ct(n); // Call ct function again to return to the main menu
    }
    else
    {
        printf("Invalid teacher id!\n");
        printf("Please try again.\n");
        Sleep(1000);
        teacher();
    }

}


void login(void){
    int n;
    gotoxy(20,5);
    printf("WELCOME TO STUDENT SECTION\n\n");
    gotoxy(18,7);
    printf("**********************************");
    gotoxy(11,11);
    printf("1.....NEW USER? CREATE AN ACCOUNT\n");
    gotoxy(11,13);
    printf("2.....ALREADY HAVE A ACCOUNT....LOG IN...\n");
    gotoxy(11,15);
    printf("3.....EXIT\n");
    gotoxy(11,17);
    printf("Enter your choice: ");
    scanf("%d",&n);
    system("cls");
    switch(n){
        case 1:
            account_crt();
            break;
        case 2:
            old_usr();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            login();
    }
}

int account_crt(void){
    gotoxy(7,5);
    
    printf("Please wait...\n");
    Sleep(2000);
    system("cls");
    gotoxy(20,4);
    printf("WELCOME TO ACCOUNT CREATION\n\n");
    gotoxy(18,6);
    printf("**********************************");
    struct data d;
    FILE *fu;
    fu = fopen("student.txt", "a");
    if (fu == NULL)
    {
        perror("Error opening file!\n");
        return 1;
    }
    gotoxy(9,9);
    getchar(); 
    printf("1...Enter your name: ");
    fgets(d.name,sizeof(d.name),stdin);
    d.name[strcspn(d.name, "\n")] = 0;
    gotoxy(9,11);
    //getchar();
    fflush(stdin); // Clear the input buffer
    printf("2...Enter your username: ");
    fgets(d.username,sizeof(d.username),stdin);
    d.username[strcspn(d.username, "\n")] = 0;
    gotoxy(9,13);
    printf("3...Enter your password: ");
    fgets(d.pass,sizeof(d.pass),stdin);
    d.pass[strcspn(d.pass, "\n")] = 0;
    gotoxy(9,15);
    printf("4...Enter your id: ");
    fgets(d.id, sizeof(d.id), stdin);
    d.id[strcspn(d.id, "\n")] = 0; // Remove newline character
    gotoxy(9,17);

    fprintf(fu ,"%-30s %-10s %-20s %-20s\n","Name","Id","username","password");
    fprintf(fu ,"%-30s %-10s %-20s %-20s\n",d.name, d.id, d.username, d.pass);
    fclose(fu);
    Sleep(1000);
    gotoxy(9,21);


    printf("Data received successfully!\n");

    gotoxy(9,23);
    printf("Press any key to continue...\n");
    getch();
    system("cls");
    acc_login();
}

void acc_login(void) {
    char username[100], password[32];
    gotoxy(20,5);
    printf("WELCOME TO LOGIN SECTION\n\n");
    gotoxy(18,7);
    printf("**********************************");
    gotoxy(11,12);
    printf("Enter your username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0; // Remove newline

    gotoxy(11,14);
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; // Remove newline

    FILE *fu = fopen("student.txt", "r");
    if (fu == NULL) {
        perror("Error opening file!\n");
        return;
    }

    struct data d;
    int found = 0;
    char line[256];
    while (fgets(line, sizeof(line), fu)) {
        if (strstr(line, "Name") != NULL)
            continue;
        // Adjust sscanf format to match your file
        sscanf(line, "%30s %10s %20s %20s", d.name, d.id, d.username, d.pass);
        if (strcmp(d.username, username) == 0 && strcmp(d.pass, password) == 0) {
            found = 1;
            break;
        }
    }
    fclose(fu);

    if (found) {
        gotoxy(18,21);
        printf("Login successful! Press enter to continue\n");
        getch();
        system("cls");
        display(username, password);
    } else {
        gotoxy(18,21);
        printf("Invalid username or password! Please try again.\n");
        // Instead of recursion, use a loop or return to main menu
        acc_login(); // Call acc_login again to allow retry
    }
}

    int display(char username[], char password[]){
        struct data d;
        char name[50];
    FILE *fu;
    fu = fopen("student.txt", "r");
    if (fu == NULL) {
        perror("Error opening file!\n");
        return 1;
    }
    while (fscanf(fu, "%s %s %s %s\n", d.name, d.id, d.username, d.pass) != EOF) {
        strcpy(name, d.name);
    }
        
    gotoxy(11,5);
    printf("Please wait...\n");
    Sleep(2000);
    system("cls");
    gotoxy(20,5);
    printf("Display Section \n");
    gotoxy(45,5);
    printf("Welcome MR");
    puts(name);
    gotoxy(45,9);
    printf("Id: %s\n", d.id);
    gotoxy(11,11);
    printf("1.... Attendance Cheak\n");
    gotoxy(11,13);
    printf("2.... CT number\n");
    gotoxy(11,15);
    printf("3.... Exit\n");
    
    gotoxy(11,17);
   
    

  printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    system("cls");
    switch (choice) {
        case 1:
            dis_attendance(); // Pass 0 for student attendance
            break;
        case 2:
            dis_ct(); // Pass 0 for student CT number
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            display(username, password);

    }
    fclose(fu);
}
void dis_attendance() {
    printf("Please wait...\n");
    Sleep(2000);
    gotoxy(11,5);
    printf(" Choose Attendance Owner\n");
    gotoxy(11,7);
    printf("1.... Minhaj Abedin\n");
    gotoxy(11,9);
    printf("2.... Devid Chandra Roy\n");
    gotoxy(11,11);
    printf("3.... Taseenul Islam Taseen\n");
    gotoxy(11,13);
    printf("4.... Firoj Kobir\n");
    gotoxy(11,15);
    printf("5.... Sathee\n");
    gotoxy(11,17);
    printf("6.... Sohidul Islam\n");
    gotoxy(11,19);
    printf("7.... Exit\n");
    gotoxy(11,21);
    printf("Enter your choice (1-7): ");
    int choice;
    scanf("%d", &choice);
    system("cls");
    switch (choice) {
        case 1:
    printf("Displaying Minhaj Abedin's attendance...\n");
    {
        FILE *att_minhaj;
        char line[256]; // Buffer to read each line

        att_minhaj = fopen("att_minhaj.txt", "r");
        if (att_minhaj == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_minhaj)) {
            printf("%s", line);
        }

        fclose(att_minhaj);
        printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

        case 2:
           
    printf("Displaying Devid chandra Roy's attendance...\n");
    {
        FILE *att_devid;
        char line[256]; // Buffer to read each line

        att_devid = fopen("att_devid.txt", "r");
        if (att_devid == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_devid)) {
            printf("%s", line);
        }

        fclose(att_devid);
         printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

        case 3:
    printf("Displaying Tasnimul Islam's attendance...\n");
    {
        FILE *att_taseen;
        char line[256]; // Buffer to read each line

        att_taseen = fopen("att_taseen.txt", "r");
        if (att_taseen == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_taseen)) {
            printf("%s", line);
        }

        fclose(att_taseen);
         printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

            
       case 4:
    printf("Displaying Firoj kobir's attendance...\n");
    {
        FILE *att_firoj;
        char line[256]; // Buffer to read each line

        att_firoj = fopen("att_firoj.txt", "r");
        if (att_firoj == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_firoj)) {
            printf("%s", line);
        }

        fclose(att_firoj);
         printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

       case 5:
    printf("Displaying Sathee's attendance...\n");
    {
        FILE *att_sathee;
        char line[256]; // Buffer to read each line

        att_sathee = fopen("att_sathee.txt", "r");
        if (att_sathee == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_sathee)) {
            printf("%s", line);
        }

        fclose(att_sathee);
         printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

        case 6:
    printf("Displaying Sohidul Alom's attendance...\n");
    {
        FILE *att_sohidul;
        char line[256]; // Buffer to read each line

        att_sohidul = fopen("att_sohidul.txt", "r");
        if (att_sohidul == NULL) {
            perror("Error opening file!\n");
            return;
        }

        // Read and display each line from the file
        while (fgets(line, sizeof(line), att_sohidul)) {
            printf("%s", line);
        }

        fclose(att_sohidul);
         printf("\nPress any key to return to the main menu...\n");
        getch();
        display(0, 0); // Call display function again to return to the main menu
    }
    break;

        case 7:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
            dis_attendance();
    }
}

void dis_ct() {
    printf("Please wait...\n");
    Sleep(2000);
    gotoxy(11,5);
    printf(" Choose CT Owner\n");
    gotoxy(11,7);
    printf("1.... Minhaj Abedin\n");
    gotoxy(11,9);
    printf("2.... Devid Chandra Roy\n");
    gotoxy(11,11);
    printf("3.... Taseenul Islam Taseen\n");
    gotoxy(11,13);
    printf("4.... Firoj Kobir\n");
    gotoxy(11,15);
    printf("5.... Sathee\n");
    gotoxy(11,17);
    printf("6.... Sohidul Islam\n");
    gotoxy(11,19);
    printf("7.... Exit\n");
    gotoxy(11,21);
    printf("Enter your choice (1-7): ");
    
    int choice;
    scanf("%d", &choice);
    system("cls");
    
    switch (choice) {
        case 1:
            printf("Displaying Minhaj Abedin's CT number...\n");
            {
                FILE *ct_minhaj;
                char line[256]; // Buffer to read each line

                ct_minhaj = fopen("ct_minhaj.txt", "r");
                if (ct_minhaj == NULL) {
                    perror("Error opening file!\n");
                    return;
                }

                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_minhaj)) {
                   puts(line);
                }

                fclose(ct_minhaj);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                display(0, 0); // Call display function again to return to the main menu
            }
            break;

        case 2:
            printf("Displaying Devid Chandra Roy's CT number...\n");
            {
                FILE *ct_devid;
                char line[256]; // Buffer to read each line

                ct_devid = fopen("ct_devid.txt", "r");
                if (ct_devid == NULL) {
                    perror("Error opening file!\n");
                    return;
                }

                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_devid)) {
                    puts(line);
                }

                fclose(ct_devid);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                 display(0, 0); // Call display function again to return to the main menu
            }
            break;

        case 3:
            printf("Displaying Taseenul Islam's CT number...\n");
            {
                FILE *ct_taseen;
                char line[256]; // Buffer to read each line
                ct_taseen = fopen("ct_taseen.txt", "r");
                if (ct_taseen == NULL) {
                    perror("Error opening file!\n");
                    return;
                }
                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_taseen)) {
                    puts(line);
                }
                fclose(ct_taseen);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                display(0, 0); // Call display function again to return to the main menu
            }
            break;
        case 4:
            printf("Displaying Firoj Kobir's CT number...\n");
            {
                FILE *ct_firoj;
                char line[256]; // Buffer to read each line

                ct_firoj = fopen("ct_firoj.txt", "r");
                if (ct_firoj == NULL) {
                    perror("Error opening file!\n");
                    return;
                }

                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_firoj)) {
                    puts(line);
                }

                fclose(ct_firoj);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                display(0, 0); // Call display function again to return to the main menu
            }
            break;
        case 5:
            printf("Displaying Sathee's CT number...\n");
            {
                FILE *ct_sathee;
                char line[256]; // Buffer to read each line

                ct_sathee = fopen("ct_sathee.txt", "r");
                if (ct_sathee == NULL) {
                    perror("Error opening file!\n");
                    return;
                }

                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_sathee)) {
                   puts(line);
                }

                fclose(ct_sathee);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                display(0, 0); // Call display function again to return to the main menu
            }
            break;
        case 6:
        printf("Displaying Sohidul's CT number...\n");
            {
                FILE *ct_sohidul;
                char line[256]; // Buffer to read each line

                ct_sohidul = fopen("ct_sohidul.txt", "r");
                if (ct_sohidul == NULL) {
                    perror("Error opening file!\n");
                    return;
                }

                // Read and display each line from the file
                while (fgets(line, sizeof(line), ct_sohidul)) {
                    puts(line);
                }

                fclose(ct_sohidul);
                 printf("\nPress any key to return to the main menu...\n");
                getch();
                display(0, 0); // Call display function again to return to the main menu
            }
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
            dis_ct();
            break;
    }
}
void old_usr(void){
    char username[100], password[32];
    gotoxy(20,5);
    printf("WELCOME TO OLD USER SECTION\n\n");
    gotoxy(18,7);
    printf("**********************************");
    gotoxy(11,12);
    printf("Enter your username: ");
    // Clear input buffer before fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // <-- Add this line

    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0; // Remove newline
    gotoxy(11,14);
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; // Remove newline
    // ...existing code...
    FILE *fu = fopen("student.txt", "r");
    if (fu == NULL) {
        perror("Error opening file!\n");
        return;
    }

    struct data d;
    int found = 0;
    char line[256];
    while (fgets(line, sizeof(line), fu)) {
        if (strstr(line, "Name") != NULL)
            continue;
        // Adjust sscanf format to match your file
        sscanf(line, "%30s %10s %20s %20s", d.name, d.id, d.username, d.pass);
        if (strcmp(d.username, username) == 0 && strcmp(d.pass, password) == 0) {
            found = 1;
            break;
        }
    }
    fclose(fu);

    if (found) {
        gotoxy(18,21);
        printf("Login successful! Press enter to continue\n");
        getch();
        system("cls");
        display(username, password);
    } else {
        gotoxy(18,21);
        printf("Invalid username or password! Please try again.\n");
        // Instead of recursion, use a loop or return to main menu
        old_usr();
    }
}

#include<stdio.h>
#include<string.h>
void username();
void password();
void controler();

const char user_main[]= "maher";
const char pass_main[]= "cse";
int main(){
    
  username();
 return 0;
}
void username(){
 char user1[32];
 
  
    while(1) {
        printf("Enter your username :");
        scanf("%32s",& user1);
        if(strcmp(user_main,user1)==0){
            printf("Your username is correct\n");
             password();
            break;
            
        }
        else {
        printf("Invalid username\n");
        }
    }
    
    

}

void password(){
    char pass1[32];
    

        while(1) {
            printf("Enter your password :");
            scanf("%31s",pass1);
            if(strcmp(pass_main,pass1)==0){
                printf("Your password is correct\n");
                controler();
                break;
            }
            else{
        printf("Your password is incorrect\n");
        }
        }
    
}



#

void controler(){
    int n,x,p,c,b,m,sum;
 char  s[100];
 int ph;
 printf("Enter your name               : ");                                                //for name//
 scanf("%s",&s);                                                                           //name scan//
 printf("Enter your roll number        : ");                                              //for roll//
 scanf(" %d",&n);                                                                        //roll scan//
 fflush(stdin);
 printf("        Start entering your all data\n");
 printf("Enter your Physics number     :");                                            //physics number//
 scanf(" %d",&p);
 fflush(stdin);
 printf("Enter your Chemistry number   :");                                          //chemistry number//
 scanf(" %d",&c);
 fflush(stdin);
 printf("Enter your CSE number         :");                                        //CSE number//
 scanf(" %d",&b);
 fflush(stdin);
 printf("Enter your Mathematics number :");                                      //mathematics number//
 scanf(" %d",&m);
 fflush(stdin);
 printf("Enter your phone number (+880):");                                    //for phone number//
 scanf(" %d",&ph);
 int arr[4]={p,c,m,b};
 sum =p+c+b+m;                                                              //sum of all number//
  for (int i = 0; i < 4; i++){                                             //storing largest number//{
    if (arr[0]<arr[i])
    {
            arr[0] = arr[i];
    }

 }
  for(int j =0;j<=sizeof(s);j++){                                          //change letter order//
    if (s[j]>='a'&& s[j]<='z')
    {
        s[j]=s[j]-32;
    }

  }

 //printing part//
  printf("Name           : %s\n",s);                                    //name print//
  printf("College Name   : Ashrai Engneering College\n");              //print college name//
  printf("Roll Number    : %d\n",n);                                  //roll number print//
  printf("Physics        : %d\n",p);                                 //physics number print//
  printf("Chemistry      : %d\n",c);                                //chemistry number print//
  printf("CSE            : %d\n",b);                               //CSE number print//
  printf("Mathematics    : %d\n",m);                              //mathematics number print//
  printf("Total number   : %d\n",sum);                           //total number print//
  printf("Highest number :%d\n",arr[0]);
  if (sum>=320 && sum>280)
  {
    printf("Your grade is A+\n");
    printf("Stutas       : Excilent\n");
  }
  else if (sum<=280 && sum>240)
  {
    printf("Your grade is A\n");
    printf("Stutas       :  Good");
  }
  else if (sum<= 240 && sum>200)
  {
    printf("Your grade is A-\n");
    printf("Stutas       : Not bad");

  }
  else if (sum<=200 && sum> 140)
  {
    printf("Your grade is B\n");
    printf("Stutas       : Try more");
  }
  else if (sum<=140 && sum>=132)
  {
    printf("Your grade is C\n");
    printf("Stutas       : Bad");
  }
  else{
    printf("Fail\n");
    printf("Stutas       : Worst...Call your father in principal cabin next day\n");
  }

  printf("Phone Number   :0%d\n",ph);
  printf("Thanks..Ashrai Engneering Collge,Pakuria,Baya,Rajshahi\n");
  printf("                                                                            Press F5 for print\n   ");
  char end_main[]="end";
  char end[4];
  printf("For continue enter yes/for exit enter end :");
  scanf("%s",&end);
  if(strcmp(end_main,end)!=0){
    controler();
  }
}

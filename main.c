#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void add();
void passw();
int main()
{
    passw();
}
void add()
{
        int a,b,c,total=0; 
    printf(" \n\n\n\n ");
    printf("....................................................online book shop ................................................................\n");
    p:
    printf("#####################################################################################################################################\n");
    printf("                                                    select the category\n");
    printf("      1.business\n");
    printf("      2.self help\n");
    printf("      3.fiction\n");
    printf("      4.non fiction\n");
    printf("      5.manga\n    ");
    scanf("%d",&a);
    printf("#####################################################################################################################################\n");
    if(a==1)
    {
        printf("Avaliable Books On Business \n");
        printf("    1.Rich Dad Poor Dad \n");
        printf("    2.Think Fast And Slow \n");
        printf("    3.Zero To One \n");
        printf("    4.How To Begin \n");
        printf("    5.100$ Startup \n");
        scanf("%d",&b);
   if(b==1)
        {
            total=total+451;
        }
        else if(b==2)

        {
            total=total+195;
        }
        else if(b==3)
        {
            total=total+171;
        }
        else if(b==4)
        {
            total=total+266;
        }
        else if(b==5)
        {
            total=total+204;
        }
        
    }
    else if(a==2)
    {
    printf("Avaliable Books On self help\n");
        printf("    1.How To Win And Influence People \n");
        printf("    2.Power Of Subconscious Mind \n");
        printf("    3.Ego Is The Enemy \n");
        printf("    4.Coumpound Effect\n");
        printf("    5.5AM Club \n\t");
        scanf("%d",&b);
    if(b==1)
        {
            total=total+256;
        }
        else if(b==2)
        {
            total=total+338;
        }
        else if(b==3)
        {
            total=total+255;
        }
        else if(b==4)
        {
            total=total+126;
        }
        else if(b==5)
        {
            total=total+143;
        }


    }
    else if(a==3)
    {
     printf("Avaliable Books On non fiction\n");
        printf("    1.Phycology Of Money \n");
        printf("    2.Sapiens \n");
        printf("    3.21 Law Of 21st century \n");
        printf("    4.Homo Deus \n\t");
        scanf("%d",&b);
       if(b==1)
        {
            total=total+461;
        }
        else if(b==2)
        {
            total=total+151;
        }
        else if(b==3)
        {
            total=total+387;
        }
        else if(b==4)
        {
            total=total+407;
        }
        
        
    }
    else if(a==4)
    {
     printf("Avaliable Books On fictions\n");
        printf("    1.Our Dark Duet \n");
        printf("    2.Keeper Of The Lost Cities\n");
        printf("    3.Harry Potter \n");
        printf("    4.Goosebumps \n");
        printf("    5.Iron Man \n");
        scanf("%d",&b);
    }
       if(b==1)
        {
            total=total+145;
        }
        else if(b==2)
        {
            total=total+270;
        }
        else if(b==3)
        {
            total=total+446;
        }
        else if(b==4)
        {
            total=total+139;
        }
        else if(b==5)
        {
            total=total+464;
        }
        
    else if(a==5)
    {
     printf("Avaliable Books On manga\n");
        printf("    1.Chansaw man\n");
        printf("    2.My Hero Acdemia\n");
        printf("    3.Demon Slayer \n");
        printf("    4.Jujutsu Kaisen \n");
        printf("    5.Attack On Titans\n");
        scanf("%d",&b);
           if(b==1)
        {
            total=total+289;
        }
        else if(b==2)
        {
            total=total+305;
        }
        else if(b==3)
        {
            total=total+392;
        }
        else if(b==4)
        {
            total=total+289;
        }
        else if(b==5)
        {
            total=total+163;
        }
        
    }
    printf("total is RS %d",total);
    printf("\nenter 1 to continue shoping or press 0\n");
    scanf("%d",&c);
    if(c==1)
    {
        goto p;
    }
    

}
void passw()
{
   int o;
    FILE* ptr;
    FILE* ptr2;
    FILE* fpt;
    char passwd[1000],cpass[1000],email[1000];
    printf("''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
    printf("\n\t\t\t\tENTER THE OPERTAION TO BE PERFORMED\n\n\n");
    printf("\t\t\t\t1.login\n\t\t\t\t2.create new account\n\t\t\t\t\n\n\t\t\t\t");
    scanf("%d",&o);
    printf(",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,");
if(o==1)
        {
        printf("\n\n\nENTER YOUR EMAIL ID :\n\t\t\t\t");
        system("./bash2.sh");
        printf("ENTER YOUR PASSWORD:\n\t\t\t\t");
        system("./bash.sh");
        ptr = fopen("output.txt","r");
        rewind(ptr);
        fscanf(ptr,"%s",&passwd);
        ptr2 = fopen("output2.txt","r");
        rewind(ptr2);
        fscanf(ptr2,"%s",&cpass);
    if(o==1)
        if(strcmp(passwd,cpass)==0)
            {
                    printf("\n\t\t\t\t access granted\n");
                    add ();
            }
        else
            {
                printf("\n\t\t\t\t invalid data please try again");
                passw();
            }
    }
    else if(o==2)
    {
    printf("\nENTER YOUR EMAIL ID\n");
    scanf("%s",email);
    printf("ENTER YOUR PASSWORD:\n");
    system("./bash.sh");
    ptr = fopen("output.txt","r");
    rewind(ptr);
    fscanf(ptr,"%s",&passwd);
    fpt = fopen("udata.csv", "a+");
    fprintf(fpt,"%s, %s,\n",email,passwd);
    passw();
    }

  
}
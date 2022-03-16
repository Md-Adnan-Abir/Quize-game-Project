#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
void show_record();
void reset_score();
void help();
void log_in();
void chose();
void edit_score(float , char []);
int main()
     {
     system("COLOR 1F");
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t###########################################################################");
     printf("\n\t\t\t############                   Welcome to                      ############");
     printf("\n\t\t\t############                   QUIZE GAME                      ############");
     printf("\n\t\t\t###########################################################################");
     printf("\n\t\t\t---------------------------------------------------------------------------\n");
     printf("\n\t\t\t----------------------------------------------------------------------------");
     printf("\n\t\t\t\t  **-**-**-**-**-**-**-**  Main Menu  **-**-**-**-**-**-**-**\n");
     printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [S] Start the game             <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [A] Admin Panel                <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [H] Help                       <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [Q] Quite                      <\n");
     printf("\n\t\t\t\t        >        \xDB\xB2\xDB Enter Your Choice \xDB\xB2\xDB          <");
     printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
     printf("\n\t\t\t\t\t\t\t\t\t Developed by 'Team Dual Dolphins'");
     choice=toupper(getch());
     if (choice=='A')
	{
	log_in();getch();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     Beep(523, 500);
     system("cls");
     system("COLOR 1F");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    Beep(523, 500);
    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		    system("COLOR 1F");
		printf("\n\nWhat year did Bangladesh finally become independent and gain the name it has today?");
		printf("\n\nA.1947\t\tB.1952\n\nC.1971\t\tD.1972");
		if (toupper(getch())=='C')
			{
			    Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           Beep(523, 2000);
			    system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is C.1971");
		           getch();
		       break;
		       }

        case 2:
            system("COLOR 1F");
		printf("\n\n\nWhat is the national flower of Bangladesh?");
		printf("\n\nA.Rose\t\t\tB.Tulip\n\nC.Water lily\t\tD.Sun Flower");
		if (toupper(getch())=='C')
			{
			    Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {
		           Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is C.Water lily");
		       getch();
		       break;}

        case 3:
            system("COLOR 1F");
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{
			    Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {
		           Beep(523, 2000);
			       system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 4:
            system("COLOR 1F");
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{
			    Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {
		           Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 5:
            system("COLOR 1F");
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("COLOR 1F");
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("COLOR 1F");
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		    system("COLOR 1F");
		printf("\n\nWhat is the National Game of BAngladesh?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Kabaddi\t\tD.Baseball");
		if (toupper(getch())=='C')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is C.Kabaddi");getch();
		       goto score;
		       break;}

		case 2:
		    system("COLOR 1F");
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
            system("COLOR 1F");
		printf("\n\n\nOn which continent is Bangladesh located? ");
		printf("\n\nA.Africa\t\t\tB.Europe\n\nC.Asia\t\tD.America");
		if (toupper(getch())=='C')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is C.Asia");getch();
		       goto score;
		       break;}

        case 4:
            system("COLOR 1F");
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
            system("COLOR 1F");
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is B.Watt");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		    system("COLOR 1F");
		printf("\n\n\nBefore the 1950's which crop was the principle crop of Bangladesh ?");
		printf("\n\nA.Rice\t\tB.Jute\n\nC.CCotton\t\tD.Tea");
		if (toupper(getch())=='B' )
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is B.Jute");goto score;
		       getch();
		       break;}

        case 7:
            system("COLOR 1F");
		printf("\n\n\nTo which Indian Lieutenant General did Pakistani Lieutenant General Niazi surrendered ?");
		printf("\n\nA.Sheikh Mujibur Rahman\t\tB.Zia-ur-Rahman\n\nC.Adnan Abir\t\tD. J.S.Aurora");
		if (toupper(getch())=='D')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is D. J.S.Aurora");getch();
		       goto score;
		       break;}

        case 8:
            system("COLOR 1F");
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
            system("COLOR 1F");
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
            system("COLOR 1F");
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {Beep(523, 2000);
                   system("COLOR 4F");
		           printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
            system("COLOR 1F");
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{Beep(523, 500);
			    system("COLOR 2F");
			    printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {Beep(523, 2000);
                   system("COLOR 4F");
                  printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
            system("COLOR 1F");
		printf("\n\n\nWhat is the name of national parliament of Bangladesh ?");
		printf("\n\nA.Jatiyo Shangshad\t\tB.Jatiyo Shangshad\n\nC.Dhaka Sangshad\t\tD.bangla parlament");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Jatiyo Shangshad");getch();
              break;goto score;}

		case 13:
		    system("COLOR 1F");
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in Bnagladesh is known as The City of Mosque?");
		printf("\n\nA.Khulna\tB.Kustia\n\nC.Dhaka\tD.Chadpur\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Dhaka");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWhich area of sea lies to the south of Bangladesh ?");
		printf("\n\nA.Atlantic\t\tB.South China Sea\n\nC.Indian Sea\t\tD.Bay of Bengal");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Bay of Bengal");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;}}}
	score:
	    system("COLOR 1F");
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {Beep(523, 500);
    system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {Beep(523, 500);
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
    printf("\n\t\t\t   >      \xDB\xDB\xDB\xDB\xB2 All the scores are reseted sucsessfully \xDB\xDB\xDB\xDB\xB2  <\n");}

void help()
	{Beep(523, 500);
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by team Dual Dolphins********");}

void log_in()
   {Beep(523, 500);
    system("cls");
   char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"adnan")==0){
        if(strcmp(password,"1234")==0){
        Beep(523, 500);
        printf("\nWelcome.Login Success!");
        {
	chose();
	}


        }else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
   }}
   void chose()
   {system("cls");
    char choice;
     printf("\n\t\t\t\t  **-**-**-**-**-**-**-**  Admin Panel  **-**-**-**-**-**-**-**\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [V] View the highest score     <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 [R] Reset score                <\n");
       choice=toupper(getch());
            if (choice=='V')
	{
	show_record();
	}
	else if (choice=='R')
	{
	    reset_score();getch();
	}
   }
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

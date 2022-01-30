#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
#include<time.h>
#include "wincontrol.h"
#include "txtinterface.h"

void page_1(void);
void page_2(void);
void start_quiz(void);
void indian_festival(void);
void sacred_places(void);
void indian_history(void);
void mystic_india(void);
void indian_culture(void);
void result(int ,int);
void rule(void);


char name[50];

int main(){
   set_screen();
   page_1();
   return 0;
}

void page_1(void){
   system("color 0f");
   HideCursor(false);
   create_border();
   SET_COLOR(GREEN);
   Welcome();
   SET_COLOR(BLUE);
   title();
   subtitle();
   HideCursor(true);
   SET_COLOR(RED);
   gotoxy(80,30);
   fflush(stdin);
   printf("Enter player name : ");
   SET_COLOR(WHITE);
   scanf("%[^\n]s",name);
   fflush(stdin);
   SET_COLOR(RED);
   HideCursor(false);
   loading();
   page_2();
}

void page_2(void){
   P2:
   system("cls");
   system("color 0f");
   HideCursor(false);
   create_border();
   SET_COLOR(CYAN);
   Menu();
   SET_COLOR(YELLOW);
   menu_box();
   gotoxy(90,18);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(90,19);
   printf("%c   1.  START QUIZ             %c",186,186);
   gotoxy(90,20);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(90,21);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(90,22);
   printf("%c   2.  RULES                  %c",186,186);
   gotoxy(90,23);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(90,24);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(90,25);
   printf("%c   3.  QUIT                   %c",186,186);
   gotoxy(90,26);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   
   HideCursor(true);
   gotoxy(80,33);
   int choice;
   printf("Enter your choice : ");
   scanf("%d",&choice);
   switch (choice)
   {
   case 1:
      start_quiz();
      break;   
   case 2:
      rule();
      break;
   case 3:
      quit_quiz();
      break;
   default:
      gotoxy(80,35);
      printf("\aINVALID INPUT! Press any key to try Again. ");
      getch();
      goto P2;
      break;
   }
      
}

void start_quiz(void){
   SQ:
   system("cls");
   system("color 0f");
   HideCursor(false);
   create_border();
   SET_COLOR(CYAN);

   for(int i=0;i<=101;++i){
      gotoxy(60+i,13);
      printf("%c",176);
      gotoxy(60+i,38);
      printf("%c",176);
   }

   for(int i=1;i<25;++i){
      gotoxy(60,13+i);
      printf("%c%c",176,176);
      gotoxy(160,13+i);
      printf("%c%c",176,176);
   }

   gotoxy(95,16);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(95,17);
   printf("%c   1.  INDIAN FESTIVALS       %c",186,186);
   gotoxy(95,18);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(95,19);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(95,20);
   printf("%c   2.  SACRED PLACES          %c",186,186);
   gotoxy(95,21);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(95,22);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(95,23);
   printf("%c   3.  MYSTIC INDIA           %c",186,186);
   gotoxy(95,24);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(95,25);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(95,26);
   printf("%c   4.  INDIAN CULTURE         %c",186,186);
   gotoxy(95,27);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(95,28);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(95,29);
   printf("%c   0.  QUIT                   %c",186,186);
   gotoxy(95,30);
   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   
   HideCursor(true);
   gotoxy(85,36);
   int choice;
   printf("Enter your choice : ");
   scanf("%d",&choice);
   switch (choice)
   {
   case 1:
      indian_festival();
      break;
   case 2:
      sacred_places();
      break;
   case 3:
      mystic_india();
      break;
   case 4:
      indian_culture();
      break;
   case 0:
      quit_quiz();
      break;
   default:
      gotoxy(85,40);
      printf("\aINVALID INPUT! Press any key to try Again. ");
      getch();
      goto SQ;
      break;
   }
   
}

void indian_festival(void){
   int Q_asked[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int Qno,correct=0,incorrect=0;
   char ans;
   for(int i=0;i<10;++i){
      srand(time(NULL));
      Qno=rand()%20;
      if(!search_Qno(Qno,Q_asked)){
         Q_asked[i]=Qno;
         system("cls");
         create_border();
         HideCursor(true);
         SET_COLOR(uWHITE);
         gotoxy(150,6);
         printf("Questions Attempted : %d/10",i+1);
         gotoxy(150,7);
         printf("Correct Answer : %d",correct);
         gotoxy(150,8);
         printf("Incorrect Answer : %d",incorrect);
         SET_COLOR(RESET);
         SET_COLOR(BLUE);
         gotoxy(32,10);
         printf("%s",Q_indian_festival[Qno]);
         opt_box(option_indian_festival[Qno][0],option_indian_festival[Qno][1],option_indian_festival[Qno][2],option_indian_festival[Qno][3]);
         gotoxy(40,28);
         SET_COLOR(WHITE);
         printf("Enter Your Answer : ");
         fflush(stdin);
         scanf("%c",&ans);
         ans=toupper(ans);
         if(ans==ans_indian_festival[Qno]){
            SET_COLOR(GREEN);
            ++correct;
         }
         else{
            SET_COLOR(RED);
            ++incorrect;
         }
         gotoxy(45,30);
         printf("Correct Answer : %c",ans_indian_festival[Qno]);
         gotoxy(48,33);
         printf("%s",about_indian_festival[Qno]);
         gotoxy(50,39);
         SET_COLOR(BLUE);
         printf("Press any key to continue.");
         getch();
      }
      else
         --i;
   }
   result(correct,incorrect);
   getch();
}


void sacred_places(void){
   int Q_asked[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int Qno,correct=0,incorrect=0;
   char ans;
   for(int i=0;i<10;++i){
      srand(time(NULL));
      Qno=rand()%20;
      if(!search_Qno(Qno,Q_asked)){
         Q_asked[i]=Qno;
         system("cls");
         create_border();
         HideCursor(true);
         SET_COLOR(uWHITE);
         gotoxy(150,6);
         printf("Questions Attempted : %d/10",i+1);
         gotoxy(150,7);
         printf("Correct Answer : %d",correct);
         gotoxy(150,8);
         printf("Incorrect Answer : %d",incorrect);
         SET_COLOR(RESET);
         SET_COLOR(BLUE);
         gotoxy(32,10);
         printf("%s",Q_sacred_places[Qno]);
         opt_box(option_sacred_places[Qno][0],option_sacred_places[Qno][1],option_sacred_places[Qno][2],option_sacred_places[Qno][3]);
         gotoxy(40,28);
         SET_COLOR(WHITE);
         printf("Enter Your Answer : ");
         fflush(stdin);
         scanf("%c",&ans);
         ans=toupper(ans);
         if(ans==ans_sacred_places[Qno]){
            SET_COLOR(GREEN);
            ++correct;
         }
         else{
            SET_COLOR(RED);
            ++incorrect;
         }
         gotoxy(45,30);
         printf("Correct Answer : %c",ans_sacred_places[Qno]);
         gotoxy(48,33);
         printf("%s",about_sacred_places[Qno]);
         gotoxy(50,39);
         SET_COLOR(BLUE);
         printf("Press any key to continue.");
         getch();
      }
      else
         --i;
   }
   result(correct,incorrect);
}


void mystic_india(void){
   int Q_asked[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int Qno,correct=0,incorrect=0;
   char ans;
   for(int i=0;i<10;++i){
      srand(time(NULL));
      Qno=rand()%20;
      if(!search_Qno(Qno,Q_asked)){
         Q_asked[i]=Qno;
         system("cls");
         create_border();
         HideCursor(true);
         SET_COLOR(uWHITE);
         gotoxy(150,6);
         printf("Questions Attempted : %d/10",i+1);
         gotoxy(150,7);
         printf("Correct Answer : %d",correct);
         gotoxy(150,8);
         printf("Incorrect Answer : %d",incorrect);
         SET_COLOR(RESET);
         SET_COLOR(BLUE);
         gotoxy(32,10);
         printf("%s",Q_mystic_india[Qno]);
         opt_box(option_mystic_india[Qno][0],option_mystic_india[Qno][1],option_mystic_india[Qno][2],option_mystic_india[Qno][3]);
         gotoxy(40,28);
         SET_COLOR(WHITE);
         printf("Enter Your Answer : ");
         fflush(stdin);
         scanf("%c",&ans);
         ans=toupper(ans);
         if(ans==ans_mystic_india[Qno]){
            SET_COLOR(GREEN);
            ++correct;
         }
         else{
            SET_COLOR(RED);
            ++incorrect;
         }
         gotoxy(45,30);
         printf("Correct Answer : %c",ans_mystic_india[Qno]);
         gotoxy(48,33);
         printf("%s",about_mystic_india[Qno]);
         gotoxy(50,39);
         SET_COLOR(BLUE);
         printf("Press any key to continue.");
         getch();
      }
      else
         --i;
   }
   result(correct,incorrect);
   getch();
}


void indian_culture(void){
   int Q_asked[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
   int Qno,correct=0,incorrect=0;
   char ans;
   for(int i=0;i<10;++i){
      srand(time(NULL));
      Qno=rand()%20;
      if(!search_Qno(Qno,Q_asked)){
         Q_asked[i]=Qno;
         system("cls");
         create_border();
         HideCursor(true);
         SET_COLOR(uWHITE);
         gotoxy(150,6);
         printf("Questions Attempted : %d/10",i+1);
         gotoxy(150,7);
         printf("Correct Answer : %d",correct);
         gotoxy(150,8);
         printf("Incorrect Answer : %d",incorrect);
         SET_COLOR(RESET);
         SET_COLOR(BLUE);
         gotoxy(32,10);
         printf("%s",Q_indian_culture[Qno]);
         opt_box(option_indian_culture[Qno][0],option_indian_culture[Qno][1],option_indian_culture[Qno][2],option_indian_culture[Qno][3]);
         gotoxy(40,28);
         SET_COLOR(WHITE);
         printf("Enter Your Answer : ");
         fflush(stdin);
         scanf("%c",&ans);
         ans=toupper(ans);
         if(ans==ans_indian_culture[Qno]){
            SET_COLOR(GREEN);
            ++correct;
         }
         else{
            SET_COLOR(RED);
            ++incorrect;
         }
         gotoxy(45,30);
         printf("Correct Answer : %c",ans_indian_culture[Qno]);
         gotoxy(48,33);
         printf("%s",about_indian_culture[Qno]);
         gotoxy(50,39);
         SET_COLOR(BLUE);
         printf("Press any key to continue.");
         getch();
      }
      else
         --i;
   }
   result(correct,incorrect);
   getch();
}


void result(int corct,int incorct){
   system("cls");
   create_border();
   SET_COLOR(CYAN);
   
   // box
   for(int i=0;i<=101;++i){
      gotoxy(60+i,13);
      printf("%c",176);
      gotoxy(60+i,38);
      printf("%c",176);
   }

   for(int i=1;i<25;++i){
      gotoxy(60,13+i);
      printf("%c%c",176,176);
      gotoxy(160,13+i);
      printf("%c%c",176,176);
   }
   SET_COLOR(uWHITE);
   gotoxy(105,16);
   printf("RESULT");
   SET_COLOR(RESET);
   SET_COLOR(BLUE);
   gotoxy(90,18);
   printf("%s's Perfomance : ",name);
   SET_COLOR(YELLOW);
   gotoxy(85,21);
   printf("Correct Answer   :     %d ",corct);
   gotoxy(85,23);
   printf("Incorrect Answer :     %d ",incorct);
   gotoxy(85,25);
   printf("Total Points     :     %d ",(corct*5)-incorct);

   gotoxy(83,28);
   printf("Enter 1 for Menu or 2 to Play Again or 0 to exit : ");
   int choice;
   scanf("%d",&choice);
   switch(choice){
      case 1:
         page_2();
         break;
      case 2:
         start_quiz();
         break;
      case 0:
         quit_quiz();
         break;
      default:
         gotoxy(80,30);
         printf("\aINVALID INPUT. Press any key to try again.");
         getch();
         result(corct,incorct);
   }

}

void rule(void){
   system("cls");
   create_border();
   HideCursor(false);
// box
   SET_COLOR(WHITE);
   for(int i=0;i<=111;++i){
      gotoxy(50+i,8);
      printf("%c",176);
      gotoxy(50+i,40);
      printf("%c",176);
   }

   for(int i=1;i<33;++i){
      gotoxy(50,8+i);
      printf("%c%c",176,176);
      gotoxy(160,8+i);
      printf("%c%c",176,176);
   }
   SET_COLOR(uWHITE);
   gotoxy(100,12);
   printf("RULES");
   SET_COLOR(RESET);
   SET_COLOR(YELLOW);
   gotoxy(65,16);
   printf("%c  This Quiz consist of four different tags.",254);
   gotoxy(65,19);
   printf("%c  Ten Questions Will be Asked from your selected tags.",254);
   gotoxy(65,22);
   printf("%c  5 points will be awarded for each correct answer and -1 for incorrect answer.",254);
   gotoxy(90,25);
   printf("BEST OF LUCK.");
   gotoxy(80,28);
   HideCursor(true);
   SET_COLOR(BLUE);
   printf("Enter 1 for menu, 2 to start Quiz or 0 to exit : ");
   int choice;
   scanf("%d",&choice);
   switch(choice){
      case 1:
         page_2();
         break;
      case 2:
         start_quiz();
         break;
      case 0:
         quit_quiz();
         break;
      default:
         gotoxy(80,30);
         printf("\aINVALID INPUT. Press any key to try again.");
         getch();
         rule();
   }
}
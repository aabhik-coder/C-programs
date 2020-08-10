#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct review
{
char name[25];
int star;
char remark[100];
};

void reviews();
void test2(int);
void reading();
void writing();
void about();
void loading();
void intro();
void menu();
void arrangement();
void epi1();
void epi2();
void epi3();
void epi4();
void test(int);
int main()
{
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLUE);
arrangement();
//loading();
arrangement();
intro();
getch();
closegraph();
return 0;
}


void menu()
{
int y=127;
int key=0;
setcolor(4);
while(key!=10)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(260,20,"CYPHER");
settextstyle(0,0,1);
outtextxy(20,110,">> EPISODES");
setcolor(15);
setcolor(2);
outtextxy(20,130,"1.Location Tracer");
outtextxy(20,150,"2.Jungle Hunt");
outtextxy(20,170,"3.Book Thief");
outtextxy(20,190,"4.Cypher");
setcolor(4);
outtextxy(20,210,">> REVIEWS");
outtextxy(20,230,">> ABOUT DEVELOPER");
setcolor(15);
outtextxy(130,300,"PRESS UP,DOWN ARROW TO NAVIGATE AND ENTER TO CHOOSE");
outtextxy(250,320,"Press esc to exit");
rectangle(15,y,180,y+15);
key=getch();
if(key==27)
exit(0);
if(key==13)
{
test(y);
break;
}
if(key==80&&y<=214)
{
y=y+20;
}
else if(key==72&&y>=142)
{
y=y-20;
}
else
y=y;
}
}


void loading()
{
int i;
textcolor(RED);
settextstyle(0,0,7);
outtextxy(150,200,"CYPHER");
rectangle(185,300,475,310);
for(i=0;i<322;i++)
{
setcolor(10);
rectangle(205,300,155+i,304);
setcolor(WHITE);
rectangle(205,304,155+i,306);
setcolor(GREEN);
rectangle(205,306,155+i,310);
delay(4);
}
}

void intro()
{
int c,i;
settextstyle(0,0,5);
setcolor(4);
outtextxy(200,20,"CYPHER");
settextstyle(0,0,1);
setcolor(2);
outtextxy(200,80,"WELCOME TO THE GAME OF DETECTIVE!!!");
setcolor(4);
outtextxy(20,110,"# ABOUT THE GAME:");
setcolor(2);
outtextxy(20,130,">>You are given a task and you have to find the answer to the task ");
outtextxy(20,150,">>You may use internet when needed");
outtextxy(20,170,">>Everything is fair!!");
setcolor(14);
outtextxy(150,300,"PRESS ANY KEY TO CONTINUE OR ESC KEY TO EXIT");
do
{
c=getch();
switch(c)
{
case 27:
exit(0);
default:
menu();
}

}while(i==1);
}


void arrangement()
{
cleardevice();
setcolor(15);
rectangle(5,5,635,474);
rectangle(10,10,630,469);
rectangle(12,13,627,466);
}

void epi1()
{
int i;
char temp[8],final[8];
int asc;
clrscr();
cleardevice();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t  ");
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(200,20,"Location Tracker");
setcolor(2);
settextstyle(0,0,1);
outtextxy(16,60,"I just got a text message from my Detective friend.");
outtextxy(16,80,"And this was what writtern in it.");
setcolor(14);
outtextxy(16,110,"Find me:11011.1010110000001011011,1010101.0110110110010101111,170m SW temple");
setcolor(2);
outtextxy(16,140,"Please help me find him.");
outtextxy(16,160,"I guess it a 8 letters long word.");
setcolor(14);
printf("    Where can he be now?: ");
scanf("%s",&temp);
for(i=0;i<=strlen(temp);i++)
{
asc=("%d",temp[i]);
if(i==strlen(temp))
{
asc=0;
}
if(asc>=97&&asc<=122)
asc=asc;
else if(asc>=65&&asc<=90)
asc=asc+32;
final[i]=("%c",asc);
}
if(strcmp(final,"nyatapol")==0)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(265,200,"BINGO!");
outtextxy(220,240,"I FOUND HIM!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(30,410,"( Episode Completed!! press enter key to return to main menu)");
getch();
menu();
}
else
{
cleardevice();
arrangement();
printf("\a\a\a");
setcolor(4);
settextstyle(0,0,2);
outtextxy(275,200,"ALAS!");
outtextxy(175,240,"YOU GUIDED ME WRONG!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(24,410,"(Press enter key to return to main menu)");
getch();
menu();

}
}

void epi2()
{
int i;
char temp[8],final[8];
int asc;
clrscr();
cleardevice();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t  ");
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(200,20,"Jungle Hunt");
setcolor(2);
settextstyle(0,0,1);
outtextxy(16,60,"We are wearching for the best Detective in town.");
outtextxy(16,80,"Crack the name of place by this message");
setcolor(14);
outtextxy(16,110,"S O M K R N P");
outtextxy(16,120,"Z U J A P A N");
outtextxy(16,130,"A R I M T O O");
outtextxy(16,140,"L C A C K I N");
outtextxy(16,150,"W J M C I T O");
outtextxy(16,160,"A R P O S D A");
outtextxy(16,170,"S K D E N T E");
setcolor(2);
outtextxy(16,190,"Hint:");
outtextxy(16,210,"There are 2 words hidden:(-\\)");
setcolor(15);
printf("    What is the name of place?: ");
scanf("%s",&temp);
for(i=0;i<=strlen(temp);i++)
{
asc=("%d",temp[i]);
if(i==strlen(temp))
{
asc=0;
}
if(asc>=97&&asc<=122)
asc=asc;
else if(asc>=65&&asc<=90)
asc=asc+32;
final[i]=("%c",asc);
}
if(strcmp(final,"aokigahara")==0)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(265,200,"BINGO!");
outtextxy(220,240,"YOU GOT IT!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(30,410,"( Episode Completed!! press enter key to return to main menu)");
getch();
menu();
}
else
{
cleardevice();
arrangement();
printf("\a\a\a");
setcolor(4);
settextstyle(0,0,2);
outtextxy(275,200,"SORRY!");
outtextxy(175,240,"YOU WERE WRONG!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(24,410,"(Press enter key to return to main menu)");
getch();
menu();

}
}


void epi3()
{
int i;
char temp[8],final[8];
int asc;
clrscr();
cleardevice();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t  ");
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(200,20,"BOOK THIEF");
setcolor(2);
settextstyle(0,0,1);
outtextxy(16,60,"My friend told me that he has stolen one of my books.");
outtextxy(16,80,"And he challenged me to find the 4 distinct letters on the book cover. ");
setcolor(14);
outtextxy(16,110,"And he gave me this number:9789339219666");
setcolor(2);
outtextxy(16,140,"I literally dont know what that is.");
outtextxy(16,160,"Help me Mr. Detective");
setcolor(15);
printf("    What are those four letters?: ");
scanf("%s",&temp);
for(i=0;i<=strlen(temp);i++)
{
asc=("%d",temp[i]);
if(i==strlen(temp))
{
asc=0;
}
if(asc>=97&&asc<=122)
asc=asc;
else if(asc>=65&&asc<=90)
asc=asc+32;
final[i]=("%c",asc);
}
if(strcmp(final,"ansi")==0)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(265,200,"BINGO!");
outtextxy(220,240,"YOU ARE DOPE!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(30,410,"( Episode Completed!! press enter key to return to main menu)");
getch();
menu();
}
else
{
cleardevice();
arrangement();
printf("\a\a\a");
setcolor(4);
settextstyle(0,0,2);
outtextxy(275,200,"SORRY!");
outtextxy(175,240,"THAT WAS NOT THE ANSWER!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(24,410,"(Press enter key to return to main menu)");
getch();
menu();

}

}
void epi4()
{
int i;
char temp[8],final[8];
int asc;
clrscr();
cleardevice();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t  ");
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(200,20,"CYPHER");
setcolor(2);
settextstyle(0,0,1);
outtextxy(16,60,"Mr. detective we want you to decode this.");
outtextxy(16,80,"And find the word . ");
setcolor(14);
outtextxy(16,110,"BCRCARGTC");
setcolor(2);
outtextxy(16,140,"Hint:");
outtextxy(16,160,"1.A-B");
outtextxy(16,180,"2.A-B");
setcolor(15);
printf("    What is the word?: ");
scanf("%s",&temp);
for(i=0;i<=strlen(temp);i++)
{
asc=("%d",temp[i]);
if(i==strlen(temp))
{
asc=0;
}
if(asc>=97&&asc<=122)
asc=asc;
else if(asc>=65&&asc<=90)
asc=asc+32;
final[i]=("%c",asc);
}
if(strcmp(final,"detective")==0)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(265,200,"BINGO!");
outtextxy(220,240,"YOU ARE DOPE!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(30,410,"( Episode Completed!! press enter key to return to main menu)");
getch();
menu();
}
else
{
cleardevice();
arrangement();
printf("\a\a\a");
setcolor(4);
settextstyle(0,0,2);
outtextxy(275,200,"SORRY!");
outtextxy(175,240,"THAT WAS NOT THE ANSWER!!");
setcolor(14);
settextstyle(0,0,1);
outtextxy(24,410,"(Press enter key to return to main menu)");
getch();
menu();

}

}

void test(int y)
{
if(y==127)
epi1();
else if(y==147)
epi2();
else if(y==167)
epi3();
else if(y==187)
epi4();
else if(y==207)
reviews();
else if(y==227)
about();
}
void reviews()
{
int y=127;
int key=0;
while(key!=10)
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(4);
outtextxy(200,20,"REWIEWS");
setcolor(2);
settextstyle(0,0,1);
outtextxy(20,130,">>Add Review");
outtextxy(20,150,">>See Reviews");
rectangle(15,y,180,y+15);
key=getch();
if(key==27)
menu();
if(key==13)
{
test2(y);
break;
}
if(key==80&&y<=142)
{
y=y+20;
}
else if(key==72&&y>=142)
{
y=y-20;
}
else
y=y;
}
getch();

}

void about()
{
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
bar(160,200,470,270);
rectangle(160,200,470,270);
rectangle(140,180,490,290);
rectangle(120,160,510,310);
setcolor(2);
outtextxy(195,210,"PROJECT CYPHER");
settextstyle(0,0,1);
outtextxy(175,240,"Developed by Santosh Kunwar(AABHIK)");
outtextxy(205,260,"Completion date:2020/08/10");
getch();
menu();
}
void test2(y)
{
if(y==127)
writing();
else if(y==147)
reading();
}
void reading()
{
char c;
int key;
FILE *fp;
clrscr();
printf("\n\n\t");
cleardevice();
settextstyle(0,0,2);
setcolor(15);
fp=fopen("review.txt","r");
if(fp==NULL)
{
printf("No data available");
}
while((c=fgetc(fp))!=EOF)
putchar(c);
fclose(fp);
while(1)
{
key=getch();
if(key==13)
menu();
}
}

void writing()
{
FILE *fp;
struct review rev;
clrscr();
printf("\n\n\n\t");
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(250,15,"Give Review");
fp=fopen("review.txt","a");
if(fp==NULL)
{
printf("file cannot be opened\n");
exit(0);
}
printf("Enter your name: ");
fflush(stdin);
gets(rev.name);
printf("\n\tEnter number of stars you want to giveout of five: ");
scanf("%d",&rev.star);
printf("\n\tRemarks: ");
fflush(stdin);
gets(rev.remark);
fprintf(fp,"\n\n*>\tName:%s\n\tStars:(%d/5)\n\tRem:%s",rev.name,rev.star,rev.remark);
fclose(fp);
cleardevice();
arrangement();
settextstyle(0,0,2);
setcolor(2);
outtextxy(230,210,"Review Added");
settextstyle(0,0,1);
setcolor(15);
outtextxy(15,450,"Press any key");
getch();
menu();
}
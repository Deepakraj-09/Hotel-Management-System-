#include<stdio.h> 
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void begin(); 
void show_details();
void book_room();
void food_menu();
struct 
{
 char name[20];
 char address[50];
 char email_id[30];
 char nationality[25];
 int ap,app,appp;
 int roomno,food;
 char *roomtype;
 int billprice,Total;
 char *program;
}person;
int main()
{
				
 person.roomno =0;
 person.food =0;
 person.billprice =0;
 person.program = "notchosen";
 printf("                        ***********************");
 printf("\n                      ||WELCOME TO SRU C2 HOTEL||\n");
 printf("                        ***********************\n");
 printf("              \n\n");
 printf("====* Enter Customer Details *====\n\n");
 printf("please enter person name:");
 gets(person.name);
 printf("enter person address:");
 gets(person.address);
 printf("enter person nationality:");
 gets(person.nationality);
 printf("enter person email_id:");
 gets(person.email_id);
 printf("\n\n\t\t** Thank's Giving Your Details **\n\n\n ");
 begin();
 return 0;
 }
void begin(void)
{
 int decide;
 {
    printf("=> MAIN MENU\n");
    printf("   =========\n");
    printf("1.FOOD MENU CARD\n");
    printf("2.BOOK A ROOM\n3.SHOW MY DETAILS\n4.ABOUT US\n5.CONTACT US\n6.EXIT\n\n");
    printf("Enter your choise = ");
    scanf("%d",&decide);
 switch(decide)
 {
 case 1:
 food_menu();
 case 2:
 book_room();
 break;
 case 3:
 show_details();
 break;
 case 4:
            printf("\t\t\t\t**NONE OF THIS\n\n");
            break;
        case 5:
            printf("\nYOU CAN CONTACT US ON \n\t\t\tE-Mail       sruc2hotel@gmail.com\n\n\t\t\tCONTACT NO    9553254605\n\n");
            printf("\t\t\tWHATSAPP NO   9347515101\n");
            break;
 case 6:
 printf("\n\n\n\t\tVisit again!");
 printf("\n\n\t***Thank you for trusting our service.***\n");
 break;
 default:
    printf("Invalid choice. Please try again.\n");
    break;
 begin();
 system("cls");
 break;
	}
 }
}
void food_menu(void)
{
 system("cls");
 if(person.food == 0)
 {
 	int ch,qty,i,net=0;
    joes:
    printf("                        =======================");
    printf("\n                      |WELCOME TO SRU C2 HOTEL|\n");
    printf("                        =======================\n");
    printf("\n\t=>MENU CARD");
    printf("       \n");
    printf("\n\tBREAK FAST"); 
    printf("\n\t\t1.IDLY              Rs:40");
    printf("\n\t\t2.DOSA              Rs:55");
    printf("\n\t\t3.VADA              Rs:40");
    printf("\n\t\t4.PURI              Rs:45");
    printf("\n\t\t5.CHAPPATHY         Rs:40");
    
    printf("\n\tTEA & COFFEE");
    printf("\n\t\t6.TEA               Rs:10");
    printf("\n\t\t7.COFFEE            Rs:20");
    
    printf("\n\tSOUPS");
    printf("\n\t\t8.Tomato soup       Rs:110");
    printf("\n\t\t9.Sweetcorn soup    Rs:115");
    printf("\n\t\t10.Chicken soup     Rs:160");
    
    printf("\n\tSTARTER'S");
    printf("\n\t\t11.Veg Manchurian   Rs:110");
    printf("\n\t\t12.Paneer Chilly    Rs:125");
    printf("\n\t\t13.Chicken Lollypop Rs:180");
    printf("\n\t\t14.Chicken Chrispy  Rs:185");
    
    printf("\n\tMAIN COURSE");
    printf("\n\t\t15.Veg Rice         Rs:120");
    printf("\n\t\t16.Egg Fried Rice   Rs:140");
    printf("\n\t\t17.Chicken Biryani  Rs:270");
    printf("\n\t\t18.Mutton Biryani   Rs:330");
	printf("\n\t\t19.Fish Fry         Rs:210");
	
    printf("\n\tSHAKE'S & COLD DRINK'S");
    printf("\n\t\t20.Sprite            Rs:25");
    printf("\n\t\t21.Thums up          Rs:25");
    printf("\n\t\t22.MILK SHAKE        Rs:70");
    
    printf("\n\n choice your item's   : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nYou have selected == IDLY");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*40);
        break;
     case 2:
        printf("\nYou have selected == DOSA");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*55);
        break;
     case 3:
        printf("\nYou have selected == VADA");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*40);
        break;
     case 4:
        printf("\nYou have selected == PURI");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*45);
        break;
     case 5:
        printf("\nYou have selected == CHAPPATHY");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*40);
        break;
     case 6:
        printf("\nYou have selected == TEA");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*10);
        break;
     case 7:
        printf("\nYou have selected == COFFEE");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*20);
        break;
     case 8:
        printf("\nYou have selected == TOMATO SOUP");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*110);
        break;
     case 9:
        printf("\nYou have selected == SWEETCORN SOUP");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*115);
        break;
     case 10:
        printf("\nYou have selected == CHICKEN SOUP");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*160);
        break;
     case 11:
        printf("\nYou have selected == VEG MANCGURIAN");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*110);
        break;
     case 12:
        printf("\nYou have selected == PANEER CHILLY");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*125);
        break;  
	 case 13:
        printf("\nYou have selected == CHICKEN LOLLYPOP");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*180);
        break;
     case 14:
        printf("\nYou have selected == CHICKEN CHRISPY");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*185);
        break;
     case 15:
        printf("\nYou have selected == VEG RICE");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*120);
        break;
     case 16:
        printf("\nYou have selected == EGG FRIED RICE");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*140);
        break; 
     case 17:
        printf("\nYou have selected == CHICKEN BIRYANI");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*270);
        break;
     case 18:
        printf("\nYou have selected == MUTTON BIRYANI");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*330);
        break;
     case 19:
        printf("\nYou have selected == FISH FRY");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*210);
        break;
     case 20:
        printf("\nYou have selected == SPRITE");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*25);
        break;
     case 21:
        printf("\nYou have selected == THUMS UP");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*25);
        break;
     case 22:
        printf("\nYou have selected == MILK SHAKE");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        net=net+(qty*70);
        break;
     default:
          printf("\nInvalid Item Selection");
          break;
    }
    printf("\nDo You want to continue press 1: ");
    scanf("%d",&i);
    if(i==1)
    {
        goto joes;
    }
    person.food = net;
     printf("\nTotal amount : %d",net);
     system("cls");
     printf("\tNOTE\n\t   * SUCESSFULLY YOUR FOOD DETAILS ARE SAVED\n\n");
  }
}
void book_room(void)
{
 if(person.roomno == 0)
  {
 int type_of_rooms;
 char ch,c;int days;
 printf("                        =======================");
 printf("\n                      |WELCOME TO SRU C2 HOTEL|\n");
 printf("                        =======================\n\n");
 printf("\nWhat type of room do you want to book?\n");
 printf("\n1.Basic Room(NON A/C)	   Rs 1000\n2.Medium room(A/C)	   Rs 2000\n3.DELUXE ROOM(A/C)	   Rs 3000\n4.EXIT\n");
 scanf("%d",&type_of_rooms);
 fflush(stdin);
 if(type_of_rooms==1)
 {
 printf("\nDo you accept this room?(Press 's' for accept/Press 'n' to exit)\n");
 fflush(stdin);
 scanf("%c",&c);
 if (c=='s')
 {
 printf("\n  =>You choose basic room(NON A/C).\n\n");
 printf("   How Many Day's They Want To Stay = ");
 scanf("%d",&days);
 printf("   your room no is 121\n\n");printf("\n\t\t**** Enjoy your stay ****\n\n");
 person.roomno = 121;
 person.roomtype = "basic";
 person.billprice +=days*1000;
 begin();
 }
 else
 begin();
 }
 if(type_of_rooms==2)
 {
 printf("\nDo you accept this room?(Press 's' for accept/Press 's' to exit)\n");
  scanf("%c",&c);
 if(c=='s')
 {
 printf("\n  =>You choose medium room(A/C).\n\n");
 printf("   How Many Day's They Want To Stay = ");
 scanf("%d",&days); 
 printf("   your room no is 212\n\n");printf("\n\t\t**** Enjoy your stay ****\n\n\n");
 person.billprice +=days*2000;
 person.roomno = 212;
 person.roomtype = "medium";
 begin();
 }
 else
 begin();
 }
 if(type_of_rooms==3)
 {
 printf("\nDo u accept this room?(Press 's' for accept/Press 'n' to exit)\n");
 scanf("%c",&c);
 if(c=='s')
 {
 printf("\n  =>You choose deluxe room(A/C).\n\n");
 printf("   How Many Day's They Want To Stay = ");
 scanf("%d",&days);
 printf("\n   your room no is 312\n\n");printf("\n\t\t**** Enjoy your stay ****\n\n");
 person.billprice +=days*3000;
 person.roomtype = "deluxe";
 person.roomno = 312;
 begin();
 }
 else
 begin();
 }
 if(type_of_rooms==4)
 begin();
 }
 else
 printf("you have already booked a room\n\n\n");
}
void show_details(void)
{
	int total;
 system("cls");
 time_t timer = time(NULL);
 printf("\t  NOTE\n\t    *YOU CAN GET BILL DETAILS IN (hotel.txt)FILE\n\n");
 FILE *raju;
 raju = fopen("hotel.txt","w+");
 if(raju == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
 fprintf(raju,"\t\t\t===============\n\t\t\t|SRU C2 HOTEL|\n\t\t\t===============\n.....BILL DETAILS.....\n...PERSON DETAILS...\n");
 fprintf(raju,"\tName : %s\n",person.name);
 fprintf(raju,"\tNationality : 	%s\n",person.nationality);
 fprintf(raju,"\tEmail id : 	%s\n",person.email_id);
 fprintf(raju,"\tAddress : 	%s\n",person.address);
 fprintf(raju,"\tArrival time : 	%s\n",ctime(&timer));  
 fprintf(raju,"\t\tTOTAL BILL\n\n");
 fprintf(raju,"\tFood Cost : 	%d/-\n",person.food);
 fprintf(raju,"\tRoom No : 	%d\n",person.roomno);
 fprintf(raju,"\tRoom Type : 	%s\n",person.roomtype); 
 fprintf(raju,"\tRoom Rent : 	%d/-\n",person.billprice);
 person.Total=person.billprice+person.food;
 total= person.food + person.billprice;  
 fprintf(raju,"-------------------------------------------\n");
 fprintf(raju,"\tTOTAL BILL =   %d/-\n",total);
 fprintf(raju,"-------------------------------------------\n");
 
 if(strcmp(person.program,"notchosen") != 0)
 {
 fprintf(raju,"Program : 	%s\n",person.program);
 }
 fprintf(raju,"\n\n**press Ctrl+p to print your details(Bill)");
 fflush(raju);
 fclose(raju);
 begin();
 }
}


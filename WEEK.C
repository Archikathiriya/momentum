#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();

  char week;
  printf("\npress 1 to sunday");
  printf("\npress 2 to monday");
  printf("\npress 3 to tuseday");
  printf("\npress 4 to wednesday");
  printf("\npress 5 to thursday");
  printf("\npress 6 to friday");
  printf("\npress 7 to saturday");
  printf("\nenter your choice");
  scanf("%d",&week);
  switch(week)
  {
  case 1:
	printf("sunday");
	break;
   case 2:
	printf("monday");
	break;
   case 3:
	printf("tuseday");
	break;
   case 4:
	printf("wednseday");
	break;
   case 5:
	printf("thursday");
	break;
   case 6:
	printf("friday");
	break;
   case 7:
	printf("saturday");
	break;
   default :
	   printf("plz enter tour valid choice!");
   }
getch();
}

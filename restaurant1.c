#include<stdio.h>
#include<string.h>
#include <stdlib.h>//for system()//
#include<windows.h>//sleep()//
#include <conio.h> 
 #define MAX_DISH_NAME_LENGTH 21 
 int menu1();
 int menu2();
 int menu3();
void welcome(char name[]);
void menu();
int main(){
     system("cls");
    printf("\n\nWelcome to the restaurant management and billing system\n");
    printf("\n \n \tA project by Aditi Thakare\n\n");
    printf("Press any key to continue...");
     getch();
    system("cls");
    menu();
    
}
void welcome(char name[]) {
    
   
		 char gen;
		
    fflush(stdin);
    printf("Enter F for female, M for male and O for others: \n");
	
    scanf(" %c", &gen);
	
	system("cls");
    if(gen == 'F' || gen == 'f')
    printf("\n\n\n\tMs.%s   Your total bill is --Rs ",name);
    else if(gen == 'M' || gen == 'm')
    printf("\n\n\n\tMr.%s   Your total bill is --Rs ",name);
    else
    printf("\n\n\n\t%s      Your total bill is --Rs ",name);

    }
    // Function to print the order for each dish with proper alignment
    void printOrder(const char *dish, int qty)
    {
    printf("%-*s QTY %d\n", MAX_DISH_NAME_LENGTH, dish, qty);
    }
	void menu() {
        
        system("cls");
		int ch;
		printf("enter wheater u want :-\n"
		"1.breakfast\n"
		"2.lunch\n"
		"3.dinner\n");
		scanf("%d",&ch);
         while (getchar() != '\n');
         system("cls");
        
    switch (ch) {
        case 1:
            menu1();
            break;
        case 2:
            menu2();

            break;
        case 3:
           printf("menu2()");
            break;
        default:
            printf("Invalid option!\n");
            break;
    }
}
	int menu1()
	{
        
		int n;
		int total1=0;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
		printf("Your choices for the breakfast are\n");
		printf("\t \t \t Veg \t \t \t\n");
		printf("1.Idli Samba   -- 10Rs/pc \n ");
		printf("2.Mendu Vada   -- 20Rs/pc \n ");
		printf("3.Upma         -- 20Rs/plate \n ");
		printf("4.Poha         -- 15Rs/plate \n ");
		printf("5.Paratha      -- 20Rs/pc \n ");
		printf("6.Missal Pav   -- 80Rs/plate with 2 pav \n ");
        fflush(stdin);
		printf("enter your no of dishes\n");
		scanf("%d",&n);
        int arr[10];
		for (int i = 0; i < n; i++) {
        printf("Enter the dish number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        switch (arr[i]) {
            case 1:
                total1 += 10;
                a++;
                break;
            case 2:
                total1 += 20;
                b++;
                break;
            case 3:
                total1 += 20;
                c++;
                break;
            case 4:
                total1 += 15;
                d++;
                break;
            case 5:
                total1 += 20;
                e++;
                break;
            case 6:
                total1 += 80;
                f++;
                break;
            default:
                printf("Invalid dish number entered %d\n", arr[i]);
                break;
        }
    
    }
	 system("cls");
     printf("You have ordered :-\n");
     // In your main function or wherever you are printing the order
    if (a > 0)
    printOrder("Idli Sambar", a);
    if (b > 0)
    printOrder("Mendu Vada", b);
    if (c > 0)
    printOrder("Upma", c);
    if (d > 0)
    printOrder("Poha", d);
    if (e > 0)
    printOrder("Paratha", e);
    if (f > 0)
    printOrder("Missal Pav", f);

printf("\n\n\nPress any key to continue...");
     getch();
    system("cls");

		char name[100];
    printf("\nEnter your name:\n ");
    scanf("%s",name);

        welcome(name);

        printf("%d/-\n\n",total1);
		
        printf("\n\n\tThank You for visiting,\n\tVisit again %s !!",name);
        printf("\n\n\n\nPress any key to exit...");
        getch();
        system("cls");
        printf("Exiting in...\n");
    for(int i = 5; i > 0; i--) {
        printf("%d...\n", i);
        // Pause for 1 second
        sleep(1);
    }
    system("cls");
    

    return 0;
    }
int menu2()
	{
        
		int n;
		int total2=0;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,p=0,o=0;
        printf("Vegetarian options for lunch:\n");
		printf("\t1. Vegetable Biryani        -- Rs. 300\n");
		printf("\t2. Butter Paneer            -- Rs. 250\n");
		printf("\t3. Chana Masala             -- Rs. 200\n");
		printf("\t4. Paneer Tikka             -- Rs. 280\n");
		printf("\t5. Veg Fried Rice           -- Rs. 180\n");
		printf("\t6. Dal Tadka                -- Rs. 150\n");
		printf("\t7. Mixed Vegetable Curry    -- Rs. 250\n\n");
        printf("\nNon-vegetarian options for lunch:\n");
        printf("\t8. Butter Chicken           -- Rs. 350\n");
        printf("\t9. Chicken Biryani          -- Rs. 320\n");
        printf("\t10. Fish Curry              -- Rs. 400\n");
        printf("\t11. Egg Curry               -- Rs. 220\n");
        printf("\t12. Tandoori Chicken        -- Rs. 380\n");
        printf("\t13. Chicken Tikka Masala    -- Rs. 320\n");
        printf("\t14. Prawn Pulao             -- Rs. 420\n");
        printf("\t15. Chicken Fried Rice      -- Rs. 300\n");
        fflush(stdin);
		printf("enter your no of dishes\n");
		scanf("%d",&n);
        int arr[n];
		for (int i = 0; i < n; i++) {
        printf("Enter the dish number %d: ", i + 1);
        scanf("%d", &arr[i]);

 }
    for (int i = 0; i < n; i++) 
    {
        switch (arr[i]) {


            case 1:
            total2 += 300;
            a++;
            break;


            case 2:
            total2 += 250;
            b++;
            break;
            
            
            case 3:
            total2 +=200;
            c++;
            break;

            
            case 4:
            total2 +=280;
            d++;
            break;


            case 5:
            total2 +=180;
            e++;
            break;


            case 6:
            total2 +=150;
            f++;
            break;


            case 7:
            total2 +=250;
            g++;
            break;


            case 8:
            total2 +=350;
            h++;
            break;


            case 9:
            total2 +=320;
            i++;
            break;


            case 10:
            total2 +=400;
            j++;
            break;


            case 11:
            total2 +=220;
            k++;
            break;


            case 12:
            total2 +=380;
            l++;
            break;


            case 13:
            total2 +=320;
            m++;
            break;


            case 14:
            total2 +=420;
            p++;
            break;


            case 15:
            total2 +=300;
            o++;
            break;

            default:
            printf("Invalid dish number entered %d\n", arr[i]);
            break;
        }

        }
        system("cls");
        printf("You have ordered :-\n");
           if (a > 0)
           printOrder("Vegetable Biryani", a);
           if (b > 0)
           printOrder("Butter Paneer", b);
           if (c > 0)
           printOrder("Chana Masala", c);
           if (d > 0)
           printOrder("Paneer Tikka", d);
           if (e > 0)
           printOrder("Veg Fried Rice", e);
           if (f > 0)
           printOrder("Dal Tadka", f);
           if (g > 0)
           printOrder("Mixed Vegetable Curry", g);
           if (h> 0)
           printOrder("Butter Chicken", h);
           if (i> 0)
           printOrder("Chicken Biryani", i);
           if (j> 0)
           printOrder("Fish Curry", j);
           if (k> 0)
           printOrder("Egg Curry", k);
           if (l> 0)
           printOrder("Tandoori Chicken", l);
           if (m> 0)
           printOrder("Chicken Tikka Masala", m);
           if (p> 0)
           printOrder("Prawn Pulao", p);
           if (o> 0)
           printOrder("Chicken Fried Rice", o);
           printf("\n\n\nPress any key to continue...");
           getch();
           system("cls");
           char name[100];
           printf("\nEnter your name:\n ");
          scanf("%s",name);
           welcome(name);
           printf("%d/-\n\n",total2);
           printf("\n\n\tThank You for visiting,\n\tVisit again %s !!",name);
           printf("\n\n\n\nPress any key to exit...");
           getch();
           system("cls");
           printf("Exiting in...\n");
           for(int i = 5; i > 0; i--) {
           printf("%d...\n", i);
           // Pause for 1 second
           sleep(1);
           }
        system("cls");
    

           
    }
    int menu3()
	{
        int n;
		int total2=0;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0,g=0,h=0,i=0,j=0;
        
    printf("Vegetarian options for dinner:\n");
    printf("\t1. Palak Paneer \t -- Rs. 250\n");
    printf("\t2. Aloo Baingan \t -- Rs. 220\n");
    printf("\t3. Vegetable Korma \t -- Rs. 280\n");
    printf("\t4. Chana Masala \t -- Rs. 200\n");
    printf("\t5. Mushroom Masala \t -- Rs. 240\n");

    printf("\nNon-vegetarian options for dinner:\n");
    printf("\t6. Chicken Curry \t -- Rs. 320\n");
    printf("\t7. Mutton Rogan Josh \t -- Rs. 380\n");
    printf("\t8. Fish Tikka \t -- Rs. 350\n");
    printf("\t9. Prawn Biryani \t -- Rs. 400\n");
    printf("\t10. Chicken Kebabs \t -- Rs. 420\n");
    fflush(stdin);
		printf("enter your no of dishes\n");
		scanf("%d",&n);
        int arr[n];
		for (int i = 0; i < n; i++) {
        printf("Enter the dish number %d: ", i + 1);
        scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) 
    {
        switch (arr[i]) {


            case 1:
            total2 += 250;
            a++;
            break;


            case 2:
            total2 += 220;
            b++;
            break;
            
            
            case 3:
            total2 +=280;
            c++;
            break;

            
            case 4:
            total2 +=200;
            d++;
            break;


            case 5:
            total2 +=240;
            e++;
            break;


            case 6:
            total2 +=320;
            f++;
            break;


            case 7:
            total2 +=380;
            g++;
            break;


            case 8:
            total2 +=350;
            h++;
            break;


            case 9:
            total2 +=400;
            i++;
            break;


            case 10:
            total2 +=420;
            j++;
            break;


            default:
            printf("Invalid dish number entered %d\n", arr[i]);
            break;
        }
    }
        system("cls");
        printf("You have ordered :-\n");
           if (a > 0)
           printOrder("Palak Paneer", a);
           if (b > 0)
           printOrder("Aloo Baingan", b);
           if (c > 0)
           printOrder("Vegetables Korma", c);
           if (d > 0)
           printOrder("Chana Masala", d);
           if (e > 0)
           printOrder("Mushroom Masala", e);
           if (f > 0)
           printOrder("Chicken Curry", f);
           if (g > 0)
           printOrder("Mutton Rogan Josh", g);
           if (h> 0)
           printOrder("Fish Tikka", h);
           if (i> 0)
           printOrder("Prawns Biryani ", i);
           if (j> 0)
           printOrder("Chicken Kebabs", j);
           printf("\n\n\nPress any key to continue...");
           getch();
           system("cls");
           char name[100];
           printf("\nEnter your name:\n ");
          scanf("%s",name);
           welcome(name);
           printf("%d/-\n\n",total2);
           printf("\n\n\tThank You for visiting,\n\tVisit again %s !!",name);
           printf("\n\n\n\nPress any key to exit...");
           getch();
           system("cls");
           printf("Exiting in...\n");
           for(int i = 5; i > 0; i--) {
           printf("%d...\n", i);
           // Pause for 1 second
           sleep(1);
           }
        system("cls");
    }
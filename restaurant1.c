#include<stdio.h>
#include<string.h>
#include <stdlib.h>//for system()//
#include<windows.h>//sleep()//
int menu1();
int menu2();
int menu3();
int choose();
char* welcome();
int bill(int t,char* n);
void menu(int op_choice); 

int main()
	{
		welcome();
		int op=choose();
		menu(op);
		return 0; 

	}
	char* welcome() {
		char name[100];
	system("cls");
    printf("\n\nWelcome to the restaurant management and billing system\n");
    printf("\n \n \tA project by Aditi Thakare\n\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
	printf("\nenter your name :- ");
	scanf("%s",name);
	fflush(stdin);
	 char c;
     printf("Enter F for female, M for male and O for others :-->\n ");
     scanf("%c", &c);
     if(c == 'F'|| c == 'f')
     {
          printf("Welcome Ms.%s\n",name);
     }
     else if (c == 'M'|| c == 'm')
     {
          printf("Welcome Mr.%s\n",name);
     }
     else
     {
          printf("Please give the right input..");
     }
	  printf("Wait for 5 seconds...\n");
    for (int i = 5; i > 0; i--) {
        printf("%d...\n", i);
        sleep(1); // Pause for 1 second

	}
	return name;
	}
	int choose()
	{
		system("cls");
		int ch;
		printf("enter wheater u want :-\n"
		"1.breakfast\n"
		"2.lunch\n"
		"3.dinner\n");
		scanf("%d",&ch);
		return ch;

	}
	void menu(int op_choice)
	{
		if(op_choice == 1)
		{
			menu1();
		}
		else if(op_choice == 2)
		{
			menu2();
		}
		else if(op_choice == 3)
		{
			menu3();
		}
	}
	int menu1()
	{
		int n;
		int total1;
		printf("Your choices for the breakfast are\n");
		printf("\t \t \t Veg \t \t \t\n");
		printf("1.Idli Sambar \t -- 10Rs/pc \n ");
		printf("2.Mendu Vada  \t -- 20Rs/pc \n ");
		printf("3.Upma \t -- 20Rs/plate \n ");
		printf("4.Poha \t -- 15Rs/plate \n ");
		printf("5.Paratha \t -- 20Rs/pc \n ");
		printf("6.Missal Pav\t -- 80Rs/plate with 2 pav \n ");
		printf("enter your no of dishes\n");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			
			printf("enter the dish no %d\n",i+1);
			scanf("%d",&arr[i]);

		}
		{
			int idli = 0, mendu = 0, upma = 0, poha = 0, paratha = 0, missal = 0;
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 1:
                idli++;
                break;
            case 2:
                mendu++;
                break;
            case 3:
                upma++;
                break;
            case 4:
                poha++;
                break;
            case 5:
                paratha++;
                break;
            case 6:
                missal++;
                break;
            default:
                printf("Invalid dish number entered %d\n", arr[i]);
                break;
        }
	}
	printf("You have ordered:\n");
    if (idli > 0) {
        printf("%d Idli Sambar\n", idli);
    
    if (mendu > 0) 
        printf("%d Mendu Vada\n", mendu);
	if (upma > 0) 
        printf("%d Upma\n", upma);
	if (poha> 0) 
        printf("%d Poha\n", poha);
	if (paratha> 0) 
        printf("%d Paratha\n", paratha);
	if (missal> 0) 
        printf("%d Missal\n", missal);
    }
	 total1=((idli*10)+(mendu*20)+(upma*20)+(poha*15)+(paratha*20)+(missal*80));
		}
		return total;
	}
	int menu2()
	{
		int n;
		int total2;
		// vegetarian options
		printf("Vegetarian options for lunch:\n");
		printf("\t1. Vegetable Biryani \t -- Rs. 300\n");
		printf("\t2. Butter Paneer \t -- Rs. 250\n");
		printf("\t3. Chana Masala \t -- Rs. 200\n");
		printf("\t4. Paneer Tikka \t -- Rs. 280\n");
		printf("\t5. Veg Fried Rice \t -- Rs. 180\n");
		printf("\t6. Dal Tadka \t -- Rs150\n");
		printf("\t7. Mixed Vegetable Curry \t -- Rs. 250\n");

        // Non-vegetarian options
        printf("\nNon-vegetarian options for lunch:\n");
        printf("\t11. Butter Chicken \t -- Rs. 350\n");
        printf("\t12. Chicken Biryani \t -- Rs. 320\n");
        printf("\t13. Fish Curry \t -- Rs. 400\n");
        printf("\t14. Egg Curry \t -- Rs. 220\n");
        printf("\t15. Tandoori Chicken \t -- Rs. 380\n");
        printf("\t16. Chicken Tikka Masala \t -- Rs. 320\n");
        printf("\t17. Prawn Pulao \t -- Rs. 420\n");
        printf("\t18. Chicken Fried Rice \t -- Rs. 300\n");

		printf("enter your no of dishes\n");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			
			printf("enter the dish no %d\n",i+1);
			scanf("%d",&arr[i]);

		}
		{
			int vegbiryani = 0, Butter_Paneer = 0, Chana_Masala = 0, Paneer_Tikka = 0, Veg_f_Rice = 0, Dal_Tadka=0,Mixed_Veg_Curry=0,butter_chicken = 0, chicken_biryani = 0, fish_curry = 0, egg_curry = 0, tandoori_chicken = 0, chicken_tikka_masala = 0, prawn_pulao = 0, chicken_fried_rice = 0;
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 1:
                vegbiryani++;
                break;
            case 2:
                Butter_Paneer++;
                break;
            case 3:
                Chana_Masala++;
                break;
            case 4:
                Paneer_Tikka++;
                break;
            case 5:
                Veg_f_Rice++;
                break;
            case 6:
               Dal_Tadka++;
                break;
			case 7:
               Mixed_Veg_Curry++;
                break;
            case 11:
                butter_chicken++;
                break;
            case 12:
                chicken_biryani++;
                break;
            case 13:
                fish_curry++;
                break;
            case 14:
                egg_curry++;
                break;
            case 15:
                tandoori_chicken++;
                break;
            case 16:
                chicken_tikka_masala++;
                break;
            case 17:
                prawn_pulao++;
                break;
            case 18:
                chicken_fried_rice++;
                break;
            default:
                printf("Invalid dish number entered %d\n", arr[i]);
                break;
        }
    }
	 printf("You have ordered:\n");
    if (vegbiryani > 0) {
        printf("%d Veg Biryani\n", vegbiryani);
    }
    if (Butter_Paneer > 0) {
        printf("%d Butter Paneer\n", Butter_Paneer);
    }
    if (Chana_Masala > 0) {
        printf("%d Chana Masala\n", Chana_Masala);
    }
    if (Paneer_Tikka > 0) {
        printf("%d Paneer Tikka\n", Paneer_Tikka);
    }
    if (Veg_f_Rice > 0) {
        printf("%d Veg Fried Rice\n", Veg_f_Rice);
    }
    if (Mixed_Veg_Curry > 0) {
        printf("%d Mixed Vegetable Curry\n", Mixed_Veg_Curry);
    }
	if (butter_chicken > 0) {
        printf("%d Butter Chicken\n", butter_chicken);
    }
    if (chicken_biryani > 0) {
        printf("%d Chicken Biryani\n", chicken_biryani);
    }
    if (fish_curry > 0) {
        printf("%d Fish Curry\n", fish_curry);
    }
    if (egg_curry > 0) {
        printf("%d Egg Curry\n", egg_curry);
    }
    if (tandoori_chicken > 0) {
        printf("%d Tandoori Chicken\n", tandoori_chicken);
    }
    if (chicken_tikka_masala > 0) {
        printf("%d Chicken Tikka Masala\n", chicken_tikka_masala);
    }
    if (prawn_pulao > 0) {
        printf("%d Prawn Pulao\n", prawn_pulao);
    }
    if (chicken_fried_rice > 0) {
        printf("%d Chicken Fried Rice\n", chicken_fried_rice);
    }

    total = (vegbiryani*10) + (Butter_Paneer*20) + (Chana_Masala*20) + (Paneer_Tikka*15) + (Veg_f_Rice*20) + (Mixed_Veg_Curry*80) + 
            (butter_chicken*350) + (chicken_biryani*320) + (fish_curry*400) + (egg_curry*220) + (tandoori_chicken*380) + 
            (chicken_tikka_masala*320) + (prawn_pulao*420) + (chicken_fried_rice*300);

    printf("Total bill: Rs. %d\n", total);
    return total;
}
	}
	int menu3()
	{
        int n;
		int total3;
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

    printf("enter your no of dishes\n");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
        {
			
			printf("enter the dish no %d\n",i+1);
			scanf("%d",&arr[i]);
        }
            int Palak_Paneer = 0, Aloo_Baingan = 0, Vegetable_Korma = 0, Chana_Masala = 0, Mushroom_Masala = 0, Chicken_Curry = 0, Mutton_Rogan_Josh = 0, Fish_Tikka = 0, Prawn_Biryani = 0, Chicken_Kebabs = 0;
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 1:
                Palak_Paneer++;
                break;
            case 2:
                Aloo_Baingan++;
                break;
            case 3:
                Vegetable_Korma++;
                break;
            case 4:
                Chana_Masala++;
                break;
            case 5:
                Mushroom_Masala++;
                break;
            case 6:
                Chicken_Curry++;
                break;
            case 7:
                Mutton_Rogan_Josh++;
                break;
            case 8:
                Fish_Tikka++;
                break;
            case 9:
                Prawn_Biryani++;
                break;
            case 10:
                Chicken_Kebabs++;
                break;
            default:
                printf("Invalid dish number entered %d\n", arr[i]);
                break;
        }
    }
    printf("You have ordered:\n");
    if (Palak_Paneer > 0) {
        printf("%d Palak Paneer\n", Palak_Paneer);
    }
    if (Aloo_Baingan > 0) {
        printf("%d Aloo Baingan\n", Aloo_Baingan);
    }
    if (Vegetable_Korma > 0) {
        printf("%d Vegetable Korma\n", Vegetable_Korma);
    }
    if (Chana_Masala > 0) {
        printf("%d Chana Masala\n", Chana_Masala);
    }
    if (Mushroom_Masala > 0) {
        printf("%d Mushroom Masala\n", Mushroom_Masala);
    }
    if (Chicken_Curry > 0) {
        printf("%d Chicken Curry\n", Chicken_Curry);
    }
    if (Mutton_Rogan_Josh > 0) {
        printf("%d Mutton Rogan Josh\n", Mutton_Rogan_Josh);
    }
    if (Fish_Tikka > 0) {
        printf("%d Fish Tikka\n", Fish_Tikka);
    }
    if (Prawn_Biryani > 0) {
        printf("%d Prawn Biryani\n", Prawn_Biryani);
    }
    if (Chicken_Kebabs > 0) {
        printf("%d Chicken Kebabs\n", Chicken_Kebabs);
    }
    total3 = (Palak_Paneer * 250) + (Aloo_Baingan * 220) + (Vegetable_Korma * 280) + (Chana_Masala * 200) + (Mushroom_Masala * 240) +
            (Chicken_Curry * 320) + (Mutton_Rogan_Josh * 380) + (Fish_Tikka * 350) + (Prawn_Biryani * 400) + (Chicken_Kebabs * 420);
    return total;
    }


		
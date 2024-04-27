#include<stdio.h>
#include<string.h>
void menu1();
int choose();
void menu(int op_choice); 
int main()
	{
		int op=choose();
		menu(op);
		return 0;

	}
	int choose()
	{
		int ch;
		printf("enter wheater u want :..-"
		"1. breakfast\n"
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
			printf("2");
		}
		else if(op_choice == 3)
		{
			printf("3");
		}
	}
	void menu1()
	{
		int n;
		printf("Your choices for the breakfast are\n");
		printf("\t \t \t Veg \t \t \t");
		printf("1.Idli Sambar \t -- 10Rs/pc \n ");
		printf("2.Mendu Vada \t -- 20Rs/pc \n ");
		printf("3.Upma \t -- 20Rs/plate \n ");
		printf("4.Poha \t -- 15Rs/plate \n ");
		printf("5.Paratha \t -- 20Rs/pc \n ");
		printf("6.Missal Pav\t -- 80Rs/plate with 2 pav \n ");
		printf("enter your no of dishes\n");
		scanf("%d",&n);
		int arr[n];
		for(int i=0; i<n;i++)
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
                printf("Invalid dish number entered: %d\n", arr[i]);
                break;
        }
	}
		}
	}

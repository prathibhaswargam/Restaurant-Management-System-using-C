//Restaurant billing software
//Prathibha Swargam
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int total_bill,b=0;
int price=0;
int j,k=1,length[10];
char cname[20];
char ph_no[10];
char name[30][30];
int quantity[10];
int bill[10];
void menu()
{
	printf("                                                                          ''''FINE DINE EATERY''''                                       ");
	printf("\n\n\n                                                                              ___WELCOME___                          ");
}
void main()
{
	if(b==0)
	{
		menu();
		printf("\nEnter customers name:");
		scanf("%s",cname);
		printf("\nEnter customers contact number:");
		scanf("%s",ph_no);
		b++;
	}
	int n,a;
	int p,q,r,s,t;
	int i;
	printf("\n\n-->Choose an option\n");
	printf("\nPress 1 for tiffins");
	printf("\nPress 2 for starters");
	printf("\nPress 3 for main course");
	printf("\nPress 4 for desserts");
	printf("\nPress 5 for soft drinks");
	printf("\nPress 6 for exit");
	printf("\n\n---->Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\n*Tiffins*                      Price(per plate)");
			printf("\n1.Puri-------------------------Rs.50");
			printf("\n2.Vada-------------------------Rs.50");
			printf("\n3.Dosa-------------------------Rs.50");
			printf("\n4.Idly-------------------------Rs.45");
			printf("\n5.Upma-------------------------Rs.45");
			printf("\n------>Enter your choice:");
			scanf("%d",&p);
			printf("\n------>Enter no.of plates:");
			scanf("%d",&i);
			printf("============================================");
			printf("\n~>Press 1 to continue or any other character to generate bill:");
			scanf("%d",&a);
			printf("============================================");
			switch(p)
			{
				case 1:price+=i*50;
				    bill[k]=50*i;
					quantity[k]=i;
					strcpy(name[k],"Puri");
					break;
				break;
				case 2:price+=i*50;
				    strcpy(name[k],"Vada");
					quantity[k]=i;
					bill[k]=50;
				break;
				case 3:price+=i*50;
				    strcpy(name[k],"Dosa");
					quantity[k]=i;
					bill[k]=50;
				break;
				case 4:price+=i*45;
				    strcpy(name[k],"Idly");
					quantity[k]=i;
					bill[k]=45;
				
				break;
				case 5:price+=i*45;
				    strcpy(name[k],"upma");
					quantity[k]=i;
					bill[k]=30;
				break;
				default:
					printf("\nInvalid choice");
			}
			break;
		case 2:
			printf("\n*Starters*                     Price(per plate)");
			printf("\n1.Chicken manchuria------------Rs.250");
			printf("\n2.Chicken 65-------------------Rs.250");
			printf("\n3.Chilli chicken---------------Rs.250");
			printf("\n4.Veg manchuria----------------Rs.160");
			printf("\n5.Paneer 65--------------------Rs.200");
			printf("\n------>Enter your choice:");
			scanf("%d",&q);
			printf("\n------>Enter no.of plates:");
			scanf("%d",&i);
			printf("============================================");
			printf("\n~>Press 1 to continue or any other character to generate bill:");
			scanf("%d",&a);
			printf("============================================");
			switch(q)
			{
				case 1:price+=i*250;
				strcpy(name[k],"Chicken_manchuria");
					   quantity[k]=i;
					   bill[k]=250;
				break;
				case 2:price+=i*250;
				strcpy(name[k],"Chicken_65");
					quantity[k]=i;
					bill[k]=250;
				break;
				case 3:price+=i*250;
				strcpy(name[k],"Chilli_chicken");
					quantity[k]=i;
					bill[k]=250;
				break;
				case 4:price+=i*160;
				strcpy(name[k],"veg_manchuria");
					  quantity[k]=i;
					  bill[k]=160;
				break;
				case 5:price+=i*200;
				strcpy(name[k],"paneer_65");
					quantity[k]=i;
					bill[k]=200;
				break;
				default:
					printf("\nInvalid choice");
			}
			break;
		case 3:
			printf("\n*Main course*                   Price");
			printf("\n1.Chicken biryani---------------Rs.250");
			printf("\n2.Mutton biryani----------------Rs.290");
			printf("\n3.Veg biryani-------------------Rs.160");
			printf("\n4.Egg biryani-------------------Rs.170");
			printf("\n5.Veg thali---------------------Rs.160");
			printf("\n6.Non-veg thali-----------------Rs.230");
			printf("\n7.Curd rice---------------------Rs.100");
			printf("\n------>Enter your choice:");
			scanf("%d",&r);
			printf("\n------>Enter no.of plates:");
			scanf("%d",&i);
			printf("============================================");
			printf("\n~>Press 1 to continue or any other character to generate bill:");
			scanf("%d",&a);
			printf("============================================");
			switch(r)
			{
				case 1:price+=i*250;
					strcpy(name[k],"Chicken biryani");
					quantity[k]=i;
					bill[k]=250;
						break;
				break;
				case 2:price+=i*290;
					strcpy(name[k],"Mutton_biryani");
					quantity[k]=i;
					bill[k]=290;
				break;
				case 3:price+=i*160;
					strcpy(name[k],"Veg_biryani");
					quantity[k]=i;
					bill[k]=160;
				break;
				case 4:price+=i*170;
					strcpy(name[k],"Egg_biryani");
					quantity[k]=i;
					bill[k]=170;
				break;
				case 5:price+=i*160;
					strcpy(name[k],"Veg_thali");
					quantity[k]=i;
					bill[k]=160;
				break;
				case 6:price+=i*230;
					strcpy(name[k],"Non_veg_thali");
					quantity[k]=i;
					bill[k]=230;
				break;
				case 7:price+=i*100;
					strcpy(name[k],"Curd_rice");
					quantity[k]=i;
					bill[k]=100;
				break;
				default:
					printf("\nInvalid choice");
			}
			break;
		case 4:
			printf("\n*Desserts*                         Price");
			printf("\n1.Kulfi----------------------------Rs.60");
			printf("\n2.Rasgulla-------------------------Rs.65");
			printf("\n3.Gulab jamun----------------------Rs.60");
			printf("\n4.Kheer----------------------------Rs.60");
			printf("\n5.Butterscotch ice-cream-----------Rs.70");
			printf("\n6.Chocolate ice-cream--------------Rs.75");
			printf("\n7.Vanilla ice-cream----------------Rs.60");
			printf("\n------>Enter your choice:");
			scanf("%d",&s);
			printf("\n------>Enter no.of plates:");
			scanf("%d",&i);
			printf("============================================");
			printf("\n~>Press 1 to continue or any other character to generate bill:");
			scanf("%d",&a);
			printf("============================================");
			switch(s)
			{
				case 1:price+=i*60;
					strcpy(name[k],"Kulfi");
					quantity[k]=i;
					bill[k]=60;
				break;
				case 2:price+=i*65;
					strcpy(name[k],"Rasgulla");
					quantity[k]=i;
					bill[k]=65;
				break;
				case 3:price+=i*60;
					strcpy(name[k],"Gulab_jamun");
					quantity[k]=i;
					bill[k]=60;
				break;
				case 4:price+=i*60;
					strcpy(name[k],"Kheer");
					quantity[k]=i;
					bill[k]=60;
				break;
				case 5:price+=i*70;
					strcpy(name[k],"Butterscotch");
					quantity[k]=i;
					bill[k]=70;
				break;
				case 6:price+=i*75;
					strcpy(name[k],"Chocolate");
					quantity[k]=i;
					bill[k]=75;
				break;
				case 7:price+=i*60;
					strcpy(name[k],"Vanila");
					quantity[k]=i;
					bill[k]=60;
				break;
				default:
					printf("\nInvalid choice");
			}
			break;
		case 5:
			printf("\n*Beverages*                    Price(per a tin)");
			printf("\n1.Mineral water----------------Rs.30");
			printf("\n2.Thums up---------------------Rs.40");
			printf("\n3.Sprite-----------------------Rs.40");
			printf("\n4.Maaza------------------------Rs.30");
			printf("\n5.Coca-cola--------------------Rs.40");
			printf("\n6.Mirinda----------------------Rs.40");
			printf("\n------>Enter your choice:");
			scanf("%d",&t);
			printf("\n------>Enter no.of drinks:");
			scanf("%d",&i);
			printf("============================================");
			printf("\n~>Press 1 to continue or any other character to generate bill:");
			scanf("%d",&a);
			printf("============================================");
			switch(t)
			{
				case 1:price+=i*30;
					strcpy(name[k],"Mineral_water");
					quantity[k]=i;
					bill[k]=30;
				break;
				case 2:price+=i*40;
					strcpy(name[k],"Thumsup");
					quantity[k]=i;
					bill[k]=40;
				break;
				case 3:price+=i*40;
					strcpy(name[k],"Sprite");
					quantity[k]=i;
				    bill[k]=40;
				break;
				case 4:price+=i*30;
					strcpy(name[k],"Maaza");
					quantity[k]=i;
					bill[k]=30;
				break;
				case 5:price+=i*40;
					strcpy(name[k],"Coca_cola");
					quantity[k]=i;
					bill[k]=40;
				break;
				case 6:price+=i*40;
					strcpy(name[k],"Mirinda");
					quantity[k]=i;
					bill[k]=40;
				break;
				default:
					printf("\nInvalid choice");
			}
			
			break;
		case 6:
			printf("\nExit");
			exit(0);
			printf("\n____________________________________________");
			
		default:
		{
			printf("\nIncorrect choice!\nPlease choose a correct option");
		}
		printf("\n~>Press 1 to continue or any other character to exit:");
		scanf("%d",&a);
	}
        if(a==1)
		{
			k++;
			main();
		}
		else 
		{
			printf("\n\n                                 BILL");
		for(j=1;j<=k;j++)
				{
					length[j] = strlen(name[j]);
				}
				printf("\n\nName : %s",cname);	
				printf("\n\nContact number : %s",ph_no);
				printf("\n================================================================");
				printf("\nDescription                    Quantity                 Price   ");
				printf("\n================================================================");
				for(j=1;j<=k;j++)
				{
				printf("\n\n%s       %*d                  %d.00",name[j],30-length[j],quantity[j],bill[j]);
				}
				printf("\n================================================================");
				printf("\nYour Total Payable Amount is :                         %d.00",price);
				printf("\n================================================================");
			}
		}

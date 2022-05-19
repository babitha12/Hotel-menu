#include<stdio.h>
#include<string.h>

// for address
void address(char add[100])
{
    printf("enter address: \n");
    getchar();
    gets(add);
    printf("address: %s\n",add);
}

int main()
{
	char name[100],add[100];
	
	int choice,serve,vchoice,vserve,quantity,d,s,f,c;
	
	printf("----------WELCOME TO----------\n");
	printf("-----EUPHORIA's CAUSE DINE-----\n");
	// customers name
	printf("Enter Your Name: \n");
	gets(name);
	// customers choice of food
	printf("What Would You Like To Order?\n");
	printf(" 1.VEG\n 2.NON-VEG\n 3.SNACKS AND BEVERAGES\n");
	scanf("%d",&c);
	printf("----------MENU----------\n");
	// veg or non-veg or snacks & beverages
	if(c==1)
	{
		// food items available in veg
    	printf(" 1.DOSA & IDLY\n 2.RICE\n 3.BREADS\n 4.CURRY\n 5.SOUP\n");
    	printf("Select Your Choice: ");
    	scanf("%d",&vchoice);
    	// food choices in veg
    	if(vchoice==1)
    	{
    		printf(" 1.IDLY\n 2.RAVA IDLY\n 3.SET DOSA\n 4.PLAIN DOSA\n 5.MASALA DOSA\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
					address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==2)
    	{
    		printf(" 1.PULAV\n 2.FRIED RICE\n 3.GHEE RICE\n 4.JEERA RICE\n 5.PANEER RICE\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==3)
    	{
    		printf(" 1.ROTI\n 2.PAROTA\n 3.PARATHA\n 4.NAAN\n 5.BUTTER NAAN\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==4)
    	{
    		printf(" 1.VEGETABLE CURRY\n 2.PANEER CURRY\n 3.MUSHROOM CURRY\n 4.DAL\n 5.CHANNA MASALA\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=50*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else
    	{
    		printf(" 1.TOMATO SOUP\n 2.MIXED VEG SOUP\n 3.CORN SOUP\n 4.SPINACH SOUP\n 5.PARADISE SPECIAL\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
				    printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    }
    // non-veg
    else if(c==2)
	{
		// food items available in non-veg
    	printf(" 1.\n 2.\n 3.\n 4.\n 5.\n");
    	printf("Select Your Choice: ");
    	scanf("%d",&vchoice);
    	// food choices in veg
    	if(vchoice==1)
    	{
    		printf(" 1.IDLY\n 2.RAVA IDLY\n 3.SET DOSA\n 4.PLAIN DOSA\n 5.MASALA DOSA\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==2)
    	{
    		printf(" 1.PULAV\n 2.FRIED RICE\n 3.GHEE RICE\n 4.JEERA RICE\n 5.PANEER RICE\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==3)
    	{
    		printf(" 1.ROTI\n 2.PAROTA\n 3.PARATHA\n 4.NAAN\n 5.BUTTER NAAN\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==4)
    	{
    		printf(" 1.VEGETABLE CURRY\n 2.PANEER CURRY\n 3.MUSHROOM CURRY\n 4.DAL\n 5.CHANNA MASALA\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=50*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else
    	{
    		printf(" 1.TOMATO SOUP\n 2.MIXED VEG SOUP\n 3.CORN SOUP\n 4.SPINACH SOUP\n 5.PARADISE SPECIAL\n");
    		printf("Choose Your Food: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF PLATE: Rs.25/- \n 2.FULL PLATE: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    }
    
    // snacks and beverages
    else
	{
    	// food item available in snacks and beverages
    	printf(" 1.JUICE\n 2.ICE CREAM\n 3.SALADS\n 4.HOT BEVERAGES\n 5.MILKSHAKE\n");
    	printf("Select Your Choice: ");
    	scanf("%d",&vchoice);
    	// food choices in snacks and beverages
    	if(vchoice==1)
    	{
    		printf(" 1.MANGO\n 2.PAPAYA\n 3.PINEAPPLE\n 4.AVOCADO\n 5.DRAGON FRUIT\n");
    		printf("Choose Your Juice: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF: Rs.15/- \n 2.FULL: Rs.20/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=15*quantity;
    			break;
    			case 2: d=20*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==2)
    	{
    		printf(" 1.VANILLA\n 2.STRAWBERRY\n 3.CHOCOLATE\n 4.PISTA\n 5.BLACK CURRENT\n");
    		printf("Choose Your Ice Cream: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.2 Scoops: Rs.25/- \n 2.4 Scoops: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==3)
    	{
    		printf(" 1.GREENS SALAD\n 2.RED SALAD\n 3.CHICKEN SALAD\n 4.FRUITS SALAD\n 5.PARADISE SPECIAL\n");
    		printf("Choose Your Salad: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF: Rs.35/- \n 2.FULL: Rs.50/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=35*quantity;
    			break;
    			case 2: d=50*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else if(vchoice==4)
    	{
    		printf(" 1.MILK\n 2.COFFEE\n 3.TEA\n 4.BOOST\n 5.GREEN TEA\n");
    		printf("Choose Your Hot Beverages: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF: Rs.15/- \n 2.FULL: Rs.20/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=15*quantity;
    			break;
    			case 2: d=20*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    	else
    	{
    		printf(" 1.OREO\n 2.CHOCOLATE\n 3.BANANA\n 4.VANILLA\n 5.PARADISE SPECIAL\n");
    		printf("Choose Your Milkshake: ");
    		scanf("%d",&f);
    		if(f>=1 && f<=5)
    		// servings
    		printf("Select Servings: \n");
    		printf(" 1.HALF: Rs.25/- \n 2.FULL: Rs.40/-\n");
    		scanf("%d",&vserve);
    		if(vserve>=1 && vserve<=2)
    		// how many plates?
    		printf("Enter Quantity: ");
    		scanf("%d",&quantity);
    		switch(vserve)
    		{
    			case 1: d=25*quantity;
    			break;
    			case 2: d=40*quantity;
    			break;
			}
			
			switch(vserve)
			{
				case 1: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==1)
				{
				    address(add);
					printf("Your order will be delivered within 40mins!!");
				}
				else
				{
					printf("Enjoy your meals!!");
				}
				break;
				case 2: printf("-------YOUR ORDER-------\n");
				printf("option %d for %d members will be: %d\n",vserve,quantity,d);
				printf("Mode Of Consuption: \n");
				printf("1.DELIVERY\n 2.DINE_IN\n");
				scanf("%d",&s);
				if(s==2)
				{
					printf("Enjoy your meals!!");
				}
				else
				{
				    
					printf("Your order will be delivered within 40mins!!");
				}
				break;
			}
		}
    }
	
}

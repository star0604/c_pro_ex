# include <stdio.h>

int main()
{
	int wheat = 5;//Unit Price
    int onion = 10;
    int tomato = 7;
    int carrot = 8;
    int total = 0;//Total Price
    char a;//swtich choose M or S+
    

    while (total<1000)//money little,people work
    {
    	printf("Select menu (Modify price [M], Sell [S]): \n");
    	scanf(" %c", &a);//  !!! %c 前面加空格，可跳过可能的空白字符
		
		if( a == 'M' )//change the prize
		{
			int  new_prize;
			char b;
			
			printf("Enter income type (Wheat [W], Onion [O], Tomato [T], or Carrot [C]):\n");//Types of Change
			scanf(" %c", &b);
			
			printf("输入要改变的金额；"); 
			scanf("%d", &new_prize);
			
			switch (b) {
				case'W':
					wheat = new_prize;
					printf("The price of wheat has been changed to %d gold coins.\n", new_prize);
					break;
				case'O':
					onion = new_prize;
					printf("The price of onion has been changed to %d gold coins.\n", new_prize);
					break;
				case'T':
					tomato = new_prize;
					printf("The price of tomato has been changed to %d gold coins.\n", new_prize);
					break;
				case'C':
					carrot = new_prize;
					printf("The price of carrot has been changed to %d gold coins.\n", new_prize);
					break;
			}
		 } 
		else if( a == 'S') //money money come on
		{
			int weigh;
			char c ;
			
			printf("Enter income type (Wheat [W], Onion [O], Tomato [T], or Carrot [C]):\n");//Types of Change
			scanf(" %c", &c);
			
			printf("Please enter the number of kilograms for sale:\n");
			scanf("%d", &weigh );
			
			switch (c) {
				case'W':
					total = weigh * wheat;
					break;
				case'O':
					total = onion * weigh;
					break;
				case'T':
					total = tomato * weigh;
					break;
				case'C':
					total = carrot * weigh;
					break;
		}
	}
}

    printf("您已获得%d金币，可以休息一下了\n", total);
	return 0;
}


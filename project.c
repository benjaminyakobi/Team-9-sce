struct deal {
	unsigned long int deal_number;
	unsigned int number_of_products;
	char *type_of_products;
	char *type_of_deal;
	int total_price;
	char *status;
	char *type_of_payment;
}; 
void choose_type_of_deal(struct deal d)
{
	char tmp[8];
	printf("please enter the type of the deal-'REGULAL' or 'BUSINESS'");
	scanf("%c", &tmp);
	d.type_of_deal = (char*)malloc(strlen(tmp) + 1 * sizeof(char));
	strcpy(d.type_of_deal, tmp);
}
int number_of_product()
{
	int num;
	printf("please enter the numbers of products");
	scanf("%d",&num);
	return num;

}
void choose_a_deal_status(struct deal d)
{
	char tmp[7];
	printf("please choose one of the option-'WON'\'LOST'\'PENDING'");
	scanf("%c", &tmp);
	d.status = (char*)malloc(strlen(tmp) + 1 * sizeof(char));
	strcpy(d.status,tmp);
}
float calculate_price(struct deal d)
{  
	float final;
	int num = d.number_of_products;
	if (strcmp(d.type_of_products, "regular streamer") == 0)
		final = num * 100;
	if (strcmp(d.type_of_products, "HD STREAMER") == 0)
		final = num * 120;
	if (strcmp(d.type_of_products, "4K STREAMER") == 0)
		final = num * 150;
	if (strcmp(d.type_of_products, "REMOTE CONTOROLLER") == 0)
		final = num * 20;
	if (strcmp(d.type_of_products, "VOD") == 0)
		final = num * 50;
	if (strcmp(d.type_of_products, "SPORT PACKAGE") == 0)
		final = num * 50;
	if (strcmp(d.type_of_products, "SPORT5 GOLD") == 0)
		final = num * 35;
	if (strcmp(d.type_of_products, "SPORT5 PLUS") == 0)
		final = num * 35;
	if (strcmp(d.type_of_products, "MOVIES PACKAGE") == 0)
		final = num * 50;
	return final;	
}

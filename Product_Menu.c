#include <stdio.h>
#include <stdlib.h>
void Product_menu() {
	int employee_choice, countmovies = 0, countregualr = 0, counthd = 0, count4k = 0, countremote = 0, countsport = 0;
	printf("%30.s");
	printf("***************************************************\n");
	printf("%30.s");
	printf("****************** Product MENU ******************\n");
	printf("%30.s");
	printf("***************************************************\n");
	printf("%30.s");
	printf("**    1. Regular Streamer                        **\n");
	printf("%30.s");
	printf("**    2. HD Streamer					         **\n");
	printf("%30.s");
	printf("**    3. 4K Streamer                              **\n");
	printf("%30.s");
	printf("**    4. Remote Controller                            **\n");
	printf("%30.s");
	printf("**    5. Complete Sport Package                            **\n");
	printf("%30.s");
	printf("**    6. Sport 5 Live Channel                            **\n");
	printf("%30.s");
	printf("**    7. Sport 5 Gold Channel                            **\n");
	printf("%30.s");
	printf("**    8. Movies Package                            **\n");
	printf("%30.s");
	printf("**    0. Exit                                    **\n");
	printf("%30.s");
	printf("***************************************************\n\n");

	printf("Enter Your Choice: ");
	scanf("%d", &employee_choice);

	while (employee_choice < 0 || employee_choice > 8 && (employee_choice <= '/' || employee_choice >= ':')) {
		printf("Wrong choice - Enter Your Choice: ");
		fseek(stdin, 0, SEEK_END);
		scanf("%d", &employee_choice);
	}
	switch (employee_choice) {
	case 0:
		printf("Good Bye");
		exit(0);
		break;
	case 1:
		///		printf("\nHow many streamers you want\n");
		///		scanf("%d",&employee_choice);
		///		countregular=employee_choice;
		///		break;
	case 2:
		///		printf("\nHow many HD streamers you want\n");
		///		scanf("%d",&employee_choice);
		///		counthd=employee_choice;
		///		break;
	case 3:
		///		printf("\nHow many 4K streamers you want\n");
		///		scanf("%d",&employee_choice);
		///		count4k=employee_choice;
		///		break;
	case 4:
		///		printf("\nHow many Remote Controlles you want\n");
		///		scanf("%d",&employee_choice);
		///		countremote=employee_choice;
		///		break;
	case 5:
		///		printf("\nComplete sports package\n");
		///	    countsport=2; 
		///     break;
	case 6:
		///		printf("\nSports 5 Live Channel\n");
		///	    countsport=1; 
		///     break;
	case 7:
		///		printf("\nSports 5 Gold Channel\n");
		///	    countsport=1; 
		///     break;
	case 8:
		///		printf("\nMovies Package\n");
		///	    countmovies=1; 
		///     break;
	default:
		break;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include "siseko.h"

int main() {
	printf("Hello %s\n", "Vuyiseka");
	printf("You weigh %.1f kg\n", 35.98765);
	printf("You are %d years old\n", 24);
	char storer[12] = "Siseko Neti";
	printf("My name is %s\n", storer); 
	
	//char food[] = "Bread";
	//stropy(food, "Dannish");
	
	int girlsAge = (AGE/2)+7;
	printf("%s Dont date anygirl younger than: %d\n", MYNAME, girlsAge);

	char fName[20];
	char crush[20];
	int noOfBabies;

	printf("What is your name? ");
	scanf("%s", fName);

	printf("Who is ur crush? ");
	scanf("%s", crush);

	printf("How many babies will you have? ");
	scanf("%d", &noOfBabies);

	printf("%s and %s will have %d babes\n", fName, crush, noOfBabies);

	return 0;
}

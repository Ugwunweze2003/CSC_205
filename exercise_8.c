#incluse <stdio.h>

int main(){
	char chr;
	printf("Enter a Character: ");
	scanf("%c", &chr);
	
	//When %c is used, a character is displayed
	printf("Youn entered %c.\n", chr);
	
	//When %d is used, ASCII value is displayed
	printf("ASCII value is %d.", chr);
	return 0;
}


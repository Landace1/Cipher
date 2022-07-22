#include <stdio.h>
// void formula sourced from 
// stackhowto.com/caesar-cipher-program-in-c/
// this is an example of a simple ceaser
// where the string text is ciphered into encrypted text
void cesar(char str[], int shift)
{
	//the function of cesar is void
	int i = 0;
	

	while (str[i] != '\0') 
	{
		if (str[i] >= 'A' && str[i] <= 'Z') {
			char c = str[i] - 'A';
			c += shift;
			c = c % 26;
			str[i] = c + 'A';
		}
		i++;
	}
	//This tells system to display string after cesar is ran
	printf("%s", str);

}

int main()
{
	// added by me to the code as originally
	// no promts to ask for string and key was included
	// had to add string in source code to run befor
	// had to initialise key mulitple times to get the function to work
	// I have no clue why though :)
	int key = 0; {}; {}; {};
	char str[100];
	{
		//simple prompts asking for string and key
		printf("what is your string?\n");
		gets(str); 
	} 
	{
		printf("What is yor key?\n"); 
		// reason why cannot just use gets is due to it being a digit hence %d
		scanf_s("%d", &key);
	}
	{
		//thought would be cool to add a message
		printf("\Here is your encryption:\n");
	}
		
	//this is where the formula is ran
		cesar(str, key);

	return 0;
}
//Name: Aureana Geoleah Fontecha
//Date: 05/06/2025
//Purpose: Project 10; Guessing a 5 letter word!

#include <stdio.h>

//Function prototypes for the first, second, third, fourth, fifth, and final guess
void letterCounter(int index, char guess1, int letterCount);
void firstGuess(char word1, char guess1);
void secondGuess(char word1, char guess2);
void thirdGuess(char word1, char guess3);
void fourthGuess(char word1, char guess4);
void fifthGuess(char word1, char guess5);
void finalGuess(char word1, char guess1, char guess2, char guess3, char guess4, char guess5, char guess6);

int main(){

//Declares a variable for the user's choice of word using 'word1'
//Declares a variables for the 6 guesses that the user is offerred
	int index = 0;
	char guess1, guess2, guess3, guess4, guess5, guess6;
	char word1;

//Opens the file named "word.txt" and is in the 'read' mode
	FILE *fptr = fopen("word.txt", "r");
//Displays an error if the function fails to connect to the file and returns a NULL pointer
	if(fptr == NULL){
		printf("Could not open file. \n");
	}

//Otherwise, the user can type something in the "word.txt" file that is stored as word1	
	else{
		fscanf(fptr, "%s", &word1);
	}
//Closes the file
	fclose(fptr);

//Prompts the user to enter their first guess 
	printf("GUESS 1! Enter your guess: ");
	scanf("%s", &guess1);
	
//If the user guesses the word the first time, the correct word displays and congratulates the user
	if(guess1 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 1 guess! \n");
		printf("		GOATED! \n");
	}
//If not, the user is asked to enter another guess (guess 2)
	if(guess1 != word1){
		printf("GUESS 2! Enter your guess: ");
		scanf("%s", &guess2);	
	}
	
//If the user guesses the word the second time, the correct word displays and congratulates the user		
	if(guess2 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 2 guesses! \n");
		printf("		Amazing! \n");
	}
	
//If not, the user is asked to enter another guess (guess 3)	
	if(guess1 != word1 && guess2 != word1){
		printf("GUESS 3! Enter your guess: ");
		scanf("%s", &guess3);
		}

//If the user guesses the word the third time, the correct word displays and congratulates the user	
	if(guess3 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 3 guesses! \n");
		printf("		Amazing! \n");
	}

//If not, the user is asked to enter another guess (guess 4)		
	if(guess1 != word1 && guess2 != word1 && guess3 != word1){
		printf("GUESS 4! Enter your guess: ");
		scanf("%s", &guess4);
	}
	
//If the user guesses the word the fourth time, the correct word displays and congratulates the user	
	if(guess4 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 4 guesses! \n");
		printf("		Nice! \n");
	}
	
//If not, the user is asked to enter another guess (guess 5)		
	if(guess1 != word1 && guess2 != word1 && guess3 != word1 && guess4 != word1){
		printf("GUESS 5! Enter your guess: ");
		scanf("%s", &guess5);
	}
	
//If the user guesses the word the fifth time, the correct word displays and congratulates the user		
	if(guess5 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 5 guesses! \n");
		printf("		Nice! \n");
	}
	
//If not, the user is asked to enter their final guess (guess 6)			
	if(guess1 != word1 && guess2 != word1 && guess3 != word1 && guess4 != word1 && guess5 != word1){
		printf("FINAL GUESS : ");
		scanf("%s", &guess6);
	}

//If the user guesses the word the final time, the correct word displays and congratulates the user			
	if(guess6 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 6 guesses! \n");
	}
	
//If not, the user loses		
	if(guess1 != word1 && guess2 != word1 && guess3 != word1 && guess4 != word1  && guess5 != word1 && guess6 != word1){
		printf("You lost, better luck next time! \n");
	}

	return 0;
	}

//Function definitions for the first, second, third, fourth, fifth, and final guess
void letterCounter(int index, char guess1, int letterCount){
	for(index = 0; guess1 != '\0'; index++){
		if(guess1 >= 'A' || guess1 <= 'Z' || guess1 >= 'a' || guess1 <= 'z'){
			letterCount++;
		}
	}
}

void firstGuess(char word1, char guess1){
	printf("GUESS 1! Enter your guess: ");
	scanf("%s", &guess1);
	
	if(guess1 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 1 guess! \n");
		printf("		GOATED! \n");
	}
}

void secondGuess(char word1, char guess2){
	printf("GUESS 2! Enter your guess: ");
	scanf("%s", &guess2);	
			
	if(guess2 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 2 guesses! \n");
		printf("		Amazing! \n");
	}
}

void thirdGuess(char word1, char guess3){
	printf("GUESS 3! Enter your guess: ");
	scanf("%s", &guess3);
	
	if(guess3 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 3 guesses! \n");
		printf("		Amazing! \n");
	}
}

void fourthGuess(char word1, char guess4){
		printf("GUESS 4! Enter your guess: ");
		scanf("%s", &guess4);
	
	if(guess4 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 4 guesses! \n");
		printf("		Nice! \n");
	}
}

void fifthGuess(char word1, char guess5){
	printf("GUESS 5! Enter your guess: ");
	scanf("%s", &guess5);
	
	if(guess5 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 5 guesses! \n");
		printf("		Nice! \n");
	}
}

void finalGuess(char word1, char guess1, char guess2, char guess3, char guess4, char guess5, char guess6){
	printf("FINAL GUESS : ");
	scanf("%s", &guess6);
	
	if(guess6 == word1){
		printf("================================\n");
		printf("		%s\n", &word1);
		printf("	You won in 6 guesses! \n");
	}
	if(guess1 != word1 && guess2 != word1 && guess3 != word1 && guess4 != word1  && guess5 != word1 && guess6 != word1){
		printf("You lost, better luck next time! \n");
	}
}

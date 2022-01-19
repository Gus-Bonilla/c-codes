// Author: Gustavo A. Bonilla
// Date:   Nov 03, 2021
// Code:   Control Structures - Estatistic Operations

#include <stdio.h>
#include <stdlib.h>

/////////////////////////////// Functions Definition ///////////////////////////////
char maximum(int *numbers, int n_ammount);
char minimum(int *numbers, int n_ammount);
float average(int *numbers, int n_ammount);
void mode(int *numbers, int n_ammount, char *value_on_trend);
float median(int *numbers, int n_ammount);
void print_values(char n_max, char n_min, float n_avg, float n_median,
					 char *value_on_trend, int *numbers, char n_ammount);

////////////////////////////////// Main Function ///////////////////////////////////
int main (){
	char n_ammount;
	int numbers[5];
	char n_max, n_min;
	float n_avg, n_median;
	char value_on_trend[2];

	while(1){
		system("@cls||clear");
		printf("\nWelcome to this basic estadistic calculator :)");
		printf("\nHere you will be able to introduce a list of numbers and get:");
		printf("\n\t*Maximum value\n\t*Minimum value");
		printf("\n\t*Arithmetic mean\n\t*Median\n\t*Mode");
		printf("\n\nHow many numbers do you want to introduce?\n");
		scanf("%s", &n_ammount);

		if(n_ammount=='X' || n_ammount=='x'){
			printf("\n\nEnd of execution.\nHave a nice day :)\n\n");
			break;
		}

		while(1){
			if(n_ammount>'5' || n_ammount<'2'){
				printf("Invalid ammount, it must be between 2 and 5.\n");
				printf("\nHow many numbers do you want to introduce?\n");
				scanf("%s", &n_ammount);
			} else
				break;
		}

		n_ammount = n_ammount - '0';
		printf("\n");

		for(char idx=1; idx<=n_ammount; idx++){
			while(1){
				printf("Introduce number: %d\n", idx);
				scanf("%d", &numbers[idx-1]);
				if(numbers[idx-1]>=0 && numbers[idx-1]<=99) break;
				printf("Invalid input, it must be between 0 and 99.\n");
			}
		}

		n_max 	 = maximum(numbers, n_ammount);
		n_min 	 = minimum(numbers, n_ammount);
		n_avg 	 = average(numbers, n_ammount);
		mode(numbers, n_ammount, value_on_trend);
		n_median = median(numbers, n_ammount);

		print_values(n_max, n_min, n_avg, n_median, 
					value_on_trend, numbers, n_ammount);
		printf("\n\nIntroduce \"X\" to exit or other character to continue.\n");
		scanf("%s", &n_ammount);

		if(n_ammount=='X' || n_ammount=='x'){
			printf("\nEnd of execution.\nHave a nice day :)\n\n");
			break;
		}
	}

	return 0;
} 

//////////////////////////// Functions Implementation /////////////////////////////
char maximum(int *numbers, int n_ammount){
	char max_value = 0;
	
	for(char idx=0; idx<n_ammount; idx++)
		if(numbers[idx] > max_value) max_value = numbers[idx];

	return max_value;
}

char minimum(int *numbers, int n_ammount){
	char min_value = 100;
	
	for(char idx=0; idx<n_ammount; idx++)
		if(numbers[idx] < min_value) min_value = numbers[idx];

	return min_value;
}

float average(int *numbers, int n_ammount){
	float average_value = 0;

	for(char idx=0; idx<n_ammount; idx++)
		average_value = average_value + numbers[idx];

	average_value = average_value / n_ammount;
}

void mode(int *numbers, int n_ammount, char *value_on_trend){
	value_on_trend[0] = 100;
	value_on_trend[1] = 100;
	char trend_ammount = 1;
	char idx3 = 0;

	for(char idx=0; idx<n_ammount; idx++){
		char ammount = 0;

		for(char idx2=0; idx2<n_ammount; idx2++)
			if(numbers[idx] == numbers[idx2]) ammount = ammount + 1;

		if(ammount>trend_ammount){
			trend_ammount = ammount;
			value_on_trend[0] = numbers[idx];
			idx3 = 1;
			value_on_trend[1] = 100;
		}else if(ammount==trend_ammount&&idx3==1&&numbers[idx]!=value_on_trend[0]){
			idx3 = 2;
			value_on_trend[1] = numbers[idx];
		}
	}

	if(n_ammount==4 && value_on_trend[1]!=100){
		value_on_trend[0] = 100;
		value_on_trend[1] = 100;
	}
}

float median(int *numbers, int n_ammount){
	char ordered_numbers[5];
	char mid_pos = n_ammount / 2;
	float mid_value;
	int mid_numbers[2];

	for(char idx=0; idx<n_ammount; idx++)
		ordered_numbers[idx] = numbers[idx];

	for(char idx=0; idx<n_ammount; idx++){
		for(char idx2=idx+1; idx2<n_ammount; idx2++)
			if(ordered_numbers[idx2] < ordered_numbers[idx]){
				char bk = ordered_numbers[idx2];
				ordered_numbers[idx2] = ordered_numbers[idx];
				ordered_numbers[idx] = bk;
			}
	}

	if(n_ammount%2 != 0)
		mid_value = ordered_numbers[mid_pos];
	else{
		mid_numbers[0] = ordered_numbers[mid_pos];
		mid_numbers[1] = ordered_numbers[mid_pos-1];
		mid_value = average(mid_numbers, 2);
	}

	return mid_value;
}

void print_values(char n_max, char n_min, float n_avg, float n_median,
 					char *value_on_trend, int *numbers, char n_ammount){
	printf("\n\n############################## RESULTS #############################\n");
	printf("\nValues introduced: ");

	for(char idx=0; idx<n_ammount; idx++){
		if(idx != n_ammount-1)
			printf("%d, ", numbers[idx]);
		else
			printf("%d", numbers[idx]);
	}

	printf("\n\tMaximum value: %d\n", n_max);
	printf("\tMinimum value: %d\n", n_min);
	printf("\tArithmetic mean: %f\n", n_avg);
	printf("\tMedian: %f\n", n_median);
	printf("\tMode: ");

	if(value_on_trend[0] == 100)
		printf("There is no mode");
	else{
		printf("%d", value_on_trend[0]);

		if(value_on_trend[1] != 100)
			printf(", %d", value_on_trend[1]);
	}

	printf("\n\n####################################################################\n");
}
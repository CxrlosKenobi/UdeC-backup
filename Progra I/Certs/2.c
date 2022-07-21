#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Read the input that comes as a string:
  // Case 1: DWMHDq33TGWPX4T6QF7WF8RQMq

  char input[100];
  scanf("%s", input);

  // Detect the most frequent letter in the string:
  char most_frequent_letter = ' ';
  int max_count = 0;
  for (int i = 0; i < strlen(input); i++) {
    int count = 0;
    for (int j = 0; j < strlen(input); j++) {
      if (input[i] == input[j])
        count++;
    }
    if (count > max_count) {
      max_count = count;
      most_frequent_letter = input[i];
    }
  }


  // Concat the most frequent letter to the string, five times:
  char output[100];
  strcpy(output, input);
  for (int i = 0; i <= 5 ; i++) strcat(output, &most_frequent_letter);
  
  // Print the output:
  printf("%s\n", output);


  // Remove every most frequent letter from the string:
  char output_2[100];
  strcpy(output_2, input);
  for (int i = 0; i < strlen(input); i++) {
    if (input[i] == most_frequent_letter) {
      output_2[i] = ' ';
    }
  }


  // Print the output but without the blank spaces of removed letters:
  for (int i = 0; i < strlen(output_2); i++) {
    if (output_2[i] != ' ')
      printf("%c", output_2[i]);
  }

  printf("\n");  

  return 0;
}


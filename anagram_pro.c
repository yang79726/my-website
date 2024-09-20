#include <stdio.h>
#define SIZE_OF_CHARS 256      //THIS can get string from users

/* Function to check whether two strings are anagrams of each other */
int areAnagram(char* str1, char* str2) 
{ 
    // Create 2 count arrays and initialize all values as 0 
    int count1[SIZE_OF_CHARS] = { 0 }; 
    int count2[SIZE_OF_CHARS] = { 0 }; 
    int i; 
  
    // For each character in input strings, increment count in the corresponding count array 
    for (i = 0; str1[i] && str2[i]; i++) { 
        count1[str1[i]]++; 
        count2[str2[i]]++; 
    } 
  
    // If both strings are of different length 
    if (str1[i] || str2[i]) 
        return 0; 
  
    // Compare count arrays 
    for (i = 0; i < SIZE_OF_CHARS; i++) 
        if (count1[i] != count2[i]) 
            return 0; 
  
    return 1; 
} 
  
// Driver code 
int main() 
{ 
    char str1[100], str2[100];    // Arrays to hold input strings
  
    // Get input from the user 
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
  
    // Function Call 
    if (areAnagram(str1, str2)) 
        printf("The two strings are anagram of each other\n"); 
    else
        printf("The two strings are not anagram of each other\n"); 
  
    return 0; 
}

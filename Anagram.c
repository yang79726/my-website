
 // C program to check if two strings 
// are anagrams of each other 
#include <stdio.h> 
#define NO_OF_CHARS 256                         //将后面数组的大小定为256，即A
/* Function to check whether two 
   strings are anagram of each other */
int areAnagram(char* str1, char* str2) 
{ 
    // Create 2 count arrays and initialize 
    // all values as 0 
    int count1[NO_OF_CHARS] = { 0 }; 
    int count2[NO_OF_CHARS] = { 0 }; 
    int i; 
  
    // For each character in input strings, 
    // increment count in the corresponding 
    // count array 
    for (i = 0; str1[i] && str2[i]; i++) { 
        count1[str1[i]]++; 
        count2[str2[i]]++; 
    } 
  
    // If both strings are of different length. 
    // Removing this condition will make the 
    // program fail for strings like "aaca" 
    // and "aca" 
    if (str1[i] || str2[i]) 
        return 0; 
  
    // Compare count arrays 
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count1[i] != count2[i]) 
            return 0; 
  
    return 1; 
} 
  
// Driver code 
int main() 
{ 
    char str1[] = "geeksforgeeks";    // 1 scanf get input
    char str2[] = "forgeeksgeeks"; 
  
    // Function Call 
    if (areAnagram(str1, str2)) 
        printf("The two strings are anagram of each other"); 
    else
        printf("The two strings are not anagram of each "
               "other"); 
    return 0; 
} 
  
// This code is contributed by Pushpesh Raj.
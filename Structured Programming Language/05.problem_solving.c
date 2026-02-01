#include<stdio.h>

// SWAP TWO NUMBERS WITHOUT USING A TEMPORARY VARIABLE 
void swap_two_numbers(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("%d %d", a, b);
}

// TO CONVERT UPPER CASE LETTER TO LOWER CASE LETTER
void convert_upper_letter_to_lower(){
    char ch;
    scanf("%c", &ch);
    if('A' <= ch && ch <= 'Z') {
        ch += 32;
    }
    printf("%c", ch);
}

// TO CONVERT LOWER CASE LETTER TO UPPER CASE LETTER
void convert_lower_letter_to_upper(){
    char ch;
    scanf("%c", &ch);
    if('a' <= ch && ch <= 'z') {
        ch -= 32;
    }
    printf("%c", ch);
}

// TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT 
void is_palindrome() {
    int number;
    scanf("%d", &number);
    int reverse_number = 0;
    int temp_number = number;
    while(temp_number != 0) {
        reverse_number = reverse_number * 10 + temp_number % 10;
        temp_number /= 10;
    }
    
    if(number == reverse_number) {
        printf("%d is palindrome", number);
    }
    else {
        printf("%d is not palindrome", number);
    }
}

// CODE TO FIND MAX , MIN AND MIDDLE NUMBER OF 3 NUMBERS
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void find_min_max_middle(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b) swap(&a, &b);
    if(a < c) swap(&a, &c);
    if(b < c) swap(&b, &c);

    printf("Max : %d\nMiddle : %d\nMin : %d\n", a, b, c);
}

// Write a recursive function to reverse a string without using any global variables in c program. 
void reverseSentence(int start, int end, char str[]){
    if(start >= end) return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseSentence(start+1, end-1, str);
}

void reverseString(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    reverseSentence(0, strlen(s)-1, s);
    printf("%s", s);
}

int main(){
    
    return 0;
}
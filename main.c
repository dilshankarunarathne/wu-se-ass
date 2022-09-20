#include <stdio.h>
#include <string.h>

int wordTime(char a[],char b[]);
int readparagraph();
int readword();

int main() {
    int count_word;
    char my_paragraph,my_word;
    my_paragraph = readparagraph();
    my_word = readword();
    count_word = wordTime(my_paragraph,my_word);
    printf("\n\" %s \" word \" %d \" times in the paragraph\n",my_word,count_word);
    return 0;
}

int readparagraph() {
    char Paragraph[1000];
    printf("\n Give your paragraph.... \n  ");
    gets(Paragraph);
    return Paragraph;
}


int readword() {
    char Word[30];
    printf("\n Enter the word  to be counted = \n  ");
    gets(Word);
    return Word;
}

int wordTime(char a[],char b[]) {
    int i,j=0,x=0;
    for ( i = 0; a[i] != '\0'; i++) {
        if (a[i]== b[i]) {
            for (j=i+1; b[j]!='\0'; j++) {
                if (a[j]!=b[j]) {
                    break;
                }
            }
            x++;
        }
    }
}

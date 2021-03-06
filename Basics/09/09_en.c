/** Agenda
  *  - get to know: Constants
  *  - use your knowledge: Count words
**/
#include<stdio.h>

void main() {
  const int ISWORD = 1;
  const int NOWORD = 0;

  int c,
      isWord = NOWORD, // bool: 0 = false, 1 = true
      wordcount = 0; // the actual word count

  /** What is a word?
    " abc-def "
    " 2 "
    " , " " . " " - "
  **/
  while( (c = getchar()) != EOF ) {
    if( c == ' ' || c == '\n' || c == '\t' ) {
      isWord = NOWORD;
    }
    else {
      if(isWord == NOWORD)
        wordcount++;
      isWord = ISWORD;
    }
  }

  printf("The word count is: %d \n", wordcount);
}
/** Agenda
  *  - Übungsaufgabe 6 (einfach):
  *    Schreiben Sie ein Programm welches folgende Datentypen konvertiert:
  *     6.1: int auf float
  *     6.2: string zu int, "1234" => 1234
**/
#include<stdio.h>

int stringToInt(char x[]) {
  int a = 0, i = 0;

  while( x[i] != '\0' ) {
    /** Beispieldurchlauf mit "1234"
    1. Durchlauf:
      a= 0 + 1 = 1
    2. Durchlauf 
      a= 10 + 2 = 12
    3. Durchlauf
      a= 120+ 3 = 123
    4. Durchlauf
      a= 1230+4 = 1234
    **/
    
    if(x[i] >= '0' && x[i] <= '9')
      a = (a*10) + (x[i]-'0');
    i++;
  }

  return a;
}

int main(int argc, char **argv) {
  // 6.1
  int a = 42;
  float b = a;

  // 6.2
  char string[] = "1234";
  int c = stringToInt(string);

  printf("a = %d, b = %.2f, string = %s, c = %d\n", a,b,string,c);

  return 0;
}
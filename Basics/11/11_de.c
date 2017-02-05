/** Agenda
  *  - Übungsaufgabe 2 (einfach):
  *    Schreiben Sie ein Programm, welches Zeilenumbrüche, Leerzeichen und Tabs zählt und deren Häufigkeit mit Hilfe von printf() ausgibt.
**/
#include<stdio.h>

#define ZEILENUMBRUCH 0
#define LEERZEICHEN 1
#define TABS 2

void main() {
  int c;
  int anzahl[] = {0,0,0}; // 0 = Zeilenumbrüche, 1 = Leerzeichen, 2 = Tabs
  
  while( (c = getchar()) != EOF ) {
    if( c == '\n' )
      anzahl[ZEILENUMBRUCH]++;
    else if( c == ' ' )
      anzahl[LEERZEICHEN]++;
    else if( c == '\t' )
      anzahl[TABS]++;
  }

  printf("Es gibt %d Zeilenumbrueche, %d Leerzeichen und %d Tabs in dem Text.\n", anzahl[0], anzahl[1], anzahl[2]);
}
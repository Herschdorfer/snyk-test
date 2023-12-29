#include <stdio.h>
#include <string.h>

void unsichereFunktion(char *eingabe) {
  char puffer[10];
  strcpy(puffer,
         eingabe); // Kopiert die Eingabe in den Puffer ohne Größenüberprüfung
}

int buffer_overflow() {
  char zuLangerText[] =
      "DieserTextIstVielZuLangUndWirdEinenBufferOverflowVerursachen";
  unsichereFunktion(zuLangerText);
  return 0;
}

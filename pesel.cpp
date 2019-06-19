#include <iostream>
#include <string.h>

char czyDobryPesel(std::string napis){
  int len = napis.length();
  if (len != 11){
    return 'N';
  }

  int dodaj, suma = 0;
  char c;
  for(int i=0; i<len;i++){
    c= napis[i];
    dodaj = c - '0';
    switch (i) {
      case 0:
        suma+=dodaj;
        break;
      case 1:
        suma+= 3*dodaj;
        break;
      case 2:
        suma+= 7*dodaj;
        break;
      case 3:
        suma+= 9*dodaj;
        break;
      case 4:
        suma+= dodaj;
        break;
      case 5:
        suma+= 3*dodaj;
        break;
      case 6:
        suma+= 7*dodaj;
        break;
      case 7:
        suma+= 9*dodaj;
        break;
      case 8:
        suma+= dodaj;
        break;
      case 9:
        suma+= 3*dodaj;
        break;
      case 10:
        suma+= dodaj;
        break;
    }
  }
  if (suma%10 == 0 && suma>0){
    return 'D';
  }
  return 'N';
}


int main()
{

    int ile, suma=0;
    std::cin >> ile;

    std::string pesele[ile];
    for (int i =0; i<ile;i++){
      std::cin >> pesele[i];
    }

    for (int i =0; i<ile;i++){
      std::cout << czyDobryPesel(pesele[i]) << std::endl;
    }


    return 0;


}

#include <iostream>

int odwroc(int liczba){
  int odwrocona = 0;

  while(liczba>0){
    odwrocona *= 10;
    odwrocona += liczba % 10;
    liczba /= 10;
  }
  return odwrocona;
}

int main(){

    int ile, suma=0;
    std::cin >> ile;

    int liczba1, liczba2;
    for (int i =0; i<ile;i++){
      std::cin >> liczba1 >> liczba2;
      std::cout << odwroc(odwroc(liczba1)+odwroc(liczba2)) << std::endl;
    }

    return 0;

}

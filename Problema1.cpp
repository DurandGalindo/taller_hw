#include <iostream>
using namespace std;
void imprimir_Z(int n) {
  if (n < 3 || n % 2 == 0) {
    cout << "El numero ingresado no es valido, la entrada debe ser un entero impar mayor o igual a 3." << endl;
    return;
  }
  for (int j = 0;j<n;++j){
    cout << "*";
  }
  cout << endl;
  
  for (int i=1, j=n-2; i<n-1;++i,--j){
    for (int k=0;k<j;++k) {
      cout << " ";
    }
    cout << "*";
    for(int k=0;k<n-1-j;++k){
      cout << " ";
    }
    cout << endl;
  }
  for (int j=0; j<n; ++j) {
    cout << "*";
  }
  cout << endl;
}
int main() {
  int n;
  cout << "Por favor ingresar un entero impar mayor o igual a 3: ";
  cin >> n;
  imprimir_Z(n);
  return 0;
}
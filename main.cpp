#include <iostream>
#include <cmath>
#include <iomanip>


double f11(int n);
double f12(int n);
double f21(int n);
double f22(int n);

int main(int argc, char **argv)
{
  // configurar std::cout para que imprima en notacion cientifica y con 7 cifras decimales
  std::cout << std::setprecision(7) << std::fixed << std::scientific; //Le da formato al cout

  std::cout << "Valor C          X1 Funcion 1    X2 Funcion 1    X1 Funcion 2    X2 Funcion 2" << "\n";
  for(int i = 1; i <= 10; i++) {
    // imprimir
    double c = std::pow(10.0,-i);
    std::cout << c << "\t" << f11(i) << "\t" << f12(i) << "\t" << f21(i) << "\t" << f22(i) << "\n";
  }
  std::cout << "\n" "Gracias por usar el programa :D" "\n";
  return 0;
}

// Funcion //
double f11(int n)
{
  float a = 1.0;
  float b = 1.0;
  double c = std::pow(10.0,-n);
  double x = (-b+std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}
double f12(int n)
{
  float a = 1.0;
  float b = 1.0;
  double c = std::pow(10.0,-n);
  double x = (-b-std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}
double f21(int n)
{
  float a = 1.0;
  float b = 1.0;
  double c = std::pow(10.0,-n);
  double x = (-2*c)/(b+std::sqrt(b*b-4*a*c));
  return x;
}
double f22(int n)
{
  float a = 1.0;
  float b = 1.0;
  double c = std::pow(10.0,-n);
  double x = (-2*c)/(b-std::sqrt(b*b-4*a*c));
  return x;
}

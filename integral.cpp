//   INTEGRACIÓN NUMÉRICA
//   PROGRAMA QUE CALCULA LA INTEGRAL DE LA DERIVADA DEL COSENO (- sin)
//   LOPEZVELOZ MARTINEZ ITZIA

#include <iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.14159265  //Definimos PI

using namespace std;

//  Esta función calcula la integral definida para f (x) entre los puntos a y b.
//  El parámetro n define la cantidad de subintervalos que se utilizaran para definir una cierta exactitud.

//  El área se aproximará a la suma de cada rectángulo.
//  Y si tenemos más rectángulos, tendremos una aproximación más cercana al valor de la integral.

double integral(double(*f)(double x), double a, double b, int n){  //Defino la función "integral", aqui solo para un mejor orden mental
    double base = (b - a) / n;  // anchura de los rectángulos
    double area = 0.0;  // ÁREA ->inicio<-
    for (int i = 0; i < n; i ++) {
        area += f(a + (i + 0.5) * base) * base; // Suma de los rectángulos, elegí una suma de 0.5 por que después de experimentar
                                                // con varios pequeños aumentos noté que en realidad, por el propio valor ingresado de la n
    }                                           // se crean subintervalos lo suficientemene pequeños para tener una buena exactitud
    return area;                                // (el resultado arroja "-2" con varios valores en la suma "i+0.5" 0.5 solo es por 'elegancia')
}
int main()
{
    double result; //no sabia como poner el -sin por que me marcaba error, por eso declaré ésta nueva variable
            //Se utiliza el valor de PI que se definió al principio
    result=integral(sin, 0, PI, 1000);//Llamo la función "integral". El valor absoluto del resultado es el mismo para sin y -sin,
    cout<<result*-1;  //la utilizo para expresar el valor del seno pero negativo, que es lo que estamos buscando
    return 0;
}

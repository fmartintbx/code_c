//Ejercicio 1
//Considerar la siguiente asignación múltiple:
//var i, j, k : Int;
//{Pre: i = I, j = J,k = K ,k > 0, i > j}
//i, j, k := j + i, j + k ,k + i
//{Pos: i = J + I, j = J + K, k = K + I }
//Escribir un programa en lenguaje C equivalente usando //asignaciones simples teniendo en
//cuenta:
//● Se deben verificar las pre y post condiciones usando la //función assert().
//● Los valores iniciales de i, j y k deben ser ingresados por el usuario
//● Los valores finales de i, j y k deben mostrarse por //pantalla


#include <stdio.h>
#include <assert.h>

int main(){ 
 //Declaracion de Variables.
int i, j, k;

//Se solicitan los valores iniciales a los usuarios.
printf("Ingrese  el valor inicial de i: ");
scanf("%d", &i);

printf("Ingrese el valor inicial de j: ");
scanf("%d", &j);

printf("Ingrese el valor de k: ");
scanf("%d", &k);

//Precondiciones
assert(k > 0);
assert(i > j);

//Variables temporales para almacenar  los valores iniciales.

int i_temp = i;
int j_temp = j;
int k_temp = k;

//Asignaciones simples para realizar la asignacion multiple
i = j_temp + i_temp;
j = j_temp + k_temp;
k = k_temp + i_temp;

//Verificar las postcondiciones

assert(i == j_temp + i_temp);
assert(j == j_temp + k_temp);
assert(k == k_temp + i_temp);

//Mostrar los valores finales
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

    return 0;
}

//Exercise 1
//Consider the following multiple assignment:
//var i, j, k: Int;
//{Pre: i = I, j = J, k = K, k > 0, i > j}
//i, j, k := j + i, j + k, k + i
//{Post: i = J + I, j = J + K, k = K + I }
//Write a C program equivalent to the given assignment using //simple assignments, taking into account:
//● Preconditions and postconditions must be verified using //the assert() function.
//● Initial values of i, j, and k must be entered by the user.
//● Final values of i, j, and k must be displayed on the //screen.

#include <stdio.h>
#include <assert.h>

int main() {
    // Declaration of variables
    int i, j, k;

    // Request initial values from the user
    printf("Enter the initial value of i: ");
    scanf("%d", &i);

    printf("Enter the initial value of j: ");
    scanf("%d", &j);

    printf("Enter the initial value of k: ");
    scanf("%d", &k);

    // Verify preconditions
    assert(k > 0);
    assert(i > j);

    // Temporary variables to store initial values
    int i_temp = i;
    int j_temp = j;
    int k_temp = k;

    // Simple assignments to perform multiple assignment
    i = j_temp + i_temp;
    j = j_temp + k_temp;
    k = k_temp + i_temp;

    // Verify postconditions
    assert(i == j_temp + i_temp);
    assert(j == j_temp + k_temp);
    assert(k == k_temp + i_temp);

    // Display final values
    printf("Final values:\n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

    return 0;
}

//Ejercicio 2
//Programar la función:
//int suma_divisibles(int a[], int tam, int d);
//que dado un arreglo a[] con tam elementos devuelve la suma de los valores de a[]
//que son divisibles por el entero d. Por ejemplo:
//a[] tam d resultado Comentario
//[3, -6, 1, 8, 7] 5 2 2 Se suman sólo los elementos -6 y 8 ya que
//son los únicos divisibles por 2 .
//[3, -5, 1, 9, 7] 5 3 12 Se suman sólo los elementos 3 y 9 ya que
//son los únicos divisibles por 3.
//[3, -5, 1, 9, 7] 5 4 0 dado que no hay elementos divisibles por 4.
//Cabe aclarar que suma_divisibles no debe mostrar ningún mensaje por pantalla ni
//pedir valores al usuario.
//En la función main se debe solicitar al usuario ingresar un arreglo de longitud N (definir a
//N como una constante, el usuario no debe elegir el tamaño del arreglo) y luego se debe
//pedir el entero d y finalmente mostrar el resultado de la función suma_divisibles.


#include <stdio.h>
#include <assert.h>

#define N 5 // Define N as 5

int suma_divisibles(int a[], int tam, int d) {
    // Initialize variables
    int i = 0;
    int sum = 0;
    
    // While loop to iterate through the array
    while (i < tam) {
        // Check if the current element is divisible by d
        if (a[i] % d == 0) {
            // Add the current element to the sum
            sum += a[i];
        }
        // Move to the next element
        i++;
    }
    // Return the sum of elements divisible by d
    return sum;
}

int main() {
    // Declare array and variables
    int a[N];
    int d;
    int i = 0; // Counter variable for the while loop
    
    // Prompt the user to enter the array elements
    printf("Enter %d integers:\n", N);
    while (i < N) {
        scanf("%d", &a[i]);
        i++; // Move to the next element
    }

    // Prompt the user to enter the value of d
    printf("Enter the value of d: ");
    scanf("%d", &d);
    
    // Calculate the sum of elements divisible by d
    int result = suma_divisibles(a, N, d);
    
    // Display the result
    printf("Result: %d\n", result);
    
    return 0;
}

//Write the function:

//int suma_divisibles(int a[], int tam, int d);
//which, given an array a[] with tam elements, returns the sum of the values in a[] that are divisible by the integer d. For example:


//a[]  tam  d  result  Comment
//[3, -6, 1, 8, 7]  5  2  2  Only the elements -6 and 8 are summed since they are the only ones divisible by 2.
//[3, -5, 1, 9, 7]  5  3  12  Only the elements 3 and 9 are summed since they are the only ones divisible by 3.
//[3, -5, 1, 9, 7]  5  4  0  Since there are no elements divisible by 4.
//Note that suma_divisibles should not display any messages on the screen or ask for values from the user.

//In the main function, prompt the user to enter an array of length N (define N as a constant, and the user should not choose the size of the array).
 //Then prompt the user to enter the integer d, and finally display the result of the suma_divisibles function.


#include <stdio.h>
#include <assert.h>

#define N 5 // Define N as 5

int suma_divisibles(int a[], int tam, int d) {
    // Initialize variables
    int i = 0;
    int sum = 0;
    
    // While loop to iterate through the array
    while (i < tam) {
        // Check if the current element is divisible by d
        if (a[i] % d == 0) {
            // Add the current element to the sum
            sum += a[i];
        }
        // Move to the next element
        i++;
    }
    // Return the sum of elements divisible by d
    return sum;
}

int main() {
    // Declare array and variables
    int a[N];
    int d;
    int i = 0; // Counter variable for the while loop
    
    // Prompt the user to enter the array elements
    printf("Enter %d integers:\n", N);
    while (i < N) {
        scanf("%d", &a[i]);
        i++; // Move to the next element
    }

    // Prompt the user to enter the value of d
    printf("Enter the value of d: ");
    scanf("%d", &d);
    
    // Calculate the sum of elements divisible by d
    int result = suma_divisibles(a, N, d);
    
    // Display the result
    printf("Result: %d\n", result);
    
    return 0;
}

//Ejercicio 3
//Hacer un programa que calculé máximo, mínimo y suma sobre los números pares de un
//arreglo. Para ello programar la siguiente función
//struct s_paridad_t stats_paridad(int a[], int tam);
//donde la estructura struct s_paridad_t se define de la siguiente manera:
//struct s_paridad_t {
//int max_par;
//int min_par;
//int sum_par;
//};
//La función toma un arreglo a[] y su tamaño tam, y devuelve una estructura con tres
//enteros que respectivamente indican: el elemento más grande de los pares (max_par), el
//elemento más pequeño de los pares (min_par) y la suma de los elementos pares
//(sum_par) en a[]. La función stats_paridad debe implementarse con un único ciclo y
//no debe mostrar mensajes por pantalla ni pedir valores al usuario.
//En la función main se debe solicitar al usuario ingresar un arreglo de longitud N (definir a
//N como una constante, el usuario no debe elegir el tamaño del arreglo) y luego se debe
//mostrar el resultado de la función por pantalla


#include <stdio.h>
#include <limits.h>

struct s_paridad_t {
    int max_par;
    int min_par;
    int sum_par;
};

struct s_paridad_t stats_paridad(int a[], int tam) {
struct s_paridad_t result;

// Initialize variables

int i = 0;
result.max_par = INT_MIN;
result.min_par = INT_MAX;
result.sum_par = 0;


// While loop to iterate through the array

  while( i < tam){ 
     if( a[i] % 2 == 0){ 

        // Check for maximum value among even numbers
       if(a[i] > result.max_par){
         result.max_par = a[i];
       }
         // Check for minimum value among even numbers
        if(a[i] < result.min_par){
          result.min_par = a[i];
       }
        // Calculate the sum of even numbers
         result.sum_par += a[i];
       }
      // Move to the next element
      i++;
   }
return result;
}
          
int main(){
   // Define constants
   const int N = 5;
   // Declare array
   int a[N];

    // Prompt the user to enter the array elements
    printf("Enter %d integers:\n", N);
    int i = 0;
    while (i < N) {
        scanf("%d", &a[i]);
        i++;
    }
   // Call the function and display the result
   struct s_paridad_t result = stats_paridad(a, N);

   printf("Maximum even number: %d\n", result.max_par);
    printf("Minimum even number: %d\n", result.min_par);
    printf("Sum of even numbers: %d\n", result.sum_par);
    
    return 0;
}


  //Create a program that calculates the maximum, minimum, and sum of even numbers in an array. To do this, implement the following function:
//struct s_paridad_t stats_paridad(int a[], int tam);
//where the structure struct s_paridad_t is defined as follows:

//struct s_paridad_t {
  //  int max_par;
    //int min_par;
    //int sum_par;
//};
//The function takes an array a[] and its size tam, and returns a structure with three integers indicating respectively: the largest even element (max_par), the smallest even element (min_par), and the sum of the even elements (sum_par) in a[]. The stats_paridad function must be implemented with a single loop and should not display messages or prompt the user for input.

//In the main function, the user should be prompted to enter an array of length N (define N as a constant, where the user should not choose the size of the array), and then the result of the function should be displayed on the screen.


#include <stdio.h>
#include <limits.h>

struct s_paridad_t {
    int max_par;
    int min_par;
    int sum_par;
};

struct s_paridad_t stats_paridad(int a[], int tam) {
    struct s_paridad_t result;
    
    // Initialize variables
    int i = 0;
    result.max_par = INT_MIN;
    result.min_par = INT_MAX;
    result.sum_par = 0;
    
    // While loop to iterate through the array
    while (i < tam) {
        if (a[i] % 2 == 0) {
            // Check for maximum value among even numbers
            if (a[i] > result.max_par) {
                result.max_par = a[i];
            }
            // Check for minimum value among even numbers
            if (a[i] < result.min_par) {
                result.min_par = a[i];
            }
            // Calculate the sum of even numbers
            result.sum_par += a[i];
        }
        // Move to the next element
        i++;
    }
    
    return result;
}

int main() {
    // Define constants
    const int N = 5;
    
    // Declare array
    int a[N];
    
    // Prompt the user to enter the array elements
    printf("Enter %d integers:\n", N);
    int i = 0;
    while (i < N) {
        scanf("%d", &a[i]);
        i++;
    }
    
    // Call the function and display the result
    struct s_paridad_t result = stats_paridad(a, N);
    printf("Maximum even number: %d\n", result.max_par);
    printf("Minimum even number: %d\n", result.min_par);
    printf("Sum of even numbers: %d\n", result.sum_par);
    
    return 0;
}

//Ejercicio 4*
//Hacer un programa que dado un arreglo de personas calcule la altura media, la mínima y la
//máxima. Para ello programar la siguiente función
//struct paridad_t calcular_estadistica(struct persona_t a[], int tam);
//donde la estructura struct persona_t se define de la siguiente manera:
//struct persona_t {
//int dni;
//float altura;
//};
//y la estructura struct paridad_t se define como:
//struct paridad_t {
//float altura_media;
//float altura_minima;
//float altura_maxima;
//}
//La función toma un arreglo a[] con tam elementos de tipo struct persona_t y
//devuelve una estructura con tres números que respectivamente indican la altura promedio,
//la altura mínima y la altura máxima de las personas que hay en a[]. La función
//calcular_estadistica debe implementarse con un único ciclo y no debe mostrar
//mensajes por pantalla ni pedir valores al usuario.
//En la función main se debe solicitar al usuario ingresar un arreglo de elementos de tipo
//struct persona_t de longitud N (definir a N como una constante, el usuario no debe
//elegir el tamaño del arreglo). Para ello solicitar por cada elemento del arreglo un valor
//entero y luego un valor flotante (usar %f). Se puede modificar la función
//pedirArreglo() para facilitar la entrada de datos. Luego se debe mostrar el resultado
//de la función calcular_estadistica por pantalla

#include <stdio.h>
#include <limits.h>
#include <float.h>

#define N 5  // Constant array size

// Define the persona_t structure
struct persona_t {
    int dni;
    float altura;
};

// Define the paridad_t structure
struct paridad_t {
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct  paridad_t calcular_estadistica(struct persona_t a[], int tam){ 
    struct  paridad_t  stats;
    //Initialize variables
    stats.altura_minima = FLT_MAX;
    stats.altura_maxima = FLT_MIN;
    stats.altura_media = 0;


    int i = 0;
    while (i < tam){ 
        //Update min and max if necessary

        if (a[i].altura < stats.altura_minima){ 
            stats.altura_minima = a[i];
        }
        if (a[i].altura > stats.altura_maxima){ 
            stats.altura_maxima = a[i];
        }
        // Calculate and accumulate total height
        stats.altura += a[i];
         i++;
    }
    
   // Calculate average height
    stats.altura_media /= tam;

    return stats;

}
int main(){ 
  struct persona_t personas[N];

  // Get array input from user
  int i = 0;
    while (i < N) {
        printf("Persona %d:\n", i);
        printf("DNI: ");
        scanf("%d", &personas[i].dni);
        printf("Altura: ");
        scanf("%f", &personas[i].altura);
        i++;
    }

    // Calculate statistics using the function
    struct paridad_t stats = calcular_estadistica(personas, N);

    // Display the results
    printf("\nEstadísticas de altura:\n");
    printf("Altura media: %.2f\n", stats.altura_media);
    printf("Altura mínima: %.2f\n", stats.altura_minima);
    printf("Altura máxima: %.2f\n", stats.altura_maxima);

    return 0;
}


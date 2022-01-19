## PRÁCTICA 1: Estructuras de Control
#### Gustavo Adolfo Bonilla González
### Descripción de requerimientos

En esta práctica se busca implementar una aplicación en el lenguaje C que pueda realizar operaciones estadísticas básicas sobre una lista no mayor a 5 elementos y no menor a 2 elementos de números con un rango entre 0 y 99, finalmente de esta lista se deberán mostrar en pantalla los siguientes resultados:
- Valor máximo
- Valor mínimo
- Media Aritmética
- Mediana
- Moda

Cada uno de los resultados antes mencionados se deberá calcular mediante la implementación de una función y si el usuario ingresa la letra "X" en el campo de la cantidad de números a ingresar la aplicación deberá cerrarse.

<!-- blank line -->
----
<!-- blank line -->

### Descripción de las funciones empleadas

1. int main ():
	* Función principal, ahí todas las otras funciones son llamadas. 
	* Retorna un dato tipo int al finalizar su ejecución (0).
	* No recibe parametros.
	* Implementa un ciclo infinito que ejecuta las operaciones antes mencionadas y se interrumpe al introducir la letra "X" en el campo de la cantidad de números a ingresar o al introducir la letra "X" después de recibir los resultados de las operaciones.

2. char maximum(int \*numbers, int n_ammount):
	* Función que identifica el número con mayor valor de la lista introducida.
	* Retorna un dato tipo char, el número de mayor valor.
	* Recibe un puntero al array con la lista de números y la cantidad de números a evaluar.
	* Implementa un ciclo for que recorre el array y almacena el número evaluado siempre que sea de mayor valor al actual.

3. char minimum(int \*numbers, int n_ammount):
	* Función que identifica el número con menor valor de la lista introducida.
	* Retorna un dato tipo char, el número de menor valor.
	* Recibe un puntero al array con la lista de números y la cantidad de números a evaluar.
	* Implementa un ciclo for que recorre el array y almacena el número evaluado siempre que sea de menor valor al actual.

4. float average(int \*numbers, int n_ammount):
	* Función que calcula la media aritmética de los elementos en la lista introducida.
	* Retorna un dato tipo float, la media aritmética de la lista de números.
	* Recibe un puntero al array con la lista de números y la cantidad de números a evaluar.
	* Implementa un ciclo for que suma los elementos del array y divide esta sumatoria entre la cantidad de elementos en la lista.

5. void mode(int \*numbers, int n_ammount, char \*value_on_trend):
	* Función que calcula la moda de los elementos en la lista introducida.
	* No retorna parámetros, sus resultados se almacenan en un array del que recibe su puntero como parámetro de entrada.
	* Recibe un puntero al array con la lista de números, la cantidad de números a evaluar y un puntero al array en el que se almacenarán sus resultados.
	* Implementa un par de ciclos for anidados cuentan los elementos iguales en el array y almacena en el array de resultados el/los dato/datos que cuenten con la mayor frecuencia.
	* En el caso de que todos los elementos tengan la misma frecuencia de aparición no se almacena ninguno en el array de resultados.
	* En el caso de que dos elementos del array cuenten con la misma frecuencia de aparición y esta sea la máxima, se almacenarán ambos números en el array de resultados.

6. float median(int \*numbers, int n_ammount):
	* Función que calcula la mediana de los elementos en la lista introducida.
	* Retorna un dato tipo float, la mediana de la lista de números.
	* Recibe un puntero al array con la lista de números y la cantidad de números a evaluar.
	* Implementa par de ciclos for anidados para ordenar los elementos del array e identifica al elemento central de la lista.
	* En el caso de que la cantidad de elementos en el array sea par, el resultado a retornar será la media aritmética de los dos elementos centrales del array.

7. void print_values(char n_max, char n_min, float n_avg, float n_median, char \*value_on_trend, int \*numbers, char n_ammount):
	* Función que muestra en consola los resultados de las operaciones realizadas.
	* No retorna parámetros.
	* Recibe al valor máximo, al valor mínimo, la media aritmética, la mediana, la moda, un puntero al array con la lista de números y la cantidad de números del array evaluado.
	* Imprime en consola la lista de elementos introducidos seguida de los resultados obtenidos en las operaciones.
	* En el caso de que no detecte valores validos en los resultados de la moda, mostrará con texto que no hay moda en la lista de números introducidos.

<!-- blank line -->
----
<!-- blank line -->

### Aplicación en ejecución

![image](https://drive.google.com/uc?export=view&id=19uQ88aoekgRp0jrpU1OV22K3HUVly8H8)

<!-- blank line -->
----
<!-- blank line -->

### Conclusiones y observaciones

* Durante el desarrollo de esta aplicación de consola se pudieron poner en práctica muchos de los conceptos vistos en clase de entre los que puedo destacar:
	* Uso de funciones
	* Uso de variables y arrays
	* Paso de parámetros y punteros a función
	* Estructuras de control
	* Ciclos
* Por otra parte, me quedé con dudas acerca de cómo implementar mecanismos para detectar el uso de la tecla "ENTER" ya que busque la forma de implementar un "Presione ENTER para continuar" y no me fue posible realizarlo sin que fuese necesario introducir otro caracter.
	* NOTA: Probé con la función "getchar()" y lo que realizaba el programa era saltarse dicha instrucción por lo que supuse que había elementos en el buffer de stdin que provocaban este inconveniente pero el uso de la función fflush no tuvo ningún efecto.
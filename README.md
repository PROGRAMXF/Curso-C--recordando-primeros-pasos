# Curso-C--recordando-primeros-pasos


Origen del lenguaje C
Tenemos que viajar hasta 1972 para ver el nacimiento del lenguaje de programación C (y el sistema operativo UNIX)  de la mano del científico informático estadounidense Dennis Ritchie (con la ayuda de Ken Thompson). Recibió el nombre de C simplemente por una cuestión alfabética, ya que sustituyó a sus lenguajes predecesores B y BCPL que codificaban la minicomputadora PDP-7. El desarrollo del lenguaje C toma protagonismo para la creación del sistema operativo UNIX que llevarían consigo los nuevos minicomputadores PDP-11, primeros en conectar el procesador, los periféricos y la memoria entre sí mediante un BUS bidireccional.

Características del lenguaje C
Son varias las características de C tal y como vemos a continuación.

Estructura de C - Lenguaje estructurado.
Programación de nivel medio (beneficiándose de las ventajas de la programación de alto y bajo nivel).
No depende del hardware, por lo que se puede migrar a otros sistemas.
Objetivos generales. No es un lenguaje para una tarea específica, pudiendo programar tanto un sistema operativo, una hoja de cálculo o un juego.
Ofrece un control absoluto de todo lo que sucede en el ordenador.
Organización del trabajo con total libertad.
Los programas son producidos de forma rápida y son bastante potentes.
Rico en tipo de datos, operadores y variables en C.
Como inconvenientes, siendo también características del lenguaje C, debemos decir que no es un lenguaje sencillo de aprender, que requiere una continua práctica y un serio seguimiento si queremos tener el control de los programas.

Sintaxis en C
Todos los programas que son creados tienen un diferentes tipos de formato. Este formato es conocido como la sintaxis. La sintaxis en C es una serie de reglas y procesos que lideran la estructura de un programa. Estas reglas tienen que ser entendidas por el compilador para que se pueda crear un programa en C válido, es decir, tienen que establecer cómo comienza una línea de código en C, cómo termina o cuándo usar, por ejemplo, comillas o llaves. El lenguaje en C hace distinción entre mayúsculas y minúsculas siendo este el motivo por el que se programa en minúsculas.

La sintaxis básica en C determina la forma en que se agrupan los caracteres para formar tokens, que son la unidad mínima de programación en C. Tomando como ejemplo el programa “Hola Mundo”, usado para la introducción a la mayoría de lenguajes de programación, tendríamos el siguiente código en C:


#include  

int main()

{
    printf("Hola Mundo");  // línea sencilla de comentarios
    return 0;
/* 
línea 
    múltiple de
    comentarios
*/

}


Si seleccionamos sólo la línea de código printf, tendríamos los siguientes tokens: printf, (, “, Hola Mundo, “, ), y ;. Por lo tanto, podemos decir, que estos tokens son los pequeños bloques con los que se programa en C, pudiendo ser variables, identificadores, constantes, palabras clave, símbolos que comprenda el lenguaje o sentencias en lenguaje C.

El comienzo de todo programa en este lenguaje debe comenzar por #include cuya función es inicializar el entorno de trabajo; en nuestro ejemplo, vinculando el archivo stdio.h (biblioteca de C) que a su vez contiene la orden printf. 

La función en lenguaje C int main() hace que el programa vuelva a ese punto de retorno tras ejecutarse y su orden está delimitada entre {}.

Cómo en la mayoría de los lenguajes de programación, nos podemos ayudar de comentarios que el compilador no procesará pero que nos serán de mucha utilidad a la hora de aclarar cualquier concepto en la línea de código. Podemos hacer los comentarios en lenguaje C de dos maneras; una única línea de comentario comenzando con // o en múltiples líneas comenzando y terminando por /*.

Bibliotecas de C
Al hablar de bibliotecas en lenguaje C nos referimos a una serie de librerías que son usadas en este lenguaje de programación y están formadas por una serie de código con el que podemos leer el teclado, realizar operaciones matemáticas, imprimir en pantalla… La biblioteca referente es la estándar de ANSI C formada por 24 archivos de cabecera. Según su tarea, se clasifican en categorías, como por ejemplo matemáticas, de salida y entrada, de uso de textos, de gestión de memoria... 

Entre las librerías más destacadas encontramos stdio.h (de entrada y salida), conio.h (potente gestión de textos), math.h (encargada de operaciones matemáticas), time.h (obtienen fecha y hora actual para poder utilizarla según sus necesidades), etcétera.

En estos momentos, podemos concluir que el lenguaje de programación C es el idóneo para programar sistemas operativos debido a su cercanía en el lenguaje, al igual que cumple con creces en la creación de programas de otra índole y ofrece a los programadores un control total sobre la memoria pudiendo asignarla cómo, cuándo y dónde quieran. Otro punto a destacar es la gran variedad de bibliotecas (como las estándar ASCI) que facilitan mucho al programador la redacción de las acciones a realizar.

Pese a sus virtudes a la hora de programar a nivel de sistema y su versatilidad para afrontar la creación de infinitas clases de aplicaciones, el lenguaje C no siempre es la mejor opción para el programador, sobre todo para el desarrollo de aplicaciones, ya que puede tener errores de compilación que otros lenguajes basados en C, como Java o C++ solventan sin problemas. Tampoco debemos olvidar que no es un lenguaje de programación sencillo, por lo que necesita de mucha disciplina en su estudio y puesta en práctica. Esta dificultad puede verse reducida por la perfecta estructuración del código y por la rapidez y potencia con la que las aplicaciones son generadas.

En conclusión, entendiendo su estructura básica y logrando la familiarización con algunas de sus bibliotecas, no tardaremos en convertir este lenguaje en uno de nuestros favoritos, y podremos empezar así a programar en C con soltura.

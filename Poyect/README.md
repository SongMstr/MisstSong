# Tema: Calculadora de Finanzas Personales.
  Hago este tema porque hasta hace unos años, no sabia nada sobre educacion financieras, asi que pienso hacer un proyeco donde haga una calculadora de ahorros,
  que nos diga cuanto dinero ganas por mes o quiencena vs cuanto gastas por mes o quincena, y tambien el calculo de IVA, tasa de ineteres, etc. 
## Funcionamiento:
### Consola:
   Menu Hare una consola sencilla usandolo como mi main, y hare de las opciones unas subrutinas, para tomar el dato usare
   la funcion scanf() y asignare un número a cada opcion, por lo cual la seleccion de cada una sera dada por un switch(), 
   donde al seleccionar uno de estos, se activara la subrutina que este en el case que se eligio.
      
   El menu de la consola cuenta con 7 opciones, dependiendo de que quiera hacer el usuario.
      
      Los cuales son:
        1. Subrutina Nuevo.
        2. Subrutina Eliminar.
        3. Subrutina Mis Ingresos.
        4. Subrutina Inversiones.
        5. Subrutina Gastos.
        6. Subrutina Extras.
   
   Tambien usare algunas subrutinas que no se veran en consola, como la subrutina error, la cual servira para dar un
   mensaje de advertencia, cuando se quiera manipula el archivo y este haya sido eliminado o cambiado de lugar o nombre
   tambien me sirve como pauta para mandar al usuario a al subrutina nuevo, donde agregara el nuevo dato y se regresara 
   al menu cuampliendo asi con el funcionamiento original.
   
### Headers
      1. El color.h sirve para cambiarle el color a las palabras, para resaltarlas o darles mas 
         presentacion.
      2. El header centrar_texto.h es para que el texto se encuentre en el centro de la consola eso dera organizacion 
         a la consola.
### Librerias         
      1. Se usara la libreria estandar stdio.h.  
      2. Usare tambien la libreria stdlib.h para el funcionamiento de los manipuladores de archivos.
      3. Usare la libreira conio.h para el uso de system("cls"), como limpiado de pantalla para dar mas aires de ser una
         aplicacion.
      4. Utilizare la libreria Math.h para realizar los calculos complejos que se necesiten en el programa.
         
### Subrutinas:
    Para las subrutinas, asignare una para cada "case", asi que, cuando se eliga un case, primero se limpia la pantalla y 
    luego se inicia la subrutina. 
    
    1. Subrutina para agregar el nuevo dato de ingreso o void nuevo():
       Lo que busco aqui es hacer una rutina antierror, ya que un problema con mi programa, es que, ya debe de existir un 
       archivo, para que funcione, pero lo que yo busco es que cree y escriba en un archivo nuevo el dato mas importante 
       del programa el cual son los ingresos de las persona. Esta subrutina me debe de salvarme de el error y problema de 
       que no exista el archivo, un ejemplo seria que el usuario ya no gane la misma cantidad de dinero, no tiene porque 
       modificar el archivo es mas comodo hacerlo desde la consola, asi que eligira la opcion de eliminar el archivo, lo 
       elimina y luego de esto que llame a void nuevo() para crear y hacer el nuevo dato que se guardara en un archivo aparte.
    2. Subrutina Eliminar:
       Esta subrutina es simple, sirve para eliminar el archivo de los ingresos dando pie para escribir uno nuevo llamando 
       a void nuevo().
    3. Subrutina Mis Ingresos:
       Es la mas simple de todas las subrutinas, solo mostrara una los ingresos que el usuario escribio en la subrutina 
       void nuevo().
    4. Subrutina Inversiones:
       Esta subrutina es la que sigue en estudio, pero lo mas seguro es que usare de ejemplo el banco nacional de México 
       (BBVA), con su plan de inversiones en donde solo tomare en cuenta, los datos que ofrecen de las ventajs de invertir 
       con ellos, pero sigue en estudio los calculos de como hacerlo.
    5. Subrutina Gastos:
       En este apartado se tratara el tema de ingresos vs gastos, esto haciendo un calculo de cuanto gasta en promedio de un mes
       vs cuanto gana en un mes, haciendo de este una simple tabla de comparacion en donde se dara el resultado de si se 
       hace rendir el dinero o se deslpifarra. En esto estoy pensado en hacer dos archiovos uno en el que se sume el ingreso 
       quiencenal que introdusca el usuario para tenrlo em meses y en otro donde se sumen los gastos (este sera un archivo 
       hecho por mi, ya que hacer la parte de gastos se supone que esta ligada a la terjeta de debito que posee el usuario, 
       o mas adelante agregar la subrutina de nuevo gasto para llevar un mejor control; como se vaya viendo) para hacer una 
       comparacion de cuanto fue la perdida de ingreso.
    6. Subrutina Extras:
       Aqui lo usare para manipular la subrutina "Mis Ingresos" y Gastos, ya que, cuando trabajas no siempre ganas lo mismo, 
       puede que recibas un bono, vales de despensa, comisiones o de una venta personal, incluso de un prestamo que hayas hecho, 
       esto se agregara al archivo principal pero solo como decoracion de suma donde indique que se ha agregado un ingreso extra 
       y esta se vera reflejado en la subrutina Gastos.
       
       
         
    

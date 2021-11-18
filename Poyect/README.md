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
        5. Subrutina Extras.
   
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
       modificar el archivo es mas comodo hacerlo desde la consola, asi que eligira la opcion de nuevo ingreso, se llama 
       a la subrutina eliminar() despues se pasa a void nuevo() para crear y hacer el nuevo dato que se guardara en un archivo 
       aparte.
    2. Subrutina Eliminar:
       Esta subrutina es simple y se mantiene oculta, sirve para eliminar el archivo de los ingresos dando pie para escribir 
       uno nuevo llamandoa void nuevo().
    3. Subrutina Mis Ingresos:
       Es la mas simple de todas las subrutinas, solo mostrara una los ingresos que el usuario escribio en la subrutina 
       void nuevo().
    4. Subrutina Inversiones:
        Aqui esta puesta la calculadorda es el centro del proyecto, se calculan las cosas que no tiene muy en cuenta las 
        personas, donde se responden las preguntas, ¿ cuanto dinero ganare si escojo esta opcion ?. 
          En esta subrutina se agregan las opciones de ahorro e inversiones que nos da el BBVA en el cual se nos incluye a 
          modo de menu, dadas las opciones con un switch():
            1. Apartados: En el banco BBVA, te da una opcion de hacer un apartado, el cual consiste en el separar una cantidad 
                          fija de ingresos de la nomina del usuario, por un timepo dado en quincenas, se llamara al archivo.txt
                          donde estara guardado la nomina del usuario, se lee el numero. Despues se le pide el dinero que se 
                          quiere guardar (apartado, se soluciono un error en donde si el dinero que se quiere guardar es mayor 
                          que al de nomina, mostrara un mensaje de error que nos envia de nuevo al menu de Inversiones. La 
                          manera de arreglarlo es hacer un calculo el cual el numero que se ingresa el cuanto apartar, este 
                          numero se guarda en una variable(n), despues se usa un if() donde, si (n) es menor que 0, entonces 
                          manda mensaje de error, luego un }else{ que si (n) es mayor que 0, nos manda el caluculo y el programa 
                          funciona normalmente) una ves se guarda calcula el en periodos quincenales.
            2. Plan Bancarios: Aqui es mas sencillo, aqui la opcion es ganar un porcentaje del dinero que quieras guardar por
                               compras que realizes con la tarjeta de debito, en el programa se le pide al usuario cuanto cuesta
                               el objeto y justo despues de se pide el porcetaje que quiere guardar, ambos se guardan en variables
                               distintas, y se multiplican entre mientras que se divide entre 100, para sacar el dinero que se
                               gano con la compra y el porcentaje que escogio.
            3.  Pagare: En esta opcion se da a escoger el dinero que quieres invertir en el banco en cual no se peude retirar
                        el dinero hasta que se cumpla un plazo que el mismo usuario decide, en esta se agrega un menu extra para
                        guiar al usuario sobre cuanto ganara si invierte en unidades mensuales.      
   
    5. Subrutina Extras:
       Aqui lo usare para manipular la subrutina "Mis Ingresos" y Gastos, ya que, cuando trabajas no siempre ganas lo mismo, 
       puede que recibas un bono, vales de despensa, comisiones o de una venta personal, incluso de un prestamo que hayas hecho, 
       esto se agregara al archivo principal pero solo como decoracion de suma donde indique que se ha agregado un ingreso extra 
       y esta se vera reflejado en la subrutina Gastos.
# LINK DEL VIDEO:
        https://youtu.be/bpMp2-bigks
       
       
         
    

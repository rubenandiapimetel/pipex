# pipex


Replica el comportamiento de un pipe en la Shell mediante un pequeño programa

(esto sirve para redireccionar el flujo de los dos comandos desde salida estandar STDOUT a un archivo outfile)

Ejecutar el comnado make

Introducir comandos de la siguiente manera

SI QUIERES: $> < archivo1 comando1 | comando2 > archivo2

        $> < initfile grep a1 | wc > outfile
ESCRIBE: $> ./pipex file "comando1" "comando2" outfile

         $> ./pipex initfile "greap a1" "wc" outfile

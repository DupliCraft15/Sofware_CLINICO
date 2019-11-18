
# ***Especificación de la Clase Tratamiento***

---
	Clase: Tratamiento 
---
Una lista que guarda los tratamientos y la duración de estos los cuales le corresponde a cada paciente.

---
	Datos 
---
* nombredeltratamiento || Cadena de caracteres || Nombre del tratamiento

* duración || Cadena de caracteres || Duracion del tratamiento 

* dnidelpaciente || Cadena de caracteres || Dni del paciente al que le corresponde el tratamiento

---
	Metodo 
---
* añadirtratamiento() || Función que añade una linea a la lista de un paciente o crea una lista de 0 si es el primer tratamiento de dicho paciente.

* consultartratemineto || Imprime la lista de una paciente

* borrartratamiento() || Borra una linea de la lista de un paciente(por nombre del tratamiento) o borra la lista entera si es el unico tratamiento que hay.

* modificartratamiento() || Modifica una linea de la lista de un paciente(por nombre del tratamiento)

* getNombredeltratamiento() : string || Recoge el nombre de un paciente en la variable nombredeltratamiento

* setNombredeltratamiento(nombredeltratamiento : string) : void || Coge la variable nombredeltratamiento

* getDuracion() : string || Recoge la duración de un tratamiento en la variable duracion

* setDuracion(duracion : string) : void || Coge la variable duracion

* getDnidelpaciente() : string || Recoge el DNI de un paciente en la variable dnidelpaciente

* setDnidelpaciente(dnidelpaciente : string) : void || Coge la variable dnidelpaciente

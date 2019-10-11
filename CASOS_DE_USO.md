# Añadir nuevo usuario
---
   **ID**:01 **Descripción**:Se añade un nuevo usuario con todos sus datos(Nombre, Apellido, Dirección, etc).

**Actores principales**:Secretario **Actores secundarios**:Paciente

**Precondiciones**:

 * Ninguna.

**Flujo principal**:

1. El Secretario desea añadir un nuevo paciente
2. El Secretario selecciona la opcion de añadir nuevo paciente y se le abre una ventana
3. El Secretario introduce los datos que pide la ventana
4. Se añade al nuevo paciente a la base de datos del programa

**Postcondiciones**:

 * Ninguna.

**Flujos alternativos**:

3. a. Si no se rellena todos los datos salta un error y vuelve al paso 3
---
---

# BUSCAR PACIENTE POR NOMBRE Y APELLIDO
---
**ID**: 02 **Descripción**: Se introduce el nombre y apellido del paciente que se busca y el sistema lo muestra.

**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Ninguna

**Flujo principal**:

 1. El secretario desea consultar los datos de un paciente
 2. El secretario abre el cuadro de dialogo de busqueda en el menu principal
 3. El secretario introduce el nombre y apellidos del paciente
 4. El sistema muestra por pantalla los datos del paciente

**Postcondiciones**:

   * Se muestran al secretario las distintas operaciones relativas al paciente

**Flujos alternativos**:

 4.a Si el paciente no existe, se muestra un mensaje de error.
---

# MODIFICACIÓN DE LOS DATOS DE UN USUARIO
---
**ID :** 03 **Descripción :**  Una vez encontrado el usuario a partir de la función búsqueda, el sistema pide por teclado el dato a modificar, así como su contenido.

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber llamado a la función búsqueda

**Flujo principal :**

1. El Secretario desea modificar los datos de un paciente
2. El Secretrario realiza la búsqueda del paciente
3. El Secretario abre la opción de modificación de los datos del paciente
4. El Sistema hace elegir al Secretario el/los datos a modificar
5. El Secretario introduce el/los datos a modificar
6. El Sistema muestra por pantalla los datos modificados

**Postcondiciones**
   * Se muestran al Secretario las diferentes opciones relativas al paciente

**Flujos alternativos**

   a. Si el/los datos no es/son válido/s el sistema muestra un mensaje de error;
---

# BORRADO DE LOS DATOS DE UN USUARIO
---
**ID :** 04 **Descripción :**  Una vez encontrado el usuario a partir de la función búsqueda, el sistema pide confirmación para el borrado de los datos del mismo.

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber llamado a la función búsqueda

**Flujo principal :**

1. El Secretario desea borrar los datos de un paciente
2. El Secretrario realiza la búsqueda del paciente
3. El Secretario abre la opción de borrado del paciente
4. El Sistema pide confirmación del inminente borrado
5. El Secretario confirma el borrado
6. El Sistema muestra por pantalla un mensaje donde se confirma que el borrado se ha realizado correctamente

**Postcondiciones**
   * Se muestran al Secretario las diferentes opciones relativas al paciente

**Flujos alternativos**

   a. Si el borrado no se produce correctamete el Sistema manda un mensaje de error;

---

# AÑADIR CITA
---
**ID :** 05 **Descripción :**  Se pide por teclado la fecha, hora, nombre y DNI del paciente para la creacion de una nueva cita en la agenda

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber entrado en las opciones de la agenda

**Flujo principal :**

1. El Secretario desea añadir una cita a la agenda
2. El Secretrario selecciona "AÑADIR CITA" entre las opciones de la agenda
3. El Sistema pide por teclado la fecha, hora y nombre del paciente así como su DNI
4. El Sistema pide confirmación para la creación de dicha cita
5. El Sistema muestra un mensaje indicando el éxito o fracaso al añadir la cita en la agenda

**Postcondiciones**
   * Se muestran al Secretario las diferentes opciones de la agenda

**Flujos alternativos**

   a. Si la fecha hora o DNI no son correctos el sistema mostrará un mansaje de error;

---

# AÑADIR TRATAMIENTO A UN PACIENTE
---
**ID**: 06 **Descripción**: Tras buscar un paciente podemos añadirle un tratamiento
**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Buscar un paciente con la funcion buscarPaciente

**Flujo principal**:

 1. El secretario desea añadir un tratamiento a un paciente
 2. El secretario busca a un paciente gracias a buscarPaciente
 3. El secretario selecciona añadir tratamiento en el menu
 4. El secretario introduce el tratamiento y se añade

**Postcondiciones**:

   * Se muestran al secretario los tratamientos del paciente

**Flujos alternativos**:

 2.a Si el paciente no existe, se muestra un mensaje de error.

---

# MOSTRAR AGENDA
---
**ID**: 07 **Descripción**: Se introduce una fecha y aparecen todas las citas planeadas.

**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Ninguna

**Flujo principal**:

 1. El secretario desea consultar las próximas citas
 2. El secretario introduce la fecha en el menu principal
 3. El sistema muestra por pantalla la hora de las próximas citas de esa fecha


**Postcondiciones**:

   * Se muestran al secretario las distintas operaciones relativas a la modificacion de una cita

**Flujos alternativos**:

 2.a Si se introduce una fecha ya pasada se mostrarán las citas que huvo ese día

---

# CONSULTAR HISTORIAL MÉDICO
---
**ID :** 08 **Descripción :**  Tras la busqueda por DNI de un paciente se muestra su historial médico

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber entrado en las opciones del Paciente

**Flujo principal :**

1. El Secretario debe haber realizado la búsqueda del paciente por DNI
2. El Secretrario selecciona "CONSULTAR HISTORIAL" entre las opciones del Paciente
3. El Sistema muestra un listado con el historial médico del paciente



**Postcondiciones**
   * Se necesita haber buscado al paciente y haber mostrado al Secretario las diferentes opciones del Paciente

**Flujos alternativos**

   a. Si el DNI es erróneo (num de dígitos no correcto u otro fallo del tipo) mostrará un mensaje de error, así mismo si no existe historial del paciente el sistema mostrará un mensaje diciendo que el paciente no ha sido añadido o no tiene historial médico todavía;

---

# CONSULTAR TRATAMIENTO MÉDICO
---
**ID :** 09 **Descripción :**  Tras la busqueda por DNI de un paciente se muestra su tratamiento

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber entrado en las opciones del Paciente, asi como la existencia del paciente

**Flujo principal :**

1. El Secretario debe haber realizado la búsqueda del paciente por DNI
2. El Secretrario selecciona "CONSULTAR TRATAMIENTO" entre las opciones del Paciente
3. El Sistema muestra un listado con el tratamiento médico del paciente



**Postcondiciones**
   * Se necesita haber buscado al paciente y haber mostrado al Secretario las diferentes opciones del Paciente

**Flujos alternativos**

   a. Si el DNI es erróneo (num de dígitos no correcto u otro fallo del tipo) mostrará un mensaje de error, así mismo si no existe tratamiento del paciente el sistema mostrará un mensaje diciendo que el paciente no ha sido añadido o no tiene tratamiento médico todavía;
---

# Buscar cita
---
   **ID**:10 **Descripción**:Se busca una cita programada en el calendario por fecha o nombre y apellido del paciente

**Actores principales**:Secretario **Actores secundarios**:Paciente

**Precondiciones**:

 * Que exista al menos una cita programada en el calendario.

**Flujo principal**:

1. El Secretario selecciona la opcion de busqueda de cita.
2. El Secretario elige la opcion de busqueda por fecha o nombre y apellidos.
3. - a. El Secretario ha elegido fecha y se le muestra si quiere ver una fecha concreta o todas las que tiene programadas.
3. - b. El Secretario ha elegido nombre y apellidos y se le muestra la opcion de introducir los datos y ver todas las citas para dicho paciente.
4. Se le muestra todos los datos de la cita y una opcion para salir de dicha opcion.

**Postcondiciones**:

 * Ninguna.

**Flujos alternativos**:

3. - a. -1 Se introduce un una fecha no valida, lo que hace que la opcion buscar se cierra.
3. - b. -1 Se introduce un nombre y apellidos no validos, lo que hace que la opcion buscar se cierra. 

---

# CANCELAR CITA
---
**ID :** 11 **Descripción :**  Tras la seleccion de una cita en el listado de la agenda, se pide confirmación para su consiguiente eliminación

**Actores principales :** Secretario  **Actores secundarios :** Paciente

**Precondiciones :**
   * Se necesita haber entrado en las opciones de la agenda

**Flujo principal :**

1. El Secretario desea cancelar la cita de un paciente
2. El Secretrario selecciona "CANCELAR CITA" entre las opciones de la agenda
3. El Sistema muestra un listado con las citas creadas
4. El Secretario selecciona la cita a cancelar
5. El Sistema pide confirmación de la consiguiente cancelación de la cita


**Postcondiciones**
   * Se muestran al Secretario las diferentes opciones de la agenda

**Flujos alternativos**

   a. Si la cita ya ha ocurrido en el tiempo, o no es posible su cancelación se muestra un mensaje de error;

---

# BORRA UN TRATAMIENTO
---
**ID**: 12 **Descripción**: Elimina el tratamiento de un paciente buscado anteriormente.

**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Debe existir un tratamiento para poder eliminarlo y buscar a un paciente con la funcion buscarPaciente

**Flujo principal**:

 1. El secretario desea eliminar el tratamiento de un paciente
 2. El secretario busca al paciente que quiere eliminarle el tratamiento con buscarPaciente
 3. El secretario selecciona en el menu eliminar tratamiento
 4. El sistema muestra todos los tratamientos del paciente
 5. El secretario introduce el tratamiento que quiere eliminar

**Postcondiciones**:

   * Se muestra al secretario los tratamientos ya acatualizdos

**Flujos alternativos**:

 2.a Si el paciente no existe se muestra un mensaje de error.
 5.a Si el paciente no tiene tratamientos para eliminar se muestra un mensaje de error
 5.b Si se introduce un tratamiento que no existe se muestra un mensaje de error

---

# MODIFICAR UNA CITA YA CREADA
---
**ID**: 13 **Descripción**: Una vez encontrada la cita a partir de la función buscarCita, el sistema pide por teclado una fecha y hora para actualizar la cita.

**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Se necesita haber encontrado la cita con la función buscarCita

**Flujo principal**:

 1. El secretario desea actualizar la fecha u hora de una cita
 2. El secretario busca la cita gracias a la función buscarCita por nombre y apellidos o fecha
 3. El sistema muestra por pantalla la fecha y hora de la cita
 4. El sistema pide una nueva fecha y hora
 5. El secretario introduce la nueva fecha y hora de la cita y se actualiza

**Postcondiciones**:

   * Se muestra al secretario la cita ya actualizada

**Flujos alternativos**:

 3.a Si el paciente o la cita no existen se muestra un mensaje de error.
 6.a Si la fecha introducida no es valida se muestra un mensaje de error

---

# MODIFICAR UN TRATAMIENTO
---
**ID**: 14 **Descripción**: Modifica el tratamiento de un paciente buscado anteriormente.
**Actores principales**: Secretario **Actores secundarios**:Paciente.

**Precondiciones**:

   * Debe existir un tratamiento para poder modificarlo y buscar a un paciente con la funcion buscarPaciente

**Flujo principal**:

 1. El secretario desea modificar el tratamiento de un paciente
 2. El secretario busca al paciente que quiere modificarle el tratamiento con buscarPaciente
 3. El secretario selecciona en el menu modificar tratamiento
 4. El sistema muestra todos los tratamientos del paciente
 5. El secretario introduce el tratamiento que quiere modificar
 6. El secretario introduce el tratamiento ya modificado

**Postcondiciones**:

   * Se muestra al secretario los tratamientos ya acatualizdos

**Flujos alternativos**:

 2.a Si el paciente no existe se muestra un mensaje de error.
 6.a Si el paciente no tiene tratamientos para modificar se muestra un mensaje de error
 6.b Si el tratamiento no existe se muestra un mensaje de error




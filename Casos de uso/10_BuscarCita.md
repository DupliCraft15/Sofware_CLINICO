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

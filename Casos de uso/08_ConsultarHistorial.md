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

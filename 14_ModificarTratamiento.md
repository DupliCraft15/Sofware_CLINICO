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
---

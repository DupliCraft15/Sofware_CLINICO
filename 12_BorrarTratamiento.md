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

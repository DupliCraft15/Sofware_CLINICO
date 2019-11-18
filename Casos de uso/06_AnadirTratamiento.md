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


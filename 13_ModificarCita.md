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

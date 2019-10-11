**ID**:03 **Nombre**:Modificar los datos de un Paciente

**Prioridad** *(de 1 a 10)*: 6 **Puntos estimado**: 6 **Iteracion**: 1

**Responsable**: *Cristian Alberto Sánchez*

**Descripción**

  *Como administrador quiero modificar los datos de un paciente, eliminando así la posibilidad de datos incorrectos (en la base de datos) sobre el propio paciente

**Validación**

	* Se debe poder realizar la previa búsqueda del usuario para su posterior modificación
	* Se debe poder modificar un paciente siempre que se cumpla la anterior validación
	* La opcion modificar usuario debe de devolverte al menú cuando finalize.

---


**ID**:04 **Nombre**:Borrar los datos de un Paciente

**Prioridad** *(de 1 a 10)*: 9 **Puntos estimado**: 6 **Iteracion**: 1

**Responsable**: *Cristian Alberto Sánchez*

**Descripción**

  *Como administrador quiero eliminar los datos de un paciente, liberando así espacio para la posible incorporación de nuevos pacientes
**Validación**

	* Se debe poder realizar la previa búsqueda del usuario para su posterior eliminación
	* Debe pedirse previa confirmación para el borrado
	* Se debe poder eliminar un paciente siempre que se cumpla la anterior validación
	* La opcion eliminar usuario debe de devolverte al menú cuando finalize.

---

**ID**:05 **Nombre**:Añadir una nueva cita

**Prioridad** *(de 1 a 10)*: 7 **Puntos estimado**: 5 **Iteracion**: 1

**Responsable**: *Cristian Alberto Sánchez*

**Descripción**

  *Como administrador deseo añadir una nueva cita para la correcta organización de la agenda
**Validación**

	* Se debe poder acceder a las opciones de la agenda
	* Se debe introducir datos correctos (sin posibilidad de fechas ya ocurridas)
	* La opcion añadir cita debe de devolverte al menú cuando finalize.

---


**ID**:09 **Nombre**:Consultar Tratamiento

**Prioridad** *(de 1 a 10)*: 7 **Puntos estimado**: 5 **Iteracion**: 1

**Responsable**: *Cristian Alberto Sánchez*

**Descripción**

  *Como administrador deseo añadir una nueva cita para la correcta organización de la agenda
**Validación**

	* Se debe poder acceder a las opciones de la agenda
	* Se debe introducir datos correctos (sin posibilidad de fechas ya ocurridas)
	* La opcion añadir cita debe de devolverte al menú cuando finalize.

---

**ID**:01 **Nombre**:Añadir nuevo usuario

**Prioridad** *(de 1 a 10)*: 8 **Puntos estimado**: 6 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero añadir un nuevo paciente, con todos los datos que este tiene, a la base de datos de todos los pacientes*  

**Validación**

	* Se tiene que rellenar todos los campos para añadir un paciente.
	* Se debe siempre poder añadir un paciente siempre y cuando se cumpla la anterior validación.
	* La opcion añadir usuario debe de devolverte al menú cuando finalize.

---
---

**ID**:10 **Nombre**:Buscar cita

**Prioridad** *(de 1 a 10)*: 6 **Puntos estimado**: 4 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero ver las citas que he tenido o voy a tener de cada paciente o de la fecha introducida*  

**Validación**

	* Siempre se debe mostrar la opcion de busquedad por nombre o por fecha.
	* Si el nombre o la fecha no existe, el programa tiene que decir el error y salirse.
	* Se tiene que mostrar todos los datos de la cita.
	* La opcion buscar cita debe de devolverte al menú cuando finalize.

---
---

**ID**:11 **Nombre**:Cancelar cita

**Prioridad** *(de 1 a 10)*: 6 **Puntos estimado**: 2 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero cancelar una cita que se encuentra programada en la base de datos de citas*  

**Validación**

	* Si el administrador intenta entrar en cancelar cita y no hay citas para el futuro, el programa debe de decirlo y salir.
	* No se debe de poder cancelar citas que ya han sido realizadas.
	* Una vez eliminada, no debe de quedar rastro de esta en la base de datos de citas.
	* La opcion cancelar cita debe de devolverte al menú cuando finalize.

---
---

**ID**:08 **Nombre**:Consultar Historial Medico.

**Prioridad** *(de 1 a 10)*: 8 **Puntos estimado**: 8 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero consultar el historial de cada paciente introduciendo el DNI en el cual se muestre todos los datos acerca de dicha persona*  

**Validación**

	* El DNI introducido debe de corresponder a un paciente registrado anteriormente.
	* Si el DNI es erroneo, el programa se lo comunica al administrador y se sale.
	* Debe de aparecer todos los datos acerca del paciente.
	* La opcion Consultar Historial Medico debe de devolverte al menú cuando finalize.
	
---
---

**ID**:06 **Nombre**:Añadir un tratamiento a un paciente

**Prioridad** *(de 1 a 10)*: 6 **Puntos estimado**: 5 **Iteracion**: 1-2

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero añadir un tratamiento a un paciente que ya esta registrado en la base de datos*  

**Validación**

	* El paciente debe de estar registrado con anterioridad.
	* El tratamiento debe de incluirse a la base de datos con todos los campos rellenos.
	* El tratamiento tambien se incluye en la base de dato del historial medico.
	* La opcion Añadir un tratamiento a un paciente debe de devolverte al menú cuando finalize.

---
---

**ID**:12 **Nombre**:Borrar Tratamiento

**Prioridad** *(de 1 a 10)*: 5 **Puntos estimado**: 5 **Iteracion**: 1-2

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero borrar un tratamiento a un paciente que ya esta registrado en la base de datos*  

**Validación**

	* El paciente debe de estar registrado con anterioridad.
	* El paciente debe de tener al menos un tratamiento.
	* El tratamiento debe de eliminarse sin dejar rastro en la base de datos de tratemientos con todos los campos rellenos.
	* La opcion Borrar Tratamiento a un paciente debe de devolverte al menú cuando finalize.

---
---

**ID**:02 **Nombre**:Buscar Paciente por nombre y apellidos

**Prioridad** *(de 1 a 10)*: 10 **Puntos estimado**: 10 **Iteracion**: 10+

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero buscar un paciente en la base de datos y acceder a toda la informacion relacionada a el*  

**Validación**

	* El paciente debe de estar registrado con anterioridad.
	* Este debe de mostrar sus citas,tratamientos y datos.
	* El programa debe de acceder de forma indirecta a esta funcion sin la necesidad que el administrador seleccione una funcion que la necesite.
	* La opcion Buscar Paciente por nombre y apellidos debe de devolverte al menú cuando finalize.
	
---
---

**ID**:07 **Nombre**:Mostrar Agenda

**Prioridad** *(de 1 a 10)*: 8 **Puntos estimado**: 10 **Iteracion**: 6-7

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero ver la agenda donde se muestra las citas que tengo*  

**Validación**

	* Esta funcion se ejecuta automaticamente cuando se enciende el programa.
	* Muestra solo las citas futuras.
	* Esta funcion se conecta con la base de datos de citas.
	* La opcion Mostrar Agenda debe de devolverte al menú cuando finalize.

---
---

**ID**:14 **Nombre**:Modificar Tratamiento

**Prioridad** *(de 1 a 10)*: 6 **Puntos estimado**: 2 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero modificar un tratamiento que le corresponde a un paciente*  

**Validación**

	* El tratamiento a modificar debe de existir en la base de datos.
	* Se debe de rellenar todos los datos para que se modifique el tratamiento.
	* La opcion Modificar Tratamiento debe de devolverte al menú cuando finalize.

---
---

**ID**:13 **Nombre**:Modificar Cita

**Prioridad** *(de 1 a 10)*: 5 **Puntos estimado**: 1 **Iteracion**: 1

**Responsable**: *Sergey Beryuza*

**Descripción**

  *Como administrador quiero modificar una cita ya creada anteriormente*  

**Validación**

	* La cita a modificar debe de existir en la base de datos.
	* Se debe de rellenar todos los datos para que se modifique la cita.
	* La cita solo se puede modificar si es para el futuro,es decir, si ya no se ha pasado la fecha de esta.
	* La opcion Modificar Cita debe de devolverte al menú cuando finalize.

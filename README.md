# Práctica-3 - ALSE2025-2 G2

## Ejercicio 1: Sistema de Gestión de Biblioteca (versión básica)
### 🧾 Escenario:
Diseña un sistema simple que permita gestionar libros en una pequeña biblioteca.

### ✅ Requisitos:
Crear una clase Libro con atributos: titulo, autor, ISBN/SN, y disponible.
Crear una clase Biblioteca que pueda:
Agregar libros
Eliminar libros
(opcional) Buscar libros por título o autor
Mostrar libros disponibles
Opcional: Agregar una clase Usuario y derivar de ella Estudiante y Profesor, con diferentes límites de préstamos o privilegios.
Estructura basica archivos por proyecto.

Biblioteca/
├── CMakeLists.txt
├── include
│   ├── Biblioteca.h
│   └── Libro.h
└── src
    ├── Biblioteca.cpp
    ├── Libro.cpp
    └── main.cpp


## 🚗 Ejercicio 2: Sistema de Alquiler de Vehículos
### 🧾 Escenario:
Simula un sistema de alquiler de vehículos que gestiona autos y bicicletas.

### ✅ Requisitos:
Clase base Vehiculo con atributos como marca, modelo, placa. La clase Vehiculo debe tener un método mostrarInformacion que muestre un resumen de las características del vehiculo y que pueda ser personalizado por clases deribadas.
Clases derivadas: Auto, Bicicleta (cada una con atributos específicos, por ejemplo capacidadPasajeros para autos y metodos ).
Clase SistemaAlquiler que permita:
Registrar vehículos
Alquilar y devolver vehículos
Mostrar vehículos disponibles
Se debe entregar un documento PDF donde se tenga el enlace  al repositorio que contenga la solución, metodología, aspectos especiales y demas consideraciones.

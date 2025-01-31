# WayfinderPyED

![WayfinderPyED Banner](https://github.com/JavierRangel2004/Final-Pyed/blob/main/banner.png) <!-- Replace with actual image URL if available -->

## Table of Contents

- [Descripción](#descripción)
- [Características](#características)
- [Tecnologías Utilizadas](#tecnologías-utilizadas)
- [Instalación](#instalación)
- [Uso](#uso)
- [Estructura del Proyecto](#estructura-del-proyecto)
- [Datos](#datos)
- [Contribuciones](#contribuciones)
- [Contacto](#contacto)
- [Licencia](#licencia)

## Descripción

**WayfinderPyED** es una aplicación de línea de comandos desarrollada en C++ que permite a los usuarios encontrar rutas óptimas entre diferentes puntos de interés dentro de un mapa predefinido. Utiliza algoritmos de grafos para calcular la ruta más rápida y una ruta alternativa más larga entre dos ubicaciones seleccionadas por el usuario.

Este proyecto es ideal para entender la implementación de estructuras de datos como grafos y algoritmos de búsqueda de rutas en C++.

## Características

- **Interfaz de Usuario Intuitiva:** Navega fácilmente por las opciones disponibles y selecciona tus puntos de inicio y destino.
- **Cálculo de Rutas:** Obtén la ruta más rápida y una ruta más larga entre dos ubicaciones.
- **Visualización de Conexiones:** Muestra las conexiones y distancias entre diferentes nodos del mapa.
- **Gestión de Nodos:** Permite ver detalles completos de cada nodo, incluyendo sus conexiones y distancias.

## Tecnologías Utilizadas

- **Lenguaje de Programación:** C++
- **Compilador:** Compatible con cualquier compilador de C++ estándar (GCC, Clang, MSVC)
- **Sistema de Control de Versiones:** Git

## Instalación

### Prerrequisitos

- **C++ Compiler:** Asegúrate de tener un compilador de C++ instalado. Puedes utilizar GCC, Clang o cualquier otro compilador compatible.
- **Git:** Para clonar el repositorio.

### Pasos de Instalación

1. **Clonar el Repositorio:**

   ```bash
   git clone git@github.com:JavierRangel2004/Final-Pyed.git
   ```

2. **Navegar al Directorio del Proyecto:**

   ```bash
   cd Final-Pyed/WayfinderPyED
   ```

3. **Compilar el Proyecto:**

   Utiliza el siguiente comando para compilar el proyecto. Asegúrate de tener `g++` instalado.

   ```bash
   g++ -o WayfinderPyED WayfinderPyED.cpp MapGrafos.cpp
   ```

   Esto generará un ejecutable llamado `WayfinderPyED` en el directorio actual.

## Uso

1. **Ejecutar la Aplicación:**

   ```bash
   ./WayfinderPyED
   ```

2. **Interacción con el Usuario:**

   - **Selección de Punto de Inicio:**
     - La aplicación mostrará una lista de ubicaciones visibles.
     - Ingresa el ID correspondiente al punto de inicio.
   
   - **Selección de Punto de Destino:**
     - Después de seleccionar el inicio, elige el destino ingresando el ID correspondiente.
   
   - **Visualización de Rutas:**
     - La aplicación mostrará la ruta más rápida y una ruta más larga entre los dos puntos seleccionados.
   
   - **Opciones Adicionales:**
     - Puedes ingresar `0` en cualquier momento para salir de la aplicación.
     - Si seleccionas el nodo con ID `44`, se mostrarán detalles completos de todas las conexiones de ese nodo.

3. **Ejemplo de Uso:**

   ```
   ------Bienvenido a UP Wayfinder------
   ¿En dónde te encuentras?

   1. Donatello
   2. Estacionamiento Rodín
   3. Esquina Rodin-Extremadura
   ...
   Ingresa el ID de INICIO: 1

   A dónde quieres ir?

   1. Donatello
   2. Estacionamiento Rodín
   ...
   Ingresa el ID de FINAL: 2

   Creando rutas....
   Inicio: Donatello
   Fin: Estacionamiento Rodín
   Ruta mas rapida:
   Donatello --> Estacionamiento Rodín
   Ruta mas larga:
   Donatello --> ...
   ```

## Estructura del Proyecto

```
Final-Pyed/
│
├── WayfinderPyED/
│   ├── MapGrafos.cpp
│   ├── MapGrafos.h
│   ├── WayfinderPyED.cpp
│   ├── nodes_data.csv
│   └── .gitattributes
│
├── README.md
└── ... otros archivos y carpetas ...
```

- **WayfinderPyED.cpp:** Archivo principal que contiene la función `main` y la lógica de interacción con el usuario.
- **MapGrafos.cpp & MapGrafos.h:** Implementación de la clase `MapGrafos` que maneja la lógica de grafos y rutas.
- **nodes_data.csv:** Archivo CSV que contiene los datos de los nodos, incluyendo conexiones y distancias.
- **.gitattributes:** Configuración para la normalización de finales de línea en Git.

## Datos

El archivo `nodes_data.csv` contiene la información de los nodos utilizados por la aplicación. Cada nodo tiene:

- **ID:** Identificador único del nodo.
- **Nombre:** Nombre descriptivo de la ubicación.
- **Conexiones:** IDs de los nodos conectados.
- **Distancias:** Distancias correspondientes a cada conexión.
- **Visible:** Indica si el nodo es visible en las opciones de selección.

### Ejemplo de Datos:

```
ID,Nombre,Conexiones,Distancias,Visible
1,Donatello,2,79,TRUE
2,Estacionamiento Rodín,1 3 30,79 36 70,TRUE
...
```

## Contribuciones

¡Las contribuciones son bienvenidas! Si deseas mejorar este proyecto, por favor sigue estos pasos:

1. **Fork el Repositorio**
2. **Crea una Rama Nueva:** `git checkout -b feature/nueva-característica`
3. **Realiza tus Cambios**
4. **Commit y Push:** `git commit -m 'Añadir nueva característica'` y `git push origin feature/nueva-característica`
5. **Abre un Pull Request**

## Contacto

Para cualquier consulta o sugerencia, puedes contactarme a través de:

- **Correo Electrónico:** [inspec_jrm@gmail.com](mailto:inspec_jrm@gmail.com)
- **Repositorio GitHub:** [JavierRangel2004/Final-Pyed](git@github.com:JavierRangel2004/Final-Pyed.git)

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo [LICENSE](LICENSE) para más detalles.

---

¡Gracias por usar **WayfinderPyED**! Si tienes alguna pregunta o encuentras algún problema, no dudes en contactarme.

# WayfinderPyED

![WayfinderPyED Banner](https://github.com/JavierRangel2004/Final-Pyed/blob/main/banner.png) <!-- Replace with actual image URL if available -->

## Table of Contents

- [Descripción](#descripción)
- [Características](#características)
- [Tecnologías Utilizadas](#tecnologías-utilizadas)
- [Instalación](#instalación)
- [Uso](#uso)
- [Estructura del Proyecto](#estructura-del-proyecto)
- [Datos](#datos)
- [Contribuciones](#contribuciones)
- [Contacto](#contacto)
- [Licencia](#licencia)

## Descripción

**WayfinderPyED** es una aplicación de línea de comandos desarrollada en C++ que permite a los usuarios encontrar rutas óptimas entre diferentes puntos de interés dentro de un mapa predefinido. Utiliza algoritmos de grafos para calcular la ruta más rápida y una ruta alternativa más larga entre dos ubicaciones seleccionadas por el usuario.

Este proyecto es ideal para entender la implementación de estructuras de datos como grafos y algoritmos de búsqueda de rutas en C++.

## Características

- **Interfaz de Usuario Intuitiva:** Navega fácilmente por las opciones disponibles y selecciona tus puntos de inicio y destino.
- **Cálculo de Rutas:** Obtén la ruta más rápida y una ruta más larga entre dos puntos seleccionados.
- **Visualización de Conexiones:** Muestra las conexiones y distancias entre diferentes nodos del mapa.
- **Gestión de Nodos:** Permite ver detalles completos de cada nodo, incluyendo sus conexiones y distancias.

## Tecnologías Utilizadas

- **Lenguaje de Programación:** C++
- **Compilador:** Compatible con cualquier compilador de C++ estándar (GCC, Clang, MSVC)
- **Sistema de Control de Versiones:** Git

## Instalación

### Prerrequisitos

- **C++ Compiler:** Asegúrate de tener un compilador de C++ instalado. Puedes utilizar GCC, Clang o cualquier otro compilador compatible.
- **Git:** Para clonar el repositorio.

### Pasos de Instalación

1. **Clonar el Repositorio:**

   ```bash
   git clone git@github.com:JavierRangel2004/Final-Pyed.git
   ```

2. **Navegar al Directorio del Proyecto:**

   ```bash
   cd Final-Pyed/WayfinderPyED
   ```

3. **Compilar el Proyecto:**

   Utiliza el siguiente comando para compilar el proyecto. Asegúrate de tener `g++` instalado.

   ```bash
   g++ -o WayfinderPyED WayfinderPyED.cpp MapGrafos.cpp
   ```

   Esto generará un ejecutable llamado `WayfinderPyED` en el directorio actual.

## Uso

1. **Ejecutar la Aplicación:**

   ```bash
   ./WayfinderPyED
   ```

2. **Interacción con el Usuario:**

   - **Selección de Punto de Inicio:**
     - La aplicación mostrará una lista de ubicaciones visibles.
     - Ingresa el ID correspondiente al punto de inicio.
   
   - **Selección de Punto de Destino:**
     - Después de seleccionar el inicio, elige el destino ingresando el ID correspondiente.
   
   - **Visualización de Rutas:**
     - La aplicación mostrará la ruta más rápida y una ruta más larga entre los dos puntos seleccionados.
   
   - **Opciones Adicionales:**
     - Puedes ingresar `0` en cualquier momento para salir de la aplicación.
     - Si seleccionas el nodo con ID `44`, se mostrarán detalles completos de todas las conexiones de ese nodo.

3. **Ejemplo de Uso:**

   ```
   ------Bienvenido a UP Wayfinder------
   ¿En dónde te encuentras?

   1. Donatello
   2. Estacionamiento Rodín
   3. Esquina Rodin-Extremadura
   ...
   Ingresa el ID de INICIO: 1

   A dónde quieres ir?

   1. Donatello
   2. Estacionamiento Rodín
   ...
   Ingresa el ID de FINAL: 2

   Creando rutas....
   Inicio: Donatello
   Fin: Estacionamiento Rodín
   Ruta mas rapida:
   Donatello --> Estacionamiento Rodín
   Ruta mas larga:
   Donatello --> ...
   ```

## Estructura del Proyecto

```
Final-Pyed/
│
├── WayfinderPyED/
│   ├── MapGrafos.cpp
│   ├── MapGrafos.h
│   ├── WayfinderPyED.cpp
│   ├── nodes_data.csv
│   └── .gitattributes
│
├── README.md
└── ... otros archivos y carpetas ...
```

- **WayfinderPyED.cpp:** Archivo principal que contiene la función `main` y la lógica de interacción con el usuario.
- **MapGrafos.cpp & MapGrafos.h:** Implementación de la clase `MapGrafos` que maneja la lógica de grafos y rutas.
- **nodes_data.csv:** Archivo CSV que contiene los datos de los nodos, incluyendo conexiones y distancias.
- **.gitattributes:** Configuración para la normalización de finales de línea en Git.

## Datos

El archivo `nodes_data.csv` contiene la información de los nodos utilizados por la aplicación. Cada nodo tiene:

- **ID:** Identificador único del nodo.
- **Nombre:** Nombre descriptivo de la ubicación.
- **Conexiones:** IDs de los nodos conectados.
- **Distancias:** Distancias correspondientes a cada conexión.
- **Visible:** Indica si el nodo es visible en las opciones de selección.

### Ejemplo de Datos:

```
ID,Nombre,Conexiones,Distancias,Visible
1,Donatello,2,79,TRUE
2,Estacionamiento Rodín,1 3 30,79 36 70,TRUE
...
```

## Contribuciones

¡Las contribuciones son bienvenidas! Si deseas mejorar este proyecto, por favor sigue estos pasos:

1. **Fork el Repositorio**
2. **Crea una Rama Nueva:** `git checkout -b feature/nueva-característica`
3. **Realiza tus Cambios**
4. **Commit y Push:** `git commit -m 'Añadir nueva característica'` y `git push origin feature/nueva-característica`
5. **Abre un Pull Request**

## Contacto

Para cualquier consulta o sugerencia, puedes contactarme a través de:

- **Correo Electrónico:** [inspec_jrm@gmail.com](mailto:inspec_jrm@gmail.com)
- **Repositorio GitHub:** [JavierRangel2004/Final-Pyed](git@github.com:JavierRangel2004/Final-Pyed.git)

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo [LICENSE](LICENSE) para más detalles.

---

¡Gracias por usar **WayfinderPyED**! Si tienes alguna pregunta o encuentras algún problema, no dudes en contactarme.
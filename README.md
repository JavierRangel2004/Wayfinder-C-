# WayfinderPyED

![GitHub Repo stars](https://img.shields.io/github/stars/JavierRangel2004/Final-Pyed)
![GitHub issues](https://img.shields.io/github/issues/JavierRangel2004/Final-Pyed)
![GitHub license](https://img.shields.io/github/license/JavierRangel2004/Final-Pyed)

**WayfinderPyED** is a C++ application designed to help users navigate through the UP campus by finding the fastest and longest routes between various locations. Utilizing graph data structures, WayfinderPyED provides an interactive command-line interface for efficient route planning.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Data](#data)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [Contact](#contact)
- [License](#license)

---

## Introduction

Navigating a large campus can be challenging, especially for new students and visitors. **WayfinderPyED** aims to simplify this by providing an easy-to-use tool that calculates the fastest and longest routes between any two points within the UP campus. Whether you're looking to save time between classes or explore the campus extensively, WayfinderPyED has got you covered.

---

## Features

- **Interactive CLI:** User-friendly command-line interface for easy navigation.
- **Route Calculation:** Computes both the fastest and longest routes between selected points.
- **Data-Driven:** Utilizes a CSV file to manage node data, making it easy to update and maintain.
- **Visibility Control:** Allows certain nodes to be visible or hidden based on specific criteria.
- **Error Handling:** Robust input validation to ensure smooth user experience.

---

## Data

The application relies on a CSV file (`nodes_data.csv`) that contains information about each node (location) on the campus. This file includes the node's ID, name, connections to other nodes, distances, and visibility status.

### `nodes_data.csv`

```csv
ID,Nombre,Conexiones,Distancias,Visible
1,Donatello,2,79,TRUE
2,Estacionamiento Rodín,1 3 30,79 36 70,TRUE
3,Esquina Rodin-Extremadura,2 4,36 18,FALSE
4,Estacionamiento Extremadura,3 5,18 92,TRUE
5,Esquina Jerez-Extremadura,4 6,92 140,FALSE
6,Esquina Jerez-Valencia,5 7 8,140 88 49,FALSE
7,Entrada Valencia,6 46,88 1,TRUE
8,Edificio Rectoría,6 9,49 40,TRUE
9,Esquina Algeciras-Jerez,8 10 17,40 42 87,FALSE
10,Esquina Algeciras-Malaga,9 11,42 140,FALSE
11,Esquina Malaga-Actipan,10 12 13,140 8 46,FALSE
12,Verdanna,11,8,TRUE
13,Edificio Málaga,11 14,46 34,TRUE
14,Chilaquiles Campana,13 15,34 5,TRUE
15,Edificio Campana,14 16,5 76,TRUE
16,Esquina Campana-Parroquia,15 18 19,76 33 63,FALSE
17,Esquina Algeciras-Parroquia,9 18,87 53,FALSE
18,Parroquia de Santo Domingo,16 17,33 53,TRUE
19,Edificio Periquillo,16 20 24,63 4 47,TRUE
20,ParquePaloma1,19 21,4 8,FALSE
21,ParquePaloma2,20 22,8 3,FALSE
22,ParquePaloma3,21 23,3 2,FALSE
23,Entrada UP-Parque de la Paloma,22 26 31,2 7 3,TRUE
24,Esquina Campana-Rodín,19 25,47 35,FALSE
25,Edificio Anexo,24 26,35 10,TRUE
26,Calle Rodín-Anexo,25 23 27,10 7 51,FALSE
27,Esquina Rodín-Goya,26 28 29,51 180 63,FALSE
28,UP-Goya,27,180,TRUE
29,Residencia UP,27 30,63 26,TRUE
30,Entrada UP-Rodín,29 2 47,26 70 41,TRUE
31,Pasillo 1,23 32,3 9,FALSE
32,Jardin Casco Antiguo,31 33 34,9 3 6,FALSE
33,Edificio Casco Antiguo,32,3,TRUE
34,Escaleras Chancellor,32 35,6 2,FALSE
35,Arcos Chancellor,34 36,2 3,FALSE
36,Mesas Jardin Central Arriba,35 37 38,3 7 8,FALSE
37,Edificio Chancellor,36,7,TRUE
38,Jardin Central,36 39 44,8 32 5,FALSE
39,Café Diseño,38 40,32 5,FALSE
40,Biblioteca Valencia,39 41,5 13,FALSE
41,Jardín Jerez,40 42 43,13 2 2,FALSE
42,Edificio Jerez,41,2,TRUE
43,Edificio Valencia,41,2,TRUE
44,Estatua San Jose Maria,38 45,5 2,FALSE
45,Pasillo 2,44 46,2 2,FALSE
46,Caseta Vigilancia,45 7 47,2 1 8,FALSE
47,Pasillo 3,46 30,8 41,FALSE
```

---

## Installation

### Prerequisites

- **C++ Compiler:** Ensure you have a C++ compiler installed (e.g., `g++`).
- **C++ Standard Library:** The code uses C++11 standards.
- **CMake (Optional):** For building the project using CMake.

### Steps

1. **Clone the Repository:**

   ```bash
   git clone git@github.com:JavierRangel2004/Final-Pyed.git
   cd Final-Pyed/WayfinderPyED
   ```

2. **Compile the Code:**

   Using `g++`:

   ```bash
   g++ -o WayfinderPyED WayfinderPyED.cpp MapGrafos.cpp
   ```

   Alternatively, using `make` if a Makefile is provided:

   ```bash
   make
   ```

3. **Ensure Data File is Present:**

   Make sure `nodes_data.csv` is located in the same directory as the executable or adjust the path in the code accordingly.

---

## Usage

1. **Run the Application:**

   ```bash
   ./WayfinderPyED
   ```

2. **Interact with the Application:**

   - **Welcome Screen:** The program displays a welcome message and prompts you to enter the ID of your starting location.
   - **Select Start Location:** Input the ID corresponding to your current location.
   - **Select Destination:** After selecting the start location, input the ID of your desired destination.
   - **View Routes:** The application will display both the fastest and the longest routes between the selected points.
   - **Exit:** Enter `0` at any prompt to exit the application.

### Example Session

```
------Bienvenido a UP Wayfinder------
¿En donde te encuentras?

1. Donatello
2. Estacionamiento Rodín
...
O ingresa 0 para salir
Ingresa el ID de INICIO: 1
[Screen Clears]

¿A donde quieres ir?

1. Donatello
2. Estacionamiento Rodín
...
O ingresa 0 para salir
Ingresa el ID de FINAL: 2
[Screen Clears]

Creando rutas....
Inicio: Donatello
Fin: Estacionamiento Rodín
Ruta mas rapida:
Donatello --> Estacionamiento Rodín

Ruta mas larga:
Donatello --> ... --> Estacionamiento Rodín
```

---

## Project Structure

```
Final-Pyed/
├── .gitattributes
├── WayfinderPyED/
│   ├── nodes_data.csv
│   ├── WayfinderPyED.cpp
│   ├── MapGrafos.cpp
│   └── MapGrafos.h
├── README.md
└── LICENSE
```

### File Descriptions

- **.gitattributes:** Configures Git to handle text file normalization, ensuring consistent line endings across different operating systems.
  
  ```plaintext
  # Auto detect text files and perform LF normalization
  * text=auto
  ```

- **WayfinderPyED/nodes_data.csv:** Contains the data for each node, including connections and distances.
  
- **WayfinderPyED/WayfinderPyED.cpp:** Main application file handling user interaction and program flow.
  
- **WayfinderPyED/MapGrafos.cpp:** Implements the `MapGrafos` class, which manages the graph data and route calculations.
  
- **WayfinderPyED/MapGrafos.h:** Header file declaring the `MapGrafos` class and its functionalities.

---

## Contributing

Contributions are welcome! To contribute, please follow these steps:

1. **Fork the Repository**
2. **Create a Feature Branch**

   ```bash
   git checkout -b feature/YourFeature
   ```

3. **Commit Your Changes**

   ```bash
   git commit -m "Add some feature"
   ```

4. **Push to the Branch**

   ```bash
   git push origin feature/YourFeature
   ```

5. **Open a Pull Request**

Please ensure your code adheres to the project's coding standards and includes necessary documentation.

---

## Contact

For any inquiries or support, please reach out to:

- **Email:** [inspec_jrm@gmail.com](mailto:inspec_jrm@gmail.com)

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgements

- **NLTK Documentation:** Provided guidance for handling language processing issues.
- **C++ Community:** For continuous support and resources.

---

**Happy Navigating!** 🚀

If you encounter any issues or have suggestions for improvements, feel free to open an issue or submit a pull request. Your feedback is highly appreciated!
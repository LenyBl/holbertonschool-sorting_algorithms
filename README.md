# holbertonschool-sorting_algorithms

![C Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Project-Active-success.svg)
![Holberton](https://img.shields.io/badge/Holberton-School-red.svg)
![License](https://img.shields.io/badge/License-Unspecified-lightgrey.svg)

Projet Holberton School implémentant plusieurs **algorithmes de tri** en
langage C, accompagnés d'analyses de complexité.

------------------------------------------------------------------------

## 📌 Table des matières

-   Description générale
-   Fonctionnalités
-   Structure du dépôt
-   Prérequis
-   Compilation
-   Exemples d'utilisation
-   Contribuer
-   Licence
-   Auteurs

------------------------------------------------------------------------

## 🧩 Description générale

Ce dépôt contient des implémentations complètes de tris classiques,
ainsi que leur étude Big O.

------------------------------------------------------------------------

## ⚙️ Fonctionnalités

-   Bubble Sort\
-   Insertion Sort (liste chaînée)\
-   Selection Sort\
-   Quick Sort\
-   Affichage des étapes intermédiaires\
-   Fichiers Big O dédiés

------------------------------------------------------------------------

## 📁 Structure du dépôt

    holbertonschool-sorting_algorithms/
    ├── sort.h
    ├── 0-bubble_sort.c
    ├── 1-insertion_sort_list.c
    ├── 2-selection_sort.c
    ├── 3-quick_sort.c
    ├── *.O
    └── README.md

------------------------------------------------------------------------

## 🔧 Prérequis

-   GCC\
-   Linux / macOS / WSL

------------------------------------------------------------------------

## 🛠️ Compilation

``` bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o sorting_algorithms
```

------------------------------------------------------------------------

## 💡 Exemple

``` c
int array[] = {4, 3, 7, 1};
bubble_sort(array, 4);
```

------------------------------------------------------------------------

## 🤝 Contribuer

Fork → Branche → Commit → Pull Request

------------------------------------------------------------------------

## 📄 Licence

Non spécifiée (droit d'auteur par défaut)

------------------------------------------------------------------------

## 👤 Auteurs

-   [Blee Leny](https://github.com/LenyBl)
-   [Kedia Ihogoza](https://github.com/Kedia12)

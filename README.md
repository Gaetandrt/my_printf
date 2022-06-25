# My_printf

[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](https://github.com/Gaetandrt)  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://fr.wikipedia.org/wiki/C_(langage))  [![linkedin-](https://user-images.githubusercontent.com/91087072/175767199-5ecadc72-20a2-42dc-a24f-3a601bba5ddb.svg)](https://www.linkedin.com/in/gaetan-darrort/)

Reproduction de la fonction printf de la bibliothèque C.

## Qu'est que printf ?

printf (pour l'anglais print formatted, soit « imprimer formaté ») est une [commande Unix](https://fr.wikipedia.org/wiki/Commandes_Unix)permettant de faire afficher une [chaîne de caractères](https://fr.wikipedia.org/wiki/Cha%C3%AEne_de_caract%C3%A8res) à l'écran.

C'est aussi un nom de fonction du [langage C](https://fr.wikipedia.org/wiki/C_(langage)), et de nombreux autres langages informatiques permettant d'afficher une ou plusieurs variables de façon formatée dans le flux de sortie.

### Compétences travaillées

- Comprendre le fonctionnement de printf
- Une bonne gestion des flags et des options
- Structure du code

### Installation

Une fois le code compilé, vous aurez un fichier "libmy.a". Il s'agit du fichier a include lors de la compilation afin de pouvoir utiliser la fonction printf.

## Syntaxe

int printf(const char* format, ...);

## Format

|Type|Lettre|
|--|--|
|int|%d / %i|
|long|%ld / %li|
|short|%hd / %hi|
|float / double|%f|
|char|%c|
|string (char *)|%s|
|pointeur (void *)|%p|
|entier hexadécimal|%x / %X|
|entier octal|%o|
|entier non signé|%u|
|caractère %|%%|

## Fabriqué avec

* [Visual Studio Code](https://code.visualstudio.com/) - Environnement de développement
* [C](https://fr.wikipedia.org/wiki/C_(langage)) - Langage de programmation

# Stéganographie et Qt

## Description

Ce programme permet de décoder un message caché dans un fichier texte à l'aide d'un algorithme de stéganographie simple.
L'utilisateur est invité à sélectionner un fichier texte contenant le message codé et le programme affiche le message décodé.
Le programme extrait la clé de codage du premier caractère numérique, soustrait la clé de chaque caractère numérique restant et affiche le message décodé.

Le programme a été développé en utilisant le framework Qt et le langage C++. 

## Fonctionnalités

Le programme permet à l'utilisateur de :
- Sélectionner un fichier texte contenant le message codé à l'aide d'un explorateur de fichiers.
- Afficher le contenu du fichier texte sélectionné dans une zone de texte.
- Décoder le message caché et afficher le message décodé dans une autre zone de texte.

## Comment exécuter le programme

1. Clonez le dépôt Github sur votre ordinateur en utilisant la commande suivante :`git clone https://github.com/votre_nom/utilitaire-decodage-steganographie-qt.git`
2. Ouvrez Qt Creator et cliquez sur *Fichier -> Ouvrir un projet*.
3. Naviguez jusqu'au répertoire du dépôt cloné et sélectionnez le fichier `utilitaire-decodage-steganographie-qt.pro`.
4. Cliquez sur le bouton *Exécuter* pour lancer le programme.


![Capture d’écran du 2023-04-21 16-07-02](https://user-images.githubusercontent.com/44653107/233657040-43eab448-e032-4027-a1c3-13fac35b9360.png)

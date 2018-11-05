# IHM: Labo2_FFMPEG

Auteurs: J.Châtillon, J.Smit

Pour lancer le programme, il faut l'ouvrir sur QTCreator à l'aide du fichier "IHM_Labo02_Code.pro". Attention, pour que ça fonctionne, il faut désactiver le shadow build.

Le programme est fonctionnel sur Windows car c'est l'os le plus utilisé. De plus, nous n'avions pas d'autre OS pour le tester.

![Interface](.\Interface.PNG)

Choix d'implémentations:

- Nous avons décidé de faire notre application en anglais car c'est le langage le plus parlé dans le monde.
- Pour les messages d'informations, nous avons établis un code couleur:
  - Rouge: Erreur, ça ne fonctionne pas, on ne peut pas générer les résultats.
  - Orange: Warrning, ça fonctionne, on ne peut générer les résultats mais il se peut qu'il y ait de répercutions mineurs (par exemple, la remplacement d'un fichier existant)
  - Vert: OK, tout est bon.
- Nous avons décidé de faire des messages d'erreurs cours et concis pour ne pas surcharger l'utilisateur.
- Nous avons décidé de traiter les vidéos au heures minutes secondes. Il n'est pas possible de traiter un fichier s'il dure moins d'une seconde (certains fichiers qui ne sont pas une vidéo peuvent générer un temps < 1s).
- Pour la sélection du temps nous avons fait plusieurs choix:
  - L'unité est toujours affichée au dessus entre [] pour que l'utilisateur ne soit jamais perdu.
  - Il est possible de changer avec les flèches ou bien directement avec le clavier.
  - Il n'est pas possible de sélectionner un temps < 0secondes et > au temps maximum de la vidéo.
  - Le temps de fin ne peut être inférieur au temps du début et inversement.
  - Il n'est pas possible de séléctionner un temps de moins d'une seconde.
  - Nous avons décidé de ne pas mettre des sliders pour la sélection du temps, car nous les trouvions imprécis. De plus ça aurait fait une manière de plus pour le sélectionner et nous estimions que 2 est largement suffisant. Une troisième porterait confusion à l'utilisateur à cause du choix trop grand.
- Tant qu'une vidéo n'est pas choisie (input video), tous les autres éléments sont désactivés. Nous avons décidé de quand même les laisser affiché car l'utilisateur va de toute façon les voir après et il peut directement se familiariser avec l'interface.
- Lors de la génération de la commande, le fichier source et de destination sont les fichiers affiché dans les labels en vert et non dans les inputs fields. Nous avons décidé cela car ces champs sont vérifiés et contrôlés. Il n'est pas possible de générer un champs avec des valeurs erronées.
- Nous avons décidé de fixer la taille de la fenêtre car il n'est pas nécessaire de pouvoir l'agrandie.
- Nous avons volontairement laissé le champs ou est généré la commande éditable. Cela permet à l'utilisateur de la modifier s'il le veut.
- Nous avons décidé de laisser le bouton quitter par défaut.

## Amélioration possibles

Cette rubrique contient toutes les idées d'améliorations possibile à apporter à l'application. Ces idées n'ont pas été implémentée à cause de limitations technologique ou manque de connaissances technologique. Les images sont la pour illustrer les propos, il faudrait les adapter et les mettre 

- Insertion d'une "bande" qui contient la vidéo en entier comme sur les Iphones. Ceci permettrai de bien visualiser quelle est le segment de vidéo choisit. On aurait placé cette item au-dessous du champ "total video duration".

![Bandideo](.\bandeVideo.jpg)



- Pour les champs de sélections du temps, on pourrait mettre une flèche d'incrément pour chacune des valeurs (heures, minutes et secondes.)

![timePicker](.\timePicker.png)



- Faire en sorte que les times picker soient cycliques et qu'arriver au maximum d'une unité augmente la suivante. Par exeple, après 1minutes 59, appuiyer sur la flèche qui augmente fasse passer à 2 minutes 00.
- Ne laisser que les extensions possible lors de la sélecition du  fichier vidéo à traîter. Cela limiterait les possibilité d'erreurs pour l'utilisateurs.

![browser](.\Browser.PNG)

- Faire en sorte de pouvoir utiliser l'application sous n'importe quel OS.
- Ajouter un bouton "copy to clip board" qui permet à l'utilisateur de copier la commande (raccourcis ctrl + v).
- Ajouter une pop-up de confirmation lors que l'on veut quitter l'application.
- Faire en sorte que les données soient persistantes entre 2 utilisations.
- Ajouter un bouton qui remet tous les champs à leur état initiaux.
- Ajouter un historique des commandes. Cela permettrait à l'utilisateur de retrouver facilement certaines commandes qu'il a fait au préalable.
- Ajouter un bouton pour exécuter les commandes.



## Remarques

Nous transmettons nos remerciement à M.Châtillon pour nous avoir un petit peu aidé.
Nous nous excusions s'il reste des fautes d'orthographes.
Comme c'est un travail d'interface, nous avons concentré notre productivité sur ce domaine.
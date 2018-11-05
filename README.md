# IHM: Labo2_FFMPEG

Auteurs: J.Châtillon, J.Smit

![Interface](.\Interface.PNG)

Choix d'implémentations:

- Nous avons décidé de faire notre application en anglais car c'est le langage le plus parlé dans le monde.
- Pour les messages d'informations, nous avons établis un code couleur:
  - Rouge: Erreur, ça ne fonctionne pas, on ne peut pas générer les résultats.
  - Orange: Warrning, ça fonctionne, on ne peut générer les résultats mais il se peut qu'il y ait de répécutions mineurs (par exemple, la remplacement d'un fichier existant)
  - Vert: OK, tout est bon.
- Nous avons décidé de faire des messages d'erreurs cours et concis pour ne pas surcharger l'utilisateur.
- Nous avons décidé de traiter les vidéos au heures minutes secondes. Il n'est pas possible de traiter un fichier si il dure moins d'une seconde (certains fichiers qui ne sont pas une vidéo peuvent générer un temps < 1s).
- Pour la selection du temps nous avons fait plusieurs choix:
  - L'unité est toujours affichée au dessus entre [] pour que l'utilisateur ne soit jamais perdu.
  - Il est possible de changer avec les flèches ou bien directement avec le clavier.
  - Il n'est pas possible de séléctionner un temps < 0secondes et > au temps maximum de la vidéo.
  - Le temps de fin ne peut être inférieur au temps du début et inversement.
  - Il n'est pas possible de séléctionner un temps de moins d'une seconde.
  - Nous avons décidé de ne pas mettre des sliders pour la sélection du temps, car nous les trouvions imprécis. De plus ça aurait fait une manière de plus pour le séléctionner et nous éstimions que 2 est largement suffisant. Une troisième porterait confusion à l'utilisateur à cause du choix trop grand.
- Tant qu'une vidéo n'est pas choisie (input video), tous les autres éléments sont désactivé. Nous avons décidé de quand même les laisser affiché car l'utilisateur va de toute façon les voir après et il peut directement se familiariser avec l'interface.
- Lors de la génération de la commande, le fichier source et de destination sont les fichié affiché dans les labels en vert et non dans les inputs fields. Nous avons décidé cela car ces champs sont verifié et controllé. Il n'est pas possible de générer un champs avec des valeurs érronées.
- Nous avons décidé de fixer la taille de la fenêtre car il n'est pas nécessaire de pouvoi l'agrandire.


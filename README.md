# Catapulte
(Présentation vidéo:) [https://youtu.be/81aZ2BLnnBU]

<p align="center">
  <img src="https://github.com/AnaCarolinaRobl/Catapulte/assets/80722112/739bc98d-3570-4ec2-bdef-f0239f61c9e7" width="342" height="256" />
</p>

Dépôt créé pour stocker le projet développé pour le TP C++.

Les codes présentés ici sont complémentaires au maquette de la catapulte. Celle-ci a pour objectif de frapper la balle de ping-pong dans un verre positionné à différentes distances de la maquette.

## Chargement du code sur la carte

Pour exécuter le code, il est nécessaire d'ouvrir le fichier nommé "Main.ino", disponible dans le dossier "Main", sur l'interface *Arduino*. Ensuite, il suffit de charger le code "Main" sur le module utilisé.

Il est important que l'utilisateur ait activé les exceptions dans l'interface Arduino, pour que le code fonctionne correctement. Pour activer les exceptions, il suffit de suivre l'image ci-dessous :

<p align="center">
  <img src="https://github.com/AnaCarolinaRobl/Catapult/assets/80722112/c4c89094-3208-4a7d-b495-26d2fd30d997" width="400" height="200" />
</p>

## Fonctionnement de la maquette

En réglant le potentiomètre, l'utilisateur peut modifier l'étirement de l'élastique par le moteur, ce qui augmente (plus l'élastique est étiré) la distance à parcourir pour lancer la balle.
En cliquant sur le bouton, l'utilisateur peut ouvrir et fermer le verrou (Trigger-Servo) de la catapulte.

### Instructions pas à pas

Dans le cas où le bras mobile est libre et que le verrou est ouverte

1. L'utilisateur doit tourner le potentiomètre jusqu'à ce qu'il atteigne l'étirement minimum possible de l'élastique (dans le cas où il n'est pas au minimum). 
2. L'utilisateur doit abaisser le bras mobile de la catapulte jusqu'à une position inférieure à le verrou et cliquer sur le bouton pour fermer le verrou.
3. L'utilisateur place la balle de ping-pong sur le bouchon de bouteille fixé au bras.
4. L'utilisateur tourne le potentiomètre pour tendre l'élastique.
5. L'utilisateur clique sur le bouton pour ouvrir le verrou et lancer la balle.

Si le bras mobile est lâche, mais que le verrou est fermée, avant l'étape 1, l'utilisateur doit ouvrir la serrure en appuyant sur le bouton.

Si le bras est déjà verrouillé par le verrou, l'utilisateur doit commencer par l'étape 3.

## Important

Après avoir chargé le code, l'utilisateur doit laisser le module connecté à l'ordinateur pour alimenter le système.

Le servomoteur qui contrôle la position de l'élastique est connecté au port D3, si vous voulez le changer, il est nécessaire de changer la constante "elasticPin" dans la ligne 7 du code Main.ino.

Le servomoteur qui contrôle si la catapulte est bloquée ou non est connecté au port D7, pour le changer il suffit de changer la constante "triggerPin", disponible à la ligne 9 du code Main.ino.

Le potentiomètre et le bouton sont connectés aux ports A0 et D8 respectivement, pour les changer il faut changer les constantes potPin (pour le potenciomètre) et buttonPin (pour le bouton), disponibles sur les lignes 10 et 11 du code Main.

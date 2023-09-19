# Vector, list, deque

En C++, les `vector`, `list`, et `deque` sont trois conteneurs différents pour stocker des données. Chacun de ces conteneurs a ses propres avantages et inconvénients, et le choix entre eux dépend des besoins spécifiques de votre application. Voici les principales différences entre ces trois types de conteneurs :

1. Vector (`std::vector`) :
    - Implémentation basée sur un tableau dynamique.
    - Accès aléatoire rapide en O(1).
    - Ajout ou suppression d'éléments en fin de conteneur rapide en moyenne, mais potentiellement coûteux en cas d'insertion ou de suppression au milieu.
    - Bonne utilisation de la mémoire pour des séquences de taille fixe ou qui augmentent progressivement.

2. List (`std::list`) :
    - Implémentation basée sur une liste doublement chaînée.
    - Accès aléatoire lent en O(n) car il nécessite de parcourir la liste.
    - Ajout ou suppression d'éléments en tout point de la liste rapide en O(1).
    - Utilisation de la mémoire légèrement plus élevée en raison de la surcharge des pointeurs de chaînage.

3. Deque (`std::deque`, abréviation de "double-ended queue") :
    - Implémentation basée sur une structure de données hybride, généralement une collection de tableaux dynamiques.
    - Accès aléatoire rapide en O(1) comme un vector.
    - Ajout ou suppression d'éléments en début ou en fin de conteneur rapide en O(1).
    - Ajout ou suppression d'éléments au milieu moins efficace qu'un vector mais plus efficace qu'une list en moyenne.
    - Utilisation de la mémoire similaire à celle d'un vector.

En résumé, voici quand choisir chaque conteneur :

- Utilisez un `vector` lorsque vous avez besoin d'un accès aléatoire rapide et que vous ajoutez ou supprimez principalement des éléments en fin de conteneur.
- Utilisez une `list` lorsque vous avez besoin d'ajouter ou de supprimer fréquemment des éléments en milieu de conteneur, même si l'accès aléatoire est moins important.
- Utilisez un `deque` lorsque vous avez besoin d'accès aléatoires rapides, d'ajout/suppression en début ou en fin de conteneur, et que vous voulez un compromis entre les performances d'un `vector` et d'une `list`.

Le choix dépendra de vos besoins spécifiques en termes de performances, de gestion de la mémoire et de types d'opérations que vous effectuez sur les données stockées.
# ExamRank05_42

Modules CPP

## Résultat

![Screen Shot 2022-01-31 at 11 24 57 AM](https://user-images.githubusercontent.com/6265441/151777199-3f5ba074-2445-4233-bae3-ae17f31e5350.png)

## Tutoriel
### CPP Module 00

Aucune instruction précise pour celui-là, il faut le connaitre par coeur.
Astuce important pour tout l'examen, utilisez 

```
#pragma once
```

dans vos headers, économie de ligne par rapport à ifndef.

### CPP Module 01

C/C les fichiers du Module 00, il faudra rajouter un attribut dans Warlock.hpp :

```
std::vector<ASpell *> spells;
```

Et il faudra rajouter les methodes suivante :

```
void				learnSpell(ASpell *);
void				forgetSpell(const std::string &);
void				launchSpell(const std::string &, const ATarget &);
```

L'autre fichier a apprendre par coeur c'est ASpell.{hpp, cpp}
Ce fichier permettra avec un C/C de créer ATarget.{hpp, cpp}.

Apprenez absolument la commande vim :

```
%s/ancien/nouveau/g
```

Exemple, une fois que vous avez C/C ASpell en ATarget, vous exécutez cette commande :

```
%s/ASpell/ATarget/g
```

Il faut aussi remplacer la fonction launch par la fonction getHitBySpell.

Prototype :

```
void  getHitBySpell(const ASpell &) const;
```

Corps de la fonction :

```
void				ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
```

Ensuite il faut créer le fichier Fwoosh.{hpp, cpp}, à apprendre par coeur aussi.
Il vous servira à créer le fichier Dummy.{hpp, cpp} qui a pour simple différence de faire un héritage depuis ATarget.

N'oubliez pas :

```
cp Fwoosh.hpp Dummy.hpp
vim Dummy.hpp
%s/Fwoosh/Dummy/g
```

Vous gagnerez beaucoup de temps.

Fini pour le CPP Module 01.

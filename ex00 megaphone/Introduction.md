1) ###########

Fichiers à rendre : Makefile, megaphone.cpp

Afin de s’assurer que tout le monde est bien réveillé, écrivez un programme qui se
comporte comme suit :

$>./megaphone 
* LOUD AND UNBEARABLE FEEDBACK NOISE *

2) ###########

Fichiers à rendre : Makefile, *.cpp, *.{h, hpp}

Bienvenue dans les années 80 et leur incroyable technologie ! Concevez un programme qui se comporte comme un répertoire pas si incroyable que ça.

Vous devez implémenter deux classes :
	• PhoneBook
		◦ Représente le répertoire.
		◦ Contient un tableau de contacts.
		◦ Peut enregistrer 8 contacts maximum. Si l’utilisateur tente d’ajouter un 9ème contact, bloquer l'ajout et sortez un message d'erreur
		◦ l’allocation dynamique est interdite.
	• Contact
		◦ Représente un contact dans le répertoire.

Dans votre code, l’objet répertoire doit être une instance de la classe PhoneBook.
Même chose pour les objets contacts, qui doivent être chacun une instance de la classe Contact. 

Au lancement du programme, le répertoire est vide et l’utilisateur peut entrer une commande.

Le programme accepte les entrées suivantes : ADD, SEARCH et EXIT.
	• ADD : enregistrer un nouveau contact
		◦ Si l’utilisateur entre cette commande, le programme lui demande de remplir
			une par une les informations du nouveau contact. Une fois tous les champs
			complétés, le nouveau contact est ajouté au répertoire.
		◦ Un contact possède les champs suivants : first name (prénom), last name (nom de famille), nickname (surnom), phone number (numéro de téléphone), et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne peuvent être vides.
	• SEARCH : affiche le contact demandé
	• EXIT
		◦ Le programme quitte et les contacts sont perdus à jamais !
	• Toute autre entrée est ignorée.

Une fois la commande correctement exécutée, le programme attend à nouveau une
entrée. Il prend fin lorsque l’utilisateur entre EXIT.

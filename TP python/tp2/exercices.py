
#exercices de strings
def ex1_palindrome(text:str)->bool:
    text = text.lower()
    return text == text[::-1]


def ex2_trouver_positions(chaine : str, sous_chaine:str):
    positions :list[int]= []
    index :int = chaine.find(sous_chaine)

    while index != -1:
        positions.append(index)
        index = chaine.find(sous_chaine, index + 1)

    return positions

def ex3(text:str)->None:
    l :list[str] = text.split(" ")
    for x in l:
        print(x)
        print(f"de longueur {len(x)} lettres")
        print("===========================")

#exercices de tuples
def afficher_candidats(noms, prenoms, ages):
    triplets : tuple[tuple[str, str, int], ...] =tuple(zip(noms, prenoms, ages))

    for nom, prenom, age in triplets:
        print(f"Le nom est {nom.upper()}, le prénom est {prenom.capitalize()} et l'âge est {age}")

#exercice set

def filtrer_mots_vides_set(phrase: str, stopwords: set[str]) -> set[str]:
    return {mot.lower() for mot in phrase.split()} - stopwords
#exercice dict

def inverser_dictionnaire(dico: dict[str, str]) -> dict[str, str]:
    return {valeur: cle for cle, valeur in dico.items()}


def compter_occurrences(phrase: str) -> dict[str, int]:
    mots = phrase.lower().split()
    occurrences: dict[str, int] = {}
    for mot in mots:
        mot = mot.strip(".,!?;:")
        if mot:
            occurrences[mot] = occurrences.get(mot, 0) + 1
    return occurrences

#ces deux fonction sont de meme exercice (bl3arbi nest7a9 fonction saisir ll fonction chercher)

def saisir_etudiants() -> dict[tuple[str, str], float]:
    etudiants: sict[tuple[str, str], float] = {}

    nb_etudiants: int = int(input("Combien d'étudiants souhaitez-vous saisir ? "))

    for i in range(1, nb_etudiants + 1):
        print(f"\n--- Étudiant {i} ---")
        nom: str = input("Nom : ").strip().lower()
        prenom: str = input("Prénom : ").strip().lower()
        note: float = float(input("Note : "))

        etudiants[(nom, prenom)] = note

    return etudiants


def chercher_note(etudiants: dict[tuple[str, str], float], nom: str, prenom: str) -> None:
    cle = (nom.strip().lower(), prenom.strip().lower())
    if cle in etudiants:
        print(f"\nLa note de {prenom.capitalize()} {nom.upper()} est : {etudiants[cle]}/20")
    else:
        print(f"\nAucun étudiant trouvé sous le nom de {prenom.capitalize()} {nom.upper()}.")


def main()->None:
    pass


if __name__ == "__main__":
    main()




# les listes
def liste_exercice1 ():
    liste = [1,23,46,56,75,6,86]

    L_pair = [l for l in liste if l % 2 == 0]
    L_impair = [l for l in liste if l % 2 == 1]

    print(L_pair)
    print(L_impair)

def liste_exercice2 ():
    n = int(input("n: "))
    lcara = []
    for i in range(n):
        lcara.append(input(f"lcara[{i}]: ")[0])
    print(lcara)
    voyelle = ['a', 'e', 'u', 'i', 'o', 'y']
    lvoy = [li for li in lcara if li.lower() not in voyelle]
    print(f"la liste sans voyelle: {lvoy}")


def liste_exercice3 ():
    jours = (31,28,31,30,31,30,31,31,30,31,30,31)
    mois = ("january","february","march","april","may","june","july","august","september","october","november","december")
    def coupler(mois, jours):
        return list(zip(mois,jours))
    print(coupler(mois,jours))

def liste_exercice4 ():
    L = [[1,2,3],[4,5,6],[7,8,9]]

    new_l = [L[x//3][x%3] for x in range(len(L)*len(L[0])) ]

    print(new_l)

def liste_exercice5() :
    def aff(M): 
        print("---------------")
        for i in range(len(M)):
            for j in range(len(M[i])):
                print(f"{M[i][j]} ", end="|")
            print()
        print("---------------")
        
    import random
    n = int(input("n: "))
    m = int(input("m: "))
    M = []
    for i in range(n):
        M.append([])
        for j in range(m):
            M[i].append([])
            M[i][j] = random.randint(10, 99)
    aff(M)
    MT = []
    for i in range(m):
        MT.append([])
        for j in range(n):
            MT[i].append([])

    for i in range(m):
        for j in range(n):
            MT[i][j] = M[j][i]
    aff(MT)

# Les chaines de caracteres
def chaines_exercice1():
    ch = input("donner une chaine: ")
    left = 0
    right = len(ch) - 1
    ok = True
    while (left < right and ok): 
        if ch[left] != ch[right]:
            ok = False
        left += 1
        right -= 1
    if (ok): print(f"{ch}: est palaindrome")
    else : print(f"{ch}: n'est pas palaindrome")

def chaines_exercice2():
    ch1 = input("ch1: ")
    ch2 = input("ch2: ")
    idx = ch1.find(ch2)
    pos = []
    while (idx != -1):
        pos.append(idx)
        idx = ch1.find(ch2, idx+1)
    print(pos)

def chaines_exercice3():
    ch = input("phrase: ")
    ch.strip()
    mot = [[m, len(m)] for m in ch.split(" ") if m]
    print(mot)

# les tuples
def tuples_exercice():
    nom = ["ben rjab", "ben salah", "ahmed"]
    prenom = ["yassine", "oussama", "mostfa"]
    age = [12, 20, 26]
    zippedList = list(zip(nom, prenom, age))
    for nom, prenom, age in zippedList:
        print(f"le nom est {nom}, le prenom est {prenom}, l'age est {age}")

# les sets
def sets_exercice():
    stopwords = {'le', 'la', 'les', 'un', 'une', 'des', 'de', 'et', 'ou', 'dans', 'sur', 'dans'}
    ch = input("phrase: ")
    nonVide = [mot for mot in [m for m in ch.lower().split(" ") if m] if mot not in stopwords]
    print(nonVide)

# les dictionnaire
def dict_exercice1():
    dict_en_fr = {
            "cat": "chat",
            "dog": "chien",
            "apple": "pomme"
    }
    dict_fr_en = {value: key for key, value in dict_en_fr.items()}
    print(f"dict en/fr: {dict_en_fr}")
    print(f"dict fr/en: {dict_fr_en}")

def dict_exercice2():
    occ = {}
    ch = input("phrase: ")
    mots = [m for m in ch.lower().split(" ") if m]
    for mot in mots:
        occ[mot] = occ.get(mot, 0) + 1
    print(occ)

def dict_exercice3():
    notes = {}
    n = int(input("n: "))
    for i in range(n):
        print(f"=== Etudiant {i+1} ===")
        nom = input("nom: ").strip().capitalize()
        prenom = input("prenom: ").strip().capitalize()
        note = float(input("note: "))
        notes[(nom, prenom)] = note
    print("*** Determiner la note d'un Etudiant ***")
    nom = input("nom: ").strip().capitalize()
    prenom = input("prenom: ").strip().capitalize()
    print(notes[(nom, prenom)])

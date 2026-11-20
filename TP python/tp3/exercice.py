def exercice1(liste,transformer, filterer):
    
    
    #list1 = list(filter(lambda x: x % 2 == 0, list1))
    #list1 = list(map(lambda n: n+1, list1))

    return [transformer(n) for n in liste if filterer(n)]




def exercice2(etudiants):
    """
    paires = map(lambda e: (e["note"], e), etudiants)
    triee = sorted(paires, key=lambda paire: paire[0])
    etudiants_tries = list(map(lambda paire: paire[1], triee))

    return etudiants_tries
    """
    return sorted(etudiants, key=lambda e: e["note"])


if __name__ == '__main__':
    list1 = [1, 2, 3, 4, 5]
    l = exercice1(list1, lambda n: n+1, lambda x: x % 2 == 0)

    #print(l)

    etudiants = [
    {"nom": "Amine", "note": 15},
    {"nom": "Rayen", "note": 12},
    {"nom": "Youssef", "note": 18},
    {"nom": "Aziz", "note": 14},]
    etudiants_tries = exercice2(etudiants)
    print(etudiants_tries)
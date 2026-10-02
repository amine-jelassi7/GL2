#exercice 1
def exercice1 ()->None :
    liste : list = [1,23,46,56,75,6,86]



    L_pair : list =[]
    L_impair : list =[]

    for i in range(len(liste)):
        if liste[i]%2==0:
            L_pair.append(liste[i])
        else :
            L_impair.append(liste[i])


    print(L_pair)
    print(L_impair)



#exercice 2

def exercice2 ()->None :
    def supprime_voyelle(liste :list)->list :
        result :list = []
        for i in range(len(liste)):
            if liste[i] not in ("a","e","i","o","u","y"):
                result.append(liste[i])

        return result


#exercice 3
def exercice3 ()->None :
    jours : tuple = (31,28,31,30,31,30,31,31,30,31,30,31)
    mois : tuple = ("january","february","march","april","may","june","july","august","september","october","november","december")


    def coupler(mois :tuple, jours :tuple)->list :
        return list(zip(mois,jours))

    print(coupler(mois,jours))

#exercice 4
def exercice4 ()->None :
    L :list = [[1,2,3],[4,5,6],[7,8,9]]

    new_l : list = [L[x//3][x%3] for x in range(len(L)*len(L[0])) ]

    print(new_l)

def exercice4_methode2 ()->None :
    L: list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    flat = [item for sublist in L for item in sublist]
    print(flat)

def exercice5 ()->None :



if __name__ == "__main__":
    exercice4_methode2()




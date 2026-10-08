#exercice 1
def exercice1 ()->None :
    liste : list [int] = [1,23,46,56,75,6,86]

    L_pair : list [int] =[]
    L_impair : list [int] =[]

    for i in range(len(liste)):
        if liste[i]%2==0:
            L_pair.append(liste[i])
        else :
            L_impair.append(liste[i])

    print(L_pair)
    print(L_impair)



#exercice 2

def exercice2 ()->None :
    def supprime_voyelle(liste :list [str])->list [str] :
        result :list[str] = []
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
    L :list [list [int]] = [[1,2,3],[4,5,6],[7,8,9]]

    new_l : list [int] = [L[x//3][x%3] for x in range(len(L)*len(L[0])) ]

    print(new_l)

def exercice4_methode2 ()->None :
    L: list [list [int]] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    flat: list [int] = [item for sublist in L for item in sublist]
    print(flat)

def exercice5 (matrix : list[list[int]])->list[list[int]] :
    n : int = len(matrix)
    m : int = len(matrix[0])

    return [[matrix[i][j] for i in range(n)] for j in range(m)];

def exercice6 (nombres : list[int])->list[int] :
    return sorted(set(nombres))



if __name__ == "__main__":
    print(exercice5([[1, 2], [3, 4]]))
    print(exercice6([4, 2, 7, 2, 4, 1, 9, 7, 3]))




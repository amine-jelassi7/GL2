def exercice1(): 
    list1 = [1, 2, 3, 4, 5]
    def filter_nbre_pair(n):
        return n % 2 == 0
    list1 = list(filter(filter_nbre_pair, list1))

    list1 = list(map(lambda n: n+1, list1))

    print(list1)



if __name__ == '__main__':
    exercice1()
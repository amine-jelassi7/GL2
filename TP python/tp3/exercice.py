def exercice1(transformer, filterer):
    list1 = [1, 2, 3, 4, 5]
    
    #list1 = list(filter(lambda x: x % 2 == 0, list1))
    #list1 = list(map(lambda n: n+1, list1))

    list1 = [transformer(n) for n in list1 if filterer(n)]

    return list1



if __name__ == '__main__':
    l = exercice1(lambda n: n+1, lambda x: x % 2 == 0)

    print(l)
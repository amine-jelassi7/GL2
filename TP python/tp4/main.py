from functools import wraps



def repeter(n):
    def decorator(func):
        @wraps(func)
        def wrapper(*args, **kwargs):
            for _ in range(n):
                func(*args, **kwargs)
        return wrapper
    return decorator

@repeter(3)
def dire_bonjour():
    print("Bonjour !")


def compteur(func):
    
    @wraps(func)
    def wrapper(*args, **kwargs):
        wrapper.count += 1
        return func(*args, **kwargs)
    wrapper.count = 0
    return wrapper


@compteur
def dire_au_revoir():
    print("Au revoir !")



def positifs(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        cond = True
        for arg in args:
            if isinstance(arg, (int, float)) and arg < 0:
                cond = False
                break
        if cond:
            return func(*args, **kwargs)
        else:
            print("Erreur : tous les arguments doivent être positifs.")
    return wrapper

@positifs
def somme(a, b):
    return a + b

def mesurer(seuil):
    def mesure(func):
        @wraps(func)
        def wrapper(*args, **kwargs):
            import time
            start_time = time.perf_counter()
            result = func(*args, **kwargs)
            end_time = time.perf_counter()

            if end_time - start_time > seuil:
                print(f"Temps d'exécution de {func.__name__}: {end_time - start_time:.6f} secondes")
            return result
        return wrapper
    return mesure

@mesurer(seuil=0.5)
def dire_bonjour2():
    import time
    time.sleep(1) 
    print("Bonjour avec délai !")

if __name__ == "__main__":
    dire_bonjour()
    dire_au_revoir()
    dire_au_revoir()
    print(f"La fonction 'dire_au_revoir' a été appelée {dire_au_revoir.count} fois.")

    print(somme(5, 10))  
    print(somme(-5, 10))

    dire_bonjour2()

    

    
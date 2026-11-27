from functools import wraps
import random
import time




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
    time.sleep(1) 
    print("Bonjour avec délai !")



def timer(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        start_time = time.perf_counter()
        try:
            return func(*args, **kwargs)
        finally:
            duree = time.perf_counter() - start_time
            if duree > 0.3:
                print(
                    f"Temps d'exécution de {func.__name__} supérieur à 0.3 secondes "
                    f"({duree:.6f} secondes)"
                )
            else:
                print(f"Temps d'exécution de {func.__name__} : {duree:.6f} secondes")

    return wrapper


def retry(max_tentatives):
    if max_tentatives < 1:
        raise ValueError("max_tentatives doit être supérieur ou égal à 1.")

    def decorator(func):
        @wraps(func)
        def wrapper(*args, **kwargs):
            last_error = None
            for tentative in range(1, max_tentatives + 1):
                try:
                    return func(*args, **kwargs)
                except Exception as e:
                    last_error = e
                    print(f"Tentative {tentative}/{max_tentatives} échouée : {e}")
            print(f"Échec après {max_tentatives} tentatives.")
            raise last_error

        return wrapper

    return decorator


@timer
@retry(max_tentatives=5)
def verifier_disponibilite(service):
    time.sleep(0.1)
    if random.random() < 0.7:
        print(f"Le service '{service}' est indisponible.")
        return None
        #raise ConnectionError(f"Le service '{service}' est indisponible.")
    return f"Le service '{service}' est disponible."


if __name__ == "__main__":
    """
    dire_bonjour()
    dire_au_revoir()
    dire_au_revoir()
    print(f"La fonction 'dire_au_revoir' a été appelée {dire_au_revoir.count} fois.")

    print(somme(5, 10))  
    print(somme(-5, 10))

    dire_bonjour2()
    """

    

    print(verifier_disponibilite("serveur"))

    
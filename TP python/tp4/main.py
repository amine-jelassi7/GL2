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



def Timer(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        start_time = time.perf_counter()
        try:
            return func(*args, **kwargs)
        finally:
            end_time = time.perf_counter()
            print(f"Temps d'exécution de {func.__name__}: {end_time - start_time:.6f} secondes")
    return wrapper


def retry(max_tentative):
    def decorator(func):
        @wraps(func)
        def wrapper(*args, **kwargs):
            last_error = None
            for tentative in range(max_tentative):
                try:
                    return func(*args, **kwargs)
                except Exception as e:
                    last_error = e
                    print(f"Tentative {tentative + 1} échouée : {e}")
            print(f"Échec après {max_tentative} tentatives.")
            if last_error:
                raise last_error
        return wrapper
    return decorator


@Timer
@retry(3)
def verifier_disponibilite(service):
    time.sleep(random.uniform(0.2, 0.8))  # Simule le temps de réponse
    if random.random() < 0.7:             # 70 % de risque d'échec
        raise ConnectionError(f"Le service '{service}' est indisponible.")
    print(f"Le service '{service}' est disponible.")


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

    

    verifier_disponibilite("serveur")

    
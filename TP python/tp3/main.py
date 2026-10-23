


def traiter_commande(id_commande: int,/,quantite:int,*,remise :float = 0.0,urgent:bool = False )->str :
     return f"id: {id_commande} quantite: {quantite} remise:  {remise} urgent: {urgent}"

def parler_enthousiasme(msg:str,/,*,exclam:int =1,maj:bool = False)->str :
    if maj : msg = msg.upper()
    msg += exclam*"!"
    return msg

def creer_champ(
    nom: str,
    /,
    type_: str = "texte",
    *options,
    requis: bool = False,
    **attributs
) -> dict:
    return {"nom":nom , "type_":type_, "options":options, "requis":requis, "attributs":attributs}


def main()->None:
    #print(traiter_commande(1,12,remise=0,urgent=True))
    print(parler_enthousiasme("bonjour senior",exclam=4,maj=True))
    #print(creer_champ("mot_de_passe", "password", placeholder="8+ caractères", minlength=8, class_="form-control"))



if __name__ == '__main__':
    main()
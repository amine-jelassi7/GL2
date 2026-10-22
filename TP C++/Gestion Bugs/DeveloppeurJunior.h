#include "Developpeur.h"

class DeveloppeurJunior : public Developpeur{
    private:
        int heuresSurStackOverflow; 
    public:
        DeveloppeurJunior(string nom, int anneesExperience, int heuresSurStackOverflow) : Developpeur(nom, anneesExperience), heuresSurStackOverflow(heuresSurStackOverflow){

        }
        void coder();
        void afficher() const override;
};

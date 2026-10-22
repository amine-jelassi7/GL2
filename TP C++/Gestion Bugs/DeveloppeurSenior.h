#include "Developpeur.h"

class DeveloppeurSenior : public Developpeur{
    private:
       int projetsLivres; 
    public:
       DeveloppeurSenior(string nom, int anneesExperience, int projetsLivres);
       void coder();
       void corrigerBug();
       void afficher() const override;
};

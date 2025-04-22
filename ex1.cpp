#include <iostream>
#include <string>

using namespace std;
class Etudiant {
    private: 
        int matricule;
        string nom;
        int nbrNots;
        float *tabNots;
        static int n;
    public:
        Etudiant (){
            matricule = 0;
            nom = "";
            nbrNots = 0;
            tabNots = new float[nbrNots];
        }

        Etudiant (string nomE , int nb){
            n=0;
            n++;
            matricule = n;
            nom = nomE;
            nbrNots = nb;
            tabNots = new float[nbrNots];
        }
        string getNom() {
            return nom;
        }
        void setNom(string nomE){
            nom = nomE;
        }
        int getMatricule(){
            return matricule;
        }
        void setMatricule(int mat){
            matricule = mat;
        }
        int getNbrNots(){
            return nbrNots;
        }
        void setNbrNots(int nb){
            nbrNots = nb;
        }
        float *getTabNots(){
            return tabNots;
        }
        void setTabNots(float *tab){
            tabNots = tab;
        }
        void saisir(){
            cout<<"Donner le nom de l'etudiant : ";
            cin>>nom;
            cout<<"Donner le nombre de notes : ";
            cin>>nbrNots;
            tabNots = new float[nbrNots];
            for (int i = 0; i < nbrNots; i++)
            {
                cout<<"Donner la note "<<i+1<<" : ";
                cin>>tabNots[i];
            }
        }        
        void afficher(){
            cout<<"Nom : "<<nom<<endl;
            cout<<"Matricule : "<<matricule<<endl;
            cout<<"Nombre de notes : "<<nbrNots<<endl;
            cout<<"Les notes :\n";
            for (int i = 0; i < nbrNots; i++)
            {
                cout<<tabNots[i]<<"\n";
            }
            cout<<endl;
        }
        float moyenne(){
            float somme = 0;
            for (int i = 0; i < nbrNots; i++)
            {
                somme += tabNots[i];
            }
            return somme/nbrNots;
        }
        bool admis(){
            if (moyenne()>=10)
            {
                return true;
            }
            return false;
        }
};

int main(){
    Etudiant e1;
    e1.saisir();
    e1.afficher();
    cout<<"La moyenne de l'etudiant est : "<<e1.moyenne()<<endl;
    if (e1.admis())
    {
        cout<<"L'etudiant est admis.\n";
    }
    else
    {
        cout<<"L'etudiant n'est pas admis.\n";
    }
    return 0;
}
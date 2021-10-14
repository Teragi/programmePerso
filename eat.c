//Mon programme est une sorte de mini livre de recette pour les étudiants qui fait en sorte de proposer 5 plats faciles à reproduire pour un étudiant.

#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef struct
{
    string plat;
    int temps;
    int prix;
}
menu;

void carte(menu l[]);

int main(void)
{
    menu list[5]; //Tableau de recettes
  
    list[0].plat = "Quesadillas"; //Proposition 1
    list[0].temps = 30;
    list[0].prix = 5;
  
    list[1].plat = "Croque Monsieur"; //Proposition 2
    list[1].temps = 15;
    list[1].prix = 8;
  
    list[2].plat = "Gratin de pâte au chorizon"; //Proposition 3
    list[2].temps = 20;
    list[2].prix = 7;
  
    list[3].plat = "Salade fraîcheur"; //Proposition 4
    list[3].temps = 10;
    list[3].prix = 4;
  
    list[4].plat = "Gnocchis au saumon"; //Proposition 5
    list[4].temps = 10;
    list[4].prix = 2;
  
    //Variable réponses
    string answer = "";
    string answer1 = "Menu";
    string answer2 = "Rien";
  
    do
    {
        answer = get_string("Que voulez-vous manger aujourd'hui ? (Menu / Rien)\n");
        if (strcmp(answer, answer1) == 0)
        {
            carte(list);
        }
    }
    while (strcmp(answer, answer2) != 0);
  
  
  
}

void carte(menu l[])
{
    string name = 
        get_string("Quel plat vous donne le plus envie ? (Quesadillas / Croque Monsieur / Gratin de pâte au chorizon / Salade fraîcheur / Gnocchis au saumon)\n");
  
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(l[i].plat, name) == 0)
        {
            printf("%s a %i min de préparation et cela coûte %i€ par personne.\n", l[i].plat, l[i].temps, l[i].prix);
        }
    }
} 

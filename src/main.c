#include <stdio.h>
#include <ctype.h> // Pour toupper()

int main() {
    int femmes_majeures = 0;
    int femmes_mineures = 0;
    int hommes_majeurs = 0;
    int hommes_mineurs = 0;
    int annee_courante = 2025;
    int annee_naissance, age;
    char sexe;

    // Boucle pour 10 personnes
    for (int i = 1; i <= 10; i++) {
        printf("\n--- Personne %d ---\n", i);
        printf("Entrez l'année de naissance : ");
        scanf("%d", &annee_naissance);

        printf("Entrez le sexe (F pour femme, M pour homme) : ");
        scanf(" %c", &sexe); // Espace avant %c pour ignorer les retours à la ligne
        sexe = toupper(sexe); // Convertir en majuscule

        age = annee_courante - annee_naissance;

        if (sexe == 'F') {
            if (age >= 18) {
                printf("Bonjour madame, vous êtes majeure\n");
                femmes_majeures++;
            } else {
                printf("Bonjour madame, vous êtes mineure\n");
                femmes_mineures++;
            }
        } 
        else if (sexe == 'M') {
            if (age >= 18) {
                printf("Bonjour monsieur, vous êtes majeur\n");
                hommes_majeurs++;
            } else {
                printf("Bonjour monsieur, vous êtes mineur\n");
                hommes_mineurs++;
            }
        } 
        else {
            printf("Sexe non reconnu, entrée ignorée\n");
        }
    }

    // Résumé final
    printf("\n--- Résultats finaux ---\n");
    printf("Femmes majeures : %d\n", femmes_majeures);
    printf("Femmes mineures : %d\n", femmes_mineures);
    printf("Hommes majeurs : %d\n", hommes_majeurs);
    printf("Hommes mineurs : %d\n", hommes_mineurs);

    return 0;
}

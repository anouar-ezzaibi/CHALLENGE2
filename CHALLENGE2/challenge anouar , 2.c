
//challenge 1
#include <stdio.h>

int main() {
    int nombre; 

    printf("Entrez un nombre : ");
    scanf("%d", &nombre); 

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre); 
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0; 
}


//challenge 2
#include <stdio.h>

int main() {
    char c; 

    printf("Entrez un caractère : ");
    scanf(" %c", &c); 


    switch(c) {
        case 'a';
        case 'e';
        case 'i'; 
        case 'o';
        case 'u'; 
        case 'A'; 
        case 'E'; 
        case 'I'; 
        case 'O'; 
        case 'U';
            printf("%c est une voyelle.\n", c); 
            break; 
        default:
            printf("%c n'est pas une voyelle.\n", c); 
    }

    return 0; 
}
//challenge 3
#include <stdio.h>

int main() {
    int num1, num2, total;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    total = num1 + num2;

    if (num1 == num2) {
        total *= 3; 
    }

    
    printf("The result is: %d\n", total);

    return 0;
}
//challenge 4
 #include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Entrez les coefficients a, b et c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont: %.2lf et %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("La solution unique est: %.2lf\n", root1);
    } else {
        printf("Pas de solutions réelles.\n");
    }

    return 0;
}
//chellange 5
#include <stdio.h>


int main(){
    int annee,nb;
    printf("Entrez le nombre d'annees a convertir : ");
    while (scanf("%d", &annee) != 1 || annee < 0) {
        printf("saisir un nombre entier positif !!! : ");
        while (getchar() != '\n'); // Clear invalid input
    }
    
    do{
        printf("\nMenu de conversion d'annee:\n");
        printf("1 Convertir en mois.\n");
        printf("2 Convertir en jours.\n");
        printf("3 Convertir en heures.\n");
        printf("4 Convertir en minutes.\n");
        printf("5 Convertir en secondes.\n");
        printf("6 EXIT.\n");
        printf("Veuillez choisir un nombre : ");

        while(scanf("%d",&nb) != 1 || nb < 1 || nb > 6 ){
            printf("veuillez entrer un nombre entre 1 et 6 : ");
            while (getchar() != '\n');
        }


        switch(nb){
            case 1:
                printf("%d annees = %d mois",annee,annee*12);
                break;
            case 2:
                printf("%d annees = %d jours",annee,annee*365);
                break;
            case 3:
                printf("%d annees = %d heures",annee,annee*365*24);
                break;
            case 4:
                printf("%d annees = %d minutes",annee,annee*365*24*60);
                break;
            case 5:
                printf("%d annees = %d secondes",annee,annee*(365*24*60*60));
                break;
            case 6:
                printf("Exiting\n");
                break;
            default:
                printf("Choix invalide, veuillez reessayer.\n");
                break;
        }

    }while(nb!=6);

    return 0;
}
        

//CHELANGE 6

#include <stdio.h>

int main() {
    float number;

    printf("Entrez un nombre: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Le nombre %.2f est positif.\n", number);
    } else if (number < 0) {
        printf("Le nombre %.2f est négatif.\n", number);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
//chellange 7
#include <stdio.h>

int main() {
    char character;

    printf("Entrez un caractère: ");
    scanf(" %c", &character); 

    if (character >= 'A' && character <= 'Z') {
        printf("'%c' est un alphabet majuscule.\n", character);
    } else {
        printf("'%c' n'est pas un alphabet majuscule.\n", character);
    }

    return 0;
}
//chellange 8
#include <stdio.h>

int main() {
    float moyenne;

    
    printf("Entrez la moyenne de l'élève: ");
    scanf("%f", &moyenne);

    
    if (moyenne < 10) {
        printf("Mention: Recalé\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention: Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention: Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention: Bien\n");
    } else {
        printf("Mention: Très bien\n");
    }

    return 0;
}
//CHALLENGE 9
#include <stdio.h>

int main() {
    char character;

    printf("Entrez un caractère: ");
    scanf(" %c", &character); 

     if ((character >= 'A' && character <= 'Z')) {
        printf("'%c' est une majuscule.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("'%c' est une minuscule.\n", character);
    } else {
        printf("'%c' n'est pas un alphabet.\n", character);
    }

    return 0;
}
//CHELLANGE 10
#include <stdio.h>
#include <string.h>

int main() {
    int day, month, year;
    char monthName[20];

    printf("Entrez une date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month) {
        case 1: strcpy(monthName, "Janvier"); break;
        case 2: strcpy(monthName, "Février"); break;
        case 3: strcpy(monthName, "Mars"); break;
        case 4: strcpy(monthName, "Avril"); break;
        case 5: strcpy(monthName, "Mai"); break;
        case 6: strcpy(monthName, "Juin"); break;
        case 7: strcpy(monthName, "Juillet"); break;
        case 8: strcpy(monthName, "Août"); break;
        case 9: strcpy(monthName, "Septembre"); break;
        case 10: strcpy(monthName, "Octobre"); break;
        case 11: strcpy(monthName, "Novembre"); break;
        case 12: strcpy(monthName, "Décembre"); break;
        default: printf("Mois invalide.\n"); return 1; 
    }

    printf("%02d-%s-%d\n", day, monthName, year);

    return 0;
}
//CHELLANGE 11
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const char *daysOfWeek[] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };

    srand(time(NULL));

    int randomIndex = rand() % 7;

    printf("Jour de la semaine choisi: %s\n", daysOfWeek[randomIndex]);

    return 0;
}
//CHELLANGE 12
#include <stdio.h>


int main(){
    int h1,m1,s1;
    printf("Entrez votre 1er instant en format(HH:MM:SS): ");
    while (scanf("%d:%d:%d", &h1,&m1,&s1) != 3 || h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59 || s1 < 0 || s1 > 59) {
        printf("Veuillez entrer un instant valide: ");
        while (getchar() != '\n');
    }
    int h2,m2,s2;
    printf("Entrez votre 2eme instant en format(HH:MM:SS): ");
    while (scanf("%d:%d:%d", &h2,&m2,&s2) != 3 || h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59 || s2 < 0 || s2 > 59) {
        printf("Veuillez entrer un instant valide: ");
        while (getchar() != '\n');
    }
    if(h1>h2){
        printf("Le deuxième instant vient avant le premier ;");
    }else if(h1<h2) {
        printf("Le premier instant vient avant le deuxième ;");
    }else {
        if(m1>m2){
            printf("Le deuxième instant vient avant le premier ;");
        }else if(m1<m2) {
            printf("Le premier instant vient avant le deuxième ;");
        }else{
            if(s1>s2){
                printf("Le deuxième instant vient avant le premier ;");
            }else if(s1<s2) {
                printf("Le premier instant vient avant le deuxième ;");
            }else{
                printf("Il s'agit du même instant.");
        }
        }
    }



    return 0;
}
        

//CHELLANGE 13
#include <stdio.h>

int main() {
    float x1, y1, x2, y2; 
    float px, py;         

    printf("Entrez les coordonnées du premier point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Entrez les coordonnées du deuxième point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnées du point (px, py): ");
    scanf("%f %f", &px, &py);

    float area = (x1 - px) * (y2 - y1) - (x2 - x1) * (y1 - py);

    if (area == 0 && px >= (x1 < x2 ? x1 : x2) && px <= (x1 > x2 ? x1 : x2) &&
        py >= (y1 < y2 ? y1 : y2) && py <= (y1 > y2 ? y1 : y2)) {
        printf("Le point (%f, %f) se trouve sur le segment.\n", px, py);
    } else {
        printf("Le point (%f, %f) ne se trouve pas sur le segment.\n", px, py);
    }

    return 0;
}










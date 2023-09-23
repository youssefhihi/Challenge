#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct deadline{
        int annee, mois, jour, amj;
};
struct taches {
        char titre[100];
        char description[100];
        int status ;
        int id;
        struct deadline temps;
};
struct taches todo[100];
int nombreTaches = 0;
int list = 0;
int o;
int a = 2023;
int m = 9;
int j = 23;
int premiere_menu,deuxieme_menu,troisieme_menu,cinquieme_menu;

void call_menu(){





        printf("\n\t\t ================================================");
        printf("\n\t\t|1|_Ajouter des taches .                          |     W");
        printf("\n\t\t|-|-----------------------------------------------      |" );
        printf("\n\t\t|2|-Afficher les list de tous les taches.         |     E");
        printf("\n\t\t|-|-----------------------------------------------      |");
        printf("\n\t\t|3|-Modifier une tache.                           |     L");
        printf("\n\t\t|-|-----------------------------------------------      |");
        printf("\n\t\t|4|-Supprimer une tache par identifiant.          |     C");
        printf("\n\t\t|-|-----------------------------------------------      |");
        printf("\n\t\t|5|-Rechercher les taches .                       |     O");
        printf("\n\t\t|-|-----------------------------------------------      |");
        printf("\n\t\t|6|-Statistiques .                                |     M");
        printf("\n\t\t|-|-----------------------------------------------      |");
        printf("\n\t\t|7|-Quitter .                                     |     E");
        printf("\n\t\t==================================================\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~entrez ton choix ici : ");
        scanf("%d",&premiere_menu);

}
void call_menu2(){
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("______________________choisis que tu veux par quliquer sur le nombre de menu vous voulez____________");
    printf("\n\t ===========================================");
    printf("\n\t|1|-ajouter une seul tache.                 |");
    printf("\n\t|-|-----------------------------------------|");
    printf("\n\t|2|-_Ajouter plusieurs nouvelles taches.    |");
    printf("\n\t|-|-----------------------------------------|");
    printf("\n\t|3|_Quitter a la menu principale .          |");
    printf("\n\t ===========================================\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~entrez ton choix ici: ");
    scanf("%d",&deuxieme_menu);
}

void call_menu3(){
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("________________choisis que tu veux par quliquer sur le nombre de menu vous voulez_______________\n");
    printf("\n\t\t  ===============================================================================");
    printf("\n\t\t|1|- Trier tes listes des taches mode alphabetique.                              |");
    printf("\n\t\t|-|------------------------------------------------------------------------------|");
    printf("\n\t\t|2|- Trier tes listes des taches par deadline.                                   |");
    printf("\n\t\t|-|------------------------------------------------------------------------------|");
    printf("\n\t\t|3|- Afficher tes liste des tâches dont le deadline est dans 3 jours ou moins.   |");
    printf("\n\t\t|-|------------------------------------------------------------------------------|");
    printf("\n\t\t|4|-Quitter a la menu principale.                                                |");
    printf("\n\t\t  ===============================================================================\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~entrez ton choix ici : ");
    scanf("%d",&troisieme_menu);
}

void call_menu4(){
    printf(")°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("________________choisis que tu veux par quliquer sur le nombre de menu vous voulez_______________\n");
    printf("\n\t\t  =======================================");
    printf("\n\t\t |1|-Modifier la description d'une tâche.|");
    printf("\n\t\t |-|-------------------------------------|");
    printf("\n\t\t |2|-Modifier le statut d’une tâche.     |");
    printf("\n\t\t |-|-------------------------------------|");
    printf("\n\t\t |3|-Modifier le deadline d’une tâche.   |");
    printf("\n\t\t |-|-------------------------------------|");
    printf("\n\t\t |4|-Quitter a la menu principale.       |");
    printf("\n\t\t  =======================================\n");

}

void call_menu5 (){
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("________________choisis que tu veux par quliquer sur le nombre de menu vous voulez_______________\n");
        printf("\n\t\t   =======================================================================");
        printf("\n\t\t |1|- Afficher le nombre total des taches.                                |");
        printf("\n\t\t |-|----------------------------------------------------------------------|");
        printf("\n\t\t |2|- Afficher le nombre de taches complètes et incomplètes.              |");
        printf("\n\t\t |-|----------------------------------------------------------------------|");
        printf("\n\t\t |3|_Afficher le nombre de jours restants jusqu'au delai de chaque tache. |");
        printf("\n\t\t |-|----------------------------------------------------------------------|");
        printf("\n\t\t  ========================================================================\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~entrez ton choix ici : ");
        scanf("%d",&cinquieme_menu);

}

void ajoute_tache(){

    printf("\n\t Titre de tache : ");
    getchar();
    gets(todo[nombreTaches].titre);
    printf("\n\t Description : ");
    getchar();
    gets(todo[nombreTaches].description);
    printf("\n\t Deadline (exemple(AAAA/MM/JJ)) : ");
    scanf("%d/%d/%d", &todo[nombreTaches].temps.annee,&todo[nombreTaches].temps.mois,&todo[nombreTaches].temps.jour);
    todo[nombreTaches].temps.amj = 0;
    todo[nombreTaches].temps.amj += (todo[nombreTaches].temps.annee * 365) + (todo[nombreTaches].temps.mois * 30) + todo[nombreTaches].temps.jour;
    printf("\n\t Statut : \n\t\t 1- a realiser.\n\t\t 2- en cours. \n \t\t 3- finalisee. ");
    scanf("%d",&todo[nombreTaches].status);
    todo[nombreTaches].id = nombreTaches;
    nombreTaches++;
    list++;

    printf("*************la tache ajoute a ton list*************\t^_^ .\n");

}

void ajoute_plusieur_taches(){
    int x;
    printf("Combien de taches vou voulez ajouter dans votre liste ? : ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        ajoute_tache();
    }
}

void list_taches() {





    printf("\n^^^^^^^^^^^^^^^^^^^^ Liste des Taches ^^^^^^^^^^^^^^^^^^^^\n");
    for (int i = 0; i < nombreTaches; i++) {
        printf("\t ========================================================================================\n");
        printf("\t| ID: %d                                                                                 |\n", todo[i].id);
        printf("\t| Titre : %s                                                                             |\n", todo[i].titre);
        printf("\t| Description : %s                                                                       |\n", todo[i].description);
        printf("\t| Deadline : %d/%d/%d                                                                    |\n", todo[i].temps.annee,todo[i].temps.mois,todo[i].temps.jour);
        if(todo[i].status == 1){
        printf("\t| statut: a realiser .                                                                   |\n");
        }else if(todo[i].status == 2){
        printf("\t| statut: en cours de realisation .                                                      |\n");
        }else if (todo[i].status == 3){
        printf("\t| statut: finalisation .                                                                 |\n");
        }
        printf("\t ========================================================================================\n");
    }
}
void ordre_alph(){
     struct taches s;
     for( int i = 0 ;i < nombreTaches ;i++){
            for(int j = 0;j < nombreTaches - i - 1;i++){
                    if(strcmp(todo[j].titre, todo[j + 1].titre) > 0){
                        s = todo[j];
                        todo[j] = todo[j +1];
                        todo[j + 1] = s;
                    }
           }
     }

 }

 void trie_deadline(){
     struct taches s;
    for (int i = 0; i <  nombreTaches - 1; i++) {
        for (int j = 0; j < nombreTaches - i - 1; j++) {
            if (todo[j].temps.annee < todo[j + 1].temps.annee) {
                            s = todo[j];
                            todo[j] = todo[j + 1];
                            todo[j + 1] = s;
            } else if (todo[j].temps.annee == todo[j + 1].temps.annee &&
                       todo[j].temps.mois < todo[j + 1].temps.mois) {
                            s = todo[j];
                            todo[j] = todo[j + 1];
                            todo[j + 1] = s;
            } else if (todo[j].temps.annee == todo[j + 1].temps.annee &&
                       todo[j].temps.mois == todo[j + 1].temps.mois &&
                       todo[j].temps.jour < todo[j + 1].temps.jour) {
                            s = todo[j];
                            todo[j] = todo[j + 1];
                            todo[j + 1] = s;
            }
        }
    }
}

void Modifdier_Description(id) {





	printf("Entrer ID de la tache dont vous souhaitez modifier la description : ");
	scanf("%d", &id);
	if (id >= 0 && id < nombreTaches) {
	printf("\nEntrez la nouvelle description pour la tache souhaitee: ");
    getchar();
    gets(todo[id].description);
    printf("\nDescription  a ete modifiee ^_^\n");
	}
	else {
		printf("mais tu n'a pas une tache avec ce ID !! \n");
	}
		}
void Modifier_Statut (id){
	printf("Entrer ID de la tache dont vous souhaitez modifier le statut : ");
	scanf("%d", &id);
	if (id >= 0 && id < nombreTaches) {
	printf("\nEntrez la nouvelle modifcation pour la statut souhaitee: ");
    scanf("%d",&todo[id].status);
    printf("\n Statut a ete modifiee avec ^_^\n");
	}else {
		printf("mais tu n'a pas une tache avec ce ID !! \n");
	}

		}

void Modifier_Deadline (id){

	printf("Entrer ID de la tache dont vous souhaitez modifier le deadline : ");
	scanf("%d", &id);
	if (id >= 0 && id < nombreTaches) {
	printf("\n Entrez la nouvelle modifcation pour le deadline souhaitee: ");
    scanf("%d/%d/%d",&todo[id].temps.annee,&todo[id].temps.mois,&todo[id].temps.jour);
    printf("\n Deadline a ete modifiee ^_^\n");

	}
	else {
		printf(" mais tu n'a pas une tache avec ce ID !!\n");
	}
		}
void supprime_tache() {
     int id;
    printf("\n Entrez ID de la tache vou voulez supprimer : ");
    scanf("%d", &id);
    printf("\n tu es sure de supprimer ce tache\n");
    printf("Clique sur |1| si tu es sure \n  si non clique sur |2|");
    scanf("%d",&o);
    if(o== 1){

    for (int i = 0; i < nombreTaches; i++) {
        if (todo[i].id == id) {
            for (int j = i; j < nombreTaches - 1; j++) {
                todo[j] = todo[j + 1];
            }
            nombreTaches--;
            printf("^__^ Tache supprimee ^__^.\n");
            return;
        }
    }
    printf("mais tu n'a pas une tache avec ce ID !!\n");
}
if (o == 2){
    return;
}
}

void rechercher_par_Id() {
    int id;
    printf("Entrez l'ID de la tâche à rechercher : ");
    scanf("%d", &id);

    for (int i = 0; i < nombreTaches; i++) {
        if (todo[i].id == id) {
            printf("Tache trouvee :\n");
            printf("ID: %d\n", todo[i].id);
            printf("Titre : %s\n", todo[i].titre);
            printf("Description : %s\n", todo[i].description);
            printf("Deadline : %d/%d/%d\n", todo[i].temps.annee,todo[i].temps.mois,todo[i].temps.jour);
            printf("Statut : %s\n", todo[i].status);
            return;
        }
    }

    printf("mais tu n'a pas une tache avec ce ID !!\n");
}

void rechercher_par_titre() {
    char titre[100];
    printf("Entrez le titre de la tache a rechercher : ");
    scanf("%s", &titre);

    printf("\n===== Resultats de la recherche par titre =====\n");
    for (int i = 0; i < nombreTaches; i++) {
        if (strcmp(todo[i].titre,titre) == 0) {
            printf("ID: %d \n",todo[i].id);
            printf("Description : %s \n", todo[i].description);
            printf("Deadline : %d/%d/%d \n", todo[i].temps.annee,todo[i].temps.mois,todo[i].temps.jour);
            printf("Statut : %s \n", todo[i].status);
            printf("============================\n");
        }
    }

                printf("mais tu n'a pas une tache avec ce titre !!\n");
}

void tache_com_incomp(){

    int incomp = 0;
    int comp = 0;
    for(int i = 0;i < nombreTaches; i++){
        if(todo[i].status == 1 || todo[i].status == 2  ){
            incomp++;

        }else if(todo[i].status == 3){
            comp++;
        }

   }
            printf("il y a %d taches incompletes\n",incomp);
            printf("il y a %d taches completes\n",comp);
}
void trie_deadline_3jr(){
        int cet_annee = a * 365;
        int cet_mois = m * 30;
        int ce_jr = j;
        int cet_temps = cet_annee + cet_mois + ce_jr;
        for(int i = 0; i < nombreTaches ; i++){
           if((todo[i].temps.amj - cet_temps) <= 3){
                printf("ID: %d\n",todo[i].id);
                printf("Titre : %s\n", todo[i].titre);
                printf("Description : %s\n", todo[i].description);
                printf("Deadline : %d/%d/%d\n", todo[i].temps.annee,todo[i].temps.mois,todo[i].temps.jour);
                printf("Statut : %d\n", todo[i].status);
        }
        }
}

void nbr_jr_rest(){
        int jr_rest;
        int cet_annee = a * 365;
        int cet_mois = m * 30;
        int ce_jr = j;
        int cet_temps = cet_annee + cet_mois + ce_jr;
        for(int i = 0; i < nombreTaches; i++){
            jr_rest = todo[i].temps.amj - cet_temps;
            printf("le nombre de jours restants pour la tache %d est : %d jour. \n",todo[i].id,jr_rest);
     }
}

int main()
{
    printf("\n\t^^^^^^^^^^^^^^^^^^BIENVENUE SUR NOTRE APPLICATION ICI VOUS POUVEZ ORGANISER VOTRE TEMPS FACILEMENT^^^^^^^^^^^^^^^^^^\n\n");
    while(1){

        printf("__________________choisir le nombre de list tu veux__________________\n");
        call_menu();
        switch(premiere_menu){
    case 1:
         while(1){
                call_menu2();
                switch(deuxieme_menu){
                    case 1:
                        ajoute_tache();
                        break;
                    case 2:
                        ajoute_plusieur_taches();
                        break;
                    case 3:
                        //qitter
                        call_menu();
                        break;
                }
                break;
         }
         break;
    case 2:
        if(list == 0){
            printf("il n y'a aucune liste du tache\n");
        }
        if(list > 0){
            list_taches();
            printf("\n si vous voulez un menu de trie qulique sur |1|\n si non qulique sur |2|: ");
            scanf("%d",&o);
            if(o == 1){
                    while(1){
                    call_menu3();
                    switch(troisieme_menu){
                 case 1:
                      ordre_alph();
                      list_taches();
                      break;
                 case 2:
                    trie_deadline();
                    list_taches();
                    break;
                 case 3:
                     trie_deadline_3jr();
                    break;
                 case 4:
                     printf("__________________choisir le nombre de list tu veux__________________\n");
                     call_menu();
                    break;
                    }
                    break;
                 }
         }else if(o == 2){
            break;
         }else {
           break;
        }
         break;
        }
        break;
    case 3:
        if(list != 0){
            printf("si tu veux modifie discription de quelque tache qulique sur |1|.\n si le statut quliquer sur |2| .\n si t'il est le deadline qulique sur |3| .\n ");
            scanf("%d",&o);
            if(o == 1){
                Modifdier_Description();
                break;
            }else if(o == 2){
                Modifier_Statut ();
                break;
            }else if(o == 3){
                Modifier_Deadline();
                break;
            }else{
                printf("ce nombre n'est dans les choix");
                break;
            }
            break;
        }
        if(list == 0){
            printf("il n y'a aucune liste du tache\n");
        }
        break;
     case 4:
            supprime_tache();
            break;
     case 5:
          printf("\n si vous voulez rechercher par ID qulique sur |1|\n si vous voulez rechercher par titre qulique sur |2| : ");
          scanf("%d",&o);
            if(o == 1){
                rechercher_par_Id();
                break;
            }else if(o == 2){
                rechercher_par_titre();
                break;
            }else{
                printf("ce nombre n'a pas dans les choix ");
                break;
            }
            break;
     case 6:
         while(1){
          call_menu5();
          switch(cinquieme_menu){
              case 1:
                  if(list > 0){
                  printf("\n il y a %d taches 'keep doing' ^_^",nombreTaches);
                  break;
                  }
                  if(list == 0){
                    printf(" \n aucune taches :( ");
                    break;
                  }
                    break;
              case 2:
                  tache_com_incomp();
                break;
              case 3:
                  nbr_jr_rest();
                break;
          }
          break;
         }
         break;
     case 7:
        printf("sf doooor 4ayrha fi 7alatek ntla9aw fi js");
        return 0;
        }
    }
}



























































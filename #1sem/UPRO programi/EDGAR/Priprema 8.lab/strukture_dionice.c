#include <stdio.h>  
#include <string.h>  

#define MAX_OZNAKA 6
#define MAX_NAZIV 21

struct dionica_s {
    char oznaka[MAX_OZNAKA];
    float cijena;
    char naziv[MAX_NAZIV];
};

struct portfelj_s {
    char oznaka[MAX_OZNAKA];
    int kolicina;
};

float IzracunajVrijednostPortfelja(struct dionica_s *dionice, int broj_dionica, struct portfelj_s *moj_portfelj, int broj_dionica_u_mom_portfelju){
    //vrijednost dionice = količina dionica * vrijednosti dionice

    float ukup_vrijednost;

    for (int i=0; i< broj_dionica_u_mom_portfelju; i++){ //ide po dionicama koje ja imam
        for (int j=0; j<broj_dionica; j++){ //ide po drugoj strukturi da provjeri je to ta dionica
            if (strcmp(moj_portfelj[i].oznaka, dionice[j].oznaka) == 0){
                ukup_vrijednost += moj_portfelj[i].kolicina * dionice[j].cijena;
            }
        }

    }

    return ukup_vrijednost;

}
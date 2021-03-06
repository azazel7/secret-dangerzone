#ifndef CHIFFREMENT_H_INCLUDED
#define CHIFFREMENT_H_INCLUDED

int dechiffrer_rsa(char* cryptogramme, char* sortie, int taille_sortie);
int dechiffrer_camelia(unsigned char* clee, unsigned char* cryptogramme, int taille_cryptogramme, unsigned char* sortie, unsigned char IV[16]);
int comparer_md5(unsigned char* donnee, int taille_donnee, unsigned char hash[16]);
unsigned char* protocole_dechiffrement(unsigned char *fichier_chiffre, int taille);

#endif // DIVERS_H_INCLUDED

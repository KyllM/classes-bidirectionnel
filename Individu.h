/**
 * @file Individu.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2022-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief cette classe représente un Individu et la Voiture qu'il conduit si il en conduit une
 * 
 * @details au dela de représenté une personne par son nom et son prénom, 
 * la classe Individu permet de renseigné égalemeent la Voiture qu'il conduit
 * 
 * 
 * la Voiture associé a l'Individu est représentée par un pointeur vers un objet de la classe Voiture 
 * qui peux être a null si l'individu ne possçde pas de Voiture
 * 
 * @warning un Individu conduit au plus une Voiture
 * 
 * @deprecated la classe Individu sera bientot remplacer par la classe Personne
 * 
 * @remark code légèrement modifier pour le tp doxygen
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;         // Le nom de l'individu

  /**
   * @brief Le prénom de l'individu
   * 
   */
    string prenom;      // Le prénom de l'individu

  /**
   * @brief Lien avec la voiture de l'individu
   * 
   */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partire de son nom et de son prenom
     * 
     */
    Individu(string = "", string = "");
    
    /**
     * @brief Detruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'Individu 
     * 
     * @return string l'identité de l'Individu sous la forme nom puis prénom 
     * 
     * @bug problème de formattage, un espace en trop
     * 
     * @todo ajouter en parametre pour choisir si on veux un affichage de type prenom nom ou nom prenom
     */
    string toString();        // Affiche l'identité de l'individu

    /**
     * @brief Affiche l'identité de l'Individu et de sa Voiture s'il en a une
     * 
     * @return string Chaine sous la forme : nom, prenom, la voiture :marque, plaque
     */
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Défini l'objet Voiture conduit par l'Individu
     * 
     * @param [in] voiture 
     */
    void setMaVoiture(Voiture* voiture);
    
    
    void supprimerLien();
};

#endif // INDIVIDU_H
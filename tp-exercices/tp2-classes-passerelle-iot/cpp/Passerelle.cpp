#include "Passerelle.hpp"
#include <iostream>

void AfficheurLCD::afficher(const std::string& l1, const std::string& l2) {
    std::cout << "================ LCD ================" << std::endl;
    std::cout << "[L1] " << l1 << std::endl;
    std::cout << "[L2] " << l2 << std::endl;
    std::cout << "=====================================" << std::endl;
}

Passerelle::Passerelle(const std::string& nom, const std::string& ip)
    : m_nom(nom), m_ip(ip) {}

Passerelle::~Passerelle() {
    // En agrégation, la passerelle ne détruit pas les capteurs externes !
}

void Passerelle::connecterCapteur(Capteur* capteur) {
    // ==============================================================================
    // TODO 1 : Gestion de l'agrégation
    // Vérifiez que le pointeur 'capteur' n'est pas nul, puis ajoutez-le au vecteur 'm_capteurs'.
    // ==============================================================================

}

void Passerelle::executerCycleMesure() {
    std::cout << ">> Lancement du cycle sur passerelle: " << m_nom << " (" << m_ip << ")" << std::endl;

    // ==============================================================================
    // TODO 2 : Parcours polymorphique de la collection
    // Parcourez 'm_capteurs'. Pour chaque capteur, déclenchez son acquisition
    // et affichez son label et sa valeur si l'acquisition a réussi.
    // ==============================================================================

    m_afficheur.afficher(m_nom, "Capteurs: " + std::to_string(m_capteurs.size()) + " OK");
}


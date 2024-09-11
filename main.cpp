#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    std::ofstream file("imagem.ppm");

    if (!file) {
        std::cerr << "Erro ao criar o arquivo." << std::endl;
        return 1;
    }

    file << "P3\n"; 
    file << "10 10\n"; 
    file << "255\n"; 
    
    for (int i = 0; i < 10 * 10; ++i) {
        int r = std::rand() % 256; 
        int g = std::rand() % 256; 
        int b = std::rand() % 256; 
        file << r << " " << g << " " << b << "\n";
    }

    file.close();

    std::cout << "Arquivo imagem.ppm criado com sucesso!" << std::endl;

    return 0;
}

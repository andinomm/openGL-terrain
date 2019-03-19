#include <vector>


// CLASA ACEASTA IMPLEMENTEAZA ALGORITMUL DE PERLIN NOISE DEZVOLTAT DE KEN PERLIN


#ifndef PERLINNOISE_H
#define PERLINNOISE_H

class PerlinNoise {
	
	
public:

	PerlinNoise();

	// Genereaza un nou vector de permutari bazat pe seed
	PerlinNoise(unsigned int seed);


	// Genereaza o valoare de noise
	double noise(double x, double y, double z);


private:
	

	// Vector de permutari
	std::vector<int> permutari;

	double fade(double t);

	//Interpolare liniara
	double lerp(double t, double a, double b);
	//Gradientul
	double grad(int hash, double x, double y, double z);
};

#endif
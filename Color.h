

#ifndef COLOR_H
#define COLOR_H

class Color
{

public:

	Color() : red{ 0.0f }, green{ 0.0f }, blue{ 0.0f }{}
	Color(float r, float g, float b);

	void initColors(float r, float g, float blue);
	float r();
	float g();
	float b();

	static Color Grass();
	static Color Snow();
	static Color Sand();
	static Color Dirt();
	static Color DarkSand();
	static Color DarkSnow();
	static Color Sky();
	static Color Water();
private:

	float red, green, blue;




};



#endif
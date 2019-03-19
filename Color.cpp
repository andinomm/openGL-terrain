
#include"stdafx.h"
#include"Color.h"




float Color::r(){ return red; }
float Color::g(){ return green; }
float Color::b(){ return blue; }

void Color:: initColors(float r, float g, float b)
{
	if (r > 1.0f)
		r = 1.0f;
	if (g > 1.0f)
		g = 1.0f;
	if (b > 1.0f)
		b = 1.0f;

	red = r;
	green = g;
	blue = b;
}
Color::Color(float r, float g, float b)
{
	if (r > 1.0f)
		r = 1.0f;
	if (g > 1.0f)
		g = 1.0f;
	if (b > 1.0f)
		b = 1.0f;

	red = r;
	green = g;
	blue = b;
}

Color Color::Grass()
{
	return Color(0.34f, 0.6f, 0.31f);
}
Color Color::Snow()
{
	return Color(1.0f, 1.0f, 1.0f);
}

Color Color::Water()
{
	return Color(0.27f, 0.51f, 0.59f);
}

Color Color::Sky()
{
	return Color(0.75f, 0.83f, 0.89f);
}

 Color Color::Sand()
{
	return Color(0.91f, 0.81f, 0.70f);
}

 Color Color::Dirt()
 {
	 return Color(0.68f, 0.46f, 0.24f);
 }

 Color Color::DarkSand()
 {
	 return Color(0.58f, 0.51f, 0.27f);
 }
 Color Color::DarkSnow()
 {
	 return Color(0.8f, 0.8f, 0.9f);
 }
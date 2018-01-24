#include "Application.h"

void Application::update() {

}
void Application::draw() {
	for (int x = 0; x < WIDTH; x++) {
		putPixel(x, HEIGHT/2, 0, 255, 0, 255);
		putPixel(HEIGHT / 2, x, 0, 255, 0, 255);
		putPixel(x, x, 0, 255, 0, 255);
		putPixel(-x, x, 0, 255, 0, 255);

	}
	
}
void Application::setup() {

}
#include "library.c"
#include <stdio.h>

int main()
{
	//Initialize the graphics library
	init_graphics();
	printf("Initializing graphic library, testing 'init_graphics()' method...\n");
	sleep_ms(3000);
	printf("Initialization done!\n");
	sleep_ms(2000);
	clear_screen();

	//Testing 'draw_pixel' method
	printf("Drawing pixels, testing 'draw_pixel()' method...\n");
	sleep_ms(3000);
	draw_pixel(200, 250, MAKE_COLOR(0, 60, 0));
	sleep_ms(1000);
	draw_pixel(200, 300, MAKE_COLOR(10, 10, 10));
	sleep_ms(1000);
	draw_pixel(200, 350, MAKE_COLOR(30, 50, 5));
	sleep_ms(1000);

	clear_screen();

	//Testing 'draw_rect' method
	printf("Drawing rectangles, testing 'draw_rect()' method...\n");
	sleep_ms(2000);
	draw_rect(300, 200, 100, 100, MAKE_COLOR(30, 60, 30)); //white
	//draw_rect(100, 100, 50, 100, (color_t) MAKE_COLOR(30, 0, 0)); //red
	sleep_ms(1000);
	draw_rect(150, 100, 100, 200, MAKE_COLOR(0, 0, 31)); //blue
	sleep_ms(1000);
	//draw_rect(0, 0, 100, 100, MAKE_COLOR(30, 60, 30)); //white
	sleep_ms(1000);

	//sleep_ms(5000); //test the sleep function

	//draw_text(0, 400, "hello world!", MAKE_COLOR(31, 63, 31)); //white
	//draw_text(-100, 300, "sample text wow?!", MAKE_COLOR(15, 31, 15)); //grey text mostly to the left of the display
	//draw_rect(-150, 300, 80000, 300, MAKE_COLOR(23, 54, 1)); //yellow-ish rectangle mostly off-screen; almost looks like a line

	printf("\nTesting 'sleep_ms()' and 'clear_screen()'...\n");
	sleep_ms(2000);
	printf("Clearing screen in 5 seconds...\n");
	sleep_ms(5000);
	clear_screen(); //test the function that clears the screen
	sleep_ms(2000);

	//draw_rect(300, 300, 100, 50, MAKE_COLOR(10, 10, 10)); //maroon/brown/purple
	//sleep_ms(1000);
	//draw_rect(100, 150, 200, 200, MAKE_COLOR(30, 50, 5)); //yellow/gold
	//sleep_ms(500);

	//test a 500ms interval between text, centered in large rectangle
	//draw_text(148, 242, "this ", MAKE_COLOR(31, 0, 0)); //red
	//sleep_ms(500);
	//draw_text(188, 242, "is ", MAKE_COLOR(0, 63, 0)); //green
	//sleep_ms(500);
	//draw_text(212, 242, "cool!", MAKE_COLOR(0, 0, 31)); //blue

	printf("Drawing circles, testing 'draw_circle()'...\n");
	sleep_ms(2000);
	int x = (640-20)/2;
  int y = (480-20)/2;
	draw_circle(x, y, 75, MAKE_COLOR(31, 0, 0));
	sleep_ms(1000);
	draw_circle(x, y, 95, MAKE_COLOR(31, 0, 0));

	sleep_ms(2000);
	clear_screen();

  printf("Testing 'getkey()'...\n");
	sleep_ms(1000);
	printf("Press 'q' to exit.\n");
	while(getkey() != 'q'){} //test to see if input works; basically acts as an exit for the user

	exit_graphics(); //restore default settings and exit from graphics library
}

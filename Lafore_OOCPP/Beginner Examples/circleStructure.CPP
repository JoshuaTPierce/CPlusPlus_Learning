//circleStructure.CPP
//Passing a Circular Structure as a Function Argument
//Also Demonstrates Simple Graphics

#include <msoftcon.h> //for graphics functions

//////////////////////////////////////////////
struct circle {
    int xCo, yCo; //coordinates of center
    int radius;
    color fillColor;
    fstyle fillStyle; 
};
//////////////////////////////////////////////
void circ_draw(circle c){
    set_color(c.fillColor);  //set fill color
    set_fill_style(c.fillStyle); //set fill style
    draw_circle(c.xCo, c.yCo, c.radius); //draw a solid circle
}
//////////////////////////////////////////////
int main(){
    init_graphics(); //initialize graphics system

    circle c1 = { 15, 7, 5, cBLUE, X_FILL};
    circle c2 = { 41, 12, 7, cRED, 0_FILL};
    circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL};

    circ_draw(c1);
    circ_draw(c2);
    circ_draw(c3);

    set_cursor_pos(1, 25);

    return 0;
}
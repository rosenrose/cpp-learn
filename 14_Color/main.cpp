#include "Ball.h"
#include "EColor.h"

int main()
{
    samples::Ball(samples::eColor::Red).SayColor();
    samples::Ball(samples::eColor::Green).SayColor();
    samples::Ball(samples::eColor::Blue).SayColor();

    return 0;
}

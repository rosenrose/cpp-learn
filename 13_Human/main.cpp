#include "Human.h"
#include "Pope.h"

int main()
{
    samples::Human *human = new samples::Human("John");
    samples::Human *pope = new samples::Pope();

    human->SayName();
    pope->SayName();

    delete human;
    delete pope;

    return 0;
}

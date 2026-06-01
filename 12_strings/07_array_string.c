int main(void)
{

    // is this array there word having the size less than 8 will be filled with
            // null character, To fix this we can use kind ragged Array(the character can have dynamic size.)
    char planets[][8] = {
        "Mercury", "Venus", "Mars", "Earth", "Jupiter", "Saturn", "Uranus", "Neptune","Pluto"
    };

    // ragged array simulation in c.
    char *efficient_planet[] = {
        "Mercury", "Venus", "Mars", "Earth", "Jupiter", "Saturn", "Uranus", "Neptune","Pluto",
    };
   return 0;
}

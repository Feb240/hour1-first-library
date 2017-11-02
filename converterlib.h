float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float kilo_to_miles(void)
{
    float kilo = get_float("Number of kilometers");
    float kilo = miles / .621371;
    printf("\n The number of miles is %.2f\n", kilo);
    return kilo;
}

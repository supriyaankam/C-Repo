#include <stdio.h> 
 
   // Function to calculate the distance traveled 
float calculateDistance(float initialVelocity, float time, float acceleration)  
{ 
     return (initialVelocity * time) + (0.5 * acceleration * time * time); 
} 
 
int main()  
{ 
    float initialVelocity, time, acceleration, distance; 
 
    // Input values from the user 
    printf("Enter the initial velocity (m/s): "); 
    scanf("%f", &initialVelocity); 
    printf("Enter the time (seconds): "); 
    scanf("%f", &time); 
    printf("Enter the acceleration (m/s^2): "); 
    scanf("%f", &acceleration); 
 
    // Calculate the distance 
    distance = calculateDistance(initialVelocity, time, acceleration); 
 
    // Display the result 
    printf("The distance traveled by the object is: %.2f meters\n", distance); 
 
    return 0; 
} 

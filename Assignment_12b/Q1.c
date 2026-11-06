#include <stdio.h> 

enum day {     
    monday = 1,     
    tuesday = 2,     
    wednesday = 3,     
    thursday = 4,     
    friday = 5,     
    saturday = 6,     
    sunday = 7 
}; 

int main() {     
    int day_input; 
    enum day choice; 
    
    printf("Enter the day number from 1 to 7: ");     
    scanf("%d", &day_input);     
    
    choice = (enum day)day_input;     
    
    switch(choice) {         
        case monday:             
            printf("Monday");             
            break;         
        case tuesday:             
            printf("Tuesday");             
            break;         
        case wednesday:             
            printf("Wednesday");             
            break;         
        case thursday:             
            printf("Thursday");             
            break;         
        case friday:             
            printf("Friday");             
            break;         
        case saturday:             
            printf("Saturday");             
            break;         
        case sunday:             
            printf("Sunday");             
            break;         
        default:             
            printf("Invalid input");     
    }     
    return 0; 
}

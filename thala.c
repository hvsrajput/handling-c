//Switch Case Control Statements
//Thala for a reason

#include <stdio.h>
#include <math.h>

int main() {

    int age;

    printf("Enter your age's last digit: ");
    scanf("%d", &age);

    switch (age)
    {
        case 0:
        printf("The last digit of your age is 10 \nz+e+r+o = h+e+r+o = Thala\nThala for a reason");
        break;
        
        case 1:
        printf("The last digit of your age is 1 \none(3)*2 + 1 = 7\nThala for a reason");
        break;
        
        case 2:
        printf("The last digit of your age is 2 \n2*(t+w+o)+1 = 7\nThala for a reason");
        break;
        
        case 3:
        printf("The last digit of your age is 3 \n3+t+h+r+e(repeated) = 7\nThala for a reason");
        break;
        
        case 4:
        printf("The last digit of your age is 4 \n4 + previous number(3) = 7\nThala for a reason");
        break;
        
        case 5:
        printf("The last digit of your age is 5 \n(f+i+v+e)*3 - 5 = 7\nThala for a reason");
        break;
        
        case 6:
        printf("The last digit of your age is 6 \n6*(s+i+x) = 18\n1 - 8 = 7\nThala for a reason");
        break;
        
        case 7:
        printf("The last digit of your age is 7 \nThala for a reason");
        break;
        
        case 8:
        printf("The last digit of your age is 8 \ne+i+g+h+t = s+e+v+e+n = 7\nThala for a reason");
        break;
        
        case 9:
        printf("The last digit of your age is 9 \n9 - 2(repeated n's) = 7\nThala for a reason");
        break;
    
    default:
    printf("Something went wrong... \nPlease run the code again");
        break;
    }

    return 0;
}
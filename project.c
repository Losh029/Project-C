#include <stdio.h>

int main()
{
    int day, month, year;
    int y1, r, b, current_year, f, g, z, x, y, y1_2000, m,n,o,choice;
    y1_2000 = 0;
    y1 = 2000;

    printf("Date of Birth: ");
    scanf("%d%d%d", &day, &month, &year);

    y = year - 1;
    r = year % 1000;
    b = r - 1;
    current_year = 1;
    f = b / 4;
    g = b - f;

    printf("y = %d\nr = %d\nb = %d\nf = %d\ng = %d\n", y, r, b, f, g);

    if (y % 4 == 0) {
        z = y1_2000 + ((f * 2) + (g * 1));
        printf("z = %d\n", z);
        x = z % 7;
        printf("x = %d\n", x);
    } else {
        z = y1_2000 + ((f * 1) + (g * 1));
        printf("z = %d\n", z);
        x = z % 7;
        printf("x = %d\n", x);
    }

    if (year % 4==0) {
        int a[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum = 0, s, e;

        for (int i = 0; i <= month - 1; i++) {
            sum = sum + a[i];
        }

        printf("sum: %d\n", sum);

        if (month == 1) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 2) {
            s = 28 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 3) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 4) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 5) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 6) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 7) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 8) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 9) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 10) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 11) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 12) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else {
            printf("Enter valid month\n");
            
        }

        n = e % 7;
        printf("n = %d\n", n);
    }

    else {
        int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum = 0, s, e;

        for (int i = 0; i <= month - 1; i++) {
            sum = sum + a[i];
        }

        printf("sum: %d\n", sum);

        if (month == 1) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 2) {
            s = 29 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 3) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 4) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 5) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 6) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 7) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 8) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 9) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 10) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 11) {
            s = 30 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else if (month == 12) {
            s = 31 - day;
            e = sum - s;
            printf("e = %d\n", e);
        } else {
            printf("Enter valid month\n");

        }

        n = e % 7;
        printf("n = %d\n", n);
    }

    m = n + x;
    printf("m = %d\n", m);
    o=m%7;
    printf("o=%d\n",o);
    for(int i=0;i<7;i++){
        printf("\n1.0\n2.1\n3.2\n4.3\n5.4\n6.5\n7.6\n");
        printf("Enter your choice(o):\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Sunday\n");
            break;
            case 2:
            printf("Monday\n");
            break;
            case 3:
            printf("Tuesday\n");
            break;
            case 4:
            printf("Wednesday\n");
            break;
            case 5:
            printf("Thursday\n");
            break;
            case 6:
            printf("Friday\n");
            break;
            case 7:
            printf("Saturday\n");
            break;
            default:
            printf("Enter your corect choice\n");
            
        }
    }

    return 0;
}
/*output:
Date of Birth: 16 8 2005  
y = 2004  
r = 5  
b = 4  
f = 1  
g = 3  
z = 5  
x = 5  
sum: 243  
e = 228  
n = 4  
m = 9  
o = 2  

1. Sunday  
2. Monday  
3. Tuesday  
4. Wednesday  
5. Thursday  
6. Friday  
7. Saturday  

Enter your choice(o): 3  
Tuesday*/




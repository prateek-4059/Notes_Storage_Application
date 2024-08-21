#include <stdio.h>

int main()
{
    int per;
    printf("Enter the percentage:\n");
    scanf("%d",&per);

    switch(per>=90)
    {
        case 1:
        printf("Grade A\n");
        break;

        case 0:
        switch(per>=80 && per<90){
            case 1:
            printf("Grade B\n");
            break;

            case 0:
            switch(per>=70 && per<80){
                case 1:
                printf("Grade C\n");
                break;

                case 0:
                switch(per>=60 && per<70){
                    case 1:
                    printf("Grade D\n");
                    break;

                    case 0:
                    switch(per>=40 && per<60){
                        case 1:
                        printf("Grade E\n");
                        break;

                        case 0:
                        printf("Grade F\n");
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}
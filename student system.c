#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    char dob[14];
    float cgpa;
    int sme;
};
void print_details(char name[],int roll,char dob[],float cgpa,int sem){
    printf("Name : %s\n", name);
    printf("Id   : %d\n", roll);
    printf("Dob  : %s\n", dob);
    printf("CGPA : %.2f\n", cgpa);
    printf("Semestar : %d\n", sem);
    };
int main()
{
    struct student s1;
    strcpy(s1.name, "Sowrav");
    s1.roll   = 819;
    strcpy(s1.dob,"02/07/2000");
    s1.cgpa = 3.29;
    s1.sme  = 3;
    print_details(s1.name,s1.roll,s1.dob,s1.cgpa,s1.sme);
    return 0;
}

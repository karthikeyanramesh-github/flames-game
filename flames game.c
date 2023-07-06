// header files for standard input and output functions library
#include <stdio.h>
// header files for string functions library
#include <string.h>
// define is a preprocessor directive is used to deine macros in c programs
#include <stdlib.h>
// header files for standard library functions
#define MAX_LENGTH 100
// definition for char functions with two parameters
char operations(char *str1, char *str2) {
    // intialize the integer variables
    int t1=0,t2=0,knl=strlen(str1),qnl=strlen(str2),sclkn[MAX_LENGTH]={0},sclqn[MAX_LENGTH]={0};
    // initialize the char variables
    char csd[MAX_LENGTH],rclkn[MAX_LENGTH],rclqn[MAX_LENGTH];
    // using (for loop) repetition for finding common letters for strings
    for (int i=0;i<knl;i=i+1) {
        for (int j=0;j<qnl;j=j+1) {
            if (str1[i] == str2[j]){
                sclkn[i]=1;
                sclqn[j]=1;
                str2[j]='\0';
                break;
            }
        }
    }
    // using for loop condition while check not equal to common values to store the balance letter for king name string data in temp variables
    for(int i=0;i<knl;i=i+1){
        if(!sclkn[i]){
            rclkn[t1++]=str1[i];
        }
    }
    rclkn[t1]='\0';
    // using  for loop condition while check not equal to common values to store the balance letter for queen name string data in temp variables
    for(int j=0;j<qnl;j=j+1){
        if(!sclqn[j]){
            rclqn[t2++]=str2[j];
        }
    }
    rclqn[t2]='\0';
    /* strcpy() functions have copy the data from one string to another string.
    strcat() functions have concatenation for string to string */
    strcpy(csd,rclkn);
    strcat(csd,rclqn);

    
}
// main() function
int main() {
    // intialize the char variables for user input string data's
    char kn[MAX_LENGTH];
    char qn[MAX_LENGTH];
    // printf() function to display the output
    printf("\t\t<---FLAMES HAVE A FUN GAME FOR FIND RELATIONSHIP WITH YOUR PARTNER--->\n\n\t\t\t\t\t1.F For Friends\n\t\t\t\t\t2.L For Love\n\t\t\t\t\t3.A For Affection\n\t\t\t\t\t4.M For Marriage\n\t\t\t\t\t5.E For Enemies\n\t\t\t\t\t6.S For Siblings\n\n\t(In this Fun Game about Relationship between Your Future Partner along with your Names)\n\n\n");
    // user input for the king name
    printf("\t\t\t\tEnter your King Name: ");
    scanf("%s",kn);
    // user input  for the queen name
    printf("\t\t\t\tEnter your Queen Name: ");
    scanf("%s",qn);
    printf("\n");   
    // call the char functions with two arguments
    operations(kn,qn);
    // return 0 means successful execution without errors!
    return 0;
}

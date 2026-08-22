#include <stdio.h>
#include <string.h>

// Function to Convert text to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
	//Declaring variables
    char applicantName[50] = "";
    int age = 0;
    char citizenship[20] = "";
    char aadhaarVerification[10] = "";
    char panVerified[10] = "";

    //Take input from User
    printf("Applicant Name : ");
    fflush(stdout);
    scanf("%49s", applicantName);

    printf("Age : ");
    fflush(stdout);
    scanf("%d", &age);

    printf("Citizenship : ");
    fflush(stdout);
    scanf("%19s", citizenship);

    printf("Aadhaar Verified : ");
    fflush(stdout);
    scanf("%9s", aadhaarVerification);

    printf("PAN Verified : ");
    fflush(stdout);
    scanf("%9s", panVerified);

    //Function call
    toLowerCase(citizenship);
    toLowerCase(aadhaarVerification);
    toLowerCase(panVerified);

    printf("\nPassport Verification Report\n");
    printf("Applicant : %s\n", applicantName);

    //Checking is conditions are true then Accept
    if(strcmp(citizenship, "indian") == 0 &&
       strcmp(aadhaarVerification, "yes") == 0 &&
       strcmp(panVerified, "yes") == 0) {
        printf("Status : Approved\n");
    }
    //If previous conditions are false reject Passport
    else {
        printf("Status : Rejected\n");
    }

    return 0;
}

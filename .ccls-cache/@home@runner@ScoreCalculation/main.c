#include <stdio.h>
#include <stdbool.h>

//sets the number of grades
int GetNumGrades(){
  int NumberOfGrades;
  printf("Type the number of grades you want to calculate: ");
  scanf("%d", &NumberOfGrades);
  return NumberOfGrades;
}

//verifies if student was approved
bool IsApproved(float average){
  if(average<70){
    return false;
  }
  else{
    if(average >=70){
      return true;
    }
  }
}
//prints results
int main(void) {
  //gets student's grades
  int GottenNumberofGrades = GetNumGrades(); //Gets input from user about how many grades they have
  float SGrades[GottenNumberofGrades];// sets SGrades size array with the user input
  float Score; //This will hold the value of each grade into one number
  float SWeight[GottenNumberofGrades]; //Will hold the value of the weight of each score
  float TWeight = 0; //This will hold the value of each weight into one number
  for(int i = 0; i<GottenNumberofGrades; i++){ // for loop get input data from the user and combines them on the score
    printf("Type your %d grade: ", i+1);
    scanf("%f", &SGrades[i]);
    printf("What's the weight of grade %d: ", i+1);
    scanf("%f", &SWeight[i]);
    Score += (SWeight[i]/100)*SGrades[i]; //gets grades and puts its value on one number
  }
  if(IsApproved(Score)){ //gets the average and if approved displays text
    printf("You have been approved with GPA of %g", Score);
  }
  else{
    if(!IsApproved(Score))//gets the average and if reproved displays text
     printf("You have been reproved with GPA of %g", Score);


  }
  return 0;
}


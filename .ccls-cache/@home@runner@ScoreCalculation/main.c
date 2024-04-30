#include <stdio.h>
#include <stdbool.h>

//sets the number of grades
int GetNumGrades(){
  int NumberOfGrades;
  printf("Type the number of grades you want to calculate: ");
  scanf("%d", &NumberOfGrades);
  return NumberOfGrades;
}

//gets student's grade point average
float getaverage( float TotalGrades, int NumberOfGrades){
  float average = (TotalGrades)/NumberOfGrades;
  return average;
}
//verifies if student was approved
bool IsApproved(float average){
  if(average<7){
    return false;
  }
  else{
    if(average >=7){
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
  for(int i = 0; i<GottenNumberofGrades; i++){ // for loop get input data from the user and combines them on the score
    
    printf("Type your %d grade: ", i+1);
    scanf("%f", &SGrades[i]);
    Score+=SGrades[i]; //gets grades and puts its value on one number
  }
  float Saverage = getaverage(Score, GottenNumberofGrades);//calculates the average grade by dividing the total Grades combined by the number of scores
  if(IsApproved(Saverage)){ //gets the average and if approved displays text
    printf("You have been approved with GPA of %f", Saverage);
  }
  else{
    if(!IsApproved(Saverage))//gets the average and if reproved displays text
       printf("You have been reproved with GPA of %f", Saverage);
  }
  return 0;
}


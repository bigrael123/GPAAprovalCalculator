#include <stdio.h>
#include <stdbool.h>



//get student's grades
float getgrades(bool FirstGrade){
  float grades = 0;
  if(!FirstGrade){
    printf("Type your first grade:");
    scanf("%f", &grades);
    return grades;

  }
  else{
    printf("Type your second grade:");
    scanf("%f", &grades);
    return grades;
  }

}
//get student's grade point average
float getaverage(float grades, float grades2){
  float average = (grades + grades2)/2;
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
  float SGrades1 = getgrades(false); //get first grade by running the function with false(Did not get first grade)
  float SGrades2 = getgrades(true); //get second grade by running the function with true(already has the first grade)
  float Saverage = getaverage(SGrades1, SGrades2);//calculates the average grade
  if(IsApproved(Saverage)){ //gets the average and if approved displays text
    printf("You have been approved with GPA of %f", Saverage);
  }
  else{
    if(!IsApproved(Saverage))//gets the average and if reproved displays text
       printf("You have been reproved with GPA of %f", Saverage);
  }
  return 0;
}


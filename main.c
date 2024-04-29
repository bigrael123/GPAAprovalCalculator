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
int main(void) {
  float SGrades1 = getgrades(false);
  float SGrades2 = getgrades(true);
  float Saverage = getaverage(SGrades1, SGrades2);
  if(IsApproved(Saverage)){
    printf("You have been approved with GPA of %f", Saverage);
  }
  else{
    if(!IsApproved(Saverage))
       printf("You have been reproved with GPA of %f", Saverage);
  }
  return 0;
}


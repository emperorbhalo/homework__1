#include <iostream>
using namespace std;
int main() {
float GPA;
    int score;
    cout<<"Enter GPA score:"<<endl;
    cin>>GPA;
    cout<<"Enter Examscore"<<endl;
    cin>>score;
  if (GPA>3.5) {
      if (score>=80) {
          cout<<"Eligible for admission with scholar ship";
      }
      else {
          cout<<"Eligible for admission without scholarship";
      }
  }
    else if(GPA>2.5 || GPA<3.5) {
        if (score>=70) {
            cout<<"Eligible for addmission";
        }
        else if(GPA<2.5)
            cout<<"Not Eligible For Admission";
    }

}
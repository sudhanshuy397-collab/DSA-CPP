#include<iostream>
using namespace std;
class Solution {
public:
    string studentGrade(int marks) {
        if(marks >= 90) return "Grade A";
        else if(marks >= 70 && marks < 90) return "Grade B";
        else if(marks >= 50 && marks < 70) return "Grade C";
        else if(marks >= 35 && marks < 50) return "Grade D";
        else return "Fail";
        
    }
};
int main()
{
    Solution obj;
    cout<<obj.studentGrade(70);

    return 0;
}
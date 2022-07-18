<h1>Task to practise OOP with C++ </h1>
<ol>
<li>Make an array of Student class of size N. Template is given below:
Class Student
{
    string name;
    char section;
    int roll;
    int english_marks;
    string password;
}
</li>

<li>Make name, section and roll as public so that these can be accessed outside.</li>

<li>Make english_marks protected so that this can’t be accessed outside except the derived class.</li>

<li>Make the password private so that this can’t be accessed outside.</li>

<li>Make a set_marks() function inside Student that will set english_marks of Student class;</li>

<li>Make a set_password() function inside Student that will set password to Student class.</li>

<li>Make a get_maks() function inside Student that will return english_marks of the Student.</li>

<li>Take name, section, roll, marks, and password as input for all Student class from the user and set them to the array of Student.</li>

<li>Make a function named update_marks() in the Student class which will take a string password and int marks as parameters and will check if the password matches with that student, and set the marks to english_marks of that Student. If the password doesn’t match, show an error.</li>

<li>Take roll, marks and password input from the user and find the Student that matches with the roll. If the Student is not found, show an error.</li>

<li>If the Student is found, call update_marks() function to update the english_marks of that Student.</li>

<li>Print all information except the password of all Student.</li>

</ol>

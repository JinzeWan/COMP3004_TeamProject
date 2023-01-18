COMP 3004 Project: Team 37: TA Esra

Members: Pankil Dhatva, Jinze Wan, Yusis Han

Responsibilities:
Pankil Dhatva:
- UML diagram
- Record class
- Record a therapy and history list functions
- Debugging
- Traceability diagram
- Tested MainWindow

Jinze Wan:
- Use case
- Use case diagram
- Sequence diagram
- Activity diagram
- Traceability diagram

Yusis Han:
- Icon and Ui design
- Mainwindow class
- Battery class
- Debugging

File Organization:
Design-Documentation folder includes all of the diagrams (UML class diagram, activity diagram, Use Case diagrams, sequence diagrams) 
The final folder contains all of the source files which includes:
battery.cpp
battery.h

mainwindow.cpp
mainwindow.h
mainwindow.ui

record.cpp
record.h

res folder has images


Tested Scenarios:

Working:
Power on/off
Checking if both ear clips are connected
Selection of 3 groups and 4 session types per group
Changing the intensity while running (both increasing and decreasing)
Changing the battery
Change battery level for debugging
Select button
Shows the history
Allows saving of sessions (includes intensity) and starting saved sessions
Session stops when disconnected (and resumes when connected again)
Session does not start until connection established
If battery is depeleted, the session stops
Soft Off™
Intensity is updated in saved sessions
Output/input and changing connection updates the state
User design time works as intended
Battery blinks two bars when lower than 20%
Battery blinks one bar when lower than 10%
Power LED works to indicate whether on/off
Session does not start if battery is too low

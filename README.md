**3_dof_implementation_pick_and_place**


This repository showcases the implementation of a 3-degree-of-freedom (3-DOF) pick and place robot. The project builds upon the previous work carried out on a 6-DOF robot developed by Kawasaki Company. For this project, the last three degrees of freedom were eliminated, and the remaining three were redesigned using SolidWorks software. The redesigned components were then 3D printed using PLA filament.

To ensure sufficient torque for the required orientations, MG996R servo motors were employed in the robot's construction. Furthermore, the links were deliberately hollowed out to minimize the overall weight and comply with the imposed limitations.

The control system for the robot was implemented using an Arduino microcontroller. Unlike the previous project, the controller board for the servo motors was removed, necessitating direct control. Consequently, the Arduino library was not utilized in this implementation.

Please feel free to explore the code and design files provided in this repository. For any questions or inquiries, kindly reach out to the project contributors.

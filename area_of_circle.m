% Clear Command Window
clc;
% Clear the variable from workspace
clear all;
% Close all popups(not needed for this week but good to know for future weeks)
close all;

% Naming Convention for Constants: UPPERCASE_SNAKECASE
% Assigning the value of pi which will be constant throughout the program and is set to 3.141
% Source: https://www.britannica.com/science/pi-mathematics
VALUE_OF_PI = 3.141; % or just use pi

% Naming Convention for variables: cammelCase
% Taking user input for the radius of the circle
circleRadius = input("Enter the radius of the circle(in cm): ");

% Calculating the area of the circle
area = VALUE_OF_PI * circleRadius * circleRadius;

% Displaying the area of the circle back to the user
fprintf("The area of the circle(Value of PI = %.3f) of radius %.2f cm is %.4f cm^2.\n", VALUE_OF_PI, circleRadius, area);

% Clearing the command window
clc;
% Clearing the workspace
clear all;

% Taking user input for lenght and width of rectangle
length = input("Enter the length of rectangle (in cm): ");
width = input("Enter the width of the rectangle (in cm): ");

% Calculating the are of rectangle
area = length * width;

% Displaying the area to the user
fprintf("the area of the rectange is %.2f cm^2\n", area);

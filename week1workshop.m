clc;
clear all;
close all;
CONSTANT_VARIABLE = 10;

constantInputVariable = input("Enter a value");

%take uer input for variable 1
% Source: https://...../.
ANUAL_WATER_CONSUMPTION_KILOLITERS = 130;
variable1 = input("Here you can print prompt and the function/method will take number as input: ");

variable2 = input("Here you can print prompt and the function/method will take string as input due to input parameter: ", "s");

disp(CONSTANT_VARIABLE);
fprintf("\nWith new line feed at the end:\n%d %.3f\t%s\n", CONSTANT_VARIABLE, variable1, variable2)
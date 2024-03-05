%% Clear the workspace and console(good practice to include these commands for single stand-alone programs)
clear all
clc

%% STATIC USER INPUTS(CONSTANTS need to follow CAPITAL_SNAKE_CASE)
MEAN_CAR_COST = 3500;
REGISTRATION_CHARGE = 100/ 365;
INSURANCE_COST = 100 / 365;
MEAN_MILAGE = 10;
MEAN_GAS_COST = 10;

%% Getting stats form user(regular variable should follow cammelCase)
population = input("Enter population of the city: ");
averageDistanceTravelled = input("Enter average distance traveled per day: ");
percentageOfPeopleOwningCars = input("percentage of people owning cars: ");

%% Calculating the cost
cost = (population * percentageOfPeopleOwningCars * (MEAN_CAR_COST + REGISTRATION_CHARGE + INSURANCE_COST + (averageDistanceTravelled / MEAN_MILAGE) * MEAN_GAS_COST));

%% Displaying the result to the user(use either disp or fprintf)
fprintf("For \n\tpopulation: %d\n\tMEAN_CAR_COST: %.2f\n\tREGISTRATION_CHARGE: %.2f \n\tINSURANCE_COST: %.2f \n\tMEAN_MILAGE: %.2f \n\tMEAN_GAS_COST: %.2f \n\taverageDistanceTravelled: %.2f \n\tpercentageOfPeopleOwningCars: %.2f \nCOST: %.2f\n", population, MEAN_CAR_COST, REGISTRATION_CHARGE, INSURANCE_COST, MEAN_MILAGE, MEAN_GAS_COST, averageDistanceTravelled, percentageOfPeopleOwningCars, cost)

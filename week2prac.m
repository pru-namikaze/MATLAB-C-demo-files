% abs()
% rand()
% zeros(10)
% for
% IF
clc;
clear all;
%%
num = input("Enter a number (positive or negative): ");
if num < 0
    fprintf("Number is negative\n");
elseif num == 0
    fprintf("Number is Zero\n");
else 
    fprintf("Number is positive\n")
end
absNum = abs(num);
fprintf("Abs value for %.4f id %.4f\n", num, absNum);

%%
rangeStart = input("Enter rangeStart (positive or negative): ");
rangeEnd = input("Enter rangeEnd (positive or negative): ");
range = rangeEnd - rangeStart;
randomFloat = (rand() * range) + rangeStart;
fprintf("The random number between %.2f to %.2f is %.2f\n", rangeStart, rangeEnd, randomFloat);

%%
clc;
clear all;
rng(34);

fprintf("1 Random number between 1-10: \n")
disp(randi(10))
fprintf("1 Random number between 5-10: \n")
disp(randi([5, 10]))
fprintf("1 Random number between 5-10: \n")
disp(randi([5, 10], 1))
fprintf("1 * 1 Random number between 5-10: \n")
disp(randi([5, 10], 1, 1))
fprintf("5 * 5 Random number between 5-10: \n")
disp(randi([5, 10], 5))
fprintf("5 * 1 Random number between 5-10: \n")
disp(randi([5, 10], 5, 1))
fprintf("1 * 5 Random number between 5-10: \n")
disp(randi([5, 10], 1, 5))
fprintf("7 * 5 Random number between 5-10: \n")
disp(randi([5, 10], 7, 5))

%%
numVectorLength = abs(input("Enter a length of 1-D Vector: "));
numVector = zeros(numVectorLength);
for i = 1:size(numVector)
    numVector(i) = input(sprintf("Enter %d index value: ", i));
end

for i = 1:size(numVector)
    fprintf("The %d index of the vector is %.2f\n", i, numVector(i));
end

% for loop
% vectors

clc;
clear all;

%%
numVectorLength = abs(input("Enter a length of 1-D Vector: "));
numVector = zeros(numVectorLength);
for i = 1:length(numVector)
    numVector(i) = input(sprintf("Enter %d index value: ", i));
end

for i = 1:length(numVector)
    numVector(i) = numVector(i) * numVector(i);
end

for i = 1:length(numVector)
    fprintf("The %d index of the vector is %.2f\n", i, numVector(i));
end
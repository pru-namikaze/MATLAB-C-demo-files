clc;
clear all;
A = [1 2 3 4; 5 3 8 6];
B = [];

for i = 1: size(A, 1)
    temp = [];
    for j = 1: size(A, 2)
        leftVal = 0;
        currentVal = A(i, j);
        rightVal = 0;
        sum = 0;
        if j ~= 1
            leftVal = A(i, j - 1);
        end
        if j ~= size(A, 2)
            rightVal = A(i, j + 1);
        end
        sum = leftVal + currentVal + rightVal;

        fprintf("%d + %d + %d = %d for (%d, %d)\t", leftVal, currentVal, rightVal, sum, i, j)

        temp = [temp sum];
    end
    fprintf("\n")
    B = [B; temp];
end

disp(B)

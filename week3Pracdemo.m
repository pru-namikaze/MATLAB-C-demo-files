clc;
clear all;
close all;

A = [-10:0.5:10];

C = zeros(length(A));
for i = 1: length(A)
    C(i) = power(3, A(i));
end

B = zeros(length(A));
for i = 1: length(A)
    B(i) = power(A(i), 2);
end
for i = 1: length(A)
    fprintf("%0.4f \t %0.4f \t %0.4f\n", A(i), B(i), C(i));
end

close all;  %close all figure windows
hold on; % display plots on the same window for now
plot(B);
plot(C);
hold off;  % turn off plotting on the same window. 
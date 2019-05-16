THINGS LEARNT:

1>Basically , every edge detector uses the sobel method of calculating intensity gradient of the image
2>It lies on the premise that the around an edge their would be a change of intesities for eg

if the matrix is like [3 3 3]
                      [3 3 3]  (MATRIX A)
                      [3 3 3]
there is no edge in this image, but if the matrix is like

[3 3 10]
[3 3 10]     (MATRIX B)
[3 3 10]

then there will definately be an edge

3>Now in the sobel method what we do is we apply the convolution of the matrix

[-1 0 1]
[-2 0 2]
[-1 0 1]

and calculate the threshold value , that is basically the sum of the multiplication of each element of the kernel and the input image
Now if the threshold value is above some constant it is classisfied as a edge or elese it is rejected

for example if we apply convultion to matrix A we get threshold =0;
and if we apply convolution to matrix B we get threshold = 28;(hence it will classified as an edge and the matrix A would not be classified)


STRATEGY USED:
1>Load the image
2>Convert it to grayscale image and then blur the image to filter out noises
3>Then find the edges
4>Copy only the edges to a blank background
5>Show the output

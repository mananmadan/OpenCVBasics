# ARES-NSIT


1. Open ARES.sln in Visual studio 2017.
2. Select the project and set it as startup project to run the task using ctrl+f5.
3. Every task project has input images.. After run it displays the desired output image.
4. Every task project folder in github has readme.txt file, which oulines the things learnt and strategy adoped to solve the task.





------------ x---------------------

Opening and closing

Things Learnt:
1>Opening and Closing operation consists of combination of the erosion and dialation operation
Opening is basically rosion of an image followed by a dilation
It is useful for removing small objects in the background
2>Closing:
It is obtained by the dilation of an image followed by an erosion.

Scaling

In the scaling operation
>First, we declare a variable for storing the input image
>Then image is loaded which is stored in the same folder as of the solution of the project
>Then resize command is used
>it uses 6 attributes
>input image,output image (which is displayed after resizing)
>fx,fy are the factors which are multiplied to the length of the input image to give the dimension of the resized image
>interpolation generally used are INTER_AREA,INTER_CUBIC,INTER_LINEAR
>INTER_AREA is generally used when we have to shrink the image
>INTER_CUBIC,INTER_LINEAR is generally used when the image is to be expanded
>INTER_CUBIC is slower than INTER_LINEAR interpolation


THINGS LEARNT
>Learnt how to load an image
>Show an image on a window
>How to use the resize function and also about the various interpolation methods   

Transalation & rotation
>In transformation of images,basically a samll(2*3) matrix is generated which is used to 
transform the whole image into desired image
>Using the formula:
dst(x,y) = src(M11*x + M12*y +M13,M21*x+M22*y+M23)
where dst is the final image
and src is the input image
and x and y are the co-ordinates of the matrix
M is the (2*3) matrix that is generated;

TRANSLATION AND ROTATION:
Now , the transaltion and rotation of the image are done by this method only.
The main difference between them is the difference of the Matrix M generated.


MATRIX M generation using getAffineTransform(Method Used By Me)(Translation)

>In this method we provide the function with three pairs of  corresponding point
between the input image and the destination image .
>Using these points the functions generates a relation between the input matrix and the 
output matrix and thus able to generate the Matrix M
>One has to adjust the three given points to perform translation

MATRIX M generation using matfromarray:(Tanslation)
>Basically is was found that if you know the shift to be performed for the translation
you can directly generate a (2*3) matrix to perform the operation and get the translated image
M = 	    [1  0  tx]
	    [0  1  ty]
where tx and ty are basically the shift in the x and y direction

MATRIX M generation using the getRotationMatrix2D(center, angle, scale)(Rotation):
This funtion generates the matrix m and thus applying the same formula mentioned above 
we are able to perform rotation of the image


STRATEGY USED
1>Load the image
2>Genrate the matrix M
3>Perform the warpAffine operation which basiically is the application of the formula mentioned above
4>Show the output image

CONVOLUTION OF MASK


Things Learnt:
1>Defination of Mask which is bassically a small matrix with certain numerical values or weights , is also called convolution
matrix,or kernal
2>How convolution works:
Basically , a mask has an anchor point which is generally at the centre of the image.
Now what we have to do is basically place the anchor point on each of the pixel of the image.
For each of the pixel we have to do the same process that is
1>multiply the values of the each of the values of kernal with the corresponding values of the image pixel.
2>sum up all these operation and calculate a single value
3>Place that value at the anchor point

This process repeats for each pixel and gradually the whole image change
Basically the processes like smoothening and sharpening of the image can be performed easily
using the mask
Also one can build his own filter using the mask
Depending upon the value of the matrix numbers whole of the image can be changed as desired



STRATEGY USED:
1>Loaded an image
2>Performed a normalized box filter of size = 5. For instance, for a kernel of size  size = 3, the kernel would be:
1    [1 1 1]
_    [1 1 1]
3*3  [1 1 1]
3>Apply the function filter2D,hence apllying the kernel all over the image
4>Output image can be seen that is more blur than the normal image


EDGE DETECTION

THINGS LEARNT:

1>Basically , every edge detector uses the sobel method of calculating intensity gradient of the image
2>It lies on the premise that the around an edge their would be a change of intesities for eg

if the matrix is like        [3 3 3]
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

Smoothening

Things Learnt:

Smoothening of image can be done by four methods:
1>Normalized Block filter:As also discussed in the readme of implement a mask that convolves over an image,
here a convultion matrix of the type Normalized block filter convoloves over the image and hence blurs the image
2>Gaussian filtering:Itis done by convolving each point in the input array with a Gaussian kernel and then 
summing them all to produce the output array
3>Median filtering:This filter replace each pixel of the input image with the median of its neighboring pixels
4>Bilateral Filtering: While smoothening an image , it happens that the filters not only dissolve the noise,
but sometiime smooth the features(that is edges if the image)
In that case we can use Bilateral Filtering,
Bilateral Filtering basically works on the same principle as Gaussian Filter but has 2 components of its weights
in the matrix,first one is similar to Gaussian Filter,second one is to measure the difference in intensity,which
basically detects an image and tries not to smooth away the edge


Strategy Implemented:
1>loaded the image
2>Used the blur() function to apply the normalized block filter of size 5, and the anchor point at -1,-1
3>Used the medianBlur() function to apply the median filter where the size of the kernel is given as 7,
which is essentially 7*7 as square kernel is always formed.
4>Run a loop from 0 to 105 having only odd value and applied it ont thr 
bilateralFilter()
5>Then applied a loop for the function GussianBlur also having only odd values
The size is calculated using size(w,h);
where w is the width and h is the hieght of the kernel

EROSION & DILATION

Things Learnt:
Basically,morphology is a broad set of image processing operation that process images based on shapes

1>Dilation:The value of the output pixel is the maximum  value of all pixels in the neighbourhood.
In a binary image ,a pixel is set to 1 if any of the neighbouring pixel have the value 1.
Thus Dilation makes object more visible and fills in small holes in objects

2>Erosion: The value of the output pixel is the minimum value of all pixels in the neighborhood.
 In a binary image, a pixel is set to 0 if any of the neighboring pixels have the value 0.

Thus,morphological erosion removes islands and small objects so that only substantive objects remain.
The amount of neighbouring pixels considered in both the operation depends on the size and shape of the kernel used.
Strategy Implemented:
1>Load image
2>Created a trackbar to control the size of the kernel
3>Erosion function created 
4>Erosion done using cross and rectangle kernel of variable size
5>Dialation done using dilate function and using rectangular kernel
6>Show all of the images
   1>erodeimage (window) shows the ouput of erode function using rectangle
   2>erodedimageusingcross(window) shows the output of erodfunction using cross
   3>dialationimage(window) shows the output image of dialatefunction using rectangle

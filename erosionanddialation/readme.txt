THESE TASK DO NOT CONTAIN AN OUPUT FILE AS I HAVE IMPLEMENTED A TRACKBAR IN THE CODE.
SO,PLEASE RUN THE CODE ON VISUAL STUDIO 2017 AND MOVING THE TRACKBAR WILL GIVE YOU DIFFERENT TYPES OF OUPUTS.



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


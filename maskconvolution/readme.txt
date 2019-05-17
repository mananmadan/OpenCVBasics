HERE MAAN(1).JPG IS THE INPUT IMAGE
-----------------------------------------------------------------------------------------------------------------------------
Things Learnt:
--------------

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
--------------

1>Loaded an image
2>Performed a normalized box filter of size = 5. For instance, for a kernel of size  size = 3, the kernel would be:
1    [1 1 1]
_    [1 1 1]
3*3  [1 1 1]
3>Apply the function filter2D,hence apllying the kernel all over the image
4>Output image can be seen that is more blur than the normal image

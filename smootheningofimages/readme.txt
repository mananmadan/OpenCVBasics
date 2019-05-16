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

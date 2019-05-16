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
M = [1 0 tx]
    [0 1 ty]
where tx and ty are basically the shift in the x and y direction

MATRIX M generation using the getRotationMatrix2D(center, angle, scale)(Rotation):
This funtion generates the matrix m and thus applying the same formula mentioned above 
we are able to perform rotation of the image


STRATEGY USED
1>Load the image
2>Genrate the matrix M
3>Perform the warpAffine operation which basiically is the application of the formula mentioned above
4>Show the output image



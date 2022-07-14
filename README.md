# What has been done

## Tuesday 12th

First day of working, managed to get a cmake script and header file up and running after setting up an enviroment

## Wednesday 13th

Got a short example piece of code that renders to a window and stops after 3 seconds.
Since SDL does not show an image, I have been trying to put this image in a bitmap file but with no luck.
Further investigation shows theres no video driver installed
Discussed with simon, moved to windows
Spent the rest of the day setting up windows with sdl2

## Thursday 14th

Found an error that causes the pixels data to return null.
Unknown what causes it because a screen is rendered that is not null.
Tried to see if it was the data from the draw colour was the problem.
I changes the input for a bmp image, still no change.
I assume it's something to do with my windows configuration, so I'll assume it works and test it when I get to a Linux machine at work.
In the mean time, I fully set up the tests ready to be tested on linux.
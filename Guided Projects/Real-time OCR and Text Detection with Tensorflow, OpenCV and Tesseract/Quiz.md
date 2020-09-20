# Quiz

### Question 1

True or False: The number of examples specified in the model config file (as num_examples, under eval_config) must exactly match the number of sample images in the images/test folder.

### Answer

True. It is necessary.

### Question 2

In our project, which software library is responsible for detecting/recognizing the Region of Interest or ROI, which in our case is segments of an image that contain text, and requires training to be able to do so?

### Answer

Tensorflow

### Question 3

True or false: Tensorflow requires us to convert annotation data from XML, CSV or other formats into TFRecord format .

### Answer

True

### Question 4

Which of the following needs to be changed to match our setup within the config file?

### Answer

        path to labelmap
        num_classes
        path to checkpoint

### Question 5

In order to capture a webcam feed, what parameter do we pass to cv2.VideoCapture()?

### Answer

0+cv2.CAP_DSHOW

### Question 6

What command begins the Tensorflow detection session?

### Answer

sess.run()

### Question 7

We can extract the box coordinates to extract our ROI using the vis_util.return_coordinates(). Before doing this, how do we check that the detected object is the one we want?

### Answer

Check category_index[i]['name]

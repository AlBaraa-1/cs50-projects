# Face Recognition 1.0
#### Video Demo: <https://youtu.be/QeaujLacIAE>
#### Description:
Face Recognition 1.0 is a real-time face detection and identification system developed using Python. The project uses the `face_recognition` library to recognize and match faces, and OpenCV to handle video capture and display.

**Features:**
- **Real-Time Face Detection:** The system processes live video feeds to detect faces.
- **Face Recognition:** Identifies known faces by comparing them to a database of pre-loaded images.
- **Visual Feedback:** Recognized faces are highlighted with a green box and their names are displayed, while unrecognized faces are marked with a red box and labeled as 'Unknown'.

**Project Files:**

- **`main.py`:** The main script for the project.
  - **`load_images_from_folder(folder_path)`:** Loads images from the specified folder and extracts their filenames as labels.
  - **`find_encodings(images)`:** Converts images to RGB and generates face encodings for each image.
  - **`main()`:** Main function that sets up the video capture, processes frames, detects faces, and performs recognition. It draws rectangles around recognized faces in green and unrecognized faces in red.

- **`requirements.txt`:** Lists the required Python packages:
  - `opencv-python` for video capture and image processing.
  - `numpy` for numerical operations.
  - `face_recognition` for face detection and recognition.

**Design Choices:**
- **Face Recognition Library:** The `face_recognition` library was chosen for its effectiveness in face detection and recognition with a simple API(Application Programming Interface) for encoding and comparing faces.
- **OpenCV:** Used for its capabilities in handling video feeds and displaying the results efficiently.
- **Visual Feedback:** Green rectangles are used for recognized faces to clearly indicate a match, while red rectangles highlight unrecognized faces to provide immediate visual feedback.

**Installation and Usage:**
1. Clone the repository to your local machine.
2. Install the required packages using:
   ```
   pip install -r requirements.txt
   ```
3. Prepare a folder named `faces` with images of known faces for the system to recognize.
4. Run the main script with:
   ```
   python main.py
   ```
5. The program will open a window displaying the video feed with face recognition results.

**Warnings and Notes:**
- Ensure that your webcam is connected and functioning properly before running the script.
- The script captures video from webcam index 2; you may need to adjust this if you have multiple webcams or if the default index does not work.

Feel free to explore the code and experiment with improvements. If you have any questions or encounter issues, don’t hesitate to reach out!
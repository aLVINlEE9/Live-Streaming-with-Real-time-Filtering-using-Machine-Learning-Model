# Live Streaming with Real-time Filtering using Machine Learning Model

## Overview
This project allows you to stream video in real-time and apply machine learning filters to it using a trained U-Net model. The system consists of a camera-server written in C++ that captures video data from a camera and sends it to a camera-client also written in C++, which communicates with a Python script using gRPC. The Python script loads the trained U-Net model and applies the machine learning filter to the video frames. Finally, the filtered video data is sent to a React client using websockets, which displays the video on a webpage.

## Purpose
The purpose of this project is to create a system for live streaming video that can be filtered using machine learning. The system is designed to work with embedded devices such as Raspberry Pi, making it suitable for a variety of applications. The system captures video data from an embedded camera device, applies a machine learning filter using a trained U-Net model, and sends the filtered video data over the web using websockets. This project is aimed at anyone who wants to learn how to build a live stream video filtering system for embedded devices using machine learning techniques.

## Dependencies
The following dependencies are required to run this project:

### C++
    OpenCV library
    Boost library
    protobuf library
    gRPC library
    RE2 library
    Abseil library
### Python
    FastAPI Python package
    uvicorn Python package
    websockets Python package
    protobuf Python package
    grpcio-tools Python package

## Getting Started
1. Clone the repository on your two devices: the camera device and the server.
    ```sh
    git clone https://github.com/aLVINlEE9/Live-Streaming-with-Real-time-Filtering-using-Machine-Learning-Model.git
    ```
2. On the camera device, go to the project directory and build the camera-server program.
    ```sh
    cd Live-Streaming-with-Real-time-Filtering-using-Machine-Learning-Model/
    mkdir build
    cd build
    cmake ..
    make
    ```
    Run the camera-server program.
    ```sh
    cd bin
    ./camera-server
    ```
3. On the server, go to the project directory and build the camera-client program.
    ```sh
    cd Live-Streaming-with-Real-time-Filtering-using-Machine-Learning-Model/
    mkdir build
    cd build
    cmake ..
    make
    ```
    Run the camera-client program.
    ```sh
    cd bin
    ./camera-client {serverIP} {serverPort}
    ```
4. On the server, go to the project directory and run the FastAPI server.
    ```sh
    cd Live-Streaming-with-Real-time-Filtering-using-Machine-Learning-Model/live-streaming-server/
    uvicorn client:app --reload
    ```
That's it! You should now be able to view the filtered video on your web browser at [http://localhost:8000](http://localhost:8000).

## Description
The project consists of the following components:

### [Camera-server](https://github.com/aLVINlEE9/video-streaming-server/tree/main/live-streaming-server/camera-server)
The camera-server is a C++ program that captures video data from a camera connected to an embedded device like Raspberry Pi. The program uses OpenCV library to capture the video frames and sends them to a camera-client using a socket on port 4097. The camera-server can be compiled and run on any device that supports C++ and OpenCV library.

### [Camera-client](https://github.com/aLVINlEE9/video-streaming-server/tree/main/live-streaming-server/camera-client)
The camera-client is a C++ program that receives video data from the camera-server and sends it to a Python script using gRPC. 

### [live-streaming-server](https://github.com/aLVINlEE9/video-streaming-server/tree/main/live-streaming-server/live-streaming-server)
The live-streaming-server(Python script) receives the video data from the camera-client using gRPC and applies the machine learning filter to the video frames. The script uses FastAPI to send the filtered video data using websockets. The filtered video data is broadcast to connected clients, which can be any device that supports websockets.

### [live-streaming-client](https://github.com/aLVINlEE9/video-streaming-server/tree/main/live-streaming-client/client)
The React client is a web application that displays the filtered video frames in real-time. The client uses websockets to receive the filtered video frames from the FastAPI server, which sends them to the React client using a socket on port 8000. 

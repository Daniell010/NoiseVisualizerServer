# NoiseLevelServer

`NoiseLevelServer` is a C++ server that collects noise level data from an audio device and sends it to clients over a TCP connection. The server utilizes standard Qt components for handling network connections and audio data.

## Description

This server uses the Qt library to:
- Handle client connections over TCP.
- Collect data from the audio device using `QAudioInput`.
- Generate and send noise level data to clients, including amplitude and visualization data.

The server can be used as a foundation for applications that collect audio data and visualize or analyze noise levels in real-time.

## Features

- The server listens for client connections on a specific port.
- Upon client connection, the server sends noise level data, including:
  - X Data (time/sample).
  - Y Data (amplitude).
  - Noise level percentage.

# Installation

## Setting up Development Environment

- Step 1. [Install Prerequisites](#install-prerequisites)
- Step 2. [Get ESP-IDF](#get-esp-idf)
- Step 3. [Set up the Tools](#set-up-the-tools)
- Step 4. [Set up the Environment Variables](#set-up-the-environment-variables)


### Install Prerequisites

In order to use ESP-IDF with the ESP32, you need to install some software packages based on your Operating System.

#### For Linux Users

To compile using ESP-IDF, you need to get the following packages. The command to run depends on which distribution of Linux you are using:

- Ubuntu and Debian:

```console
sudo apt-get install git wget flex bison gperf python3 python3-pip python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0
```


- CentOS 7 & 8:

```console
sudo yum -y update && sudo yum install git wget flex bison gperf python3 cmake ninja-build ccache dfu-util libusbx
```

CentOS 7 is still supported but CentOS version 8 is recommended for a better user experience.

- Arch:

```console
sudo pacman -S --needed gcc git make flex bison gperf python cmake ninja ccache dfu-util libusb
```

### Get ESP-IDF

To build applications for the ESP32, you need the software libraries provided by Espressif in [ESP-IDF repository]("https://github.com/espressif/esp-idf")

Open Terminal, and run the following commands:

```console
mkdir -p ~/esp
cd ~/esp
git clone --recursive https://github.com/espressif/esp-idf.git
```

ESP-IDF is downloaded into `~/esp/esp-idf`.

### Set up the Tools

Aside from the ESP-IDF, you also need to install the tools used by ESP-IDF, such as the compiler, debugger, Python packages, etc, for projects supporting ESP32.

```console
cd ~/esp/esp-idf
./install.sh esp32
```

### Set up the Environment Variables

The installed tools are not yet added to the PATH environment variable. To make the tools usable from the command line, some environment variables must be set. ESP-IDF provides another script which does that.

In the terminal where you are going to use ESP-IDF, run:

```console
. $HOME/esp/esp-idf/export.sh
```
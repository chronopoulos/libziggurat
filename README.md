# libsequoia

[![Build Status](https://travis-ci.com/chronopoulos/libsequoia.svg?branch=master)](https://travis-ci.com/chronopoulos/libsequoia)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

**libsequoia** is a library for loop-based musical step sequencing. It is available
here as a C API, and uses JACK for the MIDI backend.
[Python bindings](https://github.com/chronopoulos/python-sequoia) are also
available as a separate project.

## Build Instructions (C library)

First, install dependencies:
```
sudo apt-get install libjack-jackd2-dev libjson-c-dev
```

Then, compile/install with:

```
make
make install
```



/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_SHARED_MODULE_STRUCT___INIT___H
#define MICROPY_INCLUDED_SHARED_MODULE_STRUCT___INIT___H

char get_fmt_type(const char **fmt);
mp_uint_t get_fmt_num(const char **p);
mp_uint_t calcsize_items(const char *fmt);

<<<<<<< HEAD:shared-module/struct/__init__.h
=======
// The main sleep implementation for the Windows port.
void msec_sleep(double msec);

// Define usleep() because some of the unix port's code uses that.
// Mingw and the likes provide a definition of usleep(), note however
// that it's also just Sleep(usec/1000).
#ifdef _MSC_VER
int usleep(__int64 usec);
>>>>>>> v1.19.1:ports/windows/sleep.h
#endif

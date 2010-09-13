/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * parallel-port
 * Copyright (C) 2010 Matheus Neder <matheusneder@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * @brief parallel-port /parallel-port/src/ParallelPortWin32.cpp
 * @file ParallelPortWin32.cpp
 * @date 11/09/2010
 * @author Matheus Neder <matheusneder@gmail.com>
 */
#ifdef _WIN32


#include <windows.h>
typedef short (_stdcall *Win32InpOut32DLLInput)(short portaddr);
typedef void (_stdcall *Win32InpOut32DLLOutput)(short portaddr, short data);

static HINSTANCE win32HandleInstance;
static Win32InpOut32DLLInput win32Input;
static Win32InpOut32DLLOutput win32Ouput;

#include <ParallelPort.h>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

void ParallelPort::open(short port) throw (std::runtime_error)
{

}
void ParallelPort::close()
{

}
char ParallelPort::readData() throw (std::runtime_error)
{

}
char ParallelPort::readControl() throw (std::runtime_error)
{

}
char ParallelPort::readStatus() throw (std::runtime_error)
{

}
void ParallelPort::writeData(char value) throw (std::runtime_error)
{

}
void ParallelPort::writeControl(char value) throw (std::runtime_error)
{

}

#endif

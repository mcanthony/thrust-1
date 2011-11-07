/*
 *  Copyright 2008-2011 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>

// #include the memory.h header of the device backend

#if THRUST_DEVICE_BACKEND == THRUST_DEVICE_BACKEND_CUDA

#include <thrust/system/cuda/memory.h>

#elif THRUST_DEVICE_BACKEND_CUDA == THRUST_DEVICE_BACKEND_OMP

#include <thrust/system/omp/memory.h>

#elif THRUST_DEVICE_BACKEND_CUDA == THRUST_DEVICE_BACKEND_TBB

#include <thrust/system/tbb/memory.h>

#endif // THRUST_DEVICE_BACKEND

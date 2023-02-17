/****************************************************************************
 *
 * Copyright 2023 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
 
/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/ 
#ifndef __lwaifw_sine_test_model_h__
#define __lwaifw_sine_test_model_h__
 
unsigned char g_sine_model[] = {
    0x18, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x0e, 0x00,
    0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
    0x0e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0x00,
    0xb8, 0x05, 0x00, 0x00, 0xa0, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x0b, 0x00, 0x00, 0x00, 0x90, 0x05, 0x00, 0x00, 0x7c, 0x05, 0x00, 0x00,
    0x24, 0x05, 0x00, 0x00, 0xd4, 0x04, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
    0x74, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x54, 0xf6, 0xff, 0xff, 0x58, 0xf6, 0xff, 0xff, 0x5c, 0xf6, 0xff, 0xff,
    0x60, 0xf6, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x7c, 0x19, 0xa7, 0x3e, 0x99, 0x81, 0xb9, 0x3e,
    0x56, 0x8b, 0x9f, 0x3e, 0x88, 0xd8, 0x12, 0xbf, 0x74, 0x10, 0x56, 0x3e,
    0xfe, 0xc6, 0xdf, 0xbe, 0xf2, 0x10, 0x5a, 0xbe, 0xf0, 0xe2, 0x0a, 0xbe,
    0x10, 0x5a, 0x98, 0xbe, 0xb9, 0x36, 0xce, 0x3d, 0x8f, 0x7f, 0x87, 0x3e,
    0x2c, 0xb1, 0xfd, 0xbd, 0xe6, 0xa6, 0x8a, 0xbe, 0xa5, 0x3e, 0xda, 0x3e,
    0x50, 0x34, 0xed, 0xbd, 0x90, 0x91, 0x69, 0xbe, 0x0e, 0xfb, 0xff, 0xff,
    0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x67, 0x41, 0x48, 0xbf,
    0x24, 0xcd, 0xa0, 0xbe, 0xb7, 0x92, 0x0c, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x98, 0xfe, 0x3c, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x17, 0x9a, 0xbe,
    0x41, 0xcb, 0xb6, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x13, 0xd6, 0x1e, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x5a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x4b, 0x98, 0xdd, 0xbd, 0x40, 0x6b, 0xcb, 0xbe, 0x36, 0x0c, 0xd4, 0x3c,
    0xbd, 0x44, 0xb5, 0x3e, 0x95, 0x70, 0xe3, 0x3e, 0xe7, 0xac, 0x86, 0x3e,
    0x00, 0xc4, 0x4e, 0x3d, 0x7e, 0xa6, 0x1d, 0x3e, 0xbd, 0x87, 0xbb, 0x3e,
    0xb4, 0xb8, 0x09, 0xbf, 0xa1, 0x1f, 0xf8, 0xbe, 0x8d, 0x90, 0xdd, 0x3e,
    0xde, 0xfa, 0x6f, 0xbe, 0xb2, 0x75, 0xe4, 0x3d, 0x6e, 0xfe, 0x36, 0x3e,
    0x20, 0x18, 0xc2, 0xbe, 0x39, 0xc7, 0xfb, 0xbe, 0xfe, 0xa4, 0x30, 0xbe,
    0xf7, 0x91, 0xde, 0xbe, 0xde, 0xab, 0x24, 0x3e, 0xfb, 0xbb, 0xce, 0x3e,
    0xeb, 0x23, 0x80, 0xbe, 0x7b, 0x58, 0x73, 0xbe, 0x9a, 0x2e, 0x03, 0x3e,
    0x10, 0x42, 0xa9, 0xbc, 0x10, 0x12, 0x64, 0xbd, 0xe3, 0x8d, 0x0c, 0x3d,
    0x9e, 0x48, 0x97, 0xbe, 0x34, 0x51, 0xd4, 0xbe, 0x02, 0x3b, 0x0d, 0x3e,
    0x62, 0x67, 0x89, 0xbe, 0x74, 0xdf, 0xa2, 0x3d, 0xf3, 0x25, 0xb3, 0xbe,
    0xef, 0x34, 0x7b, 0x3d, 0x61, 0x70, 0xe3, 0x3d, 0xba, 0x76, 0xc0, 0xbe,
    0x7d, 0xe9, 0xa7, 0x3e, 0xc3, 0xab, 0xd0, 0xbe, 0xcf, 0x7c, 0xdb, 0xbe,
    0x70, 0x27, 0x9a, 0xbe, 0x98, 0xf5, 0x3c, 0xbd, 0xff, 0x4b, 0x4b, 0x3e,
    0x7e, 0xa0, 0xf8, 0xbd, 0xd4, 0x6e, 0x86, 0x3d, 0x00, 0x4a, 0x07, 0x3a,
    0x4c, 0x24, 0x61, 0xbe, 0x54, 0x68, 0xf7, 0xbd, 0x02, 0x3f, 0x77, 0xbe,
    0x23, 0x79, 0xb3, 0x3e, 0x1c, 0x83, 0xad, 0xbd, 0xc8, 0x92, 0x8d, 0x3e,
    0xa8, 0xf3, 0x15, 0xbd, 0xe6, 0x4d, 0x6c, 0x3d, 0xac, 0xe7, 0x98, 0xbe,
    0x81, 0xec, 0xbd, 0x3e, 0xe2, 0x55, 0x73, 0x3e, 0xc1, 0x77, 0xc7, 0x3e,
    0x6e, 0x1b, 0x5e, 0x3d, 0x27, 0x78, 0x02, 0x3f, 0xd4, 0x21, 0x90, 0x3d,
    0x52, 0xdc, 0x1f, 0x3e, 0xbf, 0xda, 0x88, 0x3e, 0x80, 0x79, 0xe3, 0xbd,
    0x40, 0x6f, 0x10, 0xbe, 0x20, 0x43, 0x2e, 0xbd, 0xf0, 0x76, 0xc5, 0xbd,
    0xcc, 0xa0, 0x04, 0xbe, 0xf0, 0x69, 0xd7, 0xbe, 0xb1, 0xfe, 0x64, 0xbe,
    0x20, 0x41, 0x84, 0xbe, 0xb2, 0xc3, 0x26, 0xbe, 0xd8, 0xf4, 0x09, 0xbe,
    0x64, 0x44, 0xd1, 0x3d, 0xd5, 0xe1, 0xc8, 0xbe, 0x35, 0xbc, 0x3f, 0xbe,
    0xc0, 0x94, 0x82, 0x3d, 0xdc, 0x2b, 0xb1, 0xbd, 0x02, 0xdb, 0xbf, 0xbe,
    0xa5, 0x7f, 0x8a, 0x3e, 0x21, 0xb4, 0xa2, 0x3e, 0xcd, 0x86, 0x56, 0xbf,
    0x9c, 0x3b, 0x76, 0xbc, 0x85, 0x6d, 0x60, 0xbf, 0x86, 0x00, 0x3c, 0xbe,
    0xc1, 0x23, 0x7e, 0x3e, 0x96, 0xcd, 0x3f, 0x3e, 0x86, 0x91, 0x2d, 0x3e,
    0x55, 0xef, 0x87, 0x3e, 0x7e, 0x97, 0x03, 0xbe, 0x2a, 0xcd, 0x01, 0x3e,
    0x32, 0xc9, 0x8e, 0xbe, 0x72, 0x77, 0x3b, 0xbe, 0xe0, 0xa1, 0xbc, 0xbe,
    0x8d, 0xb7, 0xa7, 0x3e, 0x1c, 0x05, 0x95, 0xbe, 0xf7, 0x1f, 0xbb, 0x3e,
    0xc9, 0x3e, 0xd6, 0x3e, 0x80, 0x42, 0xe9, 0xbd, 0x27, 0x0c, 0xd2, 0xbe,
    0x5c, 0x32, 0x34, 0xbe, 0x14, 0xcb, 0xca, 0xbd, 0xdd, 0x3a, 0x67, 0xbe,
    0x1c, 0xbb, 0x8d, 0xbe, 0x91, 0xac, 0x5c, 0xbe, 0x52, 0x40, 0x6f, 0xbe,
    0xd7, 0x71, 0x94, 0x3e, 0x18, 0x71, 0x09, 0xbe, 0x9b, 0x29, 0xd9, 0xbe,
    0x7d, 0x66, 0xd2, 0xbe, 0x98, 0xd6, 0xb2, 0xbe, 0x00, 0xc9, 0x84, 0x3a,
    0xbc, 0xda, 0xc2, 0xbd, 0x1d, 0xc2, 0x1b, 0xbf, 0xd4, 0xdd, 0x92, 0x3e,
    0x07, 0x87, 0x6c, 0xbe, 0x40, 0xc2, 0x3b, 0xbe, 0xbd, 0xe2, 0x9c, 0x3e,
    0x0a, 0xb5, 0xa0, 0xbe, 0xe2, 0xd5, 0x9c, 0xbe, 0x3e, 0xbb, 0x7c, 0x3e,
    0x17, 0xb4, 0xcf, 0x3e, 0xd5, 0x8e, 0xc8, 0xbe, 0x7c, 0xf9, 0x5c, 0x3e,
    0x80, 0xfc, 0x0d, 0x3d, 0xc5, 0xd5, 0x8b, 0x3e, 0xf5, 0x17, 0xa2, 0x3e,
    0xc7, 0x60, 0x89, 0xbe, 0xec, 0x95, 0x87, 0x3d, 0x7a, 0xc2, 0x5d, 0xbf,
    0x77, 0x94, 0x98, 0x3e, 0x77, 0x39, 0x07, 0xbc, 0x42, 0x29, 0x00, 0x3e,
    0xaf, 0xd0, 0xa9, 0x3e, 0x31, 0x23, 0xc4, 0xbe, 0x95, 0x36, 0x5b, 0xbe,
    0xc7, 0xdc, 0x83, 0xbe, 0x1e, 0x6b, 0x47, 0x3e, 0x5b, 0x24, 0x99, 0x3e,
    0x99, 0x27, 0x54, 0x3e, 0xc8, 0x20, 0xdd, 0xbd, 0x5a, 0x86, 0x2f, 0x3e,
    0x80, 0xf0, 0x69, 0xbe, 0x44, 0xfc, 0x84, 0xbd, 0x82, 0xa0, 0x2a, 0xbe,
    0x87, 0xe6, 0x2a, 0x3e, 0xd8, 0x34, 0xae, 0x3d, 0x50, 0xbd, 0xb5, 0x3e,
    0xc4, 0x8c, 0x88, 0xbe, 0xe3, 0xbc, 0xa5, 0x3e, 0xa9, 0xda, 0x9e, 0x3e,
    0x3e, 0xb8, 0x23, 0xbe, 0x80, 0x90, 0x15, 0x3d, 0x97, 0x3f, 0xc3, 0x3e,
    0xca, 0x5c, 0x9d, 0x3e, 0x21, 0xe8, 0xe1, 0x3e, 0xc0, 0x49, 0x01, 0xbc,
    0x00, 0x0b, 0x88, 0xbd, 0x3f, 0xf7, 0xca, 0x3c, 0xfb, 0x5a, 0xb1, 0x3e,
    0x60, 0xd2, 0x0d, 0x3c, 0xce, 0x23, 0x78, 0xbf, 0x8f, 0x4f, 0xb9, 0xbe,
    0x69, 0x6a, 0x34, 0xbf, 0x4b, 0x5e, 0xa9, 0x3e, 0x64, 0x8c, 0xd9, 0x3e,
    0x52, 0x77, 0x36, 0x3e, 0xeb, 0xaf, 0xbe, 0x3e, 0x40, 0xbe, 0x36, 0x3c,
    0x08, 0x65, 0x3b, 0xbd, 0x55, 0xe0, 0x66, 0xbd, 0xd2, 0xe8, 0x9b, 0xbe,
    0x86, 0xe3, 0x09, 0xbe, 0x93, 0x3d, 0xdd, 0x3e, 0x0f, 0x66, 0x18, 0x3f,
    0x18, 0x05, 0x33, 0xbd, 0xde, 0x15, 0xd7, 0xbe, 0xaa, 0xcf, 0x49, 0xbe,
    0xa2, 0xa5, 0x64, 0x3e, 0xe6, 0x9c, 0x42, 0xbe, 0x54, 0x42, 0xcc, 0x3d,
    0xa0, 0xbd, 0x9d, 0xbe, 0xc2, 0x69, 0x48, 0x3e, 0x5b, 0x8b, 0xa2, 0xbe,
    0xc0, 0x13, 0x87, 0x3d, 0x36, 0xfd, 0x69, 0x3e, 0x05, 0x86, 0x40, 0xbe,
    0x1e, 0x7a, 0xce, 0xbe, 0x46, 0x13, 0xa7, 0xbe, 0x68, 0x52, 0x86, 0xbe,
    0x04, 0x9e, 0x86, 0xbd, 0x8c, 0x54, 0xc1, 0x3d, 0xe0, 0x3b, 0xad, 0x3c,
    0x42, 0x67, 0x85, 0xbd, 0xea, 0x97, 0x42, 0x3e, 0x6e, 0x13, 0x3b, 0xbf,
    0x56, 0x5b, 0x16, 0x3e, 0xaa, 0xab, 0xdf, 0x3e, 0xc8, 0x41, 0x36, 0x3d,
    0x24, 0x2d, 0x47, 0xbe, 0x77, 0xa5, 0xae, 0x3e, 0xc0, 0xc2, 0x5b, 0x3c,
    0xac, 0xac, 0x4e, 0x3e, 0x99, 0xec, 0x13, 0xbe, 0xf2, 0xab, 0x73, 0x3e,
    0xaa, 0xa1, 0x48, 0xbe, 0xe8, 0xd3, 0x01, 0xbe, 0x60, 0xb7, 0xc7, 0xbd,
    0x64, 0x72, 0xd3, 0x3d, 0x83, 0xd3, 0x99, 0x3e, 0x0c, 0x76, 0x34, 0xbe,
    0x42, 0xda, 0x0d, 0x3e, 0xfb, 0x47, 0x9a, 0x3e, 0x8b, 0xdc, 0x92, 0xbe,
    0x56, 0x7f, 0x6b, 0x3e, 0x04, 0xd4, 0x88, 0xbd, 0x11, 0x9e, 0x80, 0x3e,
    0x3c, 0x89, 0xff, 0x3d, 0xb3, 0x3e, 0x88, 0x3e, 0xf7, 0xf0, 0x88, 0x3e,
    0x28, 0xfb, 0xc9, 0xbe, 0x53, 0x3e, 0xcf, 0x3e, 0xac, 0x75, 0xdc, 0xbe,
    0xdd, 0xca, 0xd7, 0x3e, 0x01, 0x58, 0xa7, 0x3e, 0x29, 0xb8, 0x13, 0xbf,
    0x76, 0x81, 0x12, 0xbc, 0x28, 0x8b, 0x16, 0xbf, 0x0e, 0xec, 0x0e, 0x3e,
    0x40, 0x0a, 0xdb, 0xbd, 0x98, 0xec, 0xbf, 0xbd, 0x32, 0x55, 0x0c, 0xbe,
    0xfb, 0xf9, 0xc9, 0x3e, 0x83, 0x4a, 0x6d, 0xbe, 0x76, 0x59, 0xe2, 0xbe,
    0x54, 0x7d, 0x9f, 0xbb, 0x9d, 0xe8, 0x95, 0x3e, 0x5c, 0xd3, 0xd0, 0x3d,
    0x19, 0x8a, 0xb0, 0x3e, 0xde, 0x6f, 0x2e, 0xbe, 0xd0, 0x16, 0x83, 0x3d,
    0x9c, 0x7d, 0x11, 0xbf, 0x2b, 0xcc, 0x25, 0x3c, 0x2a, 0xa5, 0x27, 0xbe,
    0x22, 0x14, 0xc7, 0xbe, 0x5e, 0x7a, 0xac, 0x3e, 0x4e, 0x41, 0x94, 0xbe,
    0x5a, 0x68, 0x7b, 0x3e, 0x86, 0xfd, 0x4e, 0x3e, 0xa2, 0x56, 0x6a, 0xbe,
    0xca, 0xfe, 0x81, 0xbe, 0x43, 0xc3, 0xb1, 0xbd, 0xc5, 0xb8, 0xa7, 0x3e,
    0x55, 0x23, 0xcd, 0x3e, 0xaf, 0x2e, 0x76, 0x3e, 0x69, 0xa8, 0x90, 0xbe,
    0x0d, 0xba, 0xb9, 0x3e, 0x66, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x53, 0xd6, 0xe2, 0x3d, 0x66, 0xb6, 0xcc, 0x3e,
    0x03, 0xe7, 0xf6, 0x3e, 0xe0, 0x28, 0x10, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x3e, 0x3d, 0xb0, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x62, 0xf0, 0x77, 0x3e,
    0xa6, 0x9d, 0xa4, 0x3e, 0x3a, 0x4b, 0xf3, 0xbe, 0x71, 0x9e, 0xa7, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x34, 0x39, 0xa2, 0x3e, 0x00, 0x00, 0x00, 0x00,
    0xcc, 0x9c, 0x4a, 0x3e, 0xab, 0x40, 0xa3, 0x3e, 0xb2, 0xff, 0xff, 0xff,
    0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xb3, 0x71, 0x67, 0x3f,
    0x9a, 0x7a, 0x95, 0xbf, 0xe1, 0x48, 0xe8, 0xbe, 0x8a, 0x72, 0x96, 0x3e,
    0x00, 0xd2, 0xd3, 0xbb, 0x1a, 0xc5, 0xd7, 0x3f, 0xac, 0x7e, 0xc8, 0xbe,
    0x90, 0xa7, 0x95, 0xbe, 0x3b, 0xd7, 0xdc, 0xbe, 0x41, 0xa8, 0x16, 0x3f,
    0x50, 0x5b, 0xcb, 0x3f, 0x52, 0xb9, 0xed, 0xbe, 0x2e, 0xa7, 0xc6, 0xbe,
    0xaf, 0x0f, 0x14, 0xbf, 0xb3, 0xda, 0x59, 0x3f, 0x02, 0xec, 0xd7, 0xbe,
    0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x66, 0x11, 0x1f, 0xbf,
    0xb8, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x54, 0x4f, 0x43, 0x4f,
    0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x14, 0x00,
    0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0xf0, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x48, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xce, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x1c, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
    0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x24, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0xa4, 0x02, 0x00, 0x00,
    0x40, 0x02, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00,
    0x48, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
    0x50, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x26, 0xfd, 0xff, 0xff,
    0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x18, 0xfd, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74,
    0x4d, 0x75, 0x6c, 0x5f, 0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6e, 0xfd, 0xff, 0xff,
    0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x60, 0xfd, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74,
    0x4d, 0x75, 0x6c, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69,
    0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x74, 0x72, 0x61, 0x6e, 0x73,
    0x70, 0x6f, 0x73, 0x65, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xce, 0xfd, 0xff, 0xff,
    0x34, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xc0, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x52, 0x65, 0x6c,
    0x75, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x12, 0xfe, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x04, 0xfe, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x5f,
    0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x5a, 0xfe, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x4c, 0xfe, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x2f,
    0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65,
    0x4f, 0x70, 0x2f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x6f, 0x73, 0x65,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0xba, 0xfe, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0xac, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x32, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0xfe, 0xfe, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf0, 0xfe, 0xff, 0xff,
    0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32,
    0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x5f, 0x62, 0x69, 0x61, 0x73,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x46, 0xff, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0xff, 0xff, 0xff,
    0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32,
    0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x2f, 0x52, 0x65, 0x61, 0x64,
    0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x74,
    0x72, 0x61, 0x6e, 0x73, 0x70, 0x6f, 0x73, 0x65, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xa6, 0xff, 0xff, 0xff, 0x48, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x2c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
    0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x43,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x69, 0x6e, 0x70, 0x75,
    0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00,
    0x28, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x03, 0x00, 0x00, 0x00};

#endif /* __lwaifw_sine_test_model_h__ */

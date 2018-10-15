/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided
 *  with the distribution.
 *   * Neither the name of The Linux Foundation nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef __OEM_PUBLIC_KEY_H__
#define __OEM_PUBLIC_KEY_H__

/**
 * Internal builds use TestKeyRSA4096Public
 * OEM should replace this Array with public key used to sign boot.img
 * avbtool extract_public_key  --key KEY --output OUTPUT
 */
static const char OEMPublicKey[] = {
	0x00, 0x00, 0x10, 0x00, 0xBC, 0x74, 0x13, 0x97, 0xEB, 0x60, 0x45, 0xEE, 0x92, 0x97, 0x0A, 0x54, 
	0xC5, 0xDA, 0xDF, 0xF7, 0xBC, 0xDD, 0xB0, 0x3F, 0x9B, 0x4C, 0x2A, 0x1B, 0x87, 0x9B, 0xF5, 0xFC, 
	0x0C, 0x08, 0xEC, 0x47, 0x10, 0x4B, 0x20, 0x10, 0xB9, 0x21, 0x29, 0x4E, 0x9D, 0x65, 0x7C, 0xAA, 
	0x65, 0x4F, 0x59, 0xBD, 0xC7, 0x8F, 0x8B, 0xBA, 0xDE, 0xD2, 0x5E, 0x88, 0x4F, 0x00, 0x28, 0x8C, 
	0x97, 0xD0, 0x1D, 0x17, 0xDD, 0xC7, 0x7E, 0xC3, 0x21, 0x3A, 0x1A, 0x09, 0xC3, 0xC8, 0xEF, 0xEC, 
	0x23, 0xA6, 0x62, 0x76, 0x16, 0x82, 0xE0, 0xFE, 0xAB, 0x06, 0xD3, 0x51, 0xBE, 0x42, 0x51, 0x6C, 
	0x3E, 0xFA, 0x55, 0xB8, 0xC2, 0x2F, 0x00, 0xA2, 0x94, 0x76, 0x7E, 0x68, 0x49, 0x56, 0x13, 0x63, 
	0xD8, 0x81, 0x54, 0x99, 0xA6, 0x35, 0xE8, 0xCE, 0x05, 0xCF, 0x84, 0xD9, 0x4A, 0x3C, 0x4E, 0x0A, 
	0x75, 0x54, 0x46, 0x39, 0x09, 0x69, 0xA9, 0x63, 0x55, 0xA6, 0xB9, 0x73, 0xDA, 0x8D, 0x92, 0x10, 
	0xF8, 0x95, 0x09, 0x39, 0x77, 0xBA, 0x51, 0x30, 0x67, 0x5C, 0xF0, 0xA7, 0x16, 0xC4, 0x0D, 0xE1, 
	0x74, 0xA6, 0x43, 0x6E, 0x09, 0x12, 0xAF, 0x44, 0x54, 0x93, 0x81, 0x59, 0xA5, 0x31, 0xDB, 0xB0, 
	0xF8, 0xAA, 0xD3, 0xA3, 0x31, 0xE4, 0x57, 0x7C, 0xD8, 0x84, 0xA9, 0x33, 0xDB, 0x0F, 0x8E, 0xA7, 
	0x19, 0xCE, 0x51, 0xAA, 0x4F, 0xAF, 0x3E, 0xCF, 0x39, 0x25, 0x9D, 0xAE, 0xEF, 0xC4, 0x6A, 0xCF, 
	0xB3, 0x0C, 0xB3, 0x24, 0x54, 0xAF, 0xEB, 0xB5, 0xCD, 0x61, 0xF4, 0x51, 0x63, 0x57, 0x34, 0x08, 
	0x6B, 0x38, 0x56, 0x56, 0xD7, 0x27, 0xB9, 0xAB, 0xDD, 0xBB, 0x0E, 0xAF, 0xE7, 0x17, 0xA5, 0xE5, 
	0xCF, 0xE5, 0x09, 0xF6, 0x73, 0xB9, 0xD2, 0x32, 0x4F, 0x9F, 0x93, 0x4A, 0xC2, 0x13, 0xD8, 0x1D, 
	0x75, 0xE7, 0x01, 0x84, 0xDC, 0xBB, 0x1C, 0xC2, 0xF6, 0xAF, 0x41, 0x4C, 0x35, 0x81, 0x48, 0x2A, 
	0xFE, 0x18, 0xA5, 0x43, 0x15, 0xBE, 0xD9, 0x50, 0xBF, 0xDD, 0xB4, 0xBC, 0x50, 0xE6, 0xAA, 0x52, 
	0x0A, 0x5F, 0x0A, 0x0D, 0x4D, 0x86, 0x5D, 0x16, 0x92, 0x0B, 0xA1, 0xCB, 0x5E, 0xFC, 0x2B, 0x52, 
	0xB4, 0x7F, 0x6A, 0x21, 0xDF, 0xD1, 0xEB, 0x0C, 0x6C, 0xC7, 0x8D, 0xA6, 0xFD, 0x81, 0xAB, 0x86, 
	0x8E, 0x1F, 0x50, 0x27, 0x18, 0x9A, 0x81, 0xA2, 0xF6, 0x8F, 0x82, 0xDE, 0x72, 0x45, 0x74, 0x2D, 
	0x42, 0x40, 0x7F, 0x4A, 0xFF, 0xA5, 0xDD, 0x2E, 0xAC, 0xE9, 0x60, 0x18, 0x71, 0x24, 0x62, 0xE7, 
	0xF4, 0x20, 0x9F, 0x8D, 0x42, 0x79, 0xB7, 0x46, 0x42, 0xE4, 0xFC, 0x0C, 0x12, 0xB3, 0xDB, 0x30, 
	0xD4, 0x86, 0xE6, 0xB1, 0x23, 0xE0, 0x4D, 0x05, 0xB8, 0x2E, 0x00, 0x58, 0x69, 0x81, 0xDA, 0x7E, 
	0x14, 0x5E, 0xEA, 0xE7, 0x3C, 0x57, 0xF3, 0x87, 0x9E, 0x77, 0xB8, 0x5D, 0x6E, 0x17, 0x71, 0x4C, 
	0x9F, 0x76, 0xD5, 0xAD, 0x4C, 0x84, 0xF4, 0x72, 0xCA, 0x3F, 0xBA, 0x7E, 0x20, 0xEC, 0xED, 0x6A, 
	0xA3, 0x12, 0xD7, 0x0E, 0xFC, 0x70, 0x9D, 0xB4, 0x43, 0x70, 0x4B, 0xCC, 0xAC, 0x24, 0xFE, 0x8A, 
	0x47, 0x73, 0xA4, 0xFD, 0x5E, 0xE8, 0xF4, 0xC7, 0x74, 0x70, 0xE9, 0xF6, 0x26, 0x61, 0xD0, 0x24, 
	0xF2, 0x55, 0x10, 0xEE, 0x83, 0x60, 0xCE, 0x87, 0x11, 0x73, 0x98, 0x55, 0x7E, 0xA2, 0x44, 0x78, 
	0x54, 0x29, 0xD0, 0x90, 0xF0, 0xC9, 0x02, 0x2A, 0xA9, 0x1F, 0xB3, 0xE2, 0x7C, 0x75, 0x22, 0x61, 
	0xC0, 0xFC, 0x15, 0x6F, 0x53, 0xD7, 0x75, 0xFF, 0x2E, 0xA3, 0xDC, 0xA2, 0xEC, 0x82, 0x00, 0xCB, 
	0x8A, 0x4C, 0x1E, 0xEA, 0xBC, 0xFF, 0xBA, 0xBD, 0x4B, 0x64, 0x7E, 0x3D, 0xA5, 0x6F, 0x31, 0xF3, 
	0xBA, 0xBC, 0x46, 0xB6, 0x33, 0x38, 0x63, 0xD9, 0x73, 0x60, 0xE7, 0x5A, 0x38, 0x26, 0x1A, 0xFF, 
	0x0F, 0x83, 0x26, 0xEF, 0xE8, 0xE7, 0x26, 0x9B, 0x10, 0xBC, 0x99, 0xC1, 0xD4, 0x8C, 0x09, 0xD0, 
	0xD8, 0xC9, 0x41, 0x97, 0xED, 0xE0, 0x03, 0x31, 0x1C, 0x63, 0x0F, 0x0D, 0x12, 0x83, 0xC7, 0x81, 
	0x6B, 0x61, 0xCE, 0xCD, 0x72, 0x0B, 0x51, 0x4B, 0x3D, 0xC2, 0x18, 0xC5, 0x20, 0xE7, 0xFF, 0xD1, 
	0x5B, 0x69, 0x26, 0x89, 0x02, 0x44, 0x81, 0x99, 0xE8, 0xBF, 0x81, 0x02, 0x8F, 0x24, 0xB9, 0x0F, 
	0x34, 0x58, 0xCF, 0xEC, 0x99, 0xAA, 0xCF, 0xD6, 0x1F, 0x05, 0xC2, 0x21, 0x79, 0x10, 0x20, 0x70, 
	0xC6, 0xDB, 0x9E, 0x2F, 0xA9, 0x5C, 0x1C, 0x95, 0x8B, 0x6A, 0x98, 0xF9, 0x34, 0xE9, 0x27, 0xB0, 
	0x7F, 0x19, 0x82, 0x46, 0xEC, 0x91, 0xA5, 0x4A, 0xDA, 0x5A, 0x12, 0x53, 0xCE, 0x75, 0x3E, 0xA4, 
	0xCC, 0x90, 0xDC, 0x9A, 0xEF, 0x0D, 0x7A, 0x8C, 0x53, 0x04, 0xF4, 0xE6, 0x56, 0xDC, 0xFC, 0x18, 
	0x75, 0x3D, 0xBF, 0xC7, 0x77, 0xC8, 0xFD, 0xFF, 0x68, 0x11, 0xAD, 0x37, 0x6E, 0xD2, 0xCB, 0xC8, 
	0x8B, 0x52, 0x0E, 0x95, 0xEA, 0x97, 0xD8, 0x49, 0x5B, 0x25, 0x4D, 0xE1, 0xCF, 0x9D, 0x5A, 0xC7, 
	0x03, 0xF3, 0x92, 0xD1, 0x1B, 0xEE, 0x53, 0xC9, 0xB2, 0x02, 0xF2, 0x02, 0xB0, 0x78, 0xDC, 0x92, 
	0xE0, 0xC8, 0x22, 0x41, 0xA0, 0xB2, 0x14, 0x1A, 0xF8, 0xF6, 0x95, 0x39, 0x8A, 0xD4, 0x16, 0x96, 
	0xAC, 0x81, 0x05, 0x1E, 0xF8, 0x15, 0xF4, 0xF8, 0xAC, 0x74, 0xFB, 0x87, 0x59, 0xC1, 0xFD, 0x90, 
	0x51, 0x49, 0xA0, 0x5E, 0x2F, 0xF5, 0xDC, 0x3E, 0x49, 0xA8, 0x5D, 0xAA, 0x2D, 0xBC, 0x1B, 0x8F, 
	0xD0, 0x21, 0x81, 0x12, 0xA0, 0x46, 0x12, 0x1A, 0xA4, 0x88, 0xDD, 0xCB, 0x2F, 0xC9, 0xFD, 0xDD, 
	0x6F, 0x1C, 0xF7, 0x74, 0xF7, 0x94, 0xFA, 0x8B, 0x48, 0x81, 0x09, 0xFB, 0x3C, 0x6D, 0x55, 0x09, 
	0x79, 0x48, 0x63, 0x27, 0x6A, 0xA0, 0xA2, 0x5E, 0x40, 0x33, 0x58, 0x43, 0x66, 0xBE, 0x79, 0xDB, 
	0x96, 0xB0, 0x73, 0x04, 0xBC, 0x56, 0x30, 0xDA, 0xC1, 0x49, 0x3D, 0xC7, 0xD8, 0x35, 0x12, 0x75, 
	0x17, 0xEF, 0x39, 0x62, 0xB2, 0x11, 0x52, 0x82, 0x72, 0xC5, 0xF3, 0x37, 0xEF, 0xB0, 0xC8, 0xAD, 
	0x7D, 0xBD, 0x09, 0xAD, 0xD0, 0xE9, 0x27, 0x56, 0x09, 0xD9, 0x1A, 0x64, 0x81, 0xFF, 0x8B, 0x96, 
	0x47, 0xAC, 0x73, 0xA8, 0x15, 0xCE, 0x1F, 0xFC, 0x25, 0x59, 0xD2, 0xF8, 0xF4, 0x41, 0x44, 0x36, 
	0x8E, 0x09, 0x66, 0x48, 0x94, 0x50, 0x1E, 0xA5, 0x7B, 0x7B, 0x5D, 0x20, 0xA1, 0x96, 0xC5, 0x73, 
	0xC4, 0xF7, 0xC1, 0x5C, 0xD3, 0xBF, 0x3B, 0xCB, 0x1C, 0x38, 0xE6, 0xCC, 0xC7, 0x9B, 0x52, 0xE1, 
	0xA6, 0x97, 0x1E, 0x63, 0xFB, 0x13, 0x5C, 0x29, 0xE4, 0xAF, 0xF8, 0x1F, 0x39, 0x90, 0xAF, 0x9D, 
	0x17, 0xD9, 0xB3, 0x98, 0x5F, 0x6A, 0x24, 0x23, 0x65, 0x15, 0x96, 0x9B, 0x6C, 0x78, 0x3F, 0xCF, 
	0x97, 0x2B, 0xB5, 0xD2, 0x7C, 0x58, 0x20, 0xC3, 0xF5, 0x6F, 0xE7, 0x7A, 0xB7, 0xB5, 0x1E, 0x42, 
	0xB4, 0xCE, 0x89, 0x06, 0x23, 0x79, 0x2F, 0x4A, 0xC8, 0x90, 0x36, 0x6A, 0x96, 0xFB, 0xA6, 0x9E, 
	0xFC, 0xA1, 0xED, 0xB1, 0x01, 0xD9, 0x71, 0xA9, 0xF0, 0x76, 0x63, 0x25, 0xA2, 0xF0, 0x95, 0x3C, 
	0x7A, 0x85, 0xE6, 0x35, 0x6F, 0xE5, 0x8A, 0x89, 0x81, 0xE1, 0xEF, 0x68, 0x53, 0x2C, 0x34, 0xC7, 
	0x37, 0xB8, 0x22, 0xBF, 0x91, 0x18, 0xB3, 0x10, 0xD1, 0xF2, 0x33, 0x72, 0x82, 0xC6, 0xEB, 0xC2, 
	0x47, 0x54, 0x75, 0xAE, 0xDC, 0x44, 0x6C, 0x78, 0x57, 0xD2, 0x40, 0xE2, 0x8E, 0x20, 0x8D, 0x20, 
	0xE7, 0xE7, 0x91, 0xAE, 0x2F, 0x9F, 0x4A, 0xAC};
#endif /* __OEM_PUBLIC_KEY_H__ */

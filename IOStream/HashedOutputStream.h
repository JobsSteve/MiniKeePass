/*
 * Copyright 2011-2012 Jason Rush and John Flanagan. All rights reserved.
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

#import <Foundation/Foundation.h>
#import "OutputStream.h"

@interface HashedOutputStream : OutputStream {
    OutputStream *outputStream;
    
    uint32_t blockIndex;
    
    uint8_t *buffer;
    uint32_t bufferOffset;
    uint32_t bufferLength;
}

- (id)initWithOutputStream:(OutputStream*)stream blockSize:(uint32_t)blockSize;

@end

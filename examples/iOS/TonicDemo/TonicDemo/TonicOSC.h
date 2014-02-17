//
//  TonicOSC.h
//  TonicDemo
//
//  Created by Benedikt Eickhoff on 17.02.14.
//  Copyright (c) 2014 Morgan Packard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <VVOSC/VVOSC.h>

@interface TonicOSC : NSObject {
  //OSC related 
  
  OSCManager					*manager;
	OSCInPort					  *inPort;
  OSCAddressSpace     *tonicOSC;
}

@end

//
//  VoodooHIDMouseWrapper.h
//  VoodooI2C
//
//  Created by Christopher Luu on 10/7/15.
//  Copyright © 2015 Alexandre Daoud. All rights reserved.
//

#ifndef VoodooI2C_VoodooHIDMouseWrapper_h
#define VoodooI2C_VoodooHIDMouseWrapper_h

#include <IOKit/hid/IOHIDDevice.h>

class VoodooI2CHIDDevice;

class VoodooHIDMouseWrapper : public IOHIDDevice
{
    OSDeclareDefaultStructors(VoodooHIDMouseWrapper)

public:
    virtual bool start(IOService *provider);
    
    virtual IOReturn setProperties(OSObject *properties);
    
    virtual IOReturn newReportDescriptor(IOMemoryDescriptor **descriptor) const;
    
    virtual IOReturn setReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options=0);
    virtual IOReturn getReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options);
    
    virtual OSString* newManufacturerString() const;
    virtual OSNumber* newPrimaryUsageNumber() const;
    virtual OSNumber* newPrimaryUsagePageNumber() const;
    virtual OSNumber* newProductIDNumber() const;
    virtual OSString* newProductString() const;
    virtual OSString* newSerialNumberString() const;
    virtual OSString* newTransportString() const;
    virtual OSNumber* newVendorIDNumber() const;
    
    virtual OSNumber* newLocationIDNumber() const;
};

#endif /* VoodooI2C_VoodooHIDMouseWrapper_h */

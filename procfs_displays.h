/*
 * MacFUSE-Based procfs
 */

#ifndef _PROCFS_DISPLAYS_H_
#define _PROCFS_DISPLAYS_H_

#include <IOKit/graphics/IOGraphicsLib.h>
#include <CoreFoundation/CoreFoundation.h>

extern "C" {

CGDisplayCount PROCFS_GetDisplayCount(void);
int PROCFS_GetInfoForDisplayAtIndex(unsigned int index, char *buf,
                                    size_t *size);
int PROCFS_GetPNGForDisplayAtIndex(unsigned int index, CFMutableDataRef *data);
off_t PROCFS_GetPNGSizeForDisplayAtIndex(unsigned int index);

/* Declare deprecated functions */
void * CGDisplayBaseAddress ( CGDirectDisplayID display );
size_t CGDisplayBitsPerPixel ( CGDirectDisplayID display );
size_t CGDisplayBitsPerSample ( CGDirectDisplayID display );
size_t CGDisplaySamplesPerPixel ( CGDirectDisplayID display );
size_t CGDisplayBytesPerRow ( CGDirectDisplayID display );

} /* extern "C" */

#endif /* _PROCFS_DISPLAYS_H_ */

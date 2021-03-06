/* bzflag
 * Copyright (c) 1993-2020 Tim Riker
 *
 * This package is free software;  you can redistribute it and/or
 * modify it under the terms of the license found in the file
 * named COPYING that should have accompanied this file.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* SGIPlatformFactory:
 *  Factory for SGI Irix platform stuff.
 */

#ifndef BZF_SGIPLATFORM_FACTORY_H
#define BZF_SGIPLATFORM_FACTORY_H

#include "PlatformFactory.h"

class SGIPlatformFactory : public PlatformFactory
{
public:
    SGIPlatformFactory();
    ~SGIPlatformFactory();

    BzfDisplay*     createDisplay(const char* name, const char*);
    BzfVisual*      createVisual(const BzfDisplay*);
    BzfWindow*      createWindow(const BzfDisplay*, BzfVisual*);

private:
    SGIPlatformFactory(const SGIPlatformFactory&);
    SGIPlatformFactory& operator=(const SGIPlatformFactory&);

    BzfMedia*       createMedia();
};

#endif // BZF_SGIPLATFORM_FACTORY_H

// Local Variables: ***
// mode: C++ ***
// tab-width: 4 ***
// c-basic-offset: 4 ***
// indent-tabs-mode: nil ***
// End: ***
// ex: shiftwidth=4 tabstop=4

﻿// Magic Software, Inc.
// http://www.magic-software.com
// Copyright (c) 2000-2002.  All Rights Reserved
//
// Source code from Magic Software is supplied under the terms of a license
// agreement and may not be copied or disclosed except in accordance with the
// terms of that agreement.  The various license agreements may be found at
// the Magic Software web site.  This file is subject to the license
//
// FREE SOURCE CODE
// http://www.magic-software.com/License/free.pdf

#ifndef MGCDISK2_H
#define MGCDISK2_H

#include "MagicFMLibType.h"
#include "MgcVector2.h"

namespace Mgc {


class MAGICFM Disk2
{
public:
    // solid disk |X-C| <= R

    Disk2 ();

    Vector2& Center ();
    const Vector2& Center () const;

    Real& Radius ();
    const Real& Radius () const;

protected:
    Vector2 m_kCenter;
    Real m_fRadius;
};

#include "MgcDisk2.inl"

} // namespace Mgc

#endif



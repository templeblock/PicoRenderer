/*
 * viewport.c
 * 
 * This file is part of the "PicoRenderer" (Copyright (c) 2014 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#include "viewport.h"
#include "framebuffer.h"
#include "error.h"


void _pr_viewport_init(pr_viewport* viewport)
{
    if (viewport != NULL)
    {
        viewport->x             = 0.0f;
        viewport->y             = 0.0f;
        viewport->halfWidth     = 0.0f;
        viewport->halfHeight    = 0.0f;
        viewport->minDepth      = 0.0f;
        viewport->maxDepth      = 1.0f;
        viewport->depthSize     = 1.0f;
    }
    else
        _pr_error_set(PR_ERROR_NULL_POINTER, __FUNCTION__);
}

/*
 * Parsley http://parsley.googlecode.com
 * Copyright (c) 2010, Christoph Heindl. All rights reserved.
 * Code license:	New BSD License
 */

#pragma once

#include <draw3d/node.h>

namespace osg {
  class Geode;
}

namespace Parsley {
  namespace Draw3D {    

    public ref class Axis : public NodeT<osg::Geode> {
    public:
      Axis(double extension);
    };
  }
}
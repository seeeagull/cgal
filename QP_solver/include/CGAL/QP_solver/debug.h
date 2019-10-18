// Copyright (c) 1997-2007  ETH Zurich (Switzerland).
// All rights reserved.
//
// $URL$
// $Id$
// SPDX-License-Identifier: GPL-3.0-or-later
// 
//
// Author(s)     : Sven Schoenherr
//                 Bernd Gaertner <gaertner@inf.ethz.ch>
//                 Franz Wessendorp 
//                 Kaspar Fischer 

#ifndef CGAL_QP_DEBUG_H
#define CGAL_QP_DEBUG_H

#include <CGAL/license/QP_solver.h>


// macro definitions
// =================

// debug
// -----
#if (    defined( CGAL_QP_NO_DEBUG)\
      || defined( CGAL_QP_NO_ASSERTIONS)\
      || defined( CGAL_NO_ASSERTIONS)\
      || defined( CGAL_NO_DEBUG) || defined( NDEBUG))
#  define  CGAL_qpe_debug  if ( 0)
#else
#  define  CGAL_qpe_debug  if ( 1)
#endif // qpe debug

#endif // CGAL_QP_DEBUG_H

// ===== EOF ==================================================================

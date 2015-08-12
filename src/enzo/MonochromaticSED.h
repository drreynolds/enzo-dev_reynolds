/*****************************************************************************
 *                                                                           *
 * This software is released under the terms of the "Enzo Public License"    *
 * in the accompanying LICENSE file.                                         *
 *                                                                           *
 *****************************************************************************/
/***********************************************************************
/
/  Monochromatic radiation SED instantiation of the SED base class.
/
/  written by: Daniel Reynolds
/  date:       July 2014
/  modified1:  
/
/  PURPOSE: This is an example SED class implementation, that is used 
/  for test problems.
/
************************************************************************/
#ifndef MONOCHROMATIC_SED_DEFINED__
#define MONOCHROMATIC_SED_DEFINED__

#include "preincludes.h"
#include "SED.h"
#include "macros_and_parameters.h"
#include "typedefs.h"

class MonochromaticSED : public virtual SED {

 private:

  // SED-defining data
  float frequency;

 public:

  // constructor
  MonochromaticSED(float Frequency);

  // required functions
  bool monochromatic();
  float lower_bound();
  float upper_bound();
  float value(float hnu);

};
  
#endif

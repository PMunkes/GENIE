//____________________________________________________________________________
/*!

\class    genie::DFRPrimaryLeptonGenerator

\brief    Generates the final state primary lepton in diffractive reactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  Feb 15th, 2009

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_
#define _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

#include "EVGModules/PrimaryLeptonGenerator.h"

namespace genie {

class DFRPrimaryLeptonGenerator : public PrimaryLeptonGenerator {

public :
  DFRPrimaryLeptonGenerator();
  DFRPrimaryLeptonGenerator(string config);
 ~DFRPrimaryLeptonGenerator();

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;
};

}      // genie namespace
#endif // _DIFFRACTIVE_PRIMARY_LEPTON_GENERATOR_H_

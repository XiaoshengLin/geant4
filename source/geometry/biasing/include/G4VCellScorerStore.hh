//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4VCellScorerStore.hh,v 1.6 2002/10/28 09:53:50 dressel Exp $
// GEANT4 tag $Name: geant4-06-00 $
//
// ----------------------------------------------------------------------
// Class G4VCellScorerStore
//
// Class description:
//
// This class describes the interface for a store for 
// G4VCellScorer objects. It is used by the class 
// G4CellStoreScorer to score the G4CellScorer objects per cell.
// 

// Author: Michael Dressel (Michael.Dressel@cern.ch)
// ----------------------------------------------------------------------

#ifndef G4VCellScorerStore_hh
#define G4VCellScorerStore_hh G4VCellScorerStore_hh

class G4VCellScorer;
class G4GeometryCell;

class G4VCellScorerStore {
public: // with description 

  G4VCellScorerStore();

  virtual ~G4VCellScorerStore();

  virtual G4VCellScorer *GetCellScore(const G4GeometryCell &gCell) = 0;
    // returns a cell scorer related to the given cell 
};


#endif

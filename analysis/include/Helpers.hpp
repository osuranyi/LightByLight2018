//  Helpers.hpp
//
//  Created by Jeremi Niedziela on 22/07/2019.

#ifndef Helpers_h
#define Helpers_h

#pragma clang diagnostic push // save the current state
#pragma clang diagnostic ignored "-Wdocumentation" // turn off ROOT's warnings
#pragma clang diagnostic ignored "-Wconversion"

#include "TH1D.h"
#include "TH2D.h"
#include "TGraph.h"
#include "TF1.h"
#include "TTree.h"
#include "TFile.h"
#include "TEnv.h"
#include "TLorentzVector.h"

#pragma clang diagnostic pop // restores the saved state for diagnostics

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <memory>

using namespace std;

// List of allowed LbL triggers
const vector<string> triggerNamesLbL = {
  "HLT_HIUPC_DoubleEG2_NotMBHF2AND_v1",
  "HLT_HIUPC_SingleEG3_NotMBHF2AND_v1"
};

enum EDataset{
  kData,
  kMCqedSC,
  kMCqedSL,
  kMClbl,
  kMCcep,
  nDatasets
};

const map<EDataset, string> inFileNames = {
  {kData    , "ntuples/ntuples_data_small_sample_merged.root" },
  {kMCqedSC , "ntuples/ntuples_mq_qed_sc_merged.root"         },
  {kMClbl   , "ntuples/ntuples_mc_lbl_merged.root"            },
};

enum ECaloType { kEB, kEE, kHB, kHE, kHFp, kHFm, nCaloTypes };

const map<ECaloType, double> caloNoiseThreshold = { // in GeV
  {kEB, 0.8},
  {kEE, 3.7},
  {kHB, 2.9},
  {kHE, 2.5},
  {kHFp, 7.3},
  {kHFm, 7.6}
};

const double maxEtaEB = 1.479;
const double minEtaEE = maxEtaEB;
const double maxEtaEE = 3.0;

const double maxEtaHB = 1.305;
const double minEtaHE = maxEtaHB;
const double maxEtaHE = 3.0;

const double minEtaHF = 2.9;
const double maxEtaHF = 5.2;

#endif /* Helpers_h */
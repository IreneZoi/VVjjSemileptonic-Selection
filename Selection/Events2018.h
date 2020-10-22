//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Oct 22 06:19:53 2020 by ROOT version 6.14/09
// from TTree Events/Events
// found on file: root://cmseos.fnal.gov//store/user/lnujj/VVjj_aQGC/nanoAOD_skim/Run2018_v7_07Sep2020/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/200907_103355/DCC54831-AAB1-CD4C-B12E-5769F3ED292C_SkimHadd.root
//////////////////////////////////////////////////////////

#ifndef Events_h
#define Events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   Float_t         HTXS_Higgs_pt;
   Float_t         HTXS_Higgs_y;
   Int_t           HTXS_stage1_1_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_cat_pTjet30GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage_0;
   Int_t           HTXS_stage_1_pTjet25;
   Int_t           HTXS_stage_1_pTjet30;
   UChar_t         HTXS_njets25;
   UChar_t         HTXS_njets30;
   Float_t         btagWeight_CSVV2;
   Float_t         btagWeight_DeepCSVB;
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         ChsMET_phi;
   Float_t         ChsMET_pt;
   Float_t         ChsMET_sumEt;
   UInt_t          nCorrT1METJet;
   Float_t         CorrT1METJet_area[36];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_eta[36];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_muonSubtrFactor[36];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_phi[36];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_rawPt[36];   //[nCorrT1METJet]
   UInt_t          nElectron;
   Float_t         Electron_deltaEtaSC[8];   //[nElectron]
   Float_t         Electron_dr03EcalRecHitSumEt[8];   //[nElectron]
   Float_t         Electron_dr03HcalDepth1TowerSumEt[8];   //[nElectron]
   Float_t         Electron_dr03TkSumPt[8];   //[nElectron]
   Float_t         Electron_dr03TkSumPtHEEP[8];   //[nElectron]
   Float_t         Electron_dxy[8];   //[nElectron]
   Float_t         Electron_dxyErr[8];   //[nElectron]
   Float_t         Electron_dz[8];   //[nElectron]
   Float_t         Electron_dzErr[8];   //[nElectron]
   Float_t         Electron_eCorr[8];   //[nElectron]
   Float_t         Electron_eInvMinusPInv[8];   //[nElectron]
   Float_t         Electron_energyErr[8];   //[nElectron]
   Float_t         Electron_eta[8];   //[nElectron]
   Float_t         Electron_hoe[8];   //[nElectron]
   Float_t         Electron_ip3d[8];   //[nElectron]
   Float_t         Electron_jetPtRelv2[8];   //[nElectron]
   Float_t         Electron_jetRelIso[8];   //[nElectron]
   Float_t         Electron_mass[8];   //[nElectron]
   Float_t         Electron_miniPFRelIso_all[8];   //[nElectron]
   Float_t         Electron_miniPFRelIso_chg[8];   //[nElectron]
   Float_t         Electron_mvaFall17V1Iso[8];   //[nElectron]
   Float_t         Electron_mvaFall17V1noIso[8];   //[nElectron]
   Float_t         Electron_mvaFall17V2Iso[8];   //[nElectron]
   Float_t         Electron_mvaFall17V2noIso[8];   //[nElectron]
   Float_t         Electron_pfRelIso03_all[8];   //[nElectron]
   Float_t         Electron_pfRelIso03_chg[8];   //[nElectron]
   Float_t         Electron_phi[8];   //[nElectron]
   Float_t         Electron_pt[8];   //[nElectron]
   Float_t         Electron_r9[8];   //[nElectron]
   Float_t         Electron_scEtOverPt[8];   //[nElectron]
   Float_t         Electron_sieie[8];   //[nElectron]
   Float_t         Electron_sip3d[8];   //[nElectron]
   Float_t         Electron_mvaTTH[8];   //[nElectron]
   Int_t           Electron_charge[8];   //[nElectron]
   Int_t           Electron_cutBased[8];   //[nElectron]
   Int_t           Electron_cutBased_Fall17_V1[8];   //[nElectron]
   Int_t           Electron_jetIdx[8];   //[nElectron]
   Int_t           Electron_pdgId[8];   //[nElectron]
   Int_t           Electron_photonIdx[8];   //[nElectron]
   Int_t           Electron_tightCharge[8];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmap[8];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapHEEP[8];   //[nElectron]
   Bool_t          Electron_convVeto[8];   //[nElectron]
   Bool_t          Electron_cutBased_HEEP[8];   //[nElectron]
   Bool_t          Electron_isPFcand[8];   //[nElectron]
   UChar_t         Electron_lostHits[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WPL[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WPL[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WPL[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP80[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP90[8];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WPL[8];   //[nElectron]
   UChar_t         Electron_seedGain[8];   //[nElectron]
   Bool_t          Flag_ecalBadCalibFilterV2;
   UInt_t          nFatJet;
   Float_t         FatJet_area[7];   //[nFatJet]
   Float_t         FatJet_btagCMVA[7];   //[nFatJet]
   Float_t         FatJet_btagCSVV2[7];   //[nFatJet]
   Float_t         FatJet_btagDDBvL[7];   //[nFatJet]
   Float_t         FatJet_btagDDBvL_noMD[7];   //[nFatJet]
   Float_t         FatJet_btagDDCvB[7];   //[nFatJet]
   Float_t         FatJet_btagDDCvB_noMD[7];   //[nFatJet]
   Float_t         FatJet_btagDDCvL[7];   //[nFatJet]
   Float_t         FatJet_btagDDCvL_noMD[7];   //[nFatJet]
   Float_t         FatJet_btagDeepB[7];   //[nFatJet]
   Float_t         FatJet_btagHbb[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_H4qvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_HbbvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_TvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_WvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHbbvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHccvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZbbvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_bbvsLight[7];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ccvsLight[7];   //[nFatJet]
   Float_t         FatJet_deepTag_H[7];   //[nFatJet]
   Float_t         FatJet_deepTag_QCD[7];   //[nFatJet]
   Float_t         FatJet_deepTag_QCDothers[7];   //[nFatJet]
   Float_t         FatJet_deepTag_TvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTag_WvsQCD[7];   //[nFatJet]
   Float_t         FatJet_deepTag_ZvsQCD[7];   //[nFatJet]
   Float_t         FatJet_eta[7];   //[nFatJet]
   Float_t         FatJet_mass[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop[7];   //[nFatJet]
   Float_t         FatJet_n2b1[7];   //[nFatJet]
   Float_t         FatJet_n3b1[7];   //[nFatJet]
   Float_t         FatJet_phi[7];   //[nFatJet]
   Float_t         FatJet_pt[7];   //[nFatJet]
   Float_t         FatJet_rawFactor[7];   //[nFatJet]
   Float_t         FatJet_tau1[7];   //[nFatJet]
   Float_t         FatJet_tau2[7];   //[nFatJet]
   Float_t         FatJet_tau3[7];   //[nFatJet]
   Float_t         FatJet_tau4[7];   //[nFatJet]
   Float_t         FatJet_lsf3[7];   //[nFatJet]
   Int_t           FatJet_jetId[7];   //[nFatJet]
   Int_t           FatJet_subJetIdx1[7];   //[nFatJet]
   Int_t           FatJet_subJetIdx2[7];   //[nFatJet]
   Int_t           FatJet_electronIdx3SJ[7];   //[nFatJet]
   Int_t           FatJet_muonIdx3SJ[7];   //[nFatJet]
   UInt_t          nFsrPhoton;
   Float_t         FsrPhoton_dROverEt2[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_eta[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_phi[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_pt[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_relIso03[3];   //[nFsrPhoton]
   Int_t           FsrPhoton_muonIdx[3];   //[nFsrPhoton]
   UInt_t          nGenJetAK8;
   Float_t         GenJetAK8_eta[8];   //[nGenJetAK8]
   Float_t         GenJetAK8_mass[8];   //[nGenJetAK8]
   Float_t         GenJetAK8_phi[8];   //[nGenJetAK8]
   Float_t         GenJetAK8_pt[8];   //[nGenJetAK8]
   UInt_t          nGenJet;
   Float_t         GenJet_eta[23];   //[nGenJet]
   Float_t         GenJet_mass[23];   //[nGenJet]
   Float_t         GenJet_phi[23];   //[nGenJet]
   Float_t         GenJet_pt[23];   //[nGenJet]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[161];   //[nGenPart]
   Float_t         GenPart_mass[161];   //[nGenPart]
   Float_t         GenPart_phi[161];   //[nGenPart]
   Float_t         GenPart_pt[161];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[161];   //[nGenPart]
   Int_t           GenPart_pdgId[161];   //[nGenPart]
   Int_t           GenPart_status[161];   //[nGenPart]
   Int_t           GenPart_statusFlags[161];   //[nGenPart]
   UInt_t          nSubGenJetAK8;
   Float_t         SubGenJetAK8_eta[16];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_mass[16];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_phi[16];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_pt[16];   //[nSubGenJetAK8]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   UInt_t          nGenVisTau;
   Float_t         GenVisTau_eta[3];   //[nGenVisTau]
   Float_t         GenVisTau_mass[3];   //[nGenVisTau]
   Float_t         GenVisTau_phi[3];   //[nGenVisTau]
   Float_t         GenVisTau_pt[3];   //[nGenVisTau]
   Int_t           GenVisTau_charge[3];   //[nGenVisTau]
   Int_t           GenVisTau_genPartIdxMother[3];   //[nGenVisTau]
   Int_t           GenVisTau_status[3];   //[nGenVisTau]
   Float_t         genWeight;
   Float_t         LHEWeight_originalXWGTUP;
   UInt_t          nLHEPdfWeight;
   Float_t         LHEPdfWeight[33];   //[nLHEPdfWeight]
   UInt_t          nLHEReweightingWeight;
   Float_t         LHEReweightingWeight[1];   //[nLHEReweightingWeight]
   UInt_t          nLHEScaleWeight;
   Float_t         LHEScaleWeight[9];   //[nLHEScaleWeight]
   UInt_t          nPSWeight;
   Float_t         PSWeight[4];   //[nPSWeight]
   UInt_t          nIsoTrack;
   Float_t         IsoTrack_dxy[6];   //[nIsoTrack]
   Float_t         IsoTrack_dz[6];   //[nIsoTrack]
   Float_t         IsoTrack_eta[6];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_all[6];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_chg[6];   //[nIsoTrack]
   Float_t         IsoTrack_phi[6];   //[nIsoTrack]
   Float_t         IsoTrack_pt[6];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_all[6];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_chg[6];   //[nIsoTrack]
   Int_t           IsoTrack_fromPV[6];   //[nIsoTrack]
   Int_t           IsoTrack_pdgId[6];   //[nIsoTrack]
   Bool_t          IsoTrack_isHighPurityTrack[6];   //[nIsoTrack]
   Bool_t          IsoTrack_isPFcand[6];   //[nIsoTrack]
   Bool_t          IsoTrack_isFromLostTrack[6];   //[nIsoTrack]
   UInt_t          nJet;
   Float_t         Jet_area[30];   //[nJet]
   Float_t         Jet_btagCMVA[30];   //[nJet]
   Float_t         Jet_btagCSVV2[30];   //[nJet]
   Float_t         Jet_btagDeepB[30];   //[nJet]
   Float_t         Jet_btagDeepC[30];   //[nJet]
   Float_t         Jet_btagDeepFlavB[30];   //[nJet]
   Float_t         Jet_btagDeepFlavC[30];   //[nJet]
   Float_t         Jet_chEmEF[30];   //[nJet]
   Float_t         Jet_chFPV0EF[30];   //[nJet]
   Float_t         Jet_chFPV1EF[30];   //[nJet]
   Float_t         Jet_chFPV2EF[30];   //[nJet]
   Float_t         Jet_chFPV3EF[30];   //[nJet]
   Float_t         Jet_chHEF[30];   //[nJet]
   Float_t         Jet_eta[30];   //[nJet]
   Float_t         Jet_mass[30];   //[nJet]
   Float_t         Jet_muEF[30];   //[nJet]
   Float_t         Jet_muonSubtrFactor[30];   //[nJet]
   Float_t         Jet_neEmEF[30];   //[nJet]
   Float_t         Jet_neHEF[30];   //[nJet]
   Float_t         Jet_phi[30];   //[nJet]
   Float_t         Jet_pt[30];   //[nJet]
   Float_t         Jet_puIdDisc[30];   //[nJet]
   Float_t         Jet_qgl[30];   //[nJet]
   Float_t         Jet_rawFactor[30];   //[nJet]
   Float_t         Jet_bRegCorr[30];   //[nJet]
   Float_t         Jet_bRegRes[30];   //[nJet]
   Float_t         Jet_cRegCorr[30];   //[nJet]
   Float_t         Jet_cRegRes[30];   //[nJet]
   Int_t           Jet_electronIdx1[30];   //[nJet]
   Int_t           Jet_electronIdx2[30];   //[nJet]
   Int_t           Jet_jetId[30];   //[nJet]
   Int_t           Jet_muonIdx1[30];   //[nJet]
   Int_t           Jet_muonIdx2[30];   //[nJet]
   Int_t           Jet_nConstituents[30];   //[nJet]
   Int_t           Jet_nElectrons[30];   //[nJet]
   Int_t           Jet_nMuons[30];   //[nJet]
   Int_t           Jet_puId[30];   //[nJet]
   Float_t         LHE_HT;
   Float_t         LHE_HTIncoming;
   Float_t         LHE_Vpt;
   Float_t         LHE_AlphaS;
   UChar_t         LHE_Njets;
   UChar_t         LHE_Nb;
   UChar_t         LHE_Nc;
   UChar_t         LHE_Nuds;
   UChar_t         LHE_Nglu;
   UChar_t         LHE_NpNLO;
   UChar_t         LHE_NpLO;
   UInt_t          nLHEPart;
   Float_t         LHEPart_pt[9];   //[nLHEPart]
   Float_t         LHEPart_eta[9];   //[nLHEPart]
   Float_t         LHEPart_phi[9];   //[nLHEPart]
   Float_t         LHEPart_mass[9];   //[nLHEPart]
   Float_t         LHEPart_incomingpz[9];   //[nLHEPart]
   Int_t           LHEPart_pdgId[9];   //[nLHEPart]
   Int_t           LHEPart_status[9];   //[nLHEPart]
   Int_t           LHEPart_spin[9];   //[nLHEPart]
   Float_t         GenMET_phi;
   Float_t         GenMET_pt;
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_covXX;
   Float_t         MET_covXY;
   Float_t         MET_covYY;
   Float_t         MET_phi;
   Float_t         MET_pt;
   Float_t         MET_significance;
   Float_t         MET_sumEt;
   Float_t         MET_sumPtUnclustered;
   UInt_t          nMuon;
   Float_t         Muon_dxy[10];   //[nMuon]
   Float_t         Muon_dxyErr[10];   //[nMuon]
   Float_t         Muon_dxybs[10];   //[nMuon]
   Float_t         Muon_dz[10];   //[nMuon]
   Float_t         Muon_dzErr[10];   //[nMuon]
   Float_t         Muon_eta[10];   //[nMuon]
   Float_t         Muon_ip3d[10];   //[nMuon]
   Float_t         Muon_jetPtRelv2[10];   //[nMuon]
   Float_t         Muon_jetRelIso[10];   //[nMuon]
   Float_t         Muon_mass[10];   //[nMuon]
   Float_t         Muon_miniPFRelIso_all[10];   //[nMuon]
   Float_t         Muon_miniPFRelIso_chg[10];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[10];   //[nMuon]
   Float_t         Muon_pfRelIso03_chg[10];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[10];   //[nMuon]
   Float_t         Muon_phi[10];   //[nMuon]
   Float_t         Muon_pt[10];   //[nMuon]
   Float_t         Muon_ptErr[10];   //[nMuon]
   Float_t         Muon_segmentComp[10];   //[nMuon]
   Float_t         Muon_sip3d[10];   //[nMuon]
   Float_t         Muon_softMva[10];   //[nMuon]
   Float_t         Muon_tkRelIso[10];   //[nMuon]
   Float_t         Muon_tunepRelPt[10];   //[nMuon]
   Float_t         Muon_mvaLowPt[10];   //[nMuon]
   Float_t         Muon_mvaTTH[10];   //[nMuon]
   Int_t           Muon_charge[10];   //[nMuon]
   Int_t           Muon_jetIdx[10];   //[nMuon]
   Int_t           Muon_nStations[10];   //[nMuon]
   Int_t           Muon_nTrackerLayers[10];   //[nMuon]
   Int_t           Muon_pdgId[10];   //[nMuon]
   Int_t           Muon_tightCharge[10];   //[nMuon]
   Int_t           Muon_fsrPhotonIdx[10];   //[nMuon]
   UChar_t         Muon_highPtId[10];   //[nMuon]
   Bool_t          Muon_highPurity[10];   //[nMuon]
   Bool_t          Muon_inTimeMuon[10];   //[nMuon]
   Bool_t          Muon_isGlobal[10];   //[nMuon]
   Bool_t          Muon_isPFcand[10];   //[nMuon]
   Bool_t          Muon_isTracker[10];   //[nMuon]
   Bool_t          Muon_looseId[10];   //[nMuon]
   Bool_t          Muon_mediumId[10];   //[nMuon]
   Bool_t          Muon_mediumPromptId[10];   //[nMuon]
   UChar_t         Muon_miniIsoId[10];   //[nMuon]
   UChar_t         Muon_multiIsoId[10];   //[nMuon]
   UChar_t         Muon_mvaId[10];   //[nMuon]
   UChar_t         Muon_pfIsoId[10];   //[nMuon]
   Bool_t          Muon_softId[10];   //[nMuon]
   Bool_t          Muon_softMvaId[10];   //[nMuon]
   Bool_t          Muon_tightId[10];   //[nMuon]
   UChar_t         Muon_tkIsoId[10];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[10];   //[nMuon]
   UInt_t          nPhoton;
   Float_t         Photon_eCorr[10];   //[nPhoton]
   Float_t         Photon_energyErr[10];   //[nPhoton]
   Float_t         Photon_eta[10];   //[nPhoton]
   Float_t         Photon_hoe[10];   //[nPhoton]
   Float_t         Photon_mass[10];   //[nPhoton]
   Float_t         Photon_mvaID[10];   //[nPhoton]
   Float_t         Photon_mvaID_Fall17V1p1[10];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all[10];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg[10];   //[nPhoton]
   Float_t         Photon_phi[10];   //[nPhoton]
   Float_t         Photon_pt[10];   //[nPhoton]
   Float_t         Photon_r9[10];   //[nPhoton]
   Float_t         Photon_sieie[10];   //[nPhoton]
   Int_t           Photon_charge[10];   //[nPhoton]
   Int_t           Photon_cutBased[10];   //[nPhoton]
   Int_t           Photon_cutBased_Fall17V1Bitmap[10];   //[nPhoton]
   Int_t           Photon_electronIdx[10];   //[nPhoton]
   Int_t           Photon_jetIdx[10];   //[nPhoton]
   Int_t           Photon_pdgId[10];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[10];   //[nPhoton]
   Bool_t          Photon_electronVeto[10];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[10];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[10];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[10];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[10];   //[nPhoton]
   Bool_t          Photon_pixelSeed[10];   //[nPhoton]
   UChar_t         Photon_seedGain[10];   //[nPhoton]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         PuppiMET_phi;
   Float_t         PuppiMET_phiJERUp;
   Float_t         PuppiMET_phiJESUp;
   Float_t         PuppiMET_pt;
   Float_t         PuppiMET_ptJERUp;
   Float_t         PuppiMET_ptJESUp;
   Float_t         PuppiMET_sumEt;
   Float_t         RawMET_phi;
   Float_t         RawMET_pt;
   Float_t         RawMET_sumEt;
   Float_t         RawPuppiMET_phi;
   Float_t         RawPuppiMET_pt;
   Float_t         RawPuppiMET_sumEt;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nGenDressedLepton;
   Float_t         GenDressedLepton_eta[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_mass[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_phi[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_pt[3];   //[nGenDressedLepton]
   Int_t           GenDressedLepton_pdgId[3];   //[nGenDressedLepton]
   Bool_t          GenDressedLepton_hasTauAnc[3];   //[nGenDressedLepton]
   UInt_t          nGenIsolatedPhoton;
   Float_t         GenIsolatedPhoton_eta[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_mass[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_phi[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_pt[3];   //[nGenIsolatedPhoton]
   UInt_t          nSoftActivityJet;
   Float_t         SoftActivityJet_eta[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_phi[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_pt[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJetHT;
   Float_t         SoftActivityJetHT10;
   Float_t         SoftActivityJetHT2;
   Float_t         SoftActivityJetHT5;
   Int_t           SoftActivityJetNjets10;
   Int_t           SoftActivityJetNjets2;
   Int_t           SoftActivityJetNjets5;
   UInt_t          nSubJet;
   Float_t         SubJet_btagCMVA[12];   //[nSubJet]
   Float_t         SubJet_btagCSVV2[12];   //[nSubJet]
   Float_t         SubJet_btagDeepB[12];   //[nSubJet]
   Float_t         SubJet_eta[12];   //[nSubJet]
   Float_t         SubJet_mass[12];   //[nSubJet]
   Float_t         SubJet_n2b1[12];   //[nSubJet]
   Float_t         SubJet_n3b1[12];   //[nSubJet]
   Float_t         SubJet_phi[12];   //[nSubJet]
   Float_t         SubJet_pt[12];   //[nSubJet]
   Float_t         SubJet_rawFactor[12];   //[nSubJet]
   Float_t         SubJet_tau1[12];   //[nSubJet]
   Float_t         SubJet_tau2[12];   //[nSubJet]
   Float_t         SubJet_tau3[12];   //[nSubJet]
   Float_t         SubJet_tau4[12];   //[nSubJet]
   UInt_t          nTau;
   Float_t         Tau_chargedIso[7];   //[nTau]
   Float_t         Tau_dxy[7];   //[nTau]
   Float_t         Tau_dz[7];   //[nTau]
   Float_t         Tau_eta[7];   //[nTau]
   Float_t         Tau_leadTkDeltaEta[7];   //[nTau]
   Float_t         Tau_leadTkDeltaPhi[7];   //[nTau]
   Float_t         Tau_leadTkPtOverTauPt[7];   //[nTau]
   Float_t         Tau_mass[7];   //[nTau]
   Float_t         Tau_neutralIso[7];   //[nTau]
   Float_t         Tau_phi[7];   //[nTau]
   Float_t         Tau_photonsOutsideSignalCone[7];   //[nTau]
   Float_t         Tau_pt[7];   //[nTau]
   Float_t         Tau_puCorr[7];   //[nTau]
   Float_t         Tau_rawAntiEle[7];   //[nTau]
   Float_t         Tau_rawAntiEle2018[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSe[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSjet[7];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSmu[7];   //[nTau]
   Float_t         Tau_rawIso[7];   //[nTau]
   Float_t         Tau_rawIsodR03[7];   //[nTau]
   Float_t         Tau_rawMVAnewDM2017v2[7];   //[nTau]
   Float_t         Tau_rawMVAoldDM[7];   //[nTau]
   Float_t         Tau_rawMVAoldDM2017v1[7];   //[nTau]
   Float_t         Tau_rawMVAoldDM2017v2[7];   //[nTau]
   Float_t         Tau_rawMVAoldDMdR032017v2[7];   //[nTau]
   Int_t           Tau_charge[7];   //[nTau]
   Int_t           Tau_decayMode[7];   //[nTau]
   Int_t           Tau_jetIdx[7];   //[nTau]
   Int_t           Tau_rawAntiEleCat[7];   //[nTau]
   Int_t           Tau_rawAntiEleCat2018[7];   //[nTau]
   UChar_t         Tau_idAntiEle[7];   //[nTau]
   UChar_t         Tau_idAntiEle2018[7];   //[nTau]
   UChar_t         Tau_idAntiMu[7];   //[nTau]
   Bool_t          Tau_idDecayMode[7];   //[nTau]
   Bool_t          Tau_idDecayModeNewDMs[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSe[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSjet[7];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSmu[7];   //[nTau]
   UChar_t         Tau_idMVAnewDM2017v2[7];   //[nTau]
   UChar_t         Tau_idMVAoldDM[7];   //[nTau]
   UChar_t         Tau_idMVAoldDM2017v1[7];   //[nTau]
   UChar_t         Tau_idMVAoldDM2017v2[7];   //[nTau]
   UChar_t         Tau_idMVAoldDMdR032017v2[7];   //[nTau]
   Float_t         TkMET_phi;
   Float_t         TkMET_pt;
   Float_t         TkMET_sumEt;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[48];   //[nTrigObj]
   Float_t         TrigObj_eta[48];   //[nTrigObj]
   Float_t         TrigObj_phi[48];   //[nTrigObj]
   Float_t         TrigObj_l1pt[48];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[48];   //[nTrigObj]
   Float_t         TrigObj_l2pt[48];   //[nTrigObj]
   Int_t           TrigObj_id[48];   //[nTrigObj]
   Int_t           TrigObj_l1iso[48];   //[nTrigObj]
   Int_t           TrigObj_l1charge[48];   //[nTrigObj]
   Int_t           TrigObj_filterBits[48];   //[nTrigObj]
   Int_t           genTtbarId;
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   UInt_t          nSV;
   Float_t         SV_dlen[18];   //[nSV]
   Float_t         SV_dlenSig[18];   //[nSV]
   Float_t         SV_dxy[18];   //[nSV]
   Float_t         SV_dxySig[18];   //[nSV]
   Float_t         SV_pAngle[18];   //[nSV]
   Int_t           Electron_genPartIdx[8];   //[nElectron]
   UChar_t         Electron_genPartFlav[8];   //[nElectron]
   Int_t           FatJet_genJetAK8Idx[7];   //[nFatJet]
   Int_t           FatJet_hadronFlavour[7];   //[nFatJet]
   UChar_t         FatJet_nBHadrons[7];   //[nFatJet]
   UChar_t         FatJet_nCHadrons[7];   //[nFatJet]
   Int_t           GenJetAK8_partonFlavour[8];   //[nGenJetAK8]
   UChar_t         GenJetAK8_hadronFlavour[8];   //[nGenJetAK8]
   Int_t           GenJet_partonFlavour[23];   //[nGenJet]
   UChar_t         GenJet_hadronFlavour[23];   //[nGenJet]
   Int_t           Jet_genJetIdx[30];   //[nJet]
   Int_t           Jet_hadronFlavour[30];   //[nJet]
   Int_t           Jet_partonFlavour[30];   //[nJet]
   Int_t           Muon_genPartIdx[10];   //[nMuon]
   UChar_t         Muon_genPartFlav[10];   //[nMuon]
   Int_t           Photon_genPartIdx[10];   //[nPhoton]
   UChar_t         Photon_genPartFlav[10];   //[nPhoton]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   UChar_t         Electron_cleanmask[8];   //[nElectron]
   UChar_t         Jet_cleanmask[30];   //[nJet]
   UChar_t         Muon_cleanmask[10];   //[nMuon]
   UChar_t         Photon_cleanmask[10];   //[nPhoton]
   UChar_t         Tau_cleanmask[7];   //[nTau]
   UChar_t         SubJet_nBHadrons[12];   //[nSubJet]
   UChar_t         SubJet_nCHadrons[12];   //[nSubJet]
   Float_t         SV_chi2[18];   //[nSV]
   Float_t         SV_eta[18];   //[nSV]
   Float_t         SV_mass[18];   //[nSV]
   Float_t         SV_ndof[18];   //[nSV]
   Float_t         SV_phi[18];   //[nSV]
   Float_t         SV_pt[18];   //[nSV]
   Float_t         SV_x[18];   //[nSV]
   Float_t         SV_y[18];   //[nSV]
   Float_t         SV_z[18];   //[nSV]
   Int_t           Tau_genPartIdx[7];   //[nTau]
   UChar_t         Tau_genPartFlav[7];   //[nTau]
   Bool_t          L1_AlwaysTrue;
   Bool_t          L1_BPTX_AND_Ref1_VME;
   Bool_t          L1_BPTX_AND_Ref3_VME;
   Bool_t          L1_BPTX_AND_Ref4_VME;
   Bool_t          L1_BPTX_BeamGas_B1_VME;
   Bool_t          L1_BPTX_BeamGas_B2_VME;
   Bool_t          L1_BPTX_BeamGas_Ref1_VME;
   Bool_t          L1_BPTX_BeamGas_Ref2_VME;
   Bool_t          L1_BPTX_NotOR_VME;
   Bool_t          L1_BPTX_OR_Ref3_VME;
   Bool_t          L1_BPTX_OR_Ref4_VME;
   Bool_t          L1_BPTX_RefAND_VME;
   Bool_t          L1_BptxMinus;
   Bool_t          L1_BptxOR;
   Bool_t          L1_BptxPlus;
   Bool_t          L1_BptxXOR;
   Bool_t          L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          L1_DoubleEG8er2p5_HTT260er;
   Bool_t          L1_DoubleEG8er2p5_HTT280er;
   Bool_t          L1_DoubleEG8er2p5_HTT300er;
   Bool_t          L1_DoubleEG8er2p5_HTT320er;
   Bool_t          L1_DoubleEG8er2p5_HTT340er;
   Bool_t          L1_DoubleEG_15_10_er2p5;
   Bool_t          L1_DoubleEG_20_10_er2p5;
   Bool_t          L1_DoubleEG_22_10_er2p5;
   Bool_t          L1_DoubleEG_25_12_er2p5;
   Bool_t          L1_DoubleEG_25_14_er2p5;
   Bool_t          L1_DoubleEG_27_14_er2p5;
   Bool_t          L1_DoubleEG_LooseIso20_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_12_er2p5;
   Bool_t          L1_DoubleEG_LooseIso25_12_er2p5;
   Bool_t          L1_DoubleIsoTau32er2p1;
   Bool_t          L1_DoubleIsoTau34er2p1;
   Bool_t          L1_DoubleIsoTau36er2p1;
   Bool_t          L1_DoubleJet100er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet100er2p5;
   Bool_t          L1_DoubleJet112er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet120er2p5;
   Bool_t          L1_DoubleJet150er2p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;
   Bool_t          L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;
   Bool_t          L1_DoubleJet40er2p5;
   Bool_t          L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_Mu8;
   Bool_t          L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleLooseIsoEG22er2p1;
   Bool_t          L1_DoubleLooseIsoEG24er2p1;
   Bool_t          L1_DoubleMu0;
   Bool_t          L1_DoubleMu0_Mass_Min1;
   Bool_t          L1_DoubleMu0_OQ;
   Bool_t          L1_DoubleMu0_SQ;
   Bool_t          L1_DoubleMu0_SQ_OS;
   Bool_t          L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu10_SQ;
   Bool_t          L1_DoubleMu18er2p1;
   Bool_t          L1_DoubleMu3_OS_DoubleEG7p5Upsilon;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_HTT60er;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_HTT220er;
   Bool_t          L1_DoubleMu3_SQ_HTT240er;
   Bool_t          L1_DoubleMu3_SQ_HTT260er;
   Bool_t          L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu4_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu4_SQ_OS;
   Bool_t          L1_DoubleMu4_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5_SQ_OS;
   Bool_t          L1_DoubleMu4p5_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;
   Bool_t          L1_DoubleMu5Upsilon_OS_DoubleEG3;
   Bool_t          L1_DoubleMu5_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu9_SQ;
   Bool_t          L1_DoubleMu_12_5;
   Bool_t          L1_DoubleMu_15_5_SQ;
   Bool_t          L1_DoubleMu_15_7;
   Bool_t          L1_DoubleMu_15_7_Mass_Min1;
   Bool_t          L1_DoubleMu_15_7_SQ;
   Bool_t          L1_DoubleTau70er2p1;
   Bool_t          L1_ETM120;
   Bool_t          L1_ETM150;
   Bool_t          L1_ETMHF100;
   Bool_t          L1_ETMHF100_HTT60er;
   Bool_t          L1_ETMHF110;
   Bool_t          L1_ETMHF110_HTT60er;
   Bool_t          L1_ETMHF110_HTT60er_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF120;
   Bool_t          L1_ETMHF120_HTT60er;
   Bool_t          L1_ETMHF120_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF130;
   Bool_t          L1_ETMHF130_HTT60er;
   Bool_t          L1_ETMHF140;
   Bool_t          L1_ETMHF150;
   Bool_t          L1_ETMHF90_HTT60er;
   Bool_t          L1_ETT1200;
   Bool_t          L1_ETT1600;
   Bool_t          L1_ETT2000;
   Bool_t          L1_FirstBunchAfterTrain;
   Bool_t          L1_FirstBunchBeforeTrain;
   Bool_t          L1_FirstBunchInTrain;
   Bool_t          L1_FirstCollisionInOrbit;
   Bool_t          L1_FirstCollisionInTrain;
   Bool_t          L1_HCAL_LaserMon_Trig;
   Bool_t          L1_HCAL_LaserMon_Veto;
   Bool_t          L1_HTT120er;
   Bool_t          L1_HTT160er;
   Bool_t          L1_HTT200er;
   Bool_t          L1_HTT255er;
   Bool_t          L1_HTT280er;
   Bool_t          L1_HTT280er_QuadJet_70_55_40_35_er2p4;
   Bool_t          L1_HTT320er;
   Bool_t          L1_HTT320er_QuadJet_70_55_40_40_er2p4;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;
   Bool_t          L1_HTT360er;
   Bool_t          L1_HTT400er;
   Bool_t          L1_HTT450er;
   Bool_t          L1_IsoEG32er2p5_Mt40;
   Bool_t          L1_IsoEG32er2p5_Mt44;
   Bool_t          L1_IsoEG32er2p5_Mt48;
   Bool_t          L1_IsoTau40er2p1_ETMHF100;
   Bool_t          L1_IsoTau40er2p1_ETMHF110;
   Bool_t          L1_IsoTau40er2p1_ETMHF120;
   Bool_t          L1_IsoTau40er2p1_ETMHF90;
   Bool_t          L1_IsolatedBunch;
   Bool_t          L1_LastBunchInTrain;
   Bool_t          L1_LastCollisionInTrain;
   Bool_t          L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG24er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG26er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG28er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG30er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_MinimumBiasHF0_AND_BptxAND;
   Bool_t          L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;
   Bool_t          L1_Mu18er2p1_Tau24er2p1;
   Bool_t          L1_Mu18er2p1_Tau26er2p1;
   Bool_t          L1_Mu20_EG10er2p5;
   Bool_t          L1_Mu22er2p1_IsoTau32er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau34er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau36er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau40er2p1;
   Bool_t          L1_Mu22er2p1_Tau70er2p1;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p8;
   Bool_t          L1_Mu3_Jet16er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet30er2p5;
   Bool_t          L1_Mu3_Jet35er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet60er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet80er2p5_dR_Max0p4;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF40;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF50;
   Bool_t          L1_Mu5_EG23er2p5;
   Bool_t          L1_Mu5_LooseIsoEG20er2p5;
   Bool_t          L1_Mu6_DoubleEG10er2p5;
   Bool_t          L1_Mu6_DoubleEG12er2p5;
   Bool_t          L1_Mu6_DoubleEG15er2p5;
   Bool_t          L1_Mu6_DoubleEG17er2p5;
   Bool_t          L1_Mu6_HTT240er;
   Bool_t          L1_Mu6_HTT250er;
   Bool_t          L1_Mu7_EG23er2p5;
   Bool_t          L1_Mu7_LooseIsoEG20er2p5;
   Bool_t          L1_Mu7_LooseIsoEG23er2p5;
   Bool_t          L1_NotBptxOR;
   Bool_t          L1_QuadJet36er2p5_IsoTau52er2p1;
   Bool_t          L1_QuadJet60er2p5;
   Bool_t          L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;
   Bool_t          L1_QuadMu0;
   Bool_t          L1_QuadMu0_OQ;
   Bool_t          L1_QuadMu0_SQ;
   Bool_t          L1_SecondBunchInTrain;
   Bool_t          L1_SecondLastBunchInTrain;
   Bool_t          L1_SingleEG10er2p5;
   Bool_t          L1_SingleEG15er2p5;
   Bool_t          L1_SingleEG26er2p5;
   Bool_t          L1_SingleEG34er2p5;
   Bool_t          L1_SingleEG36er2p5;
   Bool_t          L1_SingleEG38er2p5;
   Bool_t          L1_SingleEG40er2p5;
   Bool_t          L1_SingleEG42er2p5;
   Bool_t          L1_SingleEG45er2p5;
   Bool_t          L1_SingleEG50;
   Bool_t          L1_SingleEG60;
   Bool_t          L1_SingleEG8er2p5;
   Bool_t          L1_SingleIsoEG24er1p5;
   Bool_t          L1_SingleIsoEG24er2p1;
   Bool_t          L1_SingleIsoEG26er1p5;
   Bool_t          L1_SingleIsoEG26er2p1;
   Bool_t          L1_SingleIsoEG26er2p5;
   Bool_t          L1_SingleIsoEG28er1p5;
   Bool_t          L1_SingleIsoEG28er2p1;
   Bool_t          L1_SingleIsoEG28er2p5;
   Bool_t          L1_SingleIsoEG30er2p1;
   Bool_t          L1_SingleIsoEG30er2p5;
   Bool_t          L1_SingleIsoEG32er2p1;
   Bool_t          L1_SingleIsoEG32er2p5;
   Bool_t          L1_SingleIsoEG34er2p5;
   Bool_t          L1_SingleJet10erHE;
   Bool_t          L1_SingleJet120;
   Bool_t          L1_SingleJet120_FWD3p0;
   Bool_t          L1_SingleJet120er2p5;
   Bool_t          L1_SingleJet12erHE;
   Bool_t          L1_SingleJet140er2p5;
   Bool_t          L1_SingleJet140er2p5_ETMHF80;
   Bool_t          L1_SingleJet140er2p5_ETMHF90;
   Bool_t          L1_SingleJet160er2p5;
   Bool_t          L1_SingleJet180;
   Bool_t          L1_SingleJet180er2p5;
   Bool_t          L1_SingleJet200;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet35;
   Bool_t          L1_SingleJet35_FWD3p0;
   Bool_t          L1_SingleJet35er2p5;
   Bool_t          L1_SingleJet43er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet46er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet60;
   Bool_t          L1_SingleJet60_FWD3p0;
   Bool_t          L1_SingleJet60er2p5;
   Bool_t          L1_SingleJet8erHE;
   Bool_t          L1_SingleJet90;
   Bool_t          L1_SingleJet90_FWD3p0;
   Bool_t          L1_SingleJet90er2p5;
   Bool_t          L1_SingleLooseIsoEG28er1p5;
   Bool_t          L1_SingleLooseIsoEG30er1p5;
   Bool_t          L1_SingleMu0_BMTF;
   Bool_t          L1_SingleMu0_DQ;
   Bool_t          L1_SingleMu0_EMTF;
   Bool_t          L1_SingleMu0_OMTF;
   Bool_t          L1_SingleMu10er1p5;
   Bool_t          L1_SingleMu12_DQ_BMTF;
   Bool_t          L1_SingleMu12_DQ_EMTF;
   Bool_t          L1_SingleMu12_DQ_OMTF;
   Bool_t          L1_SingleMu12er1p5;
   Bool_t          L1_SingleMu14er1p5;
   Bool_t          L1_SingleMu15_DQ;
   Bool_t          L1_SingleMu16er1p5;
   Bool_t          L1_SingleMu18;
   Bool_t          L1_SingleMu18er1p5;
   Bool_t          L1_SingleMu20;
   Bool_t          L1_SingleMu22;
   Bool_t          L1_SingleMu22_BMTF;
   Bool_t          L1_SingleMu22_EMTF;
   Bool_t          L1_SingleMu22_OMTF;
   Bool_t          L1_SingleMu25;
   Bool_t          L1_SingleMu3;
   Bool_t          L1_SingleMu5;
   Bool_t          L1_SingleMu6er1p5;
   Bool_t          L1_SingleMu7;
   Bool_t          L1_SingleMu7_DQ;
   Bool_t          L1_SingleMu7er1p5;
   Bool_t          L1_SingleMu8er1p5;
   Bool_t          L1_SingleMu9er1p5;
   Bool_t          L1_SingleMuCosmics;
   Bool_t          L1_SingleMuCosmics_BMTF;
   Bool_t          L1_SingleMuCosmics_EMTF;
   Bool_t          L1_SingleMuCosmics_OMTF;
   Bool_t          L1_SingleMuOpen;
   Bool_t          L1_SingleMuOpen_NotBptxOR;
   Bool_t          L1_SingleMuOpen_er1p1_NotBptxOR_3BX;
   Bool_t          L1_SingleMuOpen_er1p4_NotBptxOR_3BX;
   Bool_t          L1_SingleTau120er2p1;
   Bool_t          L1_SingleTau130er2p1;
   Bool_t          L1_TOTEM_1;
   Bool_t          L1_TOTEM_2;
   Bool_t          L1_TOTEM_3;
   Bool_t          L1_TOTEM_4;
   Bool_t          L1_TripleEG16er2p5;
   Bool_t          L1_TripleEG_16_12_8_er2p5;
   Bool_t          L1_TripleEG_16_15_8_er2p5;
   Bool_t          L1_TripleEG_18_17_8_er2p5;
   Bool_t          L1_TripleEG_18_18_12_er2p5;
   Bool_t          L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;
   Bool_t          L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;
   Bool_t          L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;
   Bool_t          L1_TripleMu0;
   Bool_t          L1_TripleMu0_OQ;
   Bool_t          L1_TripleMu0_SQ;
   Bool_t          L1_TripleMu3;
   Bool_t          L1_TripleMu3_SQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5_3_3;
   Bool_t          L1_TripleMu_5_3_3_SQ;
   Bool_t          L1_TripleMu_5_3p5_2p5;
   Bool_t          L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_5_3;
   Bool_t          L1_UnpairedBunchBptxMinus;
   Bool_t          L1_UnpairedBunchBptxPlus;
   Bool_t          L1_ZeroBias;
   Bool_t          L1_ZeroBias_copy;
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_HBHENoiseIsoFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          Flag_CSCTightHalo2015Filter;
   Bool_t          Flag_globalTightHalo2016Filter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_HcalStripHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_chargedHadronTrackResolutionFilter;
   Bool_t          Flag_muonBadTrackFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_BadChargedCandidateSummer16Filter;
   Bool_t          Flag_BadPFMuonSummer16Filter;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   Bool_t          L1Reco_step;
   Bool_t          L1simulation_step;
   Bool_t          HLTriggerFirstPath;
   Bool_t          HLT_AK8PFJet360_TrimMass30;
   Bool_t          HLT_AK8PFJet380_TrimMass30;
   Bool_t          HLT_AK8PFJet400_TrimMass30;
   Bool_t          HLT_AK8PFJet420_TrimMass30;
   Bool_t          HLT_AK8PFHT750_TrimMass50;
   Bool_t          HLT_AK8PFHT800_TrimMass50;
   Bool_t          HLT_AK8PFHT850_TrimMass50;
   Bool_t          HLT_AK8PFHT900_TrimMass50;
   Bool_t          HLT_CaloJet500_NoJetID;
   Bool_t          HLT_CaloJet550_NoJetID;
   Bool_t          HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;
   Bool_t          HLT_Trimuon5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_DoubleEle25_CaloIdL_MW;
   Bool_t          HLT_DoubleEle27_CaloIdL_MW;
   Bool_t          HLT_DoubleEle33_CaloIdL_MW;
   Bool_t          HLT_DoubleEle24_eta2p1_WPTight_Gsf;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Ele27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu37_Ele27_CaloIdL_MW;
   Bool_t          HLT_Mu37_TkMu27;
   Bool_t          HLT_DoubleMu4_3_Bs;
   Bool_t          HLT_DoubleMu4_3_Jpsi;
   Bool_t          HLT_DoubleMu4_JpsiTrk_Displaced;
   Bool_t          HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu;
   Bool_t          HLT_DoubleMu3_TkMu_DsTau3Mu;
   Bool_t          HLT_DoubleMu4_PsiPrimeTrk_Displaced;
   Bool_t          HLT_DoubleMu4_Mass3p8_DZ_PFHT350;
   Bool_t          HLT_Mu3_PFJet40;
   Bool_t          HLT_Mu7p5_L2Mu2_Jpsi;
   Bool_t          HLT_Mu7p5_L2Mu2_Upsilon;
   Bool_t          HLT_Mu7p5_Track2_Jpsi;
   Bool_t          HLT_Mu7p5_Track3p5_Jpsi;
   Bool_t          HLT_Mu7p5_Track7_Jpsi;
   Bool_t          HLT_Mu7p5_Track2_Upsilon;
   Bool_t          HLT_Mu7p5_Track3p5_Upsilon;
   Bool_t          HLT_Mu7p5_Track7_Upsilon;
   Bool_t          HLT_Mu3_L1SingleMu5orSingleMu7;
   Bool_t          HLT_DoublePhoton33_CaloIdL;
   Bool_t          HLT_DoublePhoton70;
   Bool_t          HLT_DoublePhoton85;
   Bool_t          HLT_Ele20_WPTight_Gsf;
   Bool_t          HLT_Ele15_WPLoose_Gsf;
   Bool_t          HLT_Ele17_WPLoose_Gsf;
   Bool_t          HLT_Ele20_WPLoose_Gsf;
   Bool_t          HLT_Ele20_eta2p1_WPLoose_Gsf;
   Bool_t          HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;
   Bool_t          HLT_Ele27_WPTight_Gsf;
   Bool_t          HLT_Ele28_WPTight_Gsf;
   Bool_t          HLT_Ele30_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf_L1EGMT;
   Bool_t          HLT_Ele38_WPTight_Gsf;
   Bool_t          HLT_Ele40_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf_L1DoubleEG;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_HT450_Beamspot;
   Bool_t          HLT_HT300_Beamspot;
   Bool_t          HLT_ZeroBias_Beamspot;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu20;
   Bool_t          HLT_IsoMu24;
   Bool_t          HLT_IsoMu24_eta2p1;
   Bool_t          HLT_IsoMu27;
   Bool_t          HLT_IsoMu30;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE60_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE70_NoBPTX3BX;
   Bool_t          HLT_L1SingleMu18;
   Bool_t          HLT_L1SingleMu25;
   Bool_t          HLT_L2Mu10;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX3BX;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX;
   Bool_t          HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu50;
   Bool_t          HLT_L2Mu23NoVtx_2Cha;
   Bool_t          HLT_L2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_DoubleL2Mu50;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu25_TkMu0_Onia;
   Bool_t          HLT_Mu30_TkMu0_Psi;
   Bool_t          HLT_Mu30_TkMu0_Upsilon;
   Bool_t          HLT_Mu20_TkMu0_Phi;
   Bool_t          HLT_Mu25_TkMu0_Phi;
   Bool_t          HLT_Mu12;
   Bool_t          HLT_Mu15;
   Bool_t          HLT_Mu20;
   Bool_t          HLT_Mu27;
   Bool_t          HLT_Mu50;
   Bool_t          HLT_Mu55;
   Bool_t          HLT_OldMu100;
   Bool_t          HLT_TkMu100;
   Bool_t          HLT_DiPFJetAve40;
   Bool_t          HLT_DiPFJetAve60;
   Bool_t          HLT_DiPFJetAve80;
   Bool_t          HLT_DiPFJetAve140;
   Bool_t          HLT_DiPFJetAve200;
   Bool_t          HLT_DiPFJetAve260;
   Bool_t          HLT_DiPFJetAve320;
   Bool_t          HLT_DiPFJetAve400;
   Bool_t          HLT_DiPFJetAve500;
   Bool_t          HLT_DiPFJetAve60_HFJEC;
   Bool_t          HLT_DiPFJetAve80_HFJEC;
   Bool_t          HLT_DiPFJetAve100_HFJEC;
   Bool_t          HLT_DiPFJetAve160_HFJEC;
   Bool_t          HLT_DiPFJetAve220_HFJEC;
   Bool_t          HLT_DiPFJetAve300_HFJEC;
   Bool_t          HLT_AK8PFJet15;
   Bool_t          HLT_AK8PFJet25;
   Bool_t          HLT_AK8PFJet40;
   Bool_t          HLT_AK8PFJet60;
   Bool_t          HLT_AK8PFJet80;
   Bool_t          HLT_AK8PFJet140;
   Bool_t          HLT_AK8PFJet200;
   Bool_t          HLT_AK8PFJet260;
   Bool_t          HLT_AK8PFJet320;
   Bool_t          HLT_AK8PFJet400;
   Bool_t          HLT_AK8PFJet450;
   Bool_t          HLT_AK8PFJet500;
   Bool_t          HLT_AK8PFJet550;
   Bool_t          HLT_PFJet15;
   Bool_t          HLT_PFJet25;
   Bool_t          HLT_PFJet40;
   Bool_t          HLT_PFJet60;
   Bool_t          HLT_PFJet80;
   Bool_t          HLT_PFJet140;
   Bool_t          HLT_PFJet200;
   Bool_t          HLT_PFJet260;
   Bool_t          HLT_PFJet320;
   Bool_t          HLT_PFJet400;
   Bool_t          HLT_PFJet450;
   Bool_t          HLT_PFJet500;
   Bool_t          HLT_PFJet550;
   Bool_t          HLT_PFJetFwd15;
   Bool_t          HLT_PFJetFwd25;
   Bool_t          HLT_PFJetFwd40;
   Bool_t          HLT_PFJetFwd60;
   Bool_t          HLT_PFJetFwd80;
   Bool_t          HLT_PFJetFwd140;
   Bool_t          HLT_PFJetFwd200;
   Bool_t          HLT_PFJetFwd260;
   Bool_t          HLT_PFJetFwd320;
   Bool_t          HLT_PFJetFwd400;
   Bool_t          HLT_PFJetFwd450;
   Bool_t          HLT_PFJetFwd500;
   Bool_t          HLT_AK8PFJetFwd15;
   Bool_t          HLT_AK8PFJetFwd25;
   Bool_t          HLT_AK8PFJetFwd40;
   Bool_t          HLT_AK8PFJetFwd60;
   Bool_t          HLT_AK8PFJetFwd80;
   Bool_t          HLT_AK8PFJetFwd140;
   Bool_t          HLT_AK8PFJetFwd200;
   Bool_t          HLT_AK8PFJetFwd260;
   Bool_t          HLT_AK8PFJetFwd320;
   Bool_t          HLT_AK8PFJetFwd400;
   Bool_t          HLT_AK8PFJetFwd450;
   Bool_t          HLT_AK8PFJetFwd500;
   Bool_t          HLT_PFHT180;
   Bool_t          HLT_PFHT250;
   Bool_t          HLT_PFHT370;
   Bool_t          HLT_PFHT430;
   Bool_t          HLT_PFHT510;
   Bool_t          HLT_PFHT590;
   Bool_t          HLT_PFHT680;
   Bool_t          HLT_PFHT780;
   Bool_t          HLT_PFHT890;
   Bool_t          HLT_PFHT1050;
   Bool_t          HLT_PFHT500_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_PFHT500_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFHT700_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFHT700_PFMET95_PFMHT95_IDTight;
   Bool_t          HLT_PFHT800_PFMET75_PFMHT75_IDTight;
   Bool_t          HLT_PFHT800_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne110_PFMHT110_IDTight;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight;
   Bool_t          HLT_PFMETTypeOne130_PFMHT130_IDTight;
   Bool_t          HLT_PFMETTypeOne140_PFMHT140_IDTight;
   Bool_t          HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_L1ETMHadSeeds;
   Bool_t          HLT_CaloMHT90;
   Bool_t          HLT_CaloMET80_NotCleaned;
   Bool_t          HLT_CaloMET90_NotCleaned;
   Bool_t          HLT_CaloMET100_NotCleaned;
   Bool_t          HLT_CaloMET110_NotCleaned;
   Bool_t          HLT_CaloMET250_NotCleaned;
   Bool_t          HLT_CaloMET70_HBHECleaned;
   Bool_t          HLT_CaloMET80_HBHECleaned;
   Bool_t          HLT_CaloMET90_HBHECleaned;
   Bool_t          HLT_CaloMET100_HBHECleaned;
   Bool_t          HLT_CaloMET250_HBHECleaned;
   Bool_t          HLT_CaloMET300_HBHECleaned;
   Bool_t          HLT_CaloMET350_HBHECleaned;
   Bool_t          HLT_PFMET200_NotCleaned;
   Bool_t          HLT_PFMET200_HBHECleaned;
   Bool_t          HLT_PFMET250_HBHECleaned;
   Bool_t          HLT_PFMET300_HBHECleaned;
   Bool_t          HLT_PFMET200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_MET105_IsoTrk50;
   Bool_t          HLT_MET120_IsoTrk50;
   Bool_t          HLT_SingleJet30_Mu12_SinglePFJet40;
   Bool_t          HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Photon300_NoHE;
   Bool_t          HLT_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu17_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5_noalgo;
   Bool_t          HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu12_DoublePhoton20;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
   Bool_t          HLT_Photon20;
   Bool_t          HLT_Photon33;
   Bool_t          HLT_Photon50;
   Bool_t          HLT_Photon75;
   Bool_t          HLT_Photon90;
   Bool_t          HLT_Photon120;
   Bool_t          HLT_Photon150;
   Bool_t          HLT_Photon175;
   Bool_t          HLT_Photon200;
   Bool_t          HLT_Photon100EB_TightID_TightIso;
   Bool_t          HLT_Photon110EB_TightID_TightIso;
   Bool_t          HLT_Photon120EB_TightID_TightIso;
   Bool_t          HLT_Photon100EBHE10;
   Bool_t          HLT_Photon100EEHE10;
   Bool_t          HLT_Photon100EE_TightID_TightIso;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;
   Bool_t          HLT_Photon90_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon120_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon165_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon90_CaloIdL_PFHT700;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
   Bool_t          HLT_Photon35_TwoProngs35;
   Bool_t          HLT_IsoMu24_TwoProngs35;
   Bool_t          HLT_Dimuon0_Jpsi_L1_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing;
   Bool_t          HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi3p5_Muon2;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5NoOS;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0M;
   Bool_t          HLT_Dimuon0_Upsilon_NoVertexing;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5M;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5R;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5;
   Bool_t          HLT_Dimuon0_LowMass;
   Bool_t          HLT_Dimuon0_LowMass_L1_4;
   Bool_t          HLT_Dimuon0_LowMass_L1_4R;
   Bool_t          HLT_Dimuon0_LowMass_L1_TM530;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_L1_TM0;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_NoL1Mass;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DZ;
   Bool_t          HLT_TripleMu_10_5_5_DZ;
   Bool_t          HLT_TripleMu_12_10_5;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
   Bool_t          HLT_DoubleMu3_DZ_PFMET50_PFMHT60;
   Bool_t          HLT_DoubleMu3_DZ_PFMET70_PFMHT70;
   Bool_t          HLT_DoubleMu3_DZ_PFMET90_PFMHT90;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;
   Bool_t          HLT_DoubleMu4_Jpsi_Displaced;
   Bool_t          HLT_DoubleMu4_Jpsi_NoVertexing;
   Bool_t          HLT_DoubleMu4_JpsiTrkTrk_Displaced;
   Bool_t          HLT_DoubleMu43NoFiltersNoVtx;
   Bool_t          HLT_DoubleMu48NoFiltersNoVtx;
   Bool_t          HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;
   Bool_t          HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;
   Bool_t          HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;
   Bool_t          HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;
   Bool_t          HLT_DoubleMu33NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu40NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;
   Bool_t          HLT_HT425;
   Bool_t          HLT_HT430_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT500_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT430_DisplacedDijet60_DisplacedTrack;
   Bool_t          HLT_HT400_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT650_DisplacedDijet60_Inclusive;
   Bool_t          HLT_HT550_DisplacedDijet60_Inclusive;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET110;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET120;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET130;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET110;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET120;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET130;
   Bool_t          HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
   Bool_t          HLT_Ele28_eta2p1_WPTight_Gsf_HT150;
   Bool_t          HLT_Ele28_HighEta_SC20_Mass55;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_Photon23;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele50_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu50_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;
   Bool_t          HLT_Dimuon10_PsiPrime_Barrel_Seagulls;
   Bool_t          HLT_Dimuon20_Jpsi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon12_Upsilon_y1p4;
   Bool_t          HLT_Dimuon14_Phi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon18_PsiPrime;
   Bool_t          HLT_Dimuon25_Jpsi;
   Bool_t          HLT_Dimuon18_PsiPrime_noCorrL1;
   Bool_t          HLT_Dimuon24_Upsilon_noCorrL1;
   Bool_t          HLT_Dimuon24_Phi_noCorrL1;
   Bool_t          HLT_Dimuon25_Jpsi_noCorrL1;
   Bool_t          HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleIsoMu20_eta2p1;
   Bool_t          HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
   Bool_t          HLT_Mu8;
   Bool_t          HLT_Mu17;
   Bool_t          HLT_Mu19;
   Bool_t          HLT_Mu17_Photon30_IsoCaloId;
   Bool_t          HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele8_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele17_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele23_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
   Bool_t          HLT_Ele115_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele135_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele145_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele200_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele250_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele300_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40;
   Bool_t          HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;
   Bool_t          HLT_PFHT400_SixPFJet32;
   Bool_t          HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;
   Bool_t          HLT_PFHT450_SixPFJet36;
   Bool_t          HLT_PFHT350;
   Bool_t          HLT_PFHT350MinPFJet15;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
   Bool_t          HLT_ECALHT800;
   Bool_t          HLT_DiSC30_18_EIso_AND_HE_Mass70;
   Bool_t          HLT_Physics;
   Bool_t          HLT_Physics_part0;
   Bool_t          HLT_Physics_part1;
   Bool_t          HLT_Physics_part2;
   Bool_t          HLT_Physics_part3;
   Bool_t          HLT_Physics_part4;
   Bool_t          HLT_Physics_part5;
   Bool_t          HLT_Physics_part6;
   Bool_t          HLT_Physics_part7;
   Bool_t          HLT_Random;
   Bool_t          HLT_ZeroBias;
   Bool_t          HLT_ZeroBias_Alignment;
   Bool_t          HLT_ZeroBias_part0;
   Bool_t          HLT_ZeroBias_part1;
   Bool_t          HLT_ZeroBias_part2;
   Bool_t          HLT_ZeroBias_part3;
   Bool_t          HLT_ZeroBias_part4;
   Bool_t          HLT_ZeroBias_part5;
   Bool_t          HLT_ZeroBias_part6;
   Bool_t          HLT_ZeroBias_part7;
   Bool_t          HLT_AK4CaloJet30;
   Bool_t          HLT_AK4CaloJet40;
   Bool_t          HLT_AK4CaloJet50;
   Bool_t          HLT_AK4CaloJet80;
   Bool_t          HLT_AK4CaloJet100;
   Bool_t          HLT_AK4CaloJet120;
   Bool_t          HLT_AK4PFJet30;
   Bool_t          HLT_AK4PFJet50;
   Bool_t          HLT_AK4PFJet80;
   Bool_t          HLT_AK4PFJet100;
   Bool_t          HLT_AK4PFJet120;
   Bool_t          HLT_SinglePhoton10_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton20_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton30_Eta3p1ForPPRef;
   Bool_t          HLT_Photon20_HoverELoose;
   Bool_t          HLT_Photon30_HoverELoose;
   Bool_t          HLT_EcalCalibration;
   Bool_t          HLT_HcalCalibration;
   Bool_t          HLT_L1UnpairedBunchBptxMinus;
   Bool_t          HLT_L1UnpairedBunchBptxPlus;
   Bool_t          HLT_L1NotBptxOR;
   Bool_t          HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          HLT_CDC_L2cosmic_5_er1p0;
   Bool_t          HLT_CDC_L2cosmic_5p5_er1p0;
   Bool_t          HLT_HcalNZS;
   Bool_t          HLT_HcalPhiSym;
   Bool_t          HLT_HcalIsolatedbunch;
   Bool_t          HLT_IsoTrackHB;
   Bool_t          HLT_IsoTrackHE;
   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap;
   Bool_t          HLT_ZeroBias_IsolatedBunches;
   Bool_t          HLT_ZeroBias_FirstCollisionInTrain;
   Bool_t          HLT_ZeroBias_LastCollisionInTrain;
   Bool_t          HLT_ZeroBias_FirstBXAfterTrain;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
   Bool_t          HLT_Rsq0p35;
   Bool_t          HLT_Rsq0p40;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200_4jet;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200_4jet;
   Bool_t          HLT_IsoMu27_MET90;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_Mu18_Mu9_SameSign;
   Bool_t          HLT_Mu18_Mu9_SameSign_DZ;
   Bool_t          HLT_Mu18_Mu9;
   Bool_t          HLT_Mu18_Mu9_DZ;
   Bool_t          HLT_Mu20_Mu10_SameSign;
   Bool_t          HLT_Mu20_Mu10_SameSign_DZ;
   Bool_t          HLT_Mu20_Mu10;
   Bool_t          HLT_Mu20_Mu10_DZ;
   Bool_t          HLT_Mu23_Mu12_SameSign;
   Bool_t          HLT_Mu23_Mu12_SameSign_DZ;
   Bool_t          HLT_Mu23_Mu12;
   Bool_t          HLT_Mu23_Mu12_DZ;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;
   Bool_t          HLT_DoubleMu3_DCA_PFMET50_PFMHT60;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DCA;
   Bool_t          HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet98_83_71_15;
   Bool_t          HLT_QuadPFJet103_88_75_15;
   Bool_t          HLT_QuadPFJet105_88_76_15;
   Bool_t          HLT_QuadPFJet111_90_80_15;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;
   Bool_t          HLT_Mu12_IP6_part0;
   Bool_t          HLT_Mu12_IP6_part1;
   Bool_t          HLT_Mu12_IP6_part2;
   Bool_t          HLT_Mu12_IP6_part3;
   Bool_t          HLT_Mu12_IP6_part4;
   Bool_t          HLT_Mu9_IP5_part0;
   Bool_t          HLT_Mu9_IP5_part1;
   Bool_t          HLT_Mu9_IP5_part2;
   Bool_t          HLT_Mu9_IP5_part3;
   Bool_t          HLT_Mu9_IP5_part4;
   Bool_t          HLT_Mu7_IP4_part0;
   Bool_t          HLT_Mu7_IP4_part1;
   Bool_t          HLT_Mu7_IP4_part2;
   Bool_t          HLT_Mu7_IP4_part3;
   Bool_t          HLT_Mu7_IP4_part4;
   Bool_t          HLT_Mu9_IP4_part0;
   Bool_t          HLT_Mu9_IP4_part1;
   Bool_t          HLT_Mu9_IP4_part2;
   Bool_t          HLT_Mu9_IP4_part3;
   Bool_t          HLT_Mu9_IP4_part4;
   Bool_t          HLT_Mu8_IP5_part0;
   Bool_t          HLT_Mu8_IP5_part1;
   Bool_t          HLT_Mu8_IP5_part2;
   Bool_t          HLT_Mu8_IP5_part3;
   Bool_t          HLT_Mu8_IP5_part4;
   Bool_t          HLT_Mu8_IP6_part0;
   Bool_t          HLT_Mu8_IP6_part1;
   Bool_t          HLT_Mu8_IP6_part2;
   Bool_t          HLT_Mu8_IP6_part3;
   Bool_t          HLT_Mu8_IP6_part4;
   Bool_t          HLT_Mu9_IP6_part0;
   Bool_t          HLT_Mu9_IP6_part1;
   Bool_t          HLT_Mu9_IP6_part2;
   Bool_t          HLT_Mu9_IP6_part3;
   Bool_t          HLT_Mu9_IP6_part4;
   Bool_t          HLT_Mu8_IP3_part0;
   Bool_t          HLT_Mu8_IP3_part1;
   Bool_t          HLT_Mu8_IP3_part2;
   Bool_t          HLT_Mu8_IP3_part3;
   Bool_t          HLT_Mu8_IP3_part4;
   Bool_t          HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_TrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16NoFiltersNoVtx;
   Bool_t          HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;
   Bool_t          HLTriggerFinalPath;
   Float_t         Jet_pt_raw[30];   //[nJet]
   Float_t         Jet_pt_nom[30];   //[nJet]
   Float_t         Jet_mass_raw[30];   //[nJet]
   Float_t         Jet_mass_nom[30];   //[nJet]
   Float_t         Jet_corr_JEC[30];   //[nJet]
   Float_t         Jet_corr_JER[30];   //[nJet]
   Float_t         MET_pt_nom;
   Float_t         MET_phi_nom;
   Float_t         MET_pt_jer;
   Float_t         MET_phi_jer;
   Float_t         Jet_pt_jerUp[30];   //[nJet]
   Float_t         Jet_mass_jerUp[30];   //[nJet]
   Float_t         MET_pt_jerUp;
   Float_t         MET_phi_jerUp;
   Float_t         Jet_pt_jesAbsoluteStatUp[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteStatUp[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteStatUp;
   Float_t         MET_phi_jesAbsoluteStatUp;
   Float_t         Jet_pt_jesAbsoluteScaleUp[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteScaleUp[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteScaleUp;
   Float_t         MET_phi_jesAbsoluteScaleUp;
   Float_t         Jet_pt_jesAbsoluteSampleUp[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteSampleUp[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteSampleUp;
   Float_t         MET_phi_jesAbsoluteSampleUp;
   Float_t         Jet_pt_jesAbsoluteFlavMapUp[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteFlavMapUp[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteFlavMapUp;
   Float_t         MET_phi_jesAbsoluteFlavMapUp;
   Float_t         Jet_pt_jesAbsoluteMPFBiasUp[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteMPFBiasUp[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteMPFBiasUp;
   Float_t         MET_phi_jesAbsoluteMPFBiasUp;
   Float_t         Jet_pt_jesFragmentationUp[30];   //[nJet]
   Float_t         Jet_mass_jesFragmentationUp[30];   //[nJet]
   Float_t         MET_pt_jesFragmentationUp;
   Float_t         MET_phi_jesFragmentationUp;
   Float_t         Jet_pt_jesSinglePionECALUp[30];   //[nJet]
   Float_t         Jet_mass_jesSinglePionECALUp[30];   //[nJet]
   Float_t         MET_pt_jesSinglePionECALUp;
   Float_t         MET_phi_jesSinglePionECALUp;
   Float_t         Jet_pt_jesSinglePionHCALUp[30];   //[nJet]
   Float_t         Jet_mass_jesSinglePionHCALUp[30];   //[nJet]
   Float_t         MET_pt_jesSinglePionHCALUp;
   Float_t         MET_phi_jesSinglePionHCALUp;
   Float_t         Jet_pt_jesFlavorQCDUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorQCDUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorQCDUp;
   Float_t         MET_phi_jesFlavorQCDUp;
   Float_t         Jet_pt_jesTimePtEtaUp[30];   //[nJet]
   Float_t         Jet_mass_jesTimePtEtaUp[30];   //[nJet]
   Float_t         MET_pt_jesTimePtEtaUp;
   Float_t         MET_phi_jesTimePtEtaUp;
   Float_t         Jet_pt_jesRelativeJEREC1Up[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJEREC1Up[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJEREC1Up;
   Float_t         MET_phi_jesRelativeJEREC1Up;
   Float_t         Jet_pt_jesRelativeJEREC2Up[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJEREC2Up[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJEREC2Up;
   Float_t         MET_phi_jesRelativeJEREC2Up;
   Float_t         Jet_pt_jesRelativeJERHFUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJERHFUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJERHFUp;
   Float_t         MET_phi_jesRelativeJERHFUp;
   Float_t         Jet_pt_jesRelativePtBBUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtBBUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtBBUp;
   Float_t         MET_phi_jesRelativePtBBUp;
   Float_t         Jet_pt_jesRelativePtEC1Up[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtEC1Up[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtEC1Up;
   Float_t         MET_phi_jesRelativePtEC1Up;
   Float_t         Jet_pt_jesRelativePtEC2Up[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtEC2Up[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtEC2Up;
   Float_t         MET_phi_jesRelativePtEC2Up;
   Float_t         Jet_pt_jesRelativePtHFUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtHFUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtHFUp;
   Float_t         MET_phi_jesRelativePtHFUp;
   Float_t         Jet_pt_jesRelativeBalUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeBalUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeBalUp;
   Float_t         MET_phi_jesRelativeBalUp;
   Float_t         Jet_pt_jesRelativeSampleUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeSampleUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeSampleUp;
   Float_t         MET_phi_jesRelativeSampleUp;
   Float_t         Jet_pt_jesRelativeFSRUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeFSRUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeFSRUp;
   Float_t         MET_phi_jesRelativeFSRUp;
   Float_t         Jet_pt_jesRelativeStatFSRUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatFSRUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatFSRUp;
   Float_t         MET_phi_jesRelativeStatFSRUp;
   Float_t         Jet_pt_jesRelativeStatECUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatECUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatECUp;
   Float_t         MET_phi_jesRelativeStatECUp;
   Float_t         Jet_pt_jesRelativeStatHFUp[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatHFUp[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatHFUp;
   Float_t         MET_phi_jesRelativeStatHFUp;
   Float_t         Jet_pt_jesPileUpDataMCUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpDataMCUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpDataMCUp;
   Float_t         MET_phi_jesPileUpDataMCUp;
   Float_t         Jet_pt_jesPileUpPtRefUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtRefUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtRefUp;
   Float_t         MET_phi_jesPileUpPtRefUp;
   Float_t         Jet_pt_jesPileUpPtBBUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtBBUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtBBUp;
   Float_t         MET_phi_jesPileUpPtBBUp;
   Float_t         Jet_pt_jesPileUpPtEC1Up[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtEC1Up[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtEC1Up;
   Float_t         MET_phi_jesPileUpPtEC1Up;
   Float_t         Jet_pt_jesPileUpPtEC2Up[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtEC2Up[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtEC2Up;
   Float_t         MET_phi_jesPileUpPtEC2Up;
   Float_t         Jet_pt_jesPileUpPtHFUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtHFUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtHFUp;
   Float_t         MET_phi_jesPileUpPtHFUp;
   Float_t         Jet_pt_jesPileUpMuZeroUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpMuZeroUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpMuZeroUp;
   Float_t         MET_phi_jesPileUpMuZeroUp;
   Float_t         Jet_pt_jesPileUpEnvelopeUp[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpEnvelopeUp[30];   //[nJet]
   Float_t         MET_pt_jesPileUpEnvelopeUp;
   Float_t         MET_phi_jesPileUpEnvelopeUp;
   Float_t         Jet_pt_jesSubTotalPileUpUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalPileUpUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalPileUpUp;
   Float_t         MET_phi_jesSubTotalPileUpUp;
   Float_t         Jet_pt_jesSubTotalRelativeUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalRelativeUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalRelativeUp;
   Float_t         MET_phi_jesSubTotalRelativeUp;
   Float_t         Jet_pt_jesSubTotalPtUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalPtUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalPtUp;
   Float_t         MET_phi_jesSubTotalPtUp;
   Float_t         Jet_pt_jesSubTotalScaleUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalScaleUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalScaleUp;
   Float_t         MET_phi_jesSubTotalScaleUp;
   Float_t         Jet_pt_jesSubTotalAbsoluteUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalAbsoluteUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalAbsoluteUp;
   Float_t         MET_phi_jesSubTotalAbsoluteUp;
   Float_t         Jet_pt_jesSubTotalMCUp[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalMCUp[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalMCUp;
   Float_t         MET_phi_jesSubTotalMCUp;
   Float_t         Jet_pt_jesTotalUp[30];   //[nJet]
   Float_t         Jet_mass_jesTotalUp[30];   //[nJet]
   Float_t         MET_pt_jesTotalUp;
   Float_t         MET_phi_jesTotalUp;
   Float_t         Jet_pt_jesTotalNoFlavorUp[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoFlavorUp[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoFlavorUp;
   Float_t         MET_phi_jesTotalNoFlavorUp;
   Float_t         Jet_pt_jesTotalNoTimeUp[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoTimeUp[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoTimeUp;
   Float_t         MET_phi_jesTotalNoTimeUp;
   Float_t         Jet_pt_jesTotalNoFlavorNoTimeUp[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoFlavorNoTimeUp[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoFlavorNoTimeUp;
   Float_t         MET_phi_jesTotalNoFlavorNoTimeUp;
   Float_t         Jet_pt_jesFlavorZJetUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorZJetUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorZJetUp;
   Float_t         MET_phi_jesFlavorZJetUp;
   Float_t         Jet_pt_jesFlavorPhotonJetUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPhotonJetUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPhotonJetUp;
   Float_t         MET_phi_jesFlavorPhotonJetUp;
   Float_t         Jet_pt_jesFlavorPureGluonUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureGluonUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureGluonUp;
   Float_t         MET_phi_jesFlavorPureGluonUp;
   Float_t         Jet_pt_jesFlavorPureQuarkUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureQuarkUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureQuarkUp;
   Float_t         MET_phi_jesFlavorPureQuarkUp;
   Float_t         Jet_pt_jesFlavorPureCharmUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureCharmUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureCharmUp;
   Float_t         MET_phi_jesFlavorPureCharmUp;
   Float_t         Jet_pt_jesFlavorPureBottomUp[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureBottomUp[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureBottomUp;
   Float_t         MET_phi_jesFlavorPureBottomUp;
   Float_t         Jet_pt_jesTimeRunAUp[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunAUp[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunAUp;
   Float_t         MET_phi_jesTimeRunAUp;
   Float_t         Jet_pt_jesTimeRunBUp[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunBUp[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunBUp;
   Float_t         MET_phi_jesTimeRunBUp;
   Float_t         Jet_pt_jesTimeRunCUp[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunCUp[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunCUp;
   Float_t         MET_phi_jesTimeRunCUp;
   Float_t         Jet_pt_jesTimeRunDUp[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunDUp[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunDUp;
   Float_t         MET_phi_jesTimeRunDUp;
   Float_t         Jet_pt_jesCorrelationGroupMPFInSituUp[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupMPFInSituUp[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupMPFInSituUp;
   Float_t         MET_phi_jesCorrelationGroupMPFInSituUp;
   Float_t         Jet_pt_jesCorrelationGroupIntercalibrationUp[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupIntercalibrationUp[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupIntercalibrationUp;
   Float_t         MET_phi_jesCorrelationGroupIntercalibrationUp;
   Float_t         Jet_pt_jesCorrelationGroupbJESUp[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupbJESUp[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupbJESUp;
   Float_t         MET_phi_jesCorrelationGroupbJESUp;
   Float_t         Jet_pt_jesCorrelationGroupFlavorUp[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupFlavorUp[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupFlavorUp;
   Float_t         MET_phi_jesCorrelationGroupFlavorUp;
   Float_t         Jet_pt_jesCorrelationGroupUncorrelatedUp[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupUncorrelatedUp[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupUncorrelatedUp;
   Float_t         MET_phi_jesCorrelationGroupUncorrelatedUp;
   Float_t         MET_pt_unclustEnUp;
   Float_t         MET_phi_unclustEnUp;
   Float_t         Jet_pt_jerDown[30];   //[nJet]
   Float_t         Jet_mass_jerDown[30];   //[nJet]
   Float_t         MET_pt_jerDown;
   Float_t         MET_phi_jerDown;
   Float_t         Jet_pt_jesAbsoluteStatDown[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteStatDown[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteStatDown;
   Float_t         MET_phi_jesAbsoluteStatDown;
   Float_t         Jet_pt_jesAbsoluteScaleDown[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteScaleDown[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteScaleDown;
   Float_t         MET_phi_jesAbsoluteScaleDown;
   Float_t         Jet_pt_jesAbsoluteSampleDown[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteSampleDown[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteSampleDown;
   Float_t         MET_phi_jesAbsoluteSampleDown;
   Float_t         Jet_pt_jesAbsoluteFlavMapDown[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteFlavMapDown[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteFlavMapDown;
   Float_t         MET_phi_jesAbsoluteFlavMapDown;
   Float_t         Jet_pt_jesAbsoluteMPFBiasDown[30];   //[nJet]
   Float_t         Jet_mass_jesAbsoluteMPFBiasDown[30];   //[nJet]
   Float_t         MET_pt_jesAbsoluteMPFBiasDown;
   Float_t         MET_phi_jesAbsoluteMPFBiasDown;
   Float_t         Jet_pt_jesFragmentationDown[30];   //[nJet]
   Float_t         Jet_mass_jesFragmentationDown[30];   //[nJet]
   Float_t         MET_pt_jesFragmentationDown;
   Float_t         MET_phi_jesFragmentationDown;
   Float_t         Jet_pt_jesSinglePionECALDown[30];   //[nJet]
   Float_t         Jet_mass_jesSinglePionECALDown[30];   //[nJet]
   Float_t         MET_pt_jesSinglePionECALDown;
   Float_t         MET_phi_jesSinglePionECALDown;
   Float_t         Jet_pt_jesSinglePionHCALDown[30];   //[nJet]
   Float_t         Jet_mass_jesSinglePionHCALDown[30];   //[nJet]
   Float_t         MET_pt_jesSinglePionHCALDown;
   Float_t         MET_phi_jesSinglePionHCALDown;
   Float_t         Jet_pt_jesFlavorQCDDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorQCDDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorQCDDown;
   Float_t         MET_phi_jesFlavorQCDDown;
   Float_t         Jet_pt_jesTimePtEtaDown[30];   //[nJet]
   Float_t         Jet_mass_jesTimePtEtaDown[30];   //[nJet]
   Float_t         MET_pt_jesTimePtEtaDown;
   Float_t         MET_phi_jesTimePtEtaDown;
   Float_t         Jet_pt_jesRelativeJEREC1Down[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJEREC1Down[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJEREC1Down;
   Float_t         MET_phi_jesRelativeJEREC1Down;
   Float_t         Jet_pt_jesRelativeJEREC2Down[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJEREC2Down[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJEREC2Down;
   Float_t         MET_phi_jesRelativeJEREC2Down;
   Float_t         Jet_pt_jesRelativeJERHFDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeJERHFDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeJERHFDown;
   Float_t         MET_phi_jesRelativeJERHFDown;
   Float_t         Jet_pt_jesRelativePtBBDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtBBDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtBBDown;
   Float_t         MET_phi_jesRelativePtBBDown;
   Float_t         Jet_pt_jesRelativePtEC1Down[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtEC1Down[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtEC1Down;
   Float_t         MET_phi_jesRelativePtEC1Down;
   Float_t         Jet_pt_jesRelativePtEC2Down[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtEC2Down[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtEC2Down;
   Float_t         MET_phi_jesRelativePtEC2Down;
   Float_t         Jet_pt_jesRelativePtHFDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativePtHFDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativePtHFDown;
   Float_t         MET_phi_jesRelativePtHFDown;
   Float_t         Jet_pt_jesRelativeBalDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeBalDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeBalDown;
   Float_t         MET_phi_jesRelativeBalDown;
   Float_t         Jet_pt_jesRelativeSampleDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeSampleDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeSampleDown;
   Float_t         MET_phi_jesRelativeSampleDown;
   Float_t         Jet_pt_jesRelativeFSRDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeFSRDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeFSRDown;
   Float_t         MET_phi_jesRelativeFSRDown;
   Float_t         Jet_pt_jesRelativeStatFSRDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatFSRDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatFSRDown;
   Float_t         MET_phi_jesRelativeStatFSRDown;
   Float_t         Jet_pt_jesRelativeStatECDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatECDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatECDown;
   Float_t         MET_phi_jesRelativeStatECDown;
   Float_t         Jet_pt_jesRelativeStatHFDown[30];   //[nJet]
   Float_t         Jet_mass_jesRelativeStatHFDown[30];   //[nJet]
   Float_t         MET_pt_jesRelativeStatHFDown;
   Float_t         MET_phi_jesRelativeStatHFDown;
   Float_t         Jet_pt_jesPileUpDataMCDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpDataMCDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpDataMCDown;
   Float_t         MET_phi_jesPileUpDataMCDown;
   Float_t         Jet_pt_jesPileUpPtRefDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtRefDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtRefDown;
   Float_t         MET_phi_jesPileUpPtRefDown;
   Float_t         Jet_pt_jesPileUpPtBBDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtBBDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtBBDown;
   Float_t         MET_phi_jesPileUpPtBBDown;
   Float_t         Jet_pt_jesPileUpPtEC1Down[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtEC1Down[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtEC1Down;
   Float_t         MET_phi_jesPileUpPtEC1Down;
   Float_t         Jet_pt_jesPileUpPtEC2Down[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtEC2Down[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtEC2Down;
   Float_t         MET_phi_jesPileUpPtEC2Down;
   Float_t         Jet_pt_jesPileUpPtHFDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpPtHFDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpPtHFDown;
   Float_t         MET_phi_jesPileUpPtHFDown;
   Float_t         Jet_pt_jesPileUpMuZeroDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpMuZeroDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpMuZeroDown;
   Float_t         MET_phi_jesPileUpMuZeroDown;
   Float_t         Jet_pt_jesPileUpEnvelopeDown[30];   //[nJet]
   Float_t         Jet_mass_jesPileUpEnvelopeDown[30];   //[nJet]
   Float_t         MET_pt_jesPileUpEnvelopeDown;
   Float_t         MET_phi_jesPileUpEnvelopeDown;
   Float_t         Jet_pt_jesSubTotalPileUpDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalPileUpDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalPileUpDown;
   Float_t         MET_phi_jesSubTotalPileUpDown;
   Float_t         Jet_pt_jesSubTotalRelativeDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalRelativeDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalRelativeDown;
   Float_t         MET_phi_jesSubTotalRelativeDown;
   Float_t         Jet_pt_jesSubTotalPtDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalPtDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalPtDown;
   Float_t         MET_phi_jesSubTotalPtDown;
   Float_t         Jet_pt_jesSubTotalScaleDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalScaleDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalScaleDown;
   Float_t         MET_phi_jesSubTotalScaleDown;
   Float_t         Jet_pt_jesSubTotalAbsoluteDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalAbsoluteDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalAbsoluteDown;
   Float_t         MET_phi_jesSubTotalAbsoluteDown;
   Float_t         Jet_pt_jesSubTotalMCDown[30];   //[nJet]
   Float_t         Jet_mass_jesSubTotalMCDown[30];   //[nJet]
   Float_t         MET_pt_jesSubTotalMCDown;
   Float_t         MET_phi_jesSubTotalMCDown;
   Float_t         Jet_pt_jesTotalDown[30];   //[nJet]
   Float_t         Jet_mass_jesTotalDown[30];   //[nJet]
   Float_t         MET_pt_jesTotalDown;
   Float_t         MET_phi_jesTotalDown;
   Float_t         Jet_pt_jesTotalNoFlavorDown[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoFlavorDown[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoFlavorDown;
   Float_t         MET_phi_jesTotalNoFlavorDown;
   Float_t         Jet_pt_jesTotalNoTimeDown[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoTimeDown[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoTimeDown;
   Float_t         MET_phi_jesTotalNoTimeDown;
   Float_t         Jet_pt_jesTotalNoFlavorNoTimeDown[30];   //[nJet]
   Float_t         Jet_mass_jesTotalNoFlavorNoTimeDown[30];   //[nJet]
   Float_t         MET_pt_jesTotalNoFlavorNoTimeDown;
   Float_t         MET_phi_jesTotalNoFlavorNoTimeDown;
   Float_t         Jet_pt_jesFlavorZJetDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorZJetDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorZJetDown;
   Float_t         MET_phi_jesFlavorZJetDown;
   Float_t         Jet_pt_jesFlavorPhotonJetDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPhotonJetDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPhotonJetDown;
   Float_t         MET_phi_jesFlavorPhotonJetDown;
   Float_t         Jet_pt_jesFlavorPureGluonDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureGluonDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureGluonDown;
   Float_t         MET_phi_jesFlavorPureGluonDown;
   Float_t         Jet_pt_jesFlavorPureQuarkDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureQuarkDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureQuarkDown;
   Float_t         MET_phi_jesFlavorPureQuarkDown;
   Float_t         Jet_pt_jesFlavorPureCharmDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureCharmDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureCharmDown;
   Float_t         MET_phi_jesFlavorPureCharmDown;
   Float_t         Jet_pt_jesFlavorPureBottomDown[30];   //[nJet]
   Float_t         Jet_mass_jesFlavorPureBottomDown[30];   //[nJet]
   Float_t         MET_pt_jesFlavorPureBottomDown;
   Float_t         MET_phi_jesFlavorPureBottomDown;
   Float_t         Jet_pt_jesTimeRunADown[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunADown[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunADown;
   Float_t         MET_phi_jesTimeRunADown;
   Float_t         Jet_pt_jesTimeRunBDown[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunBDown[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunBDown;
   Float_t         MET_phi_jesTimeRunBDown;
   Float_t         Jet_pt_jesTimeRunCDown[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunCDown[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunCDown;
   Float_t         MET_phi_jesTimeRunCDown;
   Float_t         Jet_pt_jesTimeRunDDown[30];   //[nJet]
   Float_t         Jet_mass_jesTimeRunDDown[30];   //[nJet]
   Float_t         MET_pt_jesTimeRunDDown;
   Float_t         MET_phi_jesTimeRunDDown;
   Float_t         Jet_pt_jesCorrelationGroupMPFInSituDown[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupMPFInSituDown[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupMPFInSituDown;
   Float_t         MET_phi_jesCorrelationGroupMPFInSituDown;
   Float_t         Jet_pt_jesCorrelationGroupIntercalibrationDown[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupIntercalibrationDown[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupIntercalibrationDown;
   Float_t         MET_phi_jesCorrelationGroupIntercalibrationDown;
   Float_t         Jet_pt_jesCorrelationGroupbJESDown[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupbJESDown[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupbJESDown;
   Float_t         MET_phi_jesCorrelationGroupbJESDown;
   Float_t         Jet_pt_jesCorrelationGroupFlavorDown[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupFlavorDown[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupFlavorDown;
   Float_t         MET_phi_jesCorrelationGroupFlavorDown;
   Float_t         Jet_pt_jesCorrelationGroupUncorrelatedDown[30];   //[nJet]
   Float_t         Jet_mass_jesCorrelationGroupUncorrelatedDown[30];   //[nJet]
   Float_t         MET_pt_jesCorrelationGroupUncorrelatedDown;
   Float_t         MET_phi_jesCorrelationGroupUncorrelatedDown;
   Float_t         MET_pt_unclustEnDown;
   Float_t         MET_phi_unclustEnDown;
   Float_t         FatJet_pt_raw[7];   //[nFatJet]
   Float_t         FatJet_pt_nom[7];   //[nFatJet]
   Float_t         FatJet_mass_raw[7];   //[nFatJet]
   Float_t         FatJet_mass_nom[7];   //[nFatJet]
   Float_t         FatJet_corr_JEC[7];   //[nFatJet]
   Float_t         FatJet_corr_JER[7];   //[nFatJet]
   Float_t         FatJet_corr_JMS[7];   //[nFatJet]
   Float_t         FatJet_corr_JMR[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_raw[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_nom[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_JMR[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_JMS[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_PUPPI[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_nom[7];   //[nFatJet]
   Float_t         FatJet_pt_jerUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jerUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jmrUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jmsUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jerUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmrUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmsUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteStatUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteStatUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteStatUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteScaleUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteScaleUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteScaleUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteSampleUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteSampleUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteSampleUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteFlavMapUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteFlavMapUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteFlavMapUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteMPFBiasUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteMPFBiasUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteMPFBiasUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFragmentationUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFragmentationUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFragmentationUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSinglePionECALUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSinglePionECALUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSinglePionECALUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSinglePionHCALUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSinglePionHCALUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSinglePionHCALUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorQCDUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorQCDUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorQCDUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimePtEtaUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimePtEtaUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimePtEtaUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJEREC1Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJEREC1Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJEREC1Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJEREC2Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJEREC2Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJEREC2Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJERHFUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJERHFUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJERHFUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtBBUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtBBUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtBBUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtHFUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtHFUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtHFUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeBalUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeBalUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeBalUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeSampleUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeSampleUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeSampleUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeFSRUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeFSRUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeFSRUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatFSRUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatFSRUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatFSRUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatECUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatECUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatECUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatHFUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatHFUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatHFUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpDataMCUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpDataMCUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpDataMCUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtRefUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtRefUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtRefUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtBBUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtBBUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtBBUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtEC1Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtEC2Up[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtHFUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtHFUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtHFUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpMuZeroUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpMuZeroUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpMuZeroUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpEnvelopeUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpEnvelopeUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpEnvelopeUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalPileUpUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalPileUpUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalPileUpUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalRelativeUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalRelativeUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalRelativeUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalPtUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalPtUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalPtUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalScaleUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalScaleUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalScaleUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalAbsoluteUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalAbsoluteUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalAbsoluteUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalMCUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalMCUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalMCUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoFlavorNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoFlavorNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoFlavorNoTimeUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorZJetUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorZJetUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorZJetUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPhotonJetUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPhotonJetUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPhotonJetUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureGluonUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureGluonUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureGluonUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureQuarkUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureQuarkUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureQuarkUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureCharmUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureCharmUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureCharmUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureBottomUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureBottomUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureBottomUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunAUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunAUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunAUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunBUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunBUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunBUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunCUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunCUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunCUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunDUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunDUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunDUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupMPFInSituUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupMPFInSituUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupMPFInSituUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupIntercalibrationUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupIntercalibrationUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupIntercalibrationUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupbJESUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupbJESUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupbJESUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupFlavorUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupUncorrelatedUp[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupUncorrelatedUp[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupUncorrelatedUp[7];   //[nFatJet]
   Float_t         FatJet_pt_jerDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jerDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jmrDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jmsDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jerDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmrDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmsDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteStatDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteStatDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteStatDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteScaleDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteScaleDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteScaleDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteSampleDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteSampleDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteSampleDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteFlavMapDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteFlavMapDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteFlavMapDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesAbsoluteMPFBiasDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesAbsoluteMPFBiasDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesAbsoluteMPFBiasDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFragmentationDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFragmentationDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFragmentationDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSinglePionECALDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSinglePionECALDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSinglePionECALDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSinglePionHCALDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSinglePionHCALDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSinglePionHCALDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorQCDDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorQCDDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorQCDDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimePtEtaDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimePtEtaDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimePtEtaDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJEREC1Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJEREC1Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJEREC1Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJEREC2Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJEREC2Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJEREC2Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeJERHFDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeJERHFDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeJERHFDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtBBDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtBBDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtBBDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativePtHFDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativePtHFDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativePtHFDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeBalDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeBalDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeBalDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeSampleDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeSampleDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeSampleDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeFSRDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeFSRDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeFSRDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatFSRDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatFSRDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatFSRDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatECDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatECDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatECDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesRelativeStatHFDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesRelativeStatHFDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesRelativeStatHFDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpDataMCDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpDataMCDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpDataMCDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtRefDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtRefDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtRefDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtBBDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtBBDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtBBDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtEC1Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtEC2Down[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpPtHFDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpPtHFDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpPtHFDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpMuZeroDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpMuZeroDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpMuZeroDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesPileUpEnvelopeDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesPileUpEnvelopeDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesPileUpEnvelopeDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalPileUpDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalPileUpDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalPileUpDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalRelativeDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalRelativeDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalRelativeDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalPtDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalPtDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalPtDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalScaleDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalScaleDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalScaleDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalAbsoluteDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalAbsoluteDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalAbsoluteDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesSubTotalMCDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesSubTotalMCDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesSubTotalMCDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalNoFlavorNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalNoFlavorNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalNoFlavorNoTimeDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorZJetDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorZJetDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorZJetDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPhotonJetDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPhotonJetDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPhotonJetDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureGluonDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureGluonDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureGluonDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureQuarkDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureQuarkDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureQuarkDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureCharmDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureCharmDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureCharmDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesFlavorPureBottomDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesFlavorPureBottomDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesFlavorPureBottomDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunADown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunADown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunADown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunBDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunBDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunBDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunCDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunCDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunCDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesTimeRunDDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesTimeRunDDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTimeRunDDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupMPFInSituDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupMPFInSituDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupMPFInSituDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupIntercalibrationDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupIntercalibrationDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupIntercalibrationDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupbJESDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupbJESDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupbJESDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupFlavorDown[7];   //[nFatJet]
   Float_t         FatJet_pt_jesCorrelationGroupUncorrelatedDown[7];   //[nFatJet]
   Float_t         FatJet_mass_jesCorrelationGroupUncorrelatedDown[7];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesCorrelationGroupUncorrelatedDown[7];   //[nFatJet]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_HTXS_Higgs_pt;   //!
   TBranch        *b_HTXS_Higgs_y;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage_0;   //!
   TBranch        *b_HTXS_stage_1_pTjet25;   //!
   TBranch        *b_HTXS_stage_1_pTjet30;   //!
   TBranch        *b_HTXS_njets25;   //!
   TBranch        *b_HTXS_njets30;   //!
   TBranch        *b_btagWeight_CSVV2;   //!
   TBranch        *b_btagWeight_DeepCSVB;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_ChsMET_phi;   //!
   TBranch        *b_ChsMET_pt;   //!
   TBranch        *b_ChsMET_sumEt;   //!
   TBranch        *b_nCorrT1METJet;   //!
   TBranch        *b_CorrT1METJet_area;   //!
   TBranch        *b_CorrT1METJet_eta;   //!
   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
   TBranch        *b_CorrT1METJet_phi;   //!
   TBranch        *b_CorrT1METJet_rawPt;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_deltaEtaSC;   //!
   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_dr03TkSumPt;   //!
   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eCorr;   //!
   TBranch        *b_Electron_eInvMinusPInv;   //!
   TBranch        *b_Electron_energyErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_hoe;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_jetPtRelv2;   //!
   TBranch        *b_Electron_jetRelIso;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_miniPFRelIso_all;   //!
   TBranch        *b_Electron_miniPFRelIso_chg;   //!
   TBranch        *b_Electron_mvaFall17V1Iso;   //!
   TBranch        *b_Electron_mvaFall17V1noIso;   //!
   TBranch        *b_Electron_mvaFall17V2Iso;   //!
   TBranch        *b_Electron_mvaFall17V2noIso;   //!
   TBranch        *b_Electron_pfRelIso03_all;   //!
   TBranch        *b_Electron_pfRelIso03_chg;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_r9;   //!
   TBranch        *b_Electron_scEtOverPt;   //!
   TBranch        *b_Electron_sieie;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_mvaTTH;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_cutBased;   //!
   TBranch        *b_Electron_cutBased_Fall17_V1;   //!
   TBranch        *b_Electron_jetIdx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_photonIdx;   //!
   TBranch        *b_Electron_tightCharge;   //!
   TBranch        *b_Electron_vidNestedWPBitmap;   //!
   TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_cutBased_HEEP;   //!
   TBranch        *b_Electron_isPFcand;   //!
   TBranch        *b_Electron_lostHits;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WPL;   //!
   TBranch        *b_Electron_seedGain;   //!
   TBranch        *b_Flag_ecalBadCalibFilterV2;   //!
   TBranch        *b_nFatJet;   //!
   TBranch        *b_FatJet_area;   //!
   TBranch        *b_FatJet_btagCMVA;   //!
   TBranch        *b_FatJet_btagCSVV2;   //!
   TBranch        *b_FatJet_btagDDBvL;   //!
   TBranch        *b_FatJet_btagDDBvL_noMD;   //!
   TBranch        *b_FatJet_btagDDCvB;   //!
   TBranch        *b_FatJet_btagDDCvB_noMD;   //!
   TBranch        *b_FatJet_btagDDCvL;   //!
   TBranch        *b_FatJet_btagDDCvL_noMD;   //!
   TBranch        *b_FatJet_btagDeepB;   //!
   TBranch        *b_FatJet_btagHbb;   //!
   TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
   TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
   TBranch        *b_FatJet_deepTag_H;   //!
   TBranch        *b_FatJet_deepTag_QCD;   //!
   TBranch        *b_FatJet_deepTag_QCDothers;   //!
   TBranch        *b_FatJet_deepTag_TvsQCD;   //!
   TBranch        *b_FatJet_deepTag_WvsQCD;   //!
   TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
   TBranch        *b_FatJet_eta;   //!
   TBranch        *b_FatJet_mass;   //!
   TBranch        *b_FatJet_msoftdrop;   //!
   TBranch        *b_FatJet_n2b1;   //!
   TBranch        *b_FatJet_n3b1;   //!
   TBranch        *b_FatJet_phi;   //!
   TBranch        *b_FatJet_pt;   //!
   TBranch        *b_FatJet_rawFactor;   //!
   TBranch        *b_FatJet_tau1;   //!
   TBranch        *b_FatJet_tau2;   //!
   TBranch        *b_FatJet_tau3;   //!
   TBranch        *b_FatJet_tau4;   //!
   TBranch        *b_FatJet_lsf3;   //!
   TBranch        *b_FatJet_jetId;   //!
   TBranch        *b_FatJet_subJetIdx1;   //!
   TBranch        *b_FatJet_subJetIdx2;   //!
   TBranch        *b_FatJet_electronIdx3SJ;   //!
   TBranch        *b_FatJet_muonIdx3SJ;   //!
   TBranch        *b_nFsrPhoton;   //!
   TBranch        *b_FsrPhoton_dROverEt2;   //!
   TBranch        *b_FsrPhoton_eta;   //!
   TBranch        *b_FsrPhoton_phi;   //!
   TBranch        *b_FsrPhoton_pt;   //!
   TBranch        *b_FsrPhoton_relIso03;   //!
   TBranch        *b_FsrPhoton_muonIdx;   //!
   TBranch        *b_nGenJetAK8;   //!
   TBranch        *b_GenJetAK8_eta;   //!
   TBranch        *b_GenJetAK8_mass;   //!
   TBranch        *b_GenJetAK8_phi;   //!
   TBranch        *b_GenJetAK8_pt;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_nSubGenJetAK8;   //!
   TBranch        *b_SubGenJetAK8_eta;   //!
   TBranch        *b_SubGenJetAK8_mass;   //!
   TBranch        *b_SubGenJetAK8_phi;   //!
   TBranch        *b_SubGenJetAK8_pt;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_nGenVisTau;   //!
   TBranch        *b_GenVisTau_eta;   //!
   TBranch        *b_GenVisTau_mass;   //!
   TBranch        *b_GenVisTau_phi;   //!
   TBranch        *b_GenVisTau_pt;   //!
   TBranch        *b_GenVisTau_charge;   //!
   TBranch        *b_GenVisTau_genPartIdxMother;   //!
   TBranch        *b_GenVisTau_status;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_LHEWeight_originalXWGTUP;   //!
   TBranch        *b_nLHEPdfWeight;   //!
   TBranch        *b_LHEPdfWeight;   //!
   TBranch        *b_nLHEReweightingWeight;   //!
   TBranch        *b_LHEReweightingWeight;   //!
   TBranch        *b_nLHEScaleWeight;   //!
   TBranch        *b_LHEScaleWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nIsoTrack;   //!
   TBranch        *b_IsoTrack_dxy;   //!
   TBranch        *b_IsoTrack_dz;   //!
   TBranch        *b_IsoTrack_eta;   //!
   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
   TBranch        *b_IsoTrack_phi;   //!
   TBranch        *b_IsoTrack_pt;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
   TBranch        *b_IsoTrack_fromPV;   //!
   TBranch        *b_IsoTrack_pdgId;   //!
   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
   TBranch        *b_IsoTrack_isPFcand;   //!
   TBranch        *b_IsoTrack_isFromLostTrack;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagCMVA;   //!
   TBranch        *b_Jet_btagCSVV2;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepC;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_btagDeepFlavC;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chFPV0EF;   //!
   TBranch        *b_Jet_chFPV1EF;   //!
   TBranch        *b_Jet_chFPV2EF;   //!
   TBranch        *b_Jet_chFPV3EF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muonSubtrFactor;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_puIdDisc;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_cRegCorr;   //!
   TBranch        *b_Jet_cRegRes;   //!
   TBranch        *b_Jet_electronIdx1;   //!
   TBranch        *b_Jet_electronIdx2;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_muonIdx1;   //!
   TBranch        *b_Jet_muonIdx2;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_LHE_HT;   //!
   TBranch        *b_LHE_HTIncoming;   //!
   TBranch        *b_LHE_Vpt;   //!
   TBranch        *b_LHE_AlphaS;   //!
   TBranch        *b_LHE_Njets;   //!
   TBranch        *b_LHE_Nb;   //!
   TBranch        *b_LHE_Nc;   //!
   TBranch        *b_LHE_Nuds;   //!
   TBranch        *b_LHE_Nglu;   //!
   TBranch        *b_LHE_NpNLO;   //!
   TBranch        *b_LHE_NpLO;   //!
   TBranch        *b_nLHEPart;   //!
   TBranch        *b_LHEPart_pt;   //!
   TBranch        *b_LHEPart_eta;   //!
   TBranch        *b_LHEPart_phi;   //!
   TBranch        *b_LHEPart_mass;   //!
   TBranch        *b_LHEPart_incomingpz;   //!
   TBranch        *b_LHEPart_pdgId;   //!
   TBranch        *b_LHEPart_status;   //!
   TBranch        *b_LHEPart_spin;   //!
   TBranch        *b_GenMET_phi;   //!
   TBranch        *b_GenMET_pt;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_covXX;   //!
   TBranch        *b_MET_covXY;   //!
   TBranch        *b_MET_covYY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_sumPtUnclustered;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dxybs;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_jetPtRelv2;   //!
   TBranch        *b_Muon_jetRelIso;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_miniPFRelIso_all;   //!
   TBranch        *b_Muon_miniPFRelIso_chg;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso03_chg;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_segmentComp;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_softMva;   //!
   TBranch        *b_Muon_tkRelIso;   //!
   TBranch        *b_Muon_tunepRelPt;   //!
   TBranch        *b_Muon_mvaLowPt;   //!
   TBranch        *b_Muon_mvaTTH;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_jetIdx;   //!
   TBranch        *b_Muon_nStations;   //!
   TBranch        *b_Muon_nTrackerLayers;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_tightCharge;   //!
   TBranch        *b_Muon_fsrPhotonIdx;   //!
   TBranch        *b_Muon_highPtId;   //!
   TBranch        *b_Muon_highPurity;   //!
   TBranch        *b_Muon_inTimeMuon;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_mediumPromptId;   //!
   TBranch        *b_Muon_miniIsoId;   //!
   TBranch        *b_Muon_multiIsoId;   //!
   TBranch        *b_Muon_mvaId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_softMvaId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_eCorr;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_mass;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_mvaID_Fall17V1p1;   //!
   TBranch        *b_Photon_pfRelIso03_all;   //!
   TBranch        *b_Photon_pfRelIso03_chg;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_charge;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_cutBased_Fall17V1Bitmap;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_pdgId;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_PuppiMET_phi;   //!
   TBranch        *b_PuppiMET_phiJERUp;   //!
   TBranch        *b_PuppiMET_phiJESUp;   //!
   TBranch        *b_PuppiMET_pt;   //!
   TBranch        *b_PuppiMET_ptJERUp;   //!
   TBranch        *b_PuppiMET_ptJESUp;   //!
   TBranch        *b_PuppiMET_sumEt;   //!
   TBranch        *b_RawMET_phi;   //!
   TBranch        *b_RawMET_pt;   //!
   TBranch        *b_RawMET_sumEt;   //!
   TBranch        *b_RawPuppiMET_phi;   //!
   TBranch        *b_RawPuppiMET_pt;   //!
   TBranch        *b_RawPuppiMET_sumEt;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nGenDressedLepton;   //!
   TBranch        *b_GenDressedLepton_eta;   //!
   TBranch        *b_GenDressedLepton_mass;   //!
   TBranch        *b_GenDressedLepton_phi;   //!
   TBranch        *b_GenDressedLepton_pt;   //!
   TBranch        *b_GenDressedLepton_pdgId;   //!
   TBranch        *b_GenDressedLepton_hasTauAnc;   //!
   TBranch        *b_nGenIsolatedPhoton;   //!
   TBranch        *b_GenIsolatedPhoton_eta;   //!
   TBranch        *b_GenIsolatedPhoton_mass;   //!
   TBranch        *b_GenIsolatedPhoton_phi;   //!
   TBranch        *b_GenIsolatedPhoton_pt;   //!
   TBranch        *b_nSoftActivityJet;   //!
   TBranch        *b_SoftActivityJet_eta;   //!
   TBranch        *b_SoftActivityJet_phi;   //!
   TBranch        *b_SoftActivityJet_pt;   //!
   TBranch        *b_SoftActivityJetHT;   //!
   TBranch        *b_SoftActivityJetHT10;   //!
   TBranch        *b_SoftActivityJetHT2;   //!
   TBranch        *b_SoftActivityJetHT5;   //!
   TBranch        *b_SoftActivityJetNjets10;   //!
   TBranch        *b_SoftActivityJetNjets2;   //!
   TBranch        *b_SoftActivityJetNjets5;   //!
   TBranch        *b_nSubJet;   //!
   TBranch        *b_SubJet_btagCMVA;   //!
   TBranch        *b_SubJet_btagCSVV2;   //!
   TBranch        *b_SubJet_btagDeepB;   //!
   TBranch        *b_SubJet_eta;   //!
   TBranch        *b_SubJet_mass;   //!
   TBranch        *b_SubJet_n2b1;   //!
   TBranch        *b_SubJet_n3b1;   //!
   TBranch        *b_SubJet_phi;   //!
   TBranch        *b_SubJet_pt;   //!
   TBranch        *b_SubJet_rawFactor;   //!
   TBranch        *b_SubJet_tau1;   //!
   TBranch        *b_SubJet_tau2;   //!
   TBranch        *b_SubJet_tau3;   //!
   TBranch        *b_SubJet_tau4;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_Tau_chargedIso;   //!
   TBranch        *b_Tau_dxy;   //!
   TBranch        *b_Tau_dz;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_leadTkDeltaEta;   //!
   TBranch        *b_Tau_leadTkDeltaPhi;   //!
   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
   TBranch        *b_Tau_mass;   //!
   TBranch        *b_Tau_neutralIso;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_puCorr;   //!
   TBranch        *b_Tau_rawAntiEle;   //!
   TBranch        *b_Tau_rawAntiEle2018;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_rawIso;   //!
   TBranch        *b_Tau_rawIsodR03;   //!
   TBranch        *b_Tau_rawMVAnewDM2017v2;   //!
   TBranch        *b_Tau_rawMVAoldDM;   //!
   TBranch        *b_Tau_rawMVAoldDM2017v1;   //!
   TBranch        *b_Tau_rawMVAoldDM2017v2;   //!
   TBranch        *b_Tau_rawMVAoldDMdR032017v2;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_decayMode;   //!
   TBranch        *b_Tau_jetIdx;   //!
   TBranch        *b_Tau_rawAntiEleCat;   //!
   TBranch        *b_Tau_rawAntiEleCat2018;   //!
   TBranch        *b_Tau_idAntiEle;   //!
   TBranch        *b_Tau_idAntiEle2018;   //!
   TBranch        *b_Tau_idAntiMu;   //!
   TBranch        *b_Tau_idDecayMode;   //!
   TBranch        *b_Tau_idDecayModeNewDMs;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_idMVAnewDM2017v2;   //!
   TBranch        *b_Tau_idMVAoldDM;   //!
   TBranch        *b_Tau_idMVAoldDM2017v1;   //!
   TBranch        *b_Tau_idMVAoldDM2017v2;   //!
   TBranch        *b_Tau_idMVAoldDMdR032017v2;   //!
   TBranch        *b_TkMET_phi;   //!
   TBranch        *b_TkMET_pt;   //!
   TBranch        *b_TkMET_sumEt;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_dxy;   //!
   TBranch        *b_SV_dxySig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_FatJet_genJetAK8Idx;   //!
   TBranch        *b_FatJet_hadronFlavour;   //!
   TBranch        *b_FatJet_nBHadrons;   //!
   TBranch        *b_FatJet_nCHadrons;   //!
   TBranch        *b_GenJetAK8_partonFlavour;   //!
   TBranch        *b_GenJetAK8_hadronFlavour;   //!
   TBranch        *b_GenJet_partonFlavour;   //!
   TBranch        *b_GenJet_hadronFlavour;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_Photon_genPartIdx;   //!
   TBranch        *b_Photon_genPartFlav;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_Electron_cleanmask;   //!
   TBranch        *b_Jet_cleanmask;   //!
   TBranch        *b_Muon_cleanmask;   //!
   TBranch        *b_Photon_cleanmask;   //!
   TBranch        *b_Tau_cleanmask;   //!
   TBranch        *b_SubJet_nBHadrons;   //!
   TBranch        *b_SubJet_nCHadrons;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_Tau_genPartIdx;   //!
   TBranch        *b_Tau_genPartFlav;   //!
   TBranch        *b_L1_AlwaysTrue;   //!
   TBranch        *b_L1_BPTX_AND_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B2_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref2_VME;   //!
   TBranch        *b_L1_BPTX_NotOR_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_RefAND_VME;   //!
   TBranch        *b_L1_BptxMinus;   //!
   TBranch        *b_L1_BptxOR;   //!
   TBranch        *b_L1_BptxPlus;   //!
   TBranch        *b_L1_BptxXOR;   //!
   TBranch        *b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT260er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT280er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT300er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT320er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT340er;   //!
   TBranch        *b_L1_DoubleEG_15_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_27_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso25_12_er2p5;   //!
   TBranch        *b_L1_DoubleIsoTau32er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau34er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau36er2p1;   //!
   TBranch        *b_L1_DoubleJet100er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet100er2p5;   //!
   TBranch        *b_L1_DoubleJet112er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet120er2p5;   //!
   TBranch        *b_L1_DoubleJet150er2p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_Mu8;   //!
   TBranch        *b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleLooseIsoEG22er2p1;   //!
   TBranch        *b_L1_DoubleLooseIsoEG24er2p1;   //!
   TBranch        *b_L1_DoubleMu0;   //!
   TBranch        *b_L1_DoubleMu0_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu0_OQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu10_SQ;   //!
   TBranch        *b_L1_DoubleMu18er2p1;   //!
   TBranch        *b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_HTT60er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT220er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT240er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT260er;   //!
   TBranch        *b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu4_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;   //!
   TBranch        *b_L1_DoubleMu5Upsilon_OS_DoubleEG3;   //!
   TBranch        *b_L1_DoubleMu5_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu9_SQ;   //!
   TBranch        *b_L1_DoubleMu_12_5;   //!
   TBranch        *b_L1_DoubleMu_15_5_SQ;   //!
   TBranch        *b_L1_DoubleMu_15_7;   //!
   TBranch        *b_L1_DoubleMu_15_7_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu_15_7_SQ;   //!
   TBranch        *b_L1_DoubleTau70er2p1;   //!
   TBranch        *b_L1_ETM120;   //!
   TBranch        *b_L1_ETM150;   //!
   TBranch        *b_L1_ETMHF100;   //!
   TBranch        *b_L1_ETMHF100_HTT60er;   //!
   TBranch        *b_L1_ETMHF110;   //!
   TBranch        *b_L1_ETMHF110_HTT60er;   //!
   TBranch        *b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF120;   //!
   TBranch        *b_L1_ETMHF120_HTT60er;   //!
   TBranch        *b_L1_ETMHF120_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF130;   //!
   TBranch        *b_L1_ETMHF130_HTT60er;   //!
   TBranch        *b_L1_ETMHF140;   //!
   TBranch        *b_L1_ETMHF150;   //!
   TBranch        *b_L1_ETMHF90_HTT60er;   //!
   TBranch        *b_L1_ETT1200;   //!
   TBranch        *b_L1_ETT1600;   //!
   TBranch        *b_L1_ETT2000;   //!
   TBranch        *b_L1_FirstBunchAfterTrain;   //!
   TBranch        *b_L1_FirstBunchBeforeTrain;   //!
   TBranch        *b_L1_FirstBunchInTrain;   //!
   TBranch        *b_L1_FirstCollisionInOrbit;   //!
   TBranch        *b_L1_FirstCollisionInTrain;   //!
   TBranch        *b_L1_HCAL_LaserMon_Trig;   //!
   TBranch        *b_L1_HCAL_LaserMon_Veto;   //!
   TBranch        *b_L1_HTT120er;   //!
   TBranch        *b_L1_HTT160er;   //!
   TBranch        *b_L1_HTT200er;   //!
   TBranch        *b_L1_HTT255er;   //!
   TBranch        *b_L1_HTT280er;   //!
   TBranch        *b_L1_HTT280er_QuadJet_70_55_40_35_er2p4;   //!
   TBranch        *b_L1_HTT320er;   //!
   TBranch        *b_L1_HTT320er_QuadJet_70_55_40_40_er2p4;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;   //!
   TBranch        *b_L1_HTT360er;   //!
   TBranch        *b_L1_HTT400er;   //!
   TBranch        *b_L1_HTT450er;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt40;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt44;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt48;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF100;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF110;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF120;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF90;   //!
   TBranch        *b_L1_IsolatedBunch;   //!
   TBranch        *b_L1_LastBunchInTrain;   //!
   TBranch        *b_L1_LastCollisionInTrain;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND;   //!
   TBranch        *b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu18er2p1_Tau24er2p1;   //!
   TBranch        *b_L1_Mu18er2p1_Tau26er2p1;   //!
   TBranch        *b_L1_Mu20_EG10er2p5;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau32er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau34er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau36er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau40er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_Tau70er2p1;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_Mu3_Jet16er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet30er2p5;   //!
   TBranch        *b_L1_Mu3_Jet35er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet60er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet80er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF40;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF50;   //!
   TBranch        *b_L1_Mu5_EG23er2p5;   //!
   TBranch        *b_L1_Mu5_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG10er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG12er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG15er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG17er2p5;   //!
   TBranch        *b_L1_Mu6_HTT240er;   //!
   TBranch        *b_L1_Mu6_HTT250er;   //!
   TBranch        *b_L1_Mu7_EG23er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG23er2p5;   //!
   TBranch        *b_L1_NotBptxOR;   //!
   TBranch        *b_L1_QuadJet36er2p5_IsoTau52er2p1;   //!
   TBranch        *b_L1_QuadJet60er2p5;   //!
   TBranch        *b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;   //!
   TBranch        *b_L1_QuadMu0;   //!
   TBranch        *b_L1_QuadMu0_OQ;   //!
   TBranch        *b_L1_QuadMu0_SQ;   //!
   TBranch        *b_L1_SecondBunchInTrain;   //!
   TBranch        *b_L1_SecondLastBunchInTrain;   //!
   TBranch        *b_L1_SingleEG10er2p5;   //!
   TBranch        *b_L1_SingleEG15er2p5;   //!
   TBranch        *b_L1_SingleEG26er2p5;   //!
   TBranch        *b_L1_SingleEG34er2p5;   //!
   TBranch        *b_L1_SingleEG36er2p5;   //!
   TBranch        *b_L1_SingleEG38er2p5;   //!
   TBranch        *b_L1_SingleEG40er2p5;   //!
   TBranch        *b_L1_SingleEG42er2p5;   //!
   TBranch        *b_L1_SingleEG45er2p5;   //!
   TBranch        *b_L1_SingleEG50;   //!
   TBranch        *b_L1_SingleEG60;   //!
   TBranch        *b_L1_SingleEG8er2p5;   //!
   TBranch        *b_L1_SingleIsoEG24er1p5;   //!
   TBranch        *b_L1_SingleIsoEG24er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er1p5;   //!
   TBranch        *b_L1_SingleIsoEG26er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er2p5;   //!
   TBranch        *b_L1_SingleIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleIsoEG28er2p1;   //!
   TBranch        *b_L1_SingleIsoEG28er2p5;   //!
   TBranch        *b_L1_SingleIsoEG30er2p1;   //!
   TBranch        *b_L1_SingleIsoEG30er2p5;   //!
   TBranch        *b_L1_SingleIsoEG32er2p1;   //!
   TBranch        *b_L1_SingleIsoEG32er2p5;   //!
   TBranch        *b_L1_SingleIsoEG34er2p5;   //!
   TBranch        *b_L1_SingleJet10erHE;   //!
   TBranch        *b_L1_SingleJet120;   //!
   TBranch        *b_L1_SingleJet120_FWD3p0;   //!
   TBranch        *b_L1_SingleJet120er2p5;   //!
   TBranch        *b_L1_SingleJet12erHE;   //!
   TBranch        *b_L1_SingleJet140er2p5;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF80;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF90;   //!
   TBranch        *b_L1_SingleJet160er2p5;   //!
   TBranch        *b_L1_SingleJet180;   //!
   TBranch        *b_L1_SingleJet180er2p5;   //!
   TBranch        *b_L1_SingleJet200;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet35;   //!
   TBranch        *b_L1_SingleJet35_FWD3p0;   //!
   TBranch        *b_L1_SingleJet35er2p5;   //!
   TBranch        *b_L1_SingleJet43er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet46er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet60;   //!
   TBranch        *b_L1_SingleJet60_FWD3p0;   //!
   TBranch        *b_L1_SingleJet60er2p5;   //!
   TBranch        *b_L1_SingleJet8erHE;   //!
   TBranch        *b_L1_SingleJet90;   //!
   TBranch        *b_L1_SingleJet90_FWD3p0;   //!
   TBranch        *b_L1_SingleJet90er2p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG30er1p5;   //!
   TBranch        *b_L1_SingleMu0_BMTF;   //!
   TBranch        *b_L1_SingleMu0_DQ;   //!
   TBranch        *b_L1_SingleMu0_EMTF;   //!
   TBranch        *b_L1_SingleMu0_OMTF;   //!
   TBranch        *b_L1_SingleMu10er1p5;   //!
   TBranch        *b_L1_SingleMu12_DQ_BMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_EMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_OMTF;   //!
   TBranch        *b_L1_SingleMu12er1p5;   //!
   TBranch        *b_L1_SingleMu14er1p5;   //!
   TBranch        *b_L1_SingleMu15_DQ;   //!
   TBranch        *b_L1_SingleMu16er1p5;   //!
   TBranch        *b_L1_SingleMu18;   //!
   TBranch        *b_L1_SingleMu18er1p5;   //!
   TBranch        *b_L1_SingleMu20;   //!
   TBranch        *b_L1_SingleMu22;   //!
   TBranch        *b_L1_SingleMu22_BMTF;   //!
   TBranch        *b_L1_SingleMu22_EMTF;   //!
   TBranch        *b_L1_SingleMu22_OMTF;   //!
   TBranch        *b_L1_SingleMu25;   //!
   TBranch        *b_L1_SingleMu3;   //!
   TBranch        *b_L1_SingleMu5;   //!
   TBranch        *b_L1_SingleMu6er1p5;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_DQ;   //!
   TBranch        *b_L1_SingleMu7er1p5;   //!
   TBranch        *b_L1_SingleMu8er1p5;   //!
   TBranch        *b_L1_SingleMu9er1p5;   //!
   TBranch        *b_L1_SingleMuCosmics;   //!
   TBranch        *b_L1_SingleMuCosmics_BMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_EMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_OMTF;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_NotBptxOR;   //!
   TBranch        *b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleTau120er2p1;   //!
   TBranch        *b_L1_SingleTau130er2p1;   //!
   TBranch        *b_L1_TOTEM_1;   //!
   TBranch        *b_L1_TOTEM_2;   //!
   TBranch        *b_L1_TOTEM_3;   //!
   TBranch        *b_L1_TOTEM_4;   //!
   TBranch        *b_L1_TripleEG16er2p5;   //!
   TBranch        *b_L1_TripleEG_16_12_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_16_15_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_17_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_18_12_er2p5;   //!
   TBranch        *b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;   //!
   TBranch        *b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;   //!
   TBranch        *b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;   //!
   TBranch        *b_L1_TripleMu0;   //!
   TBranch        *b_L1_TripleMu0_OQ;   //!
   TBranch        *b_L1_TripleMu0_SQ;   //!
   TBranch        *b_L1_TripleMu3;   //!
   TBranch        *b_L1_TripleMu3_SQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5_3_3;   //!
   TBranch        *b_L1_TripleMu_5_3_3_SQ;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_5_3;   //!
   TBranch        *b_L1_UnpairedBunchBptxMinus;   //!
   TBranch        *b_L1_UnpairedBunchBptxPlus;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_copy;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet380_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet400_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet420_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFHT750_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT800_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT850_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT900_TrimMass50;   //!
   TBranch        *b_HLT_CaloJet500_NoJetID;   //!
   TBranch        *b_HLT_CaloJet550_NoJetID;   //!
   TBranch        *b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;   //!
   TBranch        *b_HLT_Trimuon5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_DoubleEle25_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle27_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle24_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Ele27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_Ele27_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_TkMu27;   //!
   TBranch        *b_HLT_DoubleMu4_3_Bs;   //!
   TBranch        *b_HLT_DoubleMu4_3_Jpsi;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu;   //!
   TBranch        *b_HLT_DoubleMu3_TkMu_DsTau3Mu;   //!
   TBranch        *b_HLT_DoubleMu4_PsiPrimeTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350;   //!
   TBranch        *b_HLT_Mu3_PFJet40;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Upsilon;   //!
   TBranch        *b_HLT_Mu3_L1SingleMu5orSingleMu7;   //!
   TBranch        *b_HLT_DoublePhoton33_CaloIdL;   //!
   TBranch        *b_HLT_DoublePhoton70;   //!
   TBranch        *b_HLT_DoublePhoton85;   //!
   TBranch        *b_HLT_Ele20_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele15_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele17_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele28_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele30_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf_L1EGMT;   //!
   TBranch        *b_HLT_Ele38_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele40_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_HT450_Beamspot;   //!
   TBranch        *b_HLT_HT300_Beamspot;   //!
   TBranch        *b_HLT_ZeroBias_Beamspot;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_IsoMu30;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE60_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE70_NoBPTX3BX;   //!
   TBranch        *b_HLT_L1SingleMu18;   //!
   TBranch        *b_HLT_L1SingleMu25;   //!
   TBranch        *b_HLT_L2Mu10;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX;   //!
   TBranch        *b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu50;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu50;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Onia;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Psi;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Upsilon;   //!
   TBranch        *b_HLT_Mu20_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_HLT_Mu15;   //!
   TBranch        *b_HLT_Mu20;   //!
   TBranch        *b_HLT_Mu27;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_Mu55;   //!
   TBranch        *b_HLT_OldMu100;   //!
   TBranch        *b_HLT_TkMu100;   //!
   TBranch        *b_HLT_DiPFJetAve40;   //!
   TBranch        *b_HLT_DiPFJetAve60;   //!
   TBranch        *b_HLT_DiPFJetAve80;   //!
   TBranch        *b_HLT_DiPFJetAve140;   //!
   TBranch        *b_HLT_DiPFJetAve200;   //!
   TBranch        *b_HLT_DiPFJetAve260;   //!
   TBranch        *b_HLT_DiPFJetAve320;   //!
   TBranch        *b_HLT_DiPFJetAve400;   //!
   TBranch        *b_HLT_DiPFJetAve500;   //!
   TBranch        *b_HLT_DiPFJetAve60_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve80_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve100_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve160_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve220_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve300_HFJEC;   //!
   TBranch        *b_HLT_AK8PFJet15;   //!
   TBranch        *b_HLT_AK8PFJet25;   //!
   TBranch        *b_HLT_AK8PFJet40;   //!
   TBranch        *b_HLT_AK8PFJet60;   //!
   TBranch        *b_HLT_AK8PFJet80;   //!
   TBranch        *b_HLT_AK8PFJet140;   //!
   TBranch        *b_HLT_AK8PFJet200;   //!
   TBranch        *b_HLT_AK8PFJet260;   //!
   TBranch        *b_HLT_AK8PFJet320;   //!
   TBranch        *b_HLT_AK8PFJet400;   //!
   TBranch        *b_HLT_AK8PFJet450;   //!
   TBranch        *b_HLT_AK8PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet550;   //!
   TBranch        *b_HLT_PFJet15;   //!
   TBranch        *b_HLT_PFJet25;   //!
   TBranch        *b_HLT_PFJet40;   //!
   TBranch        *b_HLT_PFJet60;   //!
   TBranch        *b_HLT_PFJet80;   //!
   TBranch        *b_HLT_PFJet140;   //!
   TBranch        *b_HLT_PFJet200;   //!
   TBranch        *b_HLT_PFJet260;   //!
   TBranch        *b_HLT_PFJet320;   //!
   TBranch        *b_HLT_PFJet400;   //!
   TBranch        *b_HLT_PFJet450;   //!
   TBranch        *b_HLT_PFJet500;   //!
   TBranch        *b_HLT_PFJet550;   //!
   TBranch        *b_HLT_PFJetFwd15;   //!
   TBranch        *b_HLT_PFJetFwd25;   //!
   TBranch        *b_HLT_PFJetFwd40;   //!
   TBranch        *b_HLT_PFJetFwd60;   //!
   TBranch        *b_HLT_PFJetFwd80;   //!
   TBranch        *b_HLT_PFJetFwd140;   //!
   TBranch        *b_HLT_PFJetFwd200;   //!
   TBranch        *b_HLT_PFJetFwd260;   //!
   TBranch        *b_HLT_PFJetFwd320;   //!
   TBranch        *b_HLT_PFJetFwd400;   //!
   TBranch        *b_HLT_PFJetFwd450;   //!
   TBranch        *b_HLT_PFJetFwd500;   //!
   TBranch        *b_HLT_AK8PFJetFwd15;   //!
   TBranch        *b_HLT_AK8PFJetFwd25;   //!
   TBranch        *b_HLT_AK8PFJetFwd40;   //!
   TBranch        *b_HLT_AK8PFJetFwd60;   //!
   TBranch        *b_HLT_AK8PFJetFwd80;   //!
   TBranch        *b_HLT_AK8PFJetFwd140;   //!
   TBranch        *b_HLT_AK8PFJetFwd200;   //!
   TBranch        *b_HLT_AK8PFJetFwd260;   //!
   TBranch        *b_HLT_AK8PFJetFwd320;   //!
   TBranch        *b_HLT_AK8PFJetFwd400;   //!
   TBranch        *b_HLT_AK8PFJetFwd450;   //!
   TBranch        *b_HLT_AK8PFJetFwd500;   //!
   TBranch        *b_HLT_PFHT180;   //!
   TBranch        *b_HLT_PFHT250;   //!
   TBranch        *b_HLT_PFHT370;   //!
   TBranch        *b_HLT_PFHT430;   //!
   TBranch        *b_HLT_PFHT510;   //!
   TBranch        *b_HLT_PFHT590;   //!
   TBranch        *b_HLT_PFHT680;   //!
   TBranch        *b_HLT_PFHT780;   //!
   TBranch        *b_HLT_PFHT890;   //!
   TBranch        *b_HLT_PFHT1050;   //!
   TBranch        *b_HLT_PFHT500_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_PFHT500_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET95_PFMHT95_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET75_PFMHT75_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_L1ETMHadSeeds;   //!
   TBranch        *b_HLT_CaloMHT90;   //!
   TBranch        *b_HLT_CaloMET80_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET90_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET100_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET110_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET250_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET70_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET80_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET90_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET100_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET250_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET300_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET350_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_NotCleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET250_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET300_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_MET105_IsoTrk50;   //!
   TBranch        *b_HLT_MET120_IsoTrk50;   //!
   TBranch        *b_HLT_SingleJet30_Mu12_SinglePFJet40;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Photon300_NoHE;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu12_DoublePhoton20;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_Photon20;   //!
   TBranch        *b_HLT_Photon33;   //!
   TBranch        *b_HLT_Photon50;   //!
   TBranch        *b_HLT_Photon75;   //!
   TBranch        *b_HLT_Photon90;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_Photon150;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_Photon200;   //!
   TBranch        *b_HLT_Photon100EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon110EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon120EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon100EBHE10;   //!
   TBranch        *b_HLT_Photon100EEHE10;   //!
   TBranch        *b_HLT_Photon100EE_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_Photon90_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon120_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon165_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon90_CaloIdL_PFHT700;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Photon35_TwoProngs35;   //!
   TBranch        *b_HLT_IsoMu24_TwoProngs35;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi3p5_Muon2;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5M;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5;   //!
   TBranch        *b_HLT_Dimuon0_LowMass;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_TM530;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_L1_TM0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DZ;   //!
   TBranch        *b_HLT_TripleMu_10_5_5_DZ;   //!
   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrkTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu43NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleMu48NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;   //!
   TBranch        *b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_DoubleMu33NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu40NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;   //!
   TBranch        *b_HLT_HT425;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT500_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet60_DisplacedTrack;   //!
   TBranch        *b_HLT_HT400_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT650_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_HT550_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;   //!
   TBranch        *b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150;   //!
   TBranch        *b_HLT_Ele28_HighEta_SC20_Mass55;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_Photon23;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
   TBranch        *b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon20_Jpsi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon12_Upsilon_y1p4;   //!
   TBranch        *b_HLT_Dimuon14_Phi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Upsilon_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Phi_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi_noCorrL1;   //!
   TBranch        *b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleIsoMu20_eta2p1;   //!
   TBranch        *b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Mu19;   //!
   TBranch        *b_HLT_Mu17_Photon30_IsoCaloId;   //!
   TBranch        *b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele135_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele145_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele200_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36;   //!
   TBranch        *b_HLT_PFHT350;   //!
   TBranch        *b_HLT_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_ECALHT800;   //!
   TBranch        *b_HLT_DiSC30_18_EIso_AND_HE_Mass70;   //!
   TBranch        *b_HLT_Physics;   //!
   TBranch        *b_HLT_Physics_part0;   //!
   TBranch        *b_HLT_Physics_part1;   //!
   TBranch        *b_HLT_Physics_part2;   //!
   TBranch        *b_HLT_Physics_part3;   //!
   TBranch        *b_HLT_Physics_part4;   //!
   TBranch        *b_HLT_Physics_part5;   //!
   TBranch        *b_HLT_Physics_part6;   //!
   TBranch        *b_HLT_Physics_part7;   //!
   TBranch        *b_HLT_Random;   //!
   TBranch        *b_HLT_ZeroBias;   //!
   TBranch        *b_HLT_ZeroBias_Alignment;   //!
   TBranch        *b_HLT_ZeroBias_part0;   //!
   TBranch        *b_HLT_ZeroBias_part1;   //!
   TBranch        *b_HLT_ZeroBias_part2;   //!
   TBranch        *b_HLT_ZeroBias_part3;   //!
   TBranch        *b_HLT_ZeroBias_part4;   //!
   TBranch        *b_HLT_ZeroBias_part5;   //!
   TBranch        *b_HLT_ZeroBias_part6;   //!
   TBranch        *b_HLT_ZeroBias_part7;   //!
   TBranch        *b_HLT_AK4CaloJet30;   //!
   TBranch        *b_HLT_AK4CaloJet40;   //!
   TBranch        *b_HLT_AK4CaloJet50;   //!
   TBranch        *b_HLT_AK4CaloJet80;   //!
   TBranch        *b_HLT_AK4CaloJet100;   //!
   TBranch        *b_HLT_AK4CaloJet120;   //!
   TBranch        *b_HLT_AK4PFJet30;   //!
   TBranch        *b_HLT_AK4PFJet50;   //!
   TBranch        *b_HLT_AK4PFJet80;   //!
   TBranch        *b_HLT_AK4PFJet100;   //!
   TBranch        *b_HLT_AK4PFJet120;   //!
   TBranch        *b_HLT_SinglePhoton10_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton20_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton30_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_Photon20_HoverELoose;   //!
   TBranch        *b_HLT_Photon30_HoverELoose;   //!
   TBranch        *b_HLT_EcalCalibration;   //!
   TBranch        *b_HLT_HcalCalibration;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxMinus;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxPlus;   //!
   TBranch        *b_HLT_L1NotBptxOR;   //!
   TBranch        *b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5_er1p0;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5p5_er1p0;   //!
   TBranch        *b_HLT_HcalNZS;   //!
   TBranch        *b_HLT_HcalPhiSym;   //!
   TBranch        *b_HLT_HcalIsolatedbunch;   //!
   TBranch        *b_HLT_IsoTrackHB;   //!
   TBranch        *b_HLT_IsoTrackHE;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap;   //!
   TBranch        *b_HLT_ZeroBias_IsolatedBunches;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_LastCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_FirstBXAfterTrain;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Rsq0p35;   //!
   TBranch        *b_HLT_Rsq0p40;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_IsoMu27_MET90;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu18_Mu9;   //!
   TBranch        *b_HLT_Mu18_Mu9_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10;   //!
   TBranch        *b_HLT_Mu20_Mu10_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12;   //!
   TBranch        *b_HLT_Mu23_Mu12_DZ;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;   //!
   TBranch        *b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DCA;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;   //!
   TBranch        *b_HLT_Mu12_IP6_part0;   //!
   TBranch        *b_HLT_Mu12_IP6_part1;   //!
   TBranch        *b_HLT_Mu12_IP6_part2;   //!
   TBranch        *b_HLT_Mu12_IP6_part3;   //!
   TBranch        *b_HLT_Mu12_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP5_part0;   //!
   TBranch        *b_HLT_Mu9_IP5_part1;   //!
   TBranch        *b_HLT_Mu9_IP5_part2;   //!
   TBranch        *b_HLT_Mu9_IP5_part3;   //!
   TBranch        *b_HLT_Mu9_IP5_part4;   //!
   TBranch        *b_HLT_Mu7_IP4_part0;   //!
   TBranch        *b_HLT_Mu7_IP4_part1;   //!
   TBranch        *b_HLT_Mu7_IP4_part2;   //!
   TBranch        *b_HLT_Mu7_IP4_part3;   //!
   TBranch        *b_HLT_Mu7_IP4_part4;   //!
   TBranch        *b_HLT_Mu9_IP4_part0;   //!
   TBranch        *b_HLT_Mu9_IP4_part1;   //!
   TBranch        *b_HLT_Mu9_IP4_part2;   //!
   TBranch        *b_HLT_Mu9_IP4_part3;   //!
   TBranch        *b_HLT_Mu9_IP4_part4;   //!
   TBranch        *b_HLT_Mu8_IP5_part0;   //!
   TBranch        *b_HLT_Mu8_IP5_part1;   //!
   TBranch        *b_HLT_Mu8_IP5_part2;   //!
   TBranch        *b_HLT_Mu8_IP5_part3;   //!
   TBranch        *b_HLT_Mu8_IP5_part4;   //!
   TBranch        *b_HLT_Mu8_IP6_part0;   //!
   TBranch        *b_HLT_Mu8_IP6_part1;   //!
   TBranch        *b_HLT_Mu8_IP6_part2;   //!
   TBranch        *b_HLT_Mu8_IP6_part3;   //!
   TBranch        *b_HLT_Mu8_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP6_part0;   //!
   TBranch        *b_HLT_Mu9_IP6_part1;   //!
   TBranch        *b_HLT_Mu9_IP6_part2;   //!
   TBranch        *b_HLT_Mu9_IP6_part3;   //!
   TBranch        *b_HLT_Mu9_IP6_part4;   //!
   TBranch        *b_HLT_Mu8_IP3_part0;   //!
   TBranch        *b_HLT_Mu8_IP3_part1;   //!
   TBranch        *b_HLT_Mu8_IP3_part2;   //!
   TBranch        *b_HLT_Mu8_IP3_part3;   //!
   TBranch        *b_HLT_Mu8_IP3_part4;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_TrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_Jet_pt_raw;   //!
   TBranch        *b_Jet_pt_nom;   //!
   TBranch        *b_Jet_mass_raw;   //!
   TBranch        *b_Jet_mass_nom;   //!
   TBranch        *b_Jet_corr_JEC;   //!
   TBranch        *b_Jet_corr_JER;   //!
   TBranch        *b_MET_pt_nom;   //!
   TBranch        *b_MET_phi_nom;   //!
   TBranch        *b_MET_pt_jer;   //!
   TBranch        *b_MET_phi_jer;   //!
   TBranch        *b_Jet_pt_jerUp;   //!
   TBranch        *b_Jet_mass_jerUp;   //!
   TBranch        *b_MET_pt_jerUp;   //!
   TBranch        *b_MET_phi_jerUp;   //!
   TBranch        *b_Jet_pt_jesAbsoluteStatUp;   //!
   TBranch        *b_Jet_mass_jesAbsoluteStatUp;   //!
   TBranch        *b_MET_pt_jesAbsoluteStatUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteStatUp;   //!
   TBranch        *b_Jet_pt_jesAbsoluteScaleUp;   //!
   TBranch        *b_Jet_mass_jesAbsoluteScaleUp;   //!
   TBranch        *b_MET_pt_jesAbsoluteScaleUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteScaleUp;   //!
   TBranch        *b_Jet_pt_jesAbsoluteSampleUp;   //!
   TBranch        *b_Jet_mass_jesAbsoluteSampleUp;   //!
   TBranch        *b_MET_pt_jesAbsoluteSampleUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteSampleUp;   //!
   TBranch        *b_Jet_pt_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_Jet_mass_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_MET_pt_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_Jet_pt_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_Jet_mass_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_MET_pt_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_Jet_pt_jesFragmentationUp;   //!
   TBranch        *b_Jet_mass_jesFragmentationUp;   //!
   TBranch        *b_MET_pt_jesFragmentationUp;   //!
   TBranch        *b_MET_phi_jesFragmentationUp;   //!
   TBranch        *b_Jet_pt_jesSinglePionECALUp;   //!
   TBranch        *b_Jet_mass_jesSinglePionECALUp;   //!
   TBranch        *b_MET_pt_jesSinglePionECALUp;   //!
   TBranch        *b_MET_phi_jesSinglePionECALUp;   //!
   TBranch        *b_Jet_pt_jesSinglePionHCALUp;   //!
   TBranch        *b_Jet_mass_jesSinglePionHCALUp;   //!
   TBranch        *b_MET_pt_jesSinglePionHCALUp;   //!
   TBranch        *b_MET_phi_jesSinglePionHCALUp;   //!
   TBranch        *b_Jet_pt_jesFlavorQCDUp;   //!
   TBranch        *b_Jet_mass_jesFlavorQCDUp;   //!
   TBranch        *b_MET_pt_jesFlavorQCDUp;   //!
   TBranch        *b_MET_phi_jesFlavorQCDUp;   //!
   TBranch        *b_Jet_pt_jesTimePtEtaUp;   //!
   TBranch        *b_Jet_mass_jesTimePtEtaUp;   //!
   TBranch        *b_MET_pt_jesTimePtEtaUp;   //!
   TBranch        *b_MET_phi_jesTimePtEtaUp;   //!
   TBranch        *b_Jet_pt_jesRelativeJEREC1Up;   //!
   TBranch        *b_Jet_mass_jesRelativeJEREC1Up;   //!
   TBranch        *b_MET_pt_jesRelativeJEREC1Up;   //!
   TBranch        *b_MET_phi_jesRelativeJEREC1Up;   //!
   TBranch        *b_Jet_pt_jesRelativeJEREC2Up;   //!
   TBranch        *b_Jet_mass_jesRelativeJEREC2Up;   //!
   TBranch        *b_MET_pt_jesRelativeJEREC2Up;   //!
   TBranch        *b_MET_phi_jesRelativeJEREC2Up;   //!
   TBranch        *b_Jet_pt_jesRelativeJERHFUp;   //!
   TBranch        *b_Jet_mass_jesRelativeJERHFUp;   //!
   TBranch        *b_MET_pt_jesRelativeJERHFUp;   //!
   TBranch        *b_MET_phi_jesRelativeJERHFUp;   //!
   TBranch        *b_Jet_pt_jesRelativePtBBUp;   //!
   TBranch        *b_Jet_mass_jesRelativePtBBUp;   //!
   TBranch        *b_MET_pt_jesRelativePtBBUp;   //!
   TBranch        *b_MET_phi_jesRelativePtBBUp;   //!
   TBranch        *b_Jet_pt_jesRelativePtEC1Up;   //!
   TBranch        *b_Jet_mass_jesRelativePtEC1Up;   //!
   TBranch        *b_MET_pt_jesRelativePtEC1Up;   //!
   TBranch        *b_MET_phi_jesRelativePtEC1Up;   //!
   TBranch        *b_Jet_pt_jesRelativePtEC2Up;   //!
   TBranch        *b_Jet_mass_jesRelativePtEC2Up;   //!
   TBranch        *b_MET_pt_jesRelativePtEC2Up;   //!
   TBranch        *b_MET_phi_jesRelativePtEC2Up;   //!
   TBranch        *b_Jet_pt_jesRelativePtHFUp;   //!
   TBranch        *b_Jet_mass_jesRelativePtHFUp;   //!
   TBranch        *b_MET_pt_jesRelativePtHFUp;   //!
   TBranch        *b_MET_phi_jesRelativePtHFUp;   //!
   TBranch        *b_Jet_pt_jesRelativeBalUp;   //!
   TBranch        *b_Jet_mass_jesRelativeBalUp;   //!
   TBranch        *b_MET_pt_jesRelativeBalUp;   //!
   TBranch        *b_MET_phi_jesRelativeBalUp;   //!
   TBranch        *b_Jet_pt_jesRelativeSampleUp;   //!
   TBranch        *b_Jet_mass_jesRelativeSampleUp;   //!
   TBranch        *b_MET_pt_jesRelativeSampleUp;   //!
   TBranch        *b_MET_phi_jesRelativeSampleUp;   //!
   TBranch        *b_Jet_pt_jesRelativeFSRUp;   //!
   TBranch        *b_Jet_mass_jesRelativeFSRUp;   //!
   TBranch        *b_MET_pt_jesRelativeFSRUp;   //!
   TBranch        *b_MET_phi_jesRelativeFSRUp;   //!
   TBranch        *b_Jet_pt_jesRelativeStatFSRUp;   //!
   TBranch        *b_Jet_mass_jesRelativeStatFSRUp;   //!
   TBranch        *b_MET_pt_jesRelativeStatFSRUp;   //!
   TBranch        *b_MET_phi_jesRelativeStatFSRUp;   //!
   TBranch        *b_Jet_pt_jesRelativeStatECUp;   //!
   TBranch        *b_Jet_mass_jesRelativeStatECUp;   //!
   TBranch        *b_MET_pt_jesRelativeStatECUp;   //!
   TBranch        *b_MET_phi_jesRelativeStatECUp;   //!
   TBranch        *b_Jet_pt_jesRelativeStatHFUp;   //!
   TBranch        *b_Jet_mass_jesRelativeStatHFUp;   //!
   TBranch        *b_MET_pt_jesRelativeStatHFUp;   //!
   TBranch        *b_MET_phi_jesRelativeStatHFUp;   //!
   TBranch        *b_Jet_pt_jesPileUpDataMCUp;   //!
   TBranch        *b_Jet_mass_jesPileUpDataMCUp;   //!
   TBranch        *b_MET_pt_jesPileUpDataMCUp;   //!
   TBranch        *b_MET_phi_jesPileUpDataMCUp;   //!
   TBranch        *b_Jet_pt_jesPileUpPtRefUp;   //!
   TBranch        *b_Jet_mass_jesPileUpPtRefUp;   //!
   TBranch        *b_MET_pt_jesPileUpPtRefUp;   //!
   TBranch        *b_MET_phi_jesPileUpPtRefUp;   //!
   TBranch        *b_Jet_pt_jesPileUpPtBBUp;   //!
   TBranch        *b_Jet_mass_jesPileUpPtBBUp;   //!
   TBranch        *b_MET_pt_jesPileUpPtBBUp;   //!
   TBranch        *b_MET_phi_jesPileUpPtBBUp;   //!
   TBranch        *b_Jet_pt_jesPileUpPtEC1Up;   //!
   TBranch        *b_Jet_mass_jesPileUpPtEC1Up;   //!
   TBranch        *b_MET_pt_jesPileUpPtEC1Up;   //!
   TBranch        *b_MET_phi_jesPileUpPtEC1Up;   //!
   TBranch        *b_Jet_pt_jesPileUpPtEC2Up;   //!
   TBranch        *b_Jet_mass_jesPileUpPtEC2Up;   //!
   TBranch        *b_MET_pt_jesPileUpPtEC2Up;   //!
   TBranch        *b_MET_phi_jesPileUpPtEC2Up;   //!
   TBranch        *b_Jet_pt_jesPileUpPtHFUp;   //!
   TBranch        *b_Jet_mass_jesPileUpPtHFUp;   //!
   TBranch        *b_MET_pt_jesPileUpPtHFUp;   //!
   TBranch        *b_MET_phi_jesPileUpPtHFUp;   //!
   TBranch        *b_Jet_pt_jesPileUpMuZeroUp;   //!
   TBranch        *b_Jet_mass_jesPileUpMuZeroUp;   //!
   TBranch        *b_MET_pt_jesPileUpMuZeroUp;   //!
   TBranch        *b_MET_phi_jesPileUpMuZeroUp;   //!
   TBranch        *b_Jet_pt_jesPileUpEnvelopeUp;   //!
   TBranch        *b_Jet_mass_jesPileUpEnvelopeUp;   //!
   TBranch        *b_MET_pt_jesPileUpEnvelopeUp;   //!
   TBranch        *b_MET_phi_jesPileUpEnvelopeUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalPileUpUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalPileUpUp;   //!
   TBranch        *b_MET_pt_jesSubTotalPileUpUp;   //!
   TBranch        *b_MET_phi_jesSubTotalPileUpUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalRelativeUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalRelativeUp;   //!
   TBranch        *b_MET_pt_jesSubTotalRelativeUp;   //!
   TBranch        *b_MET_phi_jesSubTotalRelativeUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalPtUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalPtUp;   //!
   TBranch        *b_MET_pt_jesSubTotalPtUp;   //!
   TBranch        *b_MET_phi_jesSubTotalPtUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalScaleUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalScaleUp;   //!
   TBranch        *b_MET_pt_jesSubTotalScaleUp;   //!
   TBranch        *b_MET_phi_jesSubTotalScaleUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_MET_pt_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_MET_phi_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_Jet_pt_jesSubTotalMCUp;   //!
   TBranch        *b_Jet_mass_jesSubTotalMCUp;   //!
   TBranch        *b_MET_pt_jesSubTotalMCUp;   //!
   TBranch        *b_MET_phi_jesSubTotalMCUp;   //!
   TBranch        *b_Jet_pt_jesTotalUp;   //!
   TBranch        *b_Jet_mass_jesTotalUp;   //!
   TBranch        *b_MET_pt_jesTotalUp;   //!
   TBranch        *b_MET_phi_jesTotalUp;   //!
   TBranch        *b_Jet_pt_jesTotalNoFlavorUp;   //!
   TBranch        *b_Jet_mass_jesTotalNoFlavorUp;   //!
   TBranch        *b_MET_pt_jesTotalNoFlavorUp;   //!
   TBranch        *b_MET_phi_jesTotalNoFlavorUp;   //!
   TBranch        *b_Jet_pt_jesTotalNoTimeUp;   //!
   TBranch        *b_Jet_mass_jesTotalNoTimeUp;   //!
   TBranch        *b_MET_pt_jesTotalNoTimeUp;   //!
   TBranch        *b_MET_phi_jesTotalNoTimeUp;   //!
   TBranch        *b_Jet_pt_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_Jet_mass_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_MET_pt_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_MET_phi_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_Jet_pt_jesFlavorZJetUp;   //!
   TBranch        *b_Jet_mass_jesFlavorZJetUp;   //!
   TBranch        *b_MET_pt_jesFlavorZJetUp;   //!
   TBranch        *b_MET_phi_jesFlavorZJetUp;   //!
   TBranch        *b_Jet_pt_jesFlavorPhotonJetUp;   //!
   TBranch        *b_Jet_mass_jesFlavorPhotonJetUp;   //!
   TBranch        *b_MET_pt_jesFlavorPhotonJetUp;   //!
   TBranch        *b_MET_phi_jesFlavorPhotonJetUp;   //!
   TBranch        *b_Jet_pt_jesFlavorPureGluonUp;   //!
   TBranch        *b_Jet_mass_jesFlavorPureGluonUp;   //!
   TBranch        *b_MET_pt_jesFlavorPureGluonUp;   //!
   TBranch        *b_MET_phi_jesFlavorPureGluonUp;   //!
   TBranch        *b_Jet_pt_jesFlavorPureQuarkUp;   //!
   TBranch        *b_Jet_mass_jesFlavorPureQuarkUp;   //!
   TBranch        *b_MET_pt_jesFlavorPureQuarkUp;   //!
   TBranch        *b_MET_phi_jesFlavorPureQuarkUp;   //!
   TBranch        *b_Jet_pt_jesFlavorPureCharmUp;   //!
   TBranch        *b_Jet_mass_jesFlavorPureCharmUp;   //!
   TBranch        *b_MET_pt_jesFlavorPureCharmUp;   //!
   TBranch        *b_MET_phi_jesFlavorPureCharmUp;   //!
   TBranch        *b_Jet_pt_jesFlavorPureBottomUp;   //!
   TBranch        *b_Jet_mass_jesFlavorPureBottomUp;   //!
   TBranch        *b_MET_pt_jesFlavorPureBottomUp;   //!
   TBranch        *b_MET_phi_jesFlavorPureBottomUp;   //!
   TBranch        *b_Jet_pt_jesTimeRunAUp;   //!
   TBranch        *b_Jet_mass_jesTimeRunAUp;   //!
   TBranch        *b_MET_pt_jesTimeRunAUp;   //!
   TBranch        *b_MET_phi_jesTimeRunAUp;   //!
   TBranch        *b_Jet_pt_jesTimeRunBUp;   //!
   TBranch        *b_Jet_mass_jesTimeRunBUp;   //!
   TBranch        *b_MET_pt_jesTimeRunBUp;   //!
   TBranch        *b_MET_phi_jesTimeRunBUp;   //!
   TBranch        *b_Jet_pt_jesTimeRunCUp;   //!
   TBranch        *b_Jet_mass_jesTimeRunCUp;   //!
   TBranch        *b_MET_pt_jesTimeRunCUp;   //!
   TBranch        *b_MET_phi_jesTimeRunCUp;   //!
   TBranch        *b_Jet_pt_jesTimeRunDUp;   //!
   TBranch        *b_Jet_mass_jesTimeRunDUp;   //!
   TBranch        *b_MET_pt_jesTimeRunDUp;   //!
   TBranch        *b_MET_phi_jesTimeRunDUp;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_MET_pt_unclustEnUp;   //!
   TBranch        *b_MET_phi_unclustEnUp;   //!
   TBranch        *b_Jet_pt_jerDown;   //!
   TBranch        *b_Jet_mass_jerDown;   //!
   TBranch        *b_MET_pt_jerDown;   //!
   TBranch        *b_MET_phi_jerDown;   //!
   TBranch        *b_Jet_pt_jesAbsoluteStatDown;   //!
   TBranch        *b_Jet_mass_jesAbsoluteStatDown;   //!
   TBranch        *b_MET_pt_jesAbsoluteStatDown;   //!
   TBranch        *b_MET_phi_jesAbsoluteStatDown;   //!
   TBranch        *b_Jet_pt_jesAbsoluteScaleDown;   //!
   TBranch        *b_Jet_mass_jesAbsoluteScaleDown;   //!
   TBranch        *b_MET_pt_jesAbsoluteScaleDown;   //!
   TBranch        *b_MET_phi_jesAbsoluteScaleDown;   //!
   TBranch        *b_Jet_pt_jesAbsoluteSampleDown;   //!
   TBranch        *b_Jet_mass_jesAbsoluteSampleDown;   //!
   TBranch        *b_MET_pt_jesAbsoluteSampleDown;   //!
   TBranch        *b_MET_phi_jesAbsoluteSampleDown;   //!
   TBranch        *b_Jet_pt_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_Jet_mass_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_MET_pt_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_MET_phi_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_Jet_pt_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_Jet_mass_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_MET_pt_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_MET_phi_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_Jet_pt_jesFragmentationDown;   //!
   TBranch        *b_Jet_mass_jesFragmentationDown;   //!
   TBranch        *b_MET_pt_jesFragmentationDown;   //!
   TBranch        *b_MET_phi_jesFragmentationDown;   //!
   TBranch        *b_Jet_pt_jesSinglePionECALDown;   //!
   TBranch        *b_Jet_mass_jesSinglePionECALDown;   //!
   TBranch        *b_MET_pt_jesSinglePionECALDown;   //!
   TBranch        *b_MET_phi_jesSinglePionECALDown;   //!
   TBranch        *b_Jet_pt_jesSinglePionHCALDown;   //!
   TBranch        *b_Jet_mass_jesSinglePionHCALDown;   //!
   TBranch        *b_MET_pt_jesSinglePionHCALDown;   //!
   TBranch        *b_MET_phi_jesSinglePionHCALDown;   //!
   TBranch        *b_Jet_pt_jesFlavorQCDDown;   //!
   TBranch        *b_Jet_mass_jesFlavorQCDDown;   //!
   TBranch        *b_MET_pt_jesFlavorQCDDown;   //!
   TBranch        *b_MET_phi_jesFlavorQCDDown;   //!
   TBranch        *b_Jet_pt_jesTimePtEtaDown;   //!
   TBranch        *b_Jet_mass_jesTimePtEtaDown;   //!
   TBranch        *b_MET_pt_jesTimePtEtaDown;   //!
   TBranch        *b_MET_phi_jesTimePtEtaDown;   //!
   TBranch        *b_Jet_pt_jesRelativeJEREC1Down;   //!
   TBranch        *b_Jet_mass_jesRelativeJEREC1Down;   //!
   TBranch        *b_MET_pt_jesRelativeJEREC1Down;   //!
   TBranch        *b_MET_phi_jesRelativeJEREC1Down;   //!
   TBranch        *b_Jet_pt_jesRelativeJEREC2Down;   //!
   TBranch        *b_Jet_mass_jesRelativeJEREC2Down;   //!
   TBranch        *b_MET_pt_jesRelativeJEREC2Down;   //!
   TBranch        *b_MET_phi_jesRelativeJEREC2Down;   //!
   TBranch        *b_Jet_pt_jesRelativeJERHFDown;   //!
   TBranch        *b_Jet_mass_jesRelativeJERHFDown;   //!
   TBranch        *b_MET_pt_jesRelativeJERHFDown;   //!
   TBranch        *b_MET_phi_jesRelativeJERHFDown;   //!
   TBranch        *b_Jet_pt_jesRelativePtBBDown;   //!
   TBranch        *b_Jet_mass_jesRelativePtBBDown;   //!
   TBranch        *b_MET_pt_jesRelativePtBBDown;   //!
   TBranch        *b_MET_phi_jesRelativePtBBDown;   //!
   TBranch        *b_Jet_pt_jesRelativePtEC1Down;   //!
   TBranch        *b_Jet_mass_jesRelativePtEC1Down;   //!
   TBranch        *b_MET_pt_jesRelativePtEC1Down;   //!
   TBranch        *b_MET_phi_jesRelativePtEC1Down;   //!
   TBranch        *b_Jet_pt_jesRelativePtEC2Down;   //!
   TBranch        *b_Jet_mass_jesRelativePtEC2Down;   //!
   TBranch        *b_MET_pt_jesRelativePtEC2Down;   //!
   TBranch        *b_MET_phi_jesRelativePtEC2Down;   //!
   TBranch        *b_Jet_pt_jesRelativePtHFDown;   //!
   TBranch        *b_Jet_mass_jesRelativePtHFDown;   //!
   TBranch        *b_MET_pt_jesRelativePtHFDown;   //!
   TBranch        *b_MET_phi_jesRelativePtHFDown;   //!
   TBranch        *b_Jet_pt_jesRelativeBalDown;   //!
   TBranch        *b_Jet_mass_jesRelativeBalDown;   //!
   TBranch        *b_MET_pt_jesRelativeBalDown;   //!
   TBranch        *b_MET_phi_jesRelativeBalDown;   //!
   TBranch        *b_Jet_pt_jesRelativeSampleDown;   //!
   TBranch        *b_Jet_mass_jesRelativeSampleDown;   //!
   TBranch        *b_MET_pt_jesRelativeSampleDown;   //!
   TBranch        *b_MET_phi_jesRelativeSampleDown;   //!
   TBranch        *b_Jet_pt_jesRelativeFSRDown;   //!
   TBranch        *b_Jet_mass_jesRelativeFSRDown;   //!
   TBranch        *b_MET_pt_jesRelativeFSRDown;   //!
   TBranch        *b_MET_phi_jesRelativeFSRDown;   //!
   TBranch        *b_Jet_pt_jesRelativeStatFSRDown;   //!
   TBranch        *b_Jet_mass_jesRelativeStatFSRDown;   //!
   TBranch        *b_MET_pt_jesRelativeStatFSRDown;   //!
   TBranch        *b_MET_phi_jesRelativeStatFSRDown;   //!
   TBranch        *b_Jet_pt_jesRelativeStatECDown;   //!
   TBranch        *b_Jet_mass_jesRelativeStatECDown;   //!
   TBranch        *b_MET_pt_jesRelativeStatECDown;   //!
   TBranch        *b_MET_phi_jesRelativeStatECDown;   //!
   TBranch        *b_Jet_pt_jesRelativeStatHFDown;   //!
   TBranch        *b_Jet_mass_jesRelativeStatHFDown;   //!
   TBranch        *b_MET_pt_jesRelativeStatHFDown;   //!
   TBranch        *b_MET_phi_jesRelativeStatHFDown;   //!
   TBranch        *b_Jet_pt_jesPileUpDataMCDown;   //!
   TBranch        *b_Jet_mass_jesPileUpDataMCDown;   //!
   TBranch        *b_MET_pt_jesPileUpDataMCDown;   //!
   TBranch        *b_MET_phi_jesPileUpDataMCDown;   //!
   TBranch        *b_Jet_pt_jesPileUpPtRefDown;   //!
   TBranch        *b_Jet_mass_jesPileUpPtRefDown;   //!
   TBranch        *b_MET_pt_jesPileUpPtRefDown;   //!
   TBranch        *b_MET_phi_jesPileUpPtRefDown;   //!
   TBranch        *b_Jet_pt_jesPileUpPtBBDown;   //!
   TBranch        *b_Jet_mass_jesPileUpPtBBDown;   //!
   TBranch        *b_MET_pt_jesPileUpPtBBDown;   //!
   TBranch        *b_MET_phi_jesPileUpPtBBDown;   //!
   TBranch        *b_Jet_pt_jesPileUpPtEC1Down;   //!
   TBranch        *b_Jet_mass_jesPileUpPtEC1Down;   //!
   TBranch        *b_MET_pt_jesPileUpPtEC1Down;   //!
   TBranch        *b_MET_phi_jesPileUpPtEC1Down;   //!
   TBranch        *b_Jet_pt_jesPileUpPtEC2Down;   //!
   TBranch        *b_Jet_mass_jesPileUpPtEC2Down;   //!
   TBranch        *b_MET_pt_jesPileUpPtEC2Down;   //!
   TBranch        *b_MET_phi_jesPileUpPtEC2Down;   //!
   TBranch        *b_Jet_pt_jesPileUpPtHFDown;   //!
   TBranch        *b_Jet_mass_jesPileUpPtHFDown;   //!
   TBranch        *b_MET_pt_jesPileUpPtHFDown;   //!
   TBranch        *b_MET_phi_jesPileUpPtHFDown;   //!
   TBranch        *b_Jet_pt_jesPileUpMuZeroDown;   //!
   TBranch        *b_Jet_mass_jesPileUpMuZeroDown;   //!
   TBranch        *b_MET_pt_jesPileUpMuZeroDown;   //!
   TBranch        *b_MET_phi_jesPileUpMuZeroDown;   //!
   TBranch        *b_Jet_pt_jesPileUpEnvelopeDown;   //!
   TBranch        *b_Jet_mass_jesPileUpEnvelopeDown;   //!
   TBranch        *b_MET_pt_jesPileUpEnvelopeDown;   //!
   TBranch        *b_MET_phi_jesPileUpEnvelopeDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalPileUpDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalPileUpDown;   //!
   TBranch        *b_MET_pt_jesSubTotalPileUpDown;   //!
   TBranch        *b_MET_phi_jesSubTotalPileUpDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalRelativeDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalRelativeDown;   //!
   TBranch        *b_MET_pt_jesSubTotalRelativeDown;   //!
   TBranch        *b_MET_phi_jesSubTotalRelativeDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalPtDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalPtDown;   //!
   TBranch        *b_MET_pt_jesSubTotalPtDown;   //!
   TBranch        *b_MET_phi_jesSubTotalPtDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalScaleDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalScaleDown;   //!
   TBranch        *b_MET_pt_jesSubTotalScaleDown;   //!
   TBranch        *b_MET_phi_jesSubTotalScaleDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_MET_pt_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_MET_phi_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_Jet_pt_jesSubTotalMCDown;   //!
   TBranch        *b_Jet_mass_jesSubTotalMCDown;   //!
   TBranch        *b_MET_pt_jesSubTotalMCDown;   //!
   TBranch        *b_MET_phi_jesSubTotalMCDown;   //!
   TBranch        *b_Jet_pt_jesTotalDown;   //!
   TBranch        *b_Jet_mass_jesTotalDown;   //!
   TBranch        *b_MET_pt_jesTotalDown;   //!
   TBranch        *b_MET_phi_jesTotalDown;   //!
   TBranch        *b_Jet_pt_jesTotalNoFlavorDown;   //!
   TBranch        *b_Jet_mass_jesTotalNoFlavorDown;   //!
   TBranch        *b_MET_pt_jesTotalNoFlavorDown;   //!
   TBranch        *b_MET_phi_jesTotalNoFlavorDown;   //!
   TBranch        *b_Jet_pt_jesTotalNoTimeDown;   //!
   TBranch        *b_Jet_mass_jesTotalNoTimeDown;   //!
   TBranch        *b_MET_pt_jesTotalNoTimeDown;   //!
   TBranch        *b_MET_phi_jesTotalNoTimeDown;   //!
   TBranch        *b_Jet_pt_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_Jet_mass_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_MET_pt_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_MET_phi_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_Jet_pt_jesFlavorZJetDown;   //!
   TBranch        *b_Jet_mass_jesFlavorZJetDown;   //!
   TBranch        *b_MET_pt_jesFlavorZJetDown;   //!
   TBranch        *b_MET_phi_jesFlavorZJetDown;   //!
   TBranch        *b_Jet_pt_jesFlavorPhotonJetDown;   //!
   TBranch        *b_Jet_mass_jesFlavorPhotonJetDown;   //!
   TBranch        *b_MET_pt_jesFlavorPhotonJetDown;   //!
   TBranch        *b_MET_phi_jesFlavorPhotonJetDown;   //!
   TBranch        *b_Jet_pt_jesFlavorPureGluonDown;   //!
   TBranch        *b_Jet_mass_jesFlavorPureGluonDown;   //!
   TBranch        *b_MET_pt_jesFlavorPureGluonDown;   //!
   TBranch        *b_MET_phi_jesFlavorPureGluonDown;   //!
   TBranch        *b_Jet_pt_jesFlavorPureQuarkDown;   //!
   TBranch        *b_Jet_mass_jesFlavorPureQuarkDown;   //!
   TBranch        *b_MET_pt_jesFlavorPureQuarkDown;   //!
   TBranch        *b_MET_phi_jesFlavorPureQuarkDown;   //!
   TBranch        *b_Jet_pt_jesFlavorPureCharmDown;   //!
   TBranch        *b_Jet_mass_jesFlavorPureCharmDown;   //!
   TBranch        *b_MET_pt_jesFlavorPureCharmDown;   //!
   TBranch        *b_MET_phi_jesFlavorPureCharmDown;   //!
   TBranch        *b_Jet_pt_jesFlavorPureBottomDown;   //!
   TBranch        *b_Jet_mass_jesFlavorPureBottomDown;   //!
   TBranch        *b_MET_pt_jesFlavorPureBottomDown;   //!
   TBranch        *b_MET_phi_jesFlavorPureBottomDown;   //!
   TBranch        *b_Jet_pt_jesTimeRunADown;   //!
   TBranch        *b_Jet_mass_jesTimeRunADown;   //!
   TBranch        *b_MET_pt_jesTimeRunADown;   //!
   TBranch        *b_MET_phi_jesTimeRunADown;   //!
   TBranch        *b_Jet_pt_jesTimeRunBDown;   //!
   TBranch        *b_Jet_mass_jesTimeRunBDown;   //!
   TBranch        *b_MET_pt_jesTimeRunBDown;   //!
   TBranch        *b_MET_phi_jesTimeRunBDown;   //!
   TBranch        *b_Jet_pt_jesTimeRunCDown;   //!
   TBranch        *b_Jet_mass_jesTimeRunCDown;   //!
   TBranch        *b_MET_pt_jesTimeRunCDown;   //!
   TBranch        *b_MET_phi_jesTimeRunCDown;   //!
   TBranch        *b_Jet_pt_jesTimeRunDDown;   //!
   TBranch        *b_Jet_mass_jesTimeRunDDown;   //!
   TBranch        *b_MET_pt_jesTimeRunDDown;   //!
   TBranch        *b_MET_phi_jesTimeRunDDown;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_Jet_pt_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_Jet_mass_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_MET_pt_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_MET_phi_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_MET_pt_unclustEnDown;   //!
   TBranch        *b_MET_phi_unclustEnDown;   //!
   TBranch        *b_FatJet_pt_raw;   //!
   TBranch        *b_FatJet_pt_nom;   //!
   TBranch        *b_FatJet_mass_raw;   //!
   TBranch        *b_FatJet_mass_nom;   //!
   TBranch        *b_FatJet_corr_JEC;   //!
   TBranch        *b_FatJet_corr_JER;   //!
   TBranch        *b_FatJet_corr_JMS;   //!
   TBranch        *b_FatJet_corr_JMR;   //!
   TBranch        *b_FatJet_msoftdrop_raw;   //!
   TBranch        *b_FatJet_msoftdrop_nom;   //!
   TBranch        *b_FatJet_msoftdrop_corr_JMR;   //!
   TBranch        *b_FatJet_msoftdrop_corr_JMS;   //!
   TBranch        *b_FatJet_msoftdrop_corr_PUPPI;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_nom;   //!
   TBranch        *b_FatJet_pt_jerUp;   //!
   TBranch        *b_FatJet_mass_jerUp;   //!
   TBranch        *b_FatJet_mass_jmrUp;   //!
   TBranch        *b_FatJet_mass_jmsUp;   //!
   TBranch        *b_FatJet_msoftdrop_jerUp;   //!
   TBranch        *b_FatJet_msoftdrop_jmrUp;   //!
   TBranch        *b_FatJet_msoftdrop_jmsUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jerUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmrUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmsUp;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteStatUp;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteStatUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteStatUp;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteScaleUp;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteScaleUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteScaleUp;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteSampleUp;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteSampleUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteSampleUp;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteFlavMapUp;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteMPFBiasUp;   //!
   TBranch        *b_FatJet_pt_jesFragmentationUp;   //!
   TBranch        *b_FatJet_mass_jesFragmentationUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFragmentationUp;   //!
   TBranch        *b_FatJet_pt_jesSinglePionECALUp;   //!
   TBranch        *b_FatJet_mass_jesSinglePionECALUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSinglePionECALUp;   //!
   TBranch        *b_FatJet_pt_jesSinglePionHCALUp;   //!
   TBranch        *b_FatJet_mass_jesSinglePionHCALUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSinglePionHCALUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorQCDUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorQCDUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorQCDUp;   //!
   TBranch        *b_FatJet_pt_jesTimePtEtaUp;   //!
   TBranch        *b_FatJet_mass_jesTimePtEtaUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimePtEtaUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeJEREC1Up;   //!
   TBranch        *b_FatJet_mass_jesRelativeJEREC1Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJEREC1Up;   //!
   TBranch        *b_FatJet_pt_jesRelativeJEREC2Up;   //!
   TBranch        *b_FatJet_mass_jesRelativeJEREC2Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJEREC2Up;   //!
   TBranch        *b_FatJet_pt_jesRelativeJERHFUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeJERHFUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJERHFUp;   //!
   TBranch        *b_FatJet_pt_jesRelativePtBBUp;   //!
   TBranch        *b_FatJet_mass_jesRelativePtBBUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtBBUp;   //!
   TBranch        *b_FatJet_pt_jesRelativePtEC1Up;   //!
   TBranch        *b_FatJet_mass_jesRelativePtEC1Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtEC1Up;   //!
   TBranch        *b_FatJet_pt_jesRelativePtEC2Up;   //!
   TBranch        *b_FatJet_mass_jesRelativePtEC2Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtEC2Up;   //!
   TBranch        *b_FatJet_pt_jesRelativePtHFUp;   //!
   TBranch        *b_FatJet_mass_jesRelativePtHFUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtHFUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeBalUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeBalUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeBalUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeSampleUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeSampleUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeSampleUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeFSRUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeFSRUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeFSRUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatFSRUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatFSRUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatFSRUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatECUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatECUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatECUp;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatHFUp;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatHFUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatHFUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpDataMCUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpDataMCUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpDataMCUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtRefUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtRefUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtRefUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtBBUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtBBUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtBBUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtEC1Up;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtEC1Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtEC1Up;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtEC2Up;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtEC2Up;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtEC2Up;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtHFUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtHFUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtHFUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpMuZeroUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpMuZeroUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpMuZeroUp;   //!
   TBranch        *b_FatJet_pt_jesPileUpEnvelopeUp;   //!
   TBranch        *b_FatJet_mass_jesPileUpEnvelopeUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpEnvelopeUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalPileUpUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalPileUpUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalPileUpUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalRelativeUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalRelativeUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalRelativeUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalPtUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalPtUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalPtUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalScaleUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalScaleUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalScaleUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalAbsoluteUp;   //!
   TBranch        *b_FatJet_pt_jesSubTotalMCUp;   //!
   TBranch        *b_FatJet_mass_jesSubTotalMCUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalMCUp;   //!
   TBranch        *b_FatJet_pt_jesTotalUp;   //!
   TBranch        *b_FatJet_mass_jesTotalUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalUp;   //!
   TBranch        *b_FatJet_pt_jesTotalNoFlavorUp;   //!
   TBranch        *b_FatJet_mass_jesTotalNoFlavorUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoFlavorUp;   //!
   TBranch        *b_FatJet_pt_jesTotalNoTimeUp;   //!
   TBranch        *b_FatJet_mass_jesTotalNoTimeUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoTimeUp;   //!
   TBranch        *b_FatJet_pt_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_FatJet_mass_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoFlavorNoTimeUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorZJetUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorZJetUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorZJetUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorPhotonJetUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorPhotonJetUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPhotonJetUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureGluonUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureGluonUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureGluonUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureQuarkUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureQuarkUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureQuarkUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureCharmUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureCharmUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureCharmUp;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureBottomUp;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureBottomUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureBottomUp;   //!
   TBranch        *b_FatJet_pt_jesTimeRunAUp;   //!
   TBranch        *b_FatJet_mass_jesTimeRunAUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunAUp;   //!
   TBranch        *b_FatJet_pt_jesTimeRunBUp;   //!
   TBranch        *b_FatJet_mass_jesTimeRunBUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunBUp;   //!
   TBranch        *b_FatJet_pt_jesTimeRunCUp;   //!
   TBranch        *b_FatJet_mass_jesTimeRunCUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunCUp;   //!
   TBranch        *b_FatJet_pt_jesTimeRunDUp;   //!
   TBranch        *b_FatJet_mass_jesTimeRunDUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunDUp;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupMPFInSituUp;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupIntercalibrationUp;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupbJESUp;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupFlavorUp;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupUncorrelatedUp;   //!
   TBranch        *b_FatJet_pt_jerDown;   //!
   TBranch        *b_FatJet_mass_jerDown;   //!
   TBranch        *b_FatJet_mass_jmrDown;   //!
   TBranch        *b_FatJet_mass_jmsDown;   //!
   TBranch        *b_FatJet_msoftdrop_jerDown;   //!
   TBranch        *b_FatJet_msoftdrop_jmrDown;   //!
   TBranch        *b_FatJet_msoftdrop_jmsDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jerDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmrDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmsDown;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteStatDown;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteStatDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteStatDown;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteScaleDown;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteScaleDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteScaleDown;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteSampleDown;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteSampleDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteSampleDown;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteFlavMapDown;   //!
   TBranch        *b_FatJet_pt_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_FatJet_mass_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesAbsoluteMPFBiasDown;   //!
   TBranch        *b_FatJet_pt_jesFragmentationDown;   //!
   TBranch        *b_FatJet_mass_jesFragmentationDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFragmentationDown;   //!
   TBranch        *b_FatJet_pt_jesSinglePionECALDown;   //!
   TBranch        *b_FatJet_mass_jesSinglePionECALDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSinglePionECALDown;   //!
   TBranch        *b_FatJet_pt_jesSinglePionHCALDown;   //!
   TBranch        *b_FatJet_mass_jesSinglePionHCALDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSinglePionHCALDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorQCDDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorQCDDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorQCDDown;   //!
   TBranch        *b_FatJet_pt_jesTimePtEtaDown;   //!
   TBranch        *b_FatJet_mass_jesTimePtEtaDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimePtEtaDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeJEREC1Down;   //!
   TBranch        *b_FatJet_mass_jesRelativeJEREC1Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJEREC1Down;   //!
   TBranch        *b_FatJet_pt_jesRelativeJEREC2Down;   //!
   TBranch        *b_FatJet_mass_jesRelativeJEREC2Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJEREC2Down;   //!
   TBranch        *b_FatJet_pt_jesRelativeJERHFDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeJERHFDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeJERHFDown;   //!
   TBranch        *b_FatJet_pt_jesRelativePtBBDown;   //!
   TBranch        *b_FatJet_mass_jesRelativePtBBDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtBBDown;   //!
   TBranch        *b_FatJet_pt_jesRelativePtEC1Down;   //!
   TBranch        *b_FatJet_mass_jesRelativePtEC1Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtEC1Down;   //!
   TBranch        *b_FatJet_pt_jesRelativePtEC2Down;   //!
   TBranch        *b_FatJet_mass_jesRelativePtEC2Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtEC2Down;   //!
   TBranch        *b_FatJet_pt_jesRelativePtHFDown;   //!
   TBranch        *b_FatJet_mass_jesRelativePtHFDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativePtHFDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeBalDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeBalDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeBalDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeSampleDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeSampleDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeSampleDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeFSRDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeFSRDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeFSRDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatFSRDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatFSRDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatFSRDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatECDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatECDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatECDown;   //!
   TBranch        *b_FatJet_pt_jesRelativeStatHFDown;   //!
   TBranch        *b_FatJet_mass_jesRelativeStatHFDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesRelativeStatHFDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpDataMCDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpDataMCDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpDataMCDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtRefDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtRefDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtRefDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtBBDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtBBDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtBBDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtEC1Down;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtEC1Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtEC1Down;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtEC2Down;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtEC2Down;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtEC2Down;   //!
   TBranch        *b_FatJet_pt_jesPileUpPtHFDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpPtHFDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpPtHFDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpMuZeroDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpMuZeroDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpMuZeroDown;   //!
   TBranch        *b_FatJet_pt_jesPileUpEnvelopeDown;   //!
   TBranch        *b_FatJet_mass_jesPileUpEnvelopeDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesPileUpEnvelopeDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalPileUpDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalPileUpDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalPileUpDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalRelativeDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalRelativeDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalRelativeDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalPtDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalPtDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalPtDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalScaleDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalScaleDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalScaleDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalAbsoluteDown;   //!
   TBranch        *b_FatJet_pt_jesSubTotalMCDown;   //!
   TBranch        *b_FatJet_mass_jesSubTotalMCDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesSubTotalMCDown;   //!
   TBranch        *b_FatJet_pt_jesTotalDown;   //!
   TBranch        *b_FatJet_mass_jesTotalDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalDown;   //!
   TBranch        *b_FatJet_pt_jesTotalNoFlavorDown;   //!
   TBranch        *b_FatJet_mass_jesTotalNoFlavorDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoFlavorDown;   //!
   TBranch        *b_FatJet_pt_jesTotalNoTimeDown;   //!
   TBranch        *b_FatJet_mass_jesTotalNoTimeDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoTimeDown;   //!
   TBranch        *b_FatJet_pt_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_FatJet_mass_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalNoFlavorNoTimeDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorZJetDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorZJetDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorZJetDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorPhotonJetDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorPhotonJetDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPhotonJetDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureGluonDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureGluonDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureGluonDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureQuarkDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureQuarkDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureQuarkDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureCharmDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureCharmDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureCharmDown;   //!
   TBranch        *b_FatJet_pt_jesFlavorPureBottomDown;   //!
   TBranch        *b_FatJet_mass_jesFlavorPureBottomDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesFlavorPureBottomDown;   //!
   TBranch        *b_FatJet_pt_jesTimeRunADown;   //!
   TBranch        *b_FatJet_mass_jesTimeRunADown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunADown;   //!
   TBranch        *b_FatJet_pt_jesTimeRunBDown;   //!
   TBranch        *b_FatJet_mass_jesTimeRunBDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunBDown;   //!
   TBranch        *b_FatJet_pt_jesTimeRunCDown;   //!
   TBranch        *b_FatJet_mass_jesTimeRunCDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunCDown;   //!
   TBranch        *b_FatJet_pt_jesTimeRunDDown;   //!
   TBranch        *b_FatJet_mass_jesTimeRunDDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTimeRunDDown;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupMPFInSituDown;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupIntercalibrationDown;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupbJESDown;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupFlavorDown;   //!
   TBranch        *b_FatJet_pt_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_FatJet_mass_jesCorrelationGroupUncorrelatedDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesCorrelationGroupUncorrelatedDown;   //!

   Events(TTree *tree=0);
   virtual ~Events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Events_cxx
Events::Events(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://cmseos.fnal.gov//store/user/lnujj/VVjj_aQGC/nanoAOD_skim/Run2018_v7_07Sep2020/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/200907_103355/DCC54831-AAB1-CD4C-B12E-5769F3ED292C_SkimHadd.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://cmseos.fnal.gov//store/user/lnujj/VVjj_aQGC/nanoAOD_skim/Run2018_v7_07Sep2020/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/200907_103355/DCC54831-AAB1-CD4C-B12E-5769F3ED292C_SkimHadd.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

Events::~Events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("HTXS_Higgs_pt", &HTXS_Higgs_pt, &b_HTXS_Higgs_pt);
   fChain->SetBranchAddress("HTXS_Higgs_y", &HTXS_Higgs_y, &b_HTXS_Higgs_y);
   fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet25GeV", &HTXS_stage1_1_cat_pTjet25GeV, &b_HTXS_stage1_1_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet30GeV", &HTXS_stage1_1_cat_pTjet30GeV, &b_HTXS_stage1_1_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet25GeV", &HTXS_stage1_1_fine_cat_pTjet25GeV, &b_HTXS_stage1_1_fine_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet30GeV", &HTXS_stage1_1_fine_cat_pTjet30GeV, &b_HTXS_stage1_1_fine_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet25GeV", &HTXS_stage1_2_cat_pTjet25GeV, &b_HTXS_stage1_2_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet30GeV", &HTXS_stage1_2_cat_pTjet30GeV, &b_HTXS_stage1_2_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet25GeV", &HTXS_stage1_2_fine_cat_pTjet25GeV, &b_HTXS_stage1_2_fine_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet30GeV", &HTXS_stage1_2_fine_cat_pTjet30GeV, &b_HTXS_stage1_2_fine_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage_0", &HTXS_stage_0, &b_HTXS_stage_0);
   fChain->SetBranchAddress("HTXS_stage_1_pTjet25", &HTXS_stage_1_pTjet25, &b_HTXS_stage_1_pTjet25);
   fChain->SetBranchAddress("HTXS_stage_1_pTjet30", &HTXS_stage_1_pTjet30, &b_HTXS_stage_1_pTjet30);
   fChain->SetBranchAddress("HTXS_njets25", &HTXS_njets25, &b_HTXS_njets25);
   fChain->SetBranchAddress("HTXS_njets30", &HTXS_njets30, &b_HTXS_njets30);
   fChain->SetBranchAddress("btagWeight_CSVV2", &btagWeight_CSVV2, &b_btagWeight_CSVV2);
   fChain->SetBranchAddress("btagWeight_DeepCSVB", &btagWeight_DeepCSVB, &b_btagWeight_DeepCSVB);
   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
   fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
   fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
   fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
   fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
   fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
   fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
   fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
   fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
   fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
   fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
   fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso", Electron_mvaFall17V1Iso, &b_Electron_mvaFall17V1Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso", Electron_mvaFall17V1noIso, &b_Electron_mvaFall17V1noIso);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso", Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso", Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
   fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
   fChain->SetBranchAddress("Electron_scEtOverPt", Electron_scEtOverPt, &b_Electron_scEtOverPt);
   fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
   fChain->SetBranchAddress("Electron_cutBased_Fall17_V1", Electron_cutBased_Fall17_V1, &b_Electron_cutBased_Fall17_V1);
   fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
   fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
   fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
   fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP80", Electron_mvaFall17V1Iso_WP80, &b_Electron_mvaFall17V1Iso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP90", Electron_mvaFall17V1Iso_WP90, &b_Electron_mvaFall17V1Iso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WPL", Electron_mvaFall17V1Iso_WPL, &b_Electron_mvaFall17V1Iso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP80", Electron_mvaFall17V1noIso_WP80, &b_Electron_mvaFall17V1noIso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP90", Electron_mvaFall17V1noIso_WP90, &b_Electron_mvaFall17V1noIso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WPL", Electron_mvaFall17V1noIso_WPL, &b_Electron_mvaFall17V1noIso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP80", Electron_mvaFall17V2Iso_WP80, &b_Electron_mvaFall17V2Iso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP90", Electron_mvaFall17V2Iso_WP90, &b_Electron_mvaFall17V2Iso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WPL", Electron_mvaFall17V2Iso_WPL, &b_Electron_mvaFall17V2Iso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80", Electron_mvaFall17V2noIso_WP80, &b_Electron_mvaFall17V2noIso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP90", Electron_mvaFall17V2noIso_WP90, &b_Electron_mvaFall17V2noIso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL", Electron_mvaFall17V2noIso_WPL, &b_Electron_mvaFall17V2noIso_WPL);
   fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilterV2", &Flag_ecalBadCalibFilterV2, &b_Flag_ecalBadCalibFilterV2);
   fChain->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
   fChain->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
   fChain->SetBranchAddress("FatJet_btagCMVA", FatJet_btagCMVA, &b_FatJet_btagCMVA);
   fChain->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
   fChain->SetBranchAddress("FatJet_btagDDBvL", FatJet_btagDDBvL, &b_FatJet_btagDDBvL);
   fChain->SetBranchAddress("FatJet_btagDDBvL_noMD", FatJet_btagDDBvL_noMD, &b_FatJet_btagDDBvL_noMD);
   fChain->SetBranchAddress("FatJet_btagDDCvB", FatJet_btagDDCvB, &b_FatJet_btagDDCvB);
   fChain->SetBranchAddress("FatJet_btagDDCvB_noMD", FatJet_btagDDCvB_noMD, &b_FatJet_btagDDCvB_noMD);
   fChain->SetBranchAddress("FatJet_btagDDCvL", FatJet_btagDDCvL, &b_FatJet_btagDDCvL);
   fChain->SetBranchAddress("FatJet_btagDDCvL_noMD", FatJet_btagDDCvL_noMD, &b_FatJet_btagDDCvL_noMD);
   fChain->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
   fChain->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
   fChain->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
   fChain->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
   fChain->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
   fChain->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
   fChain->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
   fChain->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
   fChain->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
   fChain->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
   fChain->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
   fChain->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
   fChain->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
   fChain->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
   fChain->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
   fChain->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
   fChain->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
   fChain->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
   fChain->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
   fChain->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
   fChain->SetBranchAddress("FatJet_lsf3", FatJet_lsf3, &b_FatJet_lsf3);
   fChain->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
   fChain->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
   fChain->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
   fChain->SetBranchAddress("FatJet_electronIdx3SJ", FatJet_electronIdx3SJ, &b_FatJet_electronIdx3SJ);
   fChain->SetBranchAddress("FatJet_muonIdx3SJ", FatJet_muonIdx3SJ, &b_FatJet_muonIdx3SJ);
   fChain->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
   fChain->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
   fChain->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
   fChain->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
   fChain->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
   fChain->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
   fChain->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
   fChain->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
   fChain->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
   fChain->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
   fChain->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
   fChain->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
   fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   fChain->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
   fChain->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
   fChain->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
   fChain->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
   fChain->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
   fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   fChain->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
   fChain->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
   fChain->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
   fChain->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
   fChain->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
   fChain->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
   fChain->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
   fChain->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("LHEWeight_originalXWGTUP", &LHEWeight_originalXWGTUP, &b_LHEWeight_originalXWGTUP);
   fChain->SetBranchAddress("nLHEPdfWeight", &nLHEPdfWeight, &b_nLHEPdfWeight);
   fChain->SetBranchAddress("LHEPdfWeight", LHEPdfWeight, &b_LHEPdfWeight);
   fChain->SetBranchAddress("nLHEReweightingWeight", &nLHEReweightingWeight, &b_nLHEReweightingWeight);
   fChain->SetBranchAddress("LHEReweightingWeight", &LHEReweightingWeight, &b_LHEReweightingWeight);
   fChain->SetBranchAddress("nLHEScaleWeight", &nLHEScaleWeight, &b_nLHEScaleWeight);
   fChain->SetBranchAddress("LHEScaleWeight", LHEScaleWeight, &b_LHEScaleWeight);
   fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
   fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
   fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
   fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
   fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
   fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
   fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
   fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
   fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
   fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
   fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);
   fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   fChain->SetBranchAddress("Jet_btagDeepC", Jet_btagDeepC, &b_Jet_btagDeepC);
   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Jet_btagDeepFlavC", Jet_btagDeepFlavC, &b_Jet_btagDeepFlavC);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_chFPV0EF", Jet_chFPV0EF, &b_Jet_chFPV0EF);
   fChain->SetBranchAddress("Jet_chFPV1EF", Jet_chFPV1EF, &b_Jet_chFPV1EF);
   fChain->SetBranchAddress("Jet_chFPV2EF", Jet_chFPV2EF, &b_Jet_chFPV2EF);
   fChain->SetBranchAddress("Jet_chFPV3EF", Jet_chFPV3EF, &b_Jet_chFPV3EF);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_puIdDisc", Jet_puIdDisc, &b_Jet_puIdDisc);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   fChain->SetBranchAddress("Jet_cRegCorr", Jet_cRegCorr, &b_Jet_cRegCorr);
   fChain->SetBranchAddress("Jet_cRegRes", Jet_cRegRes, &b_Jet_cRegRes);
   fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
   fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
   fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("LHE_HT", &LHE_HT, &b_LHE_HT);
   fChain->SetBranchAddress("LHE_HTIncoming", &LHE_HTIncoming, &b_LHE_HTIncoming);
   fChain->SetBranchAddress("LHE_Vpt", &LHE_Vpt, &b_LHE_Vpt);
   fChain->SetBranchAddress("LHE_AlphaS", &LHE_AlphaS, &b_LHE_AlphaS);
   fChain->SetBranchAddress("LHE_Njets", &LHE_Njets, &b_LHE_Njets);
   fChain->SetBranchAddress("LHE_Nb", &LHE_Nb, &b_LHE_Nb);
   fChain->SetBranchAddress("LHE_Nc", &LHE_Nc, &b_LHE_Nc);
   fChain->SetBranchAddress("LHE_Nuds", &LHE_Nuds, &b_LHE_Nuds);
   fChain->SetBranchAddress("LHE_Nglu", &LHE_Nglu, &b_LHE_Nglu);
   fChain->SetBranchAddress("LHE_NpNLO", &LHE_NpNLO, &b_LHE_NpNLO);
   fChain->SetBranchAddress("LHE_NpLO", &LHE_NpLO, &b_LHE_NpLO);
   fChain->SetBranchAddress("nLHEPart", &nLHEPart, &b_nLHEPart);
   fChain->SetBranchAddress("LHEPart_pt", LHEPart_pt, &b_LHEPart_pt);
   fChain->SetBranchAddress("LHEPart_eta", LHEPart_eta, &b_LHEPart_eta);
   fChain->SetBranchAddress("LHEPart_phi", LHEPart_phi, &b_LHEPart_phi);
   fChain->SetBranchAddress("LHEPart_mass", LHEPart_mass, &b_LHEPart_mass);
   fChain->SetBranchAddress("LHEPart_incomingpz", LHEPart_incomingpz, &b_LHEPart_incomingpz);
   fChain->SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId, &b_LHEPart_pdgId);
   fChain->SetBranchAddress("LHEPart_status", LHEPart_status, &b_LHEPart_status);
   fChain->SetBranchAddress("LHEPart_spin", LHEPart_spin, &b_LHEPart_spin);
   fChain->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
   fChain->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
   fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
   fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("MET_sumPtUnclustered", &MET_sumPtUnclustered, &b_MET_sumPtUnclustered);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dxybs", Muon_dxybs, &b_Muon_dxybs);
   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
   fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   fChain->SetBranchAddress("Muon_softMva", Muon_softMva, &b_Muon_softMva);
   fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
   fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
   fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
   fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
   fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
   fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
   fChain->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
   fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
   fChain->SetBranchAddress("Muon_highPurity", Muon_highPurity, &b_Muon_highPurity);
   fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
   fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
   fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
   fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
   fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
   fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   fChain->SetBranchAddress("Photon_mvaID_Fall17V1p1", Photon_mvaID_Fall17V1p1, &b_Photon_mvaID_Fall17V1p1);
   fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
   fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
   fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
   fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   fChain->SetBranchAddress("Photon_cutBased_Fall17V1Bitmap", Photon_cutBased_Fall17V1Bitmap, &b_Photon_cutBased_Fall17V1Bitmap);
   fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
   fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
   fChain->SetBranchAddress("PuppiMET_phiJERUp", &PuppiMET_phiJERUp, &b_PuppiMET_phiJERUp);
   fChain->SetBranchAddress("PuppiMET_phiJESUp", &PuppiMET_phiJESUp, &b_PuppiMET_phiJESUp);
   fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
   fChain->SetBranchAddress("PuppiMET_ptJERUp", &PuppiMET_ptJERUp, &b_PuppiMET_ptJERUp);
   fChain->SetBranchAddress("PuppiMET_ptJESUp", &PuppiMET_ptJESUp, &b_PuppiMET_ptJESUp);
   fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
   fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
   fChain->SetBranchAddress("RawPuppiMET_phi", &RawPuppiMET_phi, &b_RawPuppiMET_phi);
   fChain->SetBranchAddress("RawPuppiMET_pt", &RawPuppiMET_pt, &b_RawPuppiMET_pt);
   fChain->SetBranchAddress("RawPuppiMET_sumEt", &RawPuppiMET_sumEt, &b_RawPuppiMET_sumEt);
   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("nGenDressedLepton", &nGenDressedLepton, &b_nGenDressedLepton);
   fChain->SetBranchAddress("GenDressedLepton_eta", GenDressedLepton_eta, &b_GenDressedLepton_eta);
   fChain->SetBranchAddress("GenDressedLepton_mass", GenDressedLepton_mass, &b_GenDressedLepton_mass);
   fChain->SetBranchAddress("GenDressedLepton_phi", GenDressedLepton_phi, &b_GenDressedLepton_phi);
   fChain->SetBranchAddress("GenDressedLepton_pt", GenDressedLepton_pt, &b_GenDressedLepton_pt);
   fChain->SetBranchAddress("GenDressedLepton_pdgId", GenDressedLepton_pdgId, &b_GenDressedLepton_pdgId);
   fChain->SetBranchAddress("GenDressedLepton_hasTauAnc", GenDressedLepton_hasTauAnc, &b_GenDressedLepton_hasTauAnc);
   fChain->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
   fChain->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
   fChain->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
   fChain->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
   fChain->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);
   fChain->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
   fChain->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
   fChain->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
   fChain->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
   fChain->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
   fChain->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
   fChain->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
   fChain->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
   fChain->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
   fChain->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
   fChain->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
   fChain->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
   fChain->SetBranchAddress("SubJet_btagCMVA", SubJet_btagCMVA, &b_SubJet_btagCMVA);
   fChain->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
   fChain->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
   fChain->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
   fChain->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
   fChain->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
   fChain->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
   fChain->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
   fChain->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
   fChain->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
   fChain->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
   fChain->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
   fChain->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
   fChain->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
   fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
   fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
   fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
   fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
   fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
   fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
   fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
   fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
   fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
   fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
   fChain->SetBranchAddress("Tau_rawAntiEle", Tau_rawAntiEle, &b_Tau_rawAntiEle);
   fChain->SetBranchAddress("Tau_rawAntiEle2018", Tau_rawAntiEle2018, &b_Tau_rawAntiEle2018);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
   fChain->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
   fChain->SetBranchAddress("Tau_rawMVAnewDM2017v2", Tau_rawMVAnewDM2017v2, &b_Tau_rawMVAnewDM2017v2);
   fChain->SetBranchAddress("Tau_rawMVAoldDM", Tau_rawMVAoldDM, &b_Tau_rawMVAoldDM);
   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v1", Tau_rawMVAoldDM2017v1, &b_Tau_rawMVAoldDM2017v1);
   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v2", Tau_rawMVAoldDM2017v2, &b_Tau_rawMVAoldDM2017v2);
   fChain->SetBranchAddress("Tau_rawMVAoldDMdR032017v2", Tau_rawMVAoldDMdR032017v2, &b_Tau_rawMVAoldDMdR032017v2);
   fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
   fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
   fChain->SetBranchAddress("Tau_rawAntiEleCat", Tau_rawAntiEleCat, &b_Tau_rawAntiEleCat);
   fChain->SetBranchAddress("Tau_rawAntiEleCat2018", Tau_rawAntiEleCat2018, &b_Tau_rawAntiEleCat2018);
   fChain->SetBranchAddress("Tau_idAntiEle", Tau_idAntiEle, &b_Tau_idAntiEle);
   fChain->SetBranchAddress("Tau_idAntiEle2018", Tau_idAntiEle2018, &b_Tau_idAntiEle2018);
   fChain->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
   fChain->SetBranchAddress("Tau_idDecayMode", Tau_idDecayMode, &b_Tau_idDecayMode);
   fChain->SetBranchAddress("Tau_idDecayModeNewDMs", Tau_idDecayModeNewDMs, &b_Tau_idDecayModeNewDMs);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("Tau_idMVAnewDM2017v2", Tau_idMVAnewDM2017v2, &b_Tau_idMVAnewDM2017v2);
   fChain->SetBranchAddress("Tau_idMVAoldDM", Tau_idMVAoldDM, &b_Tau_idMVAoldDM);
   fChain->SetBranchAddress("Tau_idMVAoldDM2017v1", Tau_idMVAoldDM2017v1, &b_Tau_idMVAoldDM2017v1);
   fChain->SetBranchAddress("Tau_idMVAoldDM2017v2", Tau_idMVAoldDM2017v2, &b_Tau_idMVAoldDM2017v2);
   fChain->SetBranchAddress("Tau_idMVAoldDMdR032017v2", Tau_idMVAoldDMdR032017v2, &b_Tau_idMVAoldDMdR032017v2);
   fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
   fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
   fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
   fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
   fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
   fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
   fChain->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);
   fChain->SetBranchAddress("SV_dxySig", SV_dxySig, &b_SV_dxySig);
   fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
   fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   fChain->SetBranchAddress("FatJet_genJetAK8Idx", FatJet_genJetAK8Idx, &b_FatJet_genJetAK8Idx);
   fChain->SetBranchAddress("FatJet_hadronFlavour", FatJet_hadronFlavour, &b_FatJet_hadronFlavour);
   fChain->SetBranchAddress("FatJet_nBHadrons", FatJet_nBHadrons, &b_FatJet_nBHadrons);
   fChain->SetBranchAddress("FatJet_nCHadrons", FatJet_nCHadrons, &b_FatJet_nCHadrons);
   fChain->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
   fChain->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
   fChain->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
   fChain->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
   fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   fChain->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
   fChain->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
   fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   fChain->SetBranchAddress("Electron_cleanmask", Electron_cleanmask, &b_Electron_cleanmask);
   fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
   fChain->SetBranchAddress("Muon_cleanmask", Muon_cleanmask, &b_Muon_cleanmask);
   fChain->SetBranchAddress("Photon_cleanmask", Photon_cleanmask, &b_Photon_cleanmask);
   fChain->SetBranchAddress("Tau_cleanmask", Tau_cleanmask, &b_Tau_cleanmask);
   fChain->SetBranchAddress("SubJet_nBHadrons", SubJet_nBHadrons, &b_SubJet_nBHadrons);
   fChain->SetBranchAddress("SubJet_nCHadrons", SubJet_nCHadrons, &b_SubJet_nCHadrons);
   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
   fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
   fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
   fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
   fChain->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
   fChain->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
   fChain->SetBranchAddress("L1_AlwaysTrue", &L1_AlwaysTrue, &b_L1_AlwaysTrue);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref1_VME", &L1_BPTX_AND_Ref1_VME, &b_L1_BPTX_AND_Ref1_VME);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref3_VME", &L1_BPTX_AND_Ref3_VME, &b_L1_BPTX_AND_Ref3_VME);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref4_VME", &L1_BPTX_AND_Ref4_VME, &b_L1_BPTX_AND_Ref4_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_B1_VME", &L1_BPTX_BeamGas_B1_VME, &b_L1_BPTX_BeamGas_B1_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_B2_VME", &L1_BPTX_BeamGas_B2_VME, &b_L1_BPTX_BeamGas_B2_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_Ref1_VME", &L1_BPTX_BeamGas_Ref1_VME, &b_L1_BPTX_BeamGas_Ref1_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_Ref2_VME", &L1_BPTX_BeamGas_Ref2_VME, &b_L1_BPTX_BeamGas_Ref2_VME);
   fChain->SetBranchAddress("L1_BPTX_NotOR_VME", &L1_BPTX_NotOR_VME, &b_L1_BPTX_NotOR_VME);
   fChain->SetBranchAddress("L1_BPTX_OR_Ref3_VME", &L1_BPTX_OR_Ref3_VME, &b_L1_BPTX_OR_Ref3_VME);
   fChain->SetBranchAddress("L1_BPTX_OR_Ref4_VME", &L1_BPTX_OR_Ref4_VME, &b_L1_BPTX_OR_Ref4_VME);
   fChain->SetBranchAddress("L1_BPTX_RefAND_VME", &L1_BPTX_RefAND_VME, &b_L1_BPTX_RefAND_VME);
   fChain->SetBranchAddress("L1_BptxMinus", &L1_BptxMinus, &b_L1_BptxMinus);
   fChain->SetBranchAddress("L1_BptxOR", &L1_BptxOR, &b_L1_BptxOR);
   fChain->SetBranchAddress("L1_BptxPlus", &L1_BptxPlus, &b_L1_BptxPlus);
   fChain->SetBranchAddress("L1_BptxXOR", &L1_BptxXOR, &b_L1_BptxXOR);
   fChain->SetBranchAddress("L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT260er", &L1_DoubleEG8er2p5_HTT260er, &b_L1_DoubleEG8er2p5_HTT260er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT280er", &L1_DoubleEG8er2p5_HTT280er, &b_L1_DoubleEG8er2p5_HTT280er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT300er", &L1_DoubleEG8er2p5_HTT300er, &b_L1_DoubleEG8er2p5_HTT300er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT320er", &L1_DoubleEG8er2p5_HTT320er, &b_L1_DoubleEG8er2p5_HTT320er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT340er", &L1_DoubleEG8er2p5_HTT340er, &b_L1_DoubleEG8er2p5_HTT340er);
   fChain->SetBranchAddress("L1_DoubleEG_15_10_er2p5", &L1_DoubleEG_15_10_er2p5, &b_L1_DoubleEG_15_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_20_10_er2p5", &L1_DoubleEG_20_10_er2p5, &b_L1_DoubleEG_20_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_22_10_er2p5", &L1_DoubleEG_22_10_er2p5, &b_L1_DoubleEG_22_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_25_12_er2p5", &L1_DoubleEG_25_12_er2p5, &b_L1_DoubleEG_25_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_25_14_er2p5", &L1_DoubleEG_25_14_er2p5, &b_L1_DoubleEG_25_14_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_27_14_er2p5", &L1_DoubleEG_27_14_er2p5, &b_L1_DoubleEG_27_14_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso20_10_er2p5", &L1_DoubleEG_LooseIso20_10_er2p5, &b_L1_DoubleEG_LooseIso20_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso22_10_er2p5", &L1_DoubleEG_LooseIso22_10_er2p5, &b_L1_DoubleEG_LooseIso22_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso22_12_er2p5", &L1_DoubleEG_LooseIso22_12_er2p5, &b_L1_DoubleEG_LooseIso22_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso25_12_er2p5", &L1_DoubleEG_LooseIso25_12_er2p5, &b_L1_DoubleEG_LooseIso25_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleIsoTau32er2p1", &L1_DoubleIsoTau32er2p1, &b_L1_DoubleIsoTau32er2p1);
   fChain->SetBranchAddress("L1_DoubleIsoTau34er2p1", &L1_DoubleIsoTau34er2p1, &b_L1_DoubleIsoTau34er2p1);
   fChain->SetBranchAddress("L1_DoubleIsoTau36er2p1", &L1_DoubleIsoTau36er2p1, &b_L1_DoubleIsoTau36er2p1);
   fChain->SetBranchAddress("L1_DoubleJet100er2p3_dEta_Max1p6", &L1_DoubleJet100er2p3_dEta_Max1p6, &b_L1_DoubleJet100er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_DoubleJet100er2p5", &L1_DoubleJet100er2p5, &b_L1_DoubleJet100er2p5);
   fChain->SetBranchAddress("L1_DoubleJet112er2p3_dEta_Max1p6", &L1_DoubleJet112er2p3_dEta_Max1p6, &b_L1_DoubleJet112er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_DoubleJet120er2p5", &L1_DoubleJet120er2p5, &b_L1_DoubleJet120er2p5);
   fChain->SetBranchAddress("L1_DoubleJet150er2p5", &L1_DoubleJet150er2p5, &b_L1_DoubleJet150er2p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp", &L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp, &b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp);
   fChain->SetBranchAddress("L1_DoubleJet40er2p5", &L1_DoubleJet40er2p5, &b_L1_DoubleJet40er2p5);
   fChain->SetBranchAddress("L1_DoubleJet_100_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_100_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_110_35_DoubleJet35_Mass_Min620", &L1_DoubleJet_110_35_DoubleJet35_Mass_Min620, &b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28);
   fChain->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ", &L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ, &b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp", &L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp, &b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_Mu8", &L1_DoubleJet_80_30_Mass_Min420_Mu8, &b_L1_DoubleJet_80_30_Mass_Min420_Mu8);
   fChain->SetBranchAddress("L1_DoubleJet_90_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_90_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleLooseIsoEG22er2p1", &L1_DoubleLooseIsoEG22er2p1, &b_L1_DoubleLooseIsoEG22er2p1);
   fChain->SetBranchAddress("L1_DoubleLooseIsoEG24er2p1", &L1_DoubleLooseIsoEG24er2p1, &b_L1_DoubleLooseIsoEG24er2p1);
   fChain->SetBranchAddress("L1_DoubleMu0", &L1_DoubleMu0, &b_L1_DoubleMu0);
   fChain->SetBranchAddress("L1_DoubleMu0_Mass_Min1", &L1_DoubleMu0_Mass_Min1, &b_L1_DoubleMu0_Mass_Min1);
   fChain->SetBranchAddress("L1_DoubleMu0_OQ", &L1_DoubleMu0_OQ, &b_L1_DoubleMu0_OQ);
   fChain->SetBranchAddress("L1_DoubleMu0_SQ", &L1_DoubleMu0_SQ, &b_L1_DoubleMu0_SQ);
   fChain->SetBranchAddress("L1_DoubleMu0_SQ_OS", &L1_DoubleMu0_SQ_OS, &b_L1_DoubleMu0_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ", &L1_DoubleMu0er1p5_SQ, &b_L1_DoubleMu0er1p5_SQ);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS", &L1_DoubleMu0er1p5_SQ_OS, &b_L1_DoubleMu0er1p5_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er2p0_SQ_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu10_SQ", &L1_DoubleMu10_SQ, &b_L1_DoubleMu10_SQ);
   fChain->SetBranchAddress("L1_DoubleMu18er2p1", &L1_DoubleMu18er2p1, &b_L1_DoubleMu18er2p1);
   fChain->SetBranchAddress("L1_DoubleMu3_OS_DoubleEG7p5Upsilon", &L1_DoubleMu3_OS_DoubleEG7p5Upsilon, &b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_HTT60er", &L1_DoubleMu3_SQ_ETMHF50_HTT60er, &b_L1_DoubleMu3_SQ_ETMHF50_HTT60er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT220er", &L1_DoubleMu3_SQ_HTT220er, &b_L1_DoubleMu3_SQ_HTT220er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT240er", &L1_DoubleMu3_SQ_HTT240er, &b_L1_DoubleMu3_SQ_HTT240er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT260er", &L1_DoubleMu3_SQ_HTT260er, &b_L1_DoubleMu3_SQ_HTT260er);
   fChain->SetBranchAddress("L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_EG9er2p5", &L1_DoubleMu4_SQ_EG9er2p5, &b_L1_DoubleMu4_SQ_EG9er2p5);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_OS", &L1_DoubleMu4_SQ_OS, &b_L1_DoubleMu4_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_OS_dR_Max1p2", &L1_DoubleMu4_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4_SQ_OS_dR_Max1p2);
   fChain->SetBranchAddress("L1_DoubleMu4p5_SQ_OS", &L1_DoubleMu4p5_SQ_OS, &b_L1_DoubleMu4p5_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4p5_SQ_OS_dR_Max1p2", &L1_DoubleMu4p5_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2);
   fChain->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS", &L1_DoubleMu4p5er2p0_SQ_OS, &b_L1_DoubleMu4p5er2p0_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18", &L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18, &b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18);
   fChain->SetBranchAddress("L1_DoubleMu5Upsilon_OS_DoubleEG3", &L1_DoubleMu5Upsilon_OS_DoubleEG3, &b_L1_DoubleMu5Upsilon_OS_DoubleEG3);
   fChain->SetBranchAddress("L1_DoubleMu5_SQ_EG9er2p5", &L1_DoubleMu5_SQ_EG9er2p5, &b_L1_DoubleMu5_SQ_EG9er2p5);
   fChain->SetBranchAddress("L1_DoubleMu9_SQ", &L1_DoubleMu9_SQ, &b_L1_DoubleMu9_SQ);
   fChain->SetBranchAddress("L1_DoubleMu_12_5", &L1_DoubleMu_12_5, &b_L1_DoubleMu_12_5);
   fChain->SetBranchAddress("L1_DoubleMu_15_5_SQ", &L1_DoubleMu_15_5_SQ, &b_L1_DoubleMu_15_5_SQ);
   fChain->SetBranchAddress("L1_DoubleMu_15_7", &L1_DoubleMu_15_7, &b_L1_DoubleMu_15_7);
   fChain->SetBranchAddress("L1_DoubleMu_15_7_Mass_Min1", &L1_DoubleMu_15_7_Mass_Min1, &b_L1_DoubleMu_15_7_Mass_Min1);
   fChain->SetBranchAddress("L1_DoubleMu_15_7_SQ", &L1_DoubleMu_15_7_SQ, &b_L1_DoubleMu_15_7_SQ);
   fChain->SetBranchAddress("L1_DoubleTau70er2p1", &L1_DoubleTau70er2p1, &b_L1_DoubleTau70er2p1);
   fChain->SetBranchAddress("L1_ETM120", &L1_ETM120, &b_L1_ETM120);
   fChain->SetBranchAddress("L1_ETM150", &L1_ETM150, &b_L1_ETM150);
   fChain->SetBranchAddress("L1_ETMHF100", &L1_ETMHF100, &b_L1_ETMHF100);
   fChain->SetBranchAddress("L1_ETMHF100_HTT60er", &L1_ETMHF100_HTT60er, &b_L1_ETMHF100_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF110", &L1_ETMHF110, &b_L1_ETMHF110);
   fChain->SetBranchAddress("L1_ETMHF110_HTT60er", &L1_ETMHF110_HTT60er, &b_L1_ETMHF110_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF110_HTT60er_NotSecondBunchInTrain", &L1_ETMHF110_HTT60er_NotSecondBunchInTrain, &b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain);
   fChain->SetBranchAddress("L1_ETMHF120", &L1_ETMHF120, &b_L1_ETMHF120);
   fChain->SetBranchAddress("L1_ETMHF120_HTT60er", &L1_ETMHF120_HTT60er, &b_L1_ETMHF120_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF120_NotSecondBunchInTrain", &L1_ETMHF120_NotSecondBunchInTrain, &b_L1_ETMHF120_NotSecondBunchInTrain);
   fChain->SetBranchAddress("L1_ETMHF130", &L1_ETMHF130, &b_L1_ETMHF130);
   fChain->SetBranchAddress("L1_ETMHF130_HTT60er", &L1_ETMHF130_HTT60er, &b_L1_ETMHF130_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF140", &L1_ETMHF140, &b_L1_ETMHF140);
   fChain->SetBranchAddress("L1_ETMHF150", &L1_ETMHF150, &b_L1_ETMHF150);
   fChain->SetBranchAddress("L1_ETMHF90_HTT60er", &L1_ETMHF90_HTT60er, &b_L1_ETMHF90_HTT60er);
   fChain->SetBranchAddress("L1_ETT1200", &L1_ETT1200, &b_L1_ETT1200);
   fChain->SetBranchAddress("L1_ETT1600", &L1_ETT1600, &b_L1_ETT1600);
   fChain->SetBranchAddress("L1_ETT2000", &L1_ETT2000, &b_L1_ETT2000);
   fChain->SetBranchAddress("L1_FirstBunchAfterTrain", &L1_FirstBunchAfterTrain, &b_L1_FirstBunchAfterTrain);
   fChain->SetBranchAddress("L1_FirstBunchBeforeTrain", &L1_FirstBunchBeforeTrain, &b_L1_FirstBunchBeforeTrain);
   fChain->SetBranchAddress("L1_FirstBunchInTrain", &L1_FirstBunchInTrain, &b_L1_FirstBunchInTrain);
   fChain->SetBranchAddress("L1_FirstCollisionInOrbit", &L1_FirstCollisionInOrbit, &b_L1_FirstCollisionInOrbit);
   fChain->SetBranchAddress("L1_FirstCollisionInTrain", &L1_FirstCollisionInTrain, &b_L1_FirstCollisionInTrain);
   fChain->SetBranchAddress("L1_HCAL_LaserMon_Trig", &L1_HCAL_LaserMon_Trig, &b_L1_HCAL_LaserMon_Trig);
   fChain->SetBranchAddress("L1_HCAL_LaserMon_Veto", &L1_HCAL_LaserMon_Veto, &b_L1_HCAL_LaserMon_Veto);
   fChain->SetBranchAddress("L1_HTT120er", &L1_HTT120er, &b_L1_HTT120er);
   fChain->SetBranchAddress("L1_HTT160er", &L1_HTT160er, &b_L1_HTT160er);
   fChain->SetBranchAddress("L1_HTT200er", &L1_HTT200er, &b_L1_HTT200er);
   fChain->SetBranchAddress("L1_HTT255er", &L1_HTT255er, &b_L1_HTT255er);
   fChain->SetBranchAddress("L1_HTT280er", &L1_HTT280er, &b_L1_HTT280er);
   fChain->SetBranchAddress("L1_HTT280er_QuadJet_70_55_40_35_er2p4", &L1_HTT280er_QuadJet_70_55_40_35_er2p4, &b_L1_HTT280er_QuadJet_70_55_40_35_er2p4);
   fChain->SetBranchAddress("L1_HTT320er", &L1_HTT320er, &b_L1_HTT320er);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_70_55_40_40_er2p4", &L1_HTT320er_QuadJet_70_55_40_40_er2p4, &b_L1_HTT320er_QuadJet_70_55_40_40_er2p4);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3);
   fChain->SetBranchAddress("L1_HTT360er", &L1_HTT360er, &b_L1_HTT360er);
   fChain->SetBranchAddress("L1_HTT400er", &L1_HTT400er, &b_L1_HTT400er);
   fChain->SetBranchAddress("L1_HTT450er", &L1_HTT450er, &b_L1_HTT450er);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt40", &L1_IsoEG32er2p5_Mt40, &b_L1_IsoEG32er2p5_Mt40);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt44", &L1_IsoEG32er2p5_Mt44, &b_L1_IsoEG32er2p5_Mt44);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt48", &L1_IsoEG32er2p5_Mt48, &b_L1_IsoEG32er2p5_Mt48);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF100", &L1_IsoTau40er2p1_ETMHF100, &b_L1_IsoTau40er2p1_ETMHF100);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF110", &L1_IsoTau40er2p1_ETMHF110, &b_L1_IsoTau40er2p1_ETMHF110);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF120", &L1_IsoTau40er2p1_ETMHF120, &b_L1_IsoTau40er2p1_ETMHF120);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF90", &L1_IsoTau40er2p1_ETMHF90, &b_L1_IsoTau40er2p1_ETMHF90);
   fChain->SetBranchAddress("L1_IsolatedBunch", &L1_IsolatedBunch, &b_L1_IsolatedBunch);
   fChain->SetBranchAddress("L1_LastBunchInTrain", &L1_LastBunchInTrain, &b_L1_LastBunchInTrain);
   fChain->SetBranchAddress("L1_LastCollisionInTrain", &L1_LastCollisionInTrain, &b_L1_LastCollisionInTrain);
   fChain->SetBranchAddress("L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG24er2p1_HTT100er", &L1_LooseIsoEG24er2p1_HTT100er, &b_L1_LooseIsoEG24er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3", &L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3, &b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG26er2p1_HTT100er", &L1_LooseIsoEG26er2p1_HTT100er, &b_L1_LooseIsoEG26er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG28er2p1_HTT100er", &L1_LooseIsoEG28er2p1_HTT100er, &b_L1_LooseIsoEG28er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG30er2p1_HTT100er", &L1_LooseIsoEG30er2p1_HTT100er, &b_L1_LooseIsoEG30er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND", &L1_MinimumBiasHF0_AND_BptxAND, &b_L1_MinimumBiasHF0_AND_BptxAND);
   fChain->SetBranchAddress("L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6", &L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6, &b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu18er2p1_Tau24er2p1", &L1_Mu18er2p1_Tau24er2p1, &b_L1_Mu18er2p1_Tau24er2p1);
   fChain->SetBranchAddress("L1_Mu18er2p1_Tau26er2p1", &L1_Mu18er2p1_Tau26er2p1, &b_L1_Mu18er2p1_Tau26er2p1);
   fChain->SetBranchAddress("L1_Mu20_EG10er2p5", &L1_Mu20_EG10er2p5, &b_L1_Mu20_EG10er2p5);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau32er2p1", &L1_Mu22er2p1_IsoTau32er2p1, &b_L1_Mu22er2p1_IsoTau32er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau34er2p1", &L1_Mu22er2p1_IsoTau34er2p1, &b_L1_Mu22er2p1_IsoTau34er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau36er2p1", &L1_Mu22er2p1_IsoTau36er2p1, &b_L1_Mu22er2p1_IsoTau36er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau40er2p1", &L1_Mu22er2p1_IsoTau40er2p1, &b_L1_Mu22er2p1_IsoTau40er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_Tau70er2p1", &L1_Mu22er2p1_Tau70er2p1, &b_L1_Mu22er2p1_Tau70er2p1);
   fChain->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p4", &L1_Mu3_Jet120er2p5_dR_Max0p4, &b_L1_Mu3_Jet120er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p8", &L1_Mu3_Jet120er2p5_dR_Max0p8, &b_L1_Mu3_Jet120er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_Mu3_Jet16er2p5_dR_Max0p4", &L1_Mu3_Jet16er2p5_dR_Max0p4, &b_L1_Mu3_Jet16er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet30er2p5", &L1_Mu3_Jet30er2p5, &b_L1_Mu3_Jet30er2p5);
   fChain->SetBranchAddress("L1_Mu3_Jet35er2p5_dR_Max0p4", &L1_Mu3_Jet35er2p5_dR_Max0p4, &b_L1_Mu3_Jet35er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet60er2p5_dR_Max0p4", &L1_Mu3_Jet60er2p5_dR_Max0p4, &b_L1_Mu3_Jet60er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet80er2p5_dR_Max0p4", &L1_Mu3_Jet80er2p5_dR_Max0p4, &b_L1_Mu3_Jet80er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF40", &L1_Mu3er1p5_Jet100er2p5_ETMHF40, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF40);
   fChain->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF50", &L1_Mu3er1p5_Jet100er2p5_ETMHF50, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF50);
   fChain->SetBranchAddress("L1_Mu5_EG23er2p5", &L1_Mu5_EG23er2p5, &b_L1_Mu5_EG23er2p5);
   fChain->SetBranchAddress("L1_Mu5_LooseIsoEG20er2p5", &L1_Mu5_LooseIsoEG20er2p5, &b_L1_Mu5_LooseIsoEG20er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG10er2p5", &L1_Mu6_DoubleEG10er2p5, &b_L1_Mu6_DoubleEG10er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG12er2p5", &L1_Mu6_DoubleEG12er2p5, &b_L1_Mu6_DoubleEG12er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG15er2p5", &L1_Mu6_DoubleEG15er2p5, &b_L1_Mu6_DoubleEG15er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG17er2p5", &L1_Mu6_DoubleEG17er2p5, &b_L1_Mu6_DoubleEG17er2p5);
   fChain->SetBranchAddress("L1_Mu6_HTT240er", &L1_Mu6_HTT240er, &b_L1_Mu6_HTT240er);
   fChain->SetBranchAddress("L1_Mu6_HTT250er", &L1_Mu6_HTT250er, &b_L1_Mu6_HTT250er);
   fChain->SetBranchAddress("L1_Mu7_EG23er2p5", &L1_Mu7_EG23er2p5, &b_L1_Mu7_EG23er2p5);
   fChain->SetBranchAddress("L1_Mu7_LooseIsoEG20er2p5", &L1_Mu7_LooseIsoEG20er2p5, &b_L1_Mu7_LooseIsoEG20er2p5);
   fChain->SetBranchAddress("L1_Mu7_LooseIsoEG23er2p5", &L1_Mu7_LooseIsoEG23er2p5, &b_L1_Mu7_LooseIsoEG23er2p5);
   fChain->SetBranchAddress("L1_NotBptxOR", &L1_NotBptxOR, &b_L1_NotBptxOR);
   fChain->SetBranchAddress("L1_QuadJet36er2p5_IsoTau52er2p1", &L1_QuadJet36er2p5_IsoTau52er2p1, &b_L1_QuadJet36er2p5_IsoTau52er2p1);
   fChain->SetBranchAddress("L1_QuadJet60er2p5", &L1_QuadJet60er2p5, &b_L1_QuadJet60er2p5);
   fChain->SetBranchAddress("L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0", &L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0, &b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0);
   fChain->SetBranchAddress("L1_QuadMu0", &L1_QuadMu0, &b_L1_QuadMu0);
   fChain->SetBranchAddress("L1_QuadMu0_OQ", &L1_QuadMu0_OQ, &b_L1_QuadMu0_OQ);
   fChain->SetBranchAddress("L1_QuadMu0_SQ", &L1_QuadMu0_SQ, &b_L1_QuadMu0_SQ);
   fChain->SetBranchAddress("L1_SecondBunchInTrain", &L1_SecondBunchInTrain, &b_L1_SecondBunchInTrain);
   fChain->SetBranchAddress("L1_SecondLastBunchInTrain", &L1_SecondLastBunchInTrain, &b_L1_SecondLastBunchInTrain);
   fChain->SetBranchAddress("L1_SingleEG10er2p5", &L1_SingleEG10er2p5, &b_L1_SingleEG10er2p5);
   fChain->SetBranchAddress("L1_SingleEG15er2p5", &L1_SingleEG15er2p5, &b_L1_SingleEG15er2p5);
   fChain->SetBranchAddress("L1_SingleEG26er2p5", &L1_SingleEG26er2p5, &b_L1_SingleEG26er2p5);
   fChain->SetBranchAddress("L1_SingleEG34er2p5", &L1_SingleEG34er2p5, &b_L1_SingleEG34er2p5);
   fChain->SetBranchAddress("L1_SingleEG36er2p5", &L1_SingleEG36er2p5, &b_L1_SingleEG36er2p5);
   fChain->SetBranchAddress("L1_SingleEG38er2p5", &L1_SingleEG38er2p5, &b_L1_SingleEG38er2p5);
   fChain->SetBranchAddress("L1_SingleEG40er2p5", &L1_SingleEG40er2p5, &b_L1_SingleEG40er2p5);
   fChain->SetBranchAddress("L1_SingleEG42er2p5", &L1_SingleEG42er2p5, &b_L1_SingleEG42er2p5);
   fChain->SetBranchAddress("L1_SingleEG45er2p5", &L1_SingleEG45er2p5, &b_L1_SingleEG45er2p5);
   fChain->SetBranchAddress("L1_SingleEG50", &L1_SingleEG50, &b_L1_SingleEG50);
   fChain->SetBranchAddress("L1_SingleEG60", &L1_SingleEG60, &b_L1_SingleEG60);
   fChain->SetBranchAddress("L1_SingleEG8er2p5", &L1_SingleEG8er2p5, &b_L1_SingleEG8er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG24er1p5", &L1_SingleIsoEG24er1p5, &b_L1_SingleIsoEG24er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG24er2p1", &L1_SingleIsoEG24er2p1, &b_L1_SingleIsoEG24er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG26er1p5", &L1_SingleIsoEG26er1p5, &b_L1_SingleIsoEG26er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG26er2p1", &L1_SingleIsoEG26er2p1, &b_L1_SingleIsoEG26er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG26er2p5", &L1_SingleIsoEG26er2p5, &b_L1_SingleIsoEG26er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG28er1p5", &L1_SingleIsoEG28er1p5, &b_L1_SingleIsoEG28er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG28er2p1", &L1_SingleIsoEG28er2p1, &b_L1_SingleIsoEG28er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG28er2p5", &L1_SingleIsoEG28er2p5, &b_L1_SingleIsoEG28er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG30er2p1", &L1_SingleIsoEG30er2p1, &b_L1_SingleIsoEG30er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG30er2p5", &L1_SingleIsoEG30er2p5, &b_L1_SingleIsoEG30er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG32er2p1", &L1_SingleIsoEG32er2p1, &b_L1_SingleIsoEG32er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG32er2p5", &L1_SingleIsoEG32er2p5, &b_L1_SingleIsoEG32er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG34er2p5", &L1_SingleIsoEG34er2p5, &b_L1_SingleIsoEG34er2p5);
   fChain->SetBranchAddress("L1_SingleJet10erHE", &L1_SingleJet10erHE, &b_L1_SingleJet10erHE);
   fChain->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
   fChain->SetBranchAddress("L1_SingleJet120_FWD3p0", &L1_SingleJet120_FWD3p0, &b_L1_SingleJet120_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet120er2p5", &L1_SingleJet120er2p5, &b_L1_SingleJet120er2p5);
   fChain->SetBranchAddress("L1_SingleJet12erHE", &L1_SingleJet12erHE, &b_L1_SingleJet12erHE);
   fChain->SetBranchAddress("L1_SingleJet140er2p5", &L1_SingleJet140er2p5, &b_L1_SingleJet140er2p5);
   fChain->SetBranchAddress("L1_SingleJet140er2p5_ETMHF80", &L1_SingleJet140er2p5_ETMHF80, &b_L1_SingleJet140er2p5_ETMHF80);
   fChain->SetBranchAddress("L1_SingleJet140er2p5_ETMHF90", &L1_SingleJet140er2p5_ETMHF90, &b_L1_SingleJet140er2p5_ETMHF90);
   fChain->SetBranchAddress("L1_SingleJet160er2p5", &L1_SingleJet160er2p5, &b_L1_SingleJet160er2p5);
   fChain->SetBranchAddress("L1_SingleJet180", &L1_SingleJet180, &b_L1_SingleJet180);
   fChain->SetBranchAddress("L1_SingleJet180er2p5", &L1_SingleJet180er2p5, &b_L1_SingleJet180er2p5);
   fChain->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
   fChain->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR", &L1_SingleJet20er2p5_NotBptxOR, &b_L1_SingleJet20er2p5_NotBptxOR);
   fChain->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR_3BX", &L1_SingleJet20er2p5_NotBptxOR_3BX, &b_L1_SingleJet20er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
   fChain->SetBranchAddress("L1_SingleJet35_FWD3p0", &L1_SingleJet35_FWD3p0, &b_L1_SingleJet35_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet35er2p5", &L1_SingleJet35er2p5, &b_L1_SingleJet35er2p5);
   fChain->SetBranchAddress("L1_SingleJet43er2p5_NotBptxOR_3BX", &L1_SingleJet43er2p5_NotBptxOR_3BX, &b_L1_SingleJet43er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet46er2p5_NotBptxOR_3BX", &L1_SingleJet46er2p5_NotBptxOR_3BX, &b_L1_SingleJet46er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
   fChain->SetBranchAddress("L1_SingleJet60_FWD3p0", &L1_SingleJet60_FWD3p0, &b_L1_SingleJet60_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet60er2p5", &L1_SingleJet60er2p5, &b_L1_SingleJet60er2p5);
   fChain->SetBranchAddress("L1_SingleJet8erHE", &L1_SingleJet8erHE, &b_L1_SingleJet8erHE);
   fChain->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
   fChain->SetBranchAddress("L1_SingleJet90_FWD3p0", &L1_SingleJet90_FWD3p0, &b_L1_SingleJet90_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet90er2p5", &L1_SingleJet90er2p5, &b_L1_SingleJet90er2p5);
   fChain->SetBranchAddress("L1_SingleLooseIsoEG28er1p5", &L1_SingleLooseIsoEG28er1p5, &b_L1_SingleLooseIsoEG28er1p5);
   fChain->SetBranchAddress("L1_SingleLooseIsoEG30er1p5", &L1_SingleLooseIsoEG30er1p5, &b_L1_SingleLooseIsoEG30er1p5);
   fChain->SetBranchAddress("L1_SingleMu0_BMTF", &L1_SingleMu0_BMTF, &b_L1_SingleMu0_BMTF);
   fChain->SetBranchAddress("L1_SingleMu0_DQ", &L1_SingleMu0_DQ, &b_L1_SingleMu0_DQ);
   fChain->SetBranchAddress("L1_SingleMu0_EMTF", &L1_SingleMu0_EMTF, &b_L1_SingleMu0_EMTF);
   fChain->SetBranchAddress("L1_SingleMu0_OMTF", &L1_SingleMu0_OMTF, &b_L1_SingleMu0_OMTF);
   fChain->SetBranchAddress("L1_SingleMu10er1p5", &L1_SingleMu10er1p5, &b_L1_SingleMu10er1p5);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_BMTF", &L1_SingleMu12_DQ_BMTF, &b_L1_SingleMu12_DQ_BMTF);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_EMTF", &L1_SingleMu12_DQ_EMTF, &b_L1_SingleMu12_DQ_EMTF);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_OMTF", &L1_SingleMu12_DQ_OMTF, &b_L1_SingleMu12_DQ_OMTF);
   fChain->SetBranchAddress("L1_SingleMu12er1p5", &L1_SingleMu12er1p5, &b_L1_SingleMu12er1p5);
   fChain->SetBranchAddress("L1_SingleMu14er1p5", &L1_SingleMu14er1p5, &b_L1_SingleMu14er1p5);
   fChain->SetBranchAddress("L1_SingleMu15_DQ", &L1_SingleMu15_DQ, &b_L1_SingleMu15_DQ);
   fChain->SetBranchAddress("L1_SingleMu16er1p5", &L1_SingleMu16er1p5, &b_L1_SingleMu16er1p5);
   fChain->SetBranchAddress("L1_SingleMu18", &L1_SingleMu18, &b_L1_SingleMu18);
   fChain->SetBranchAddress("L1_SingleMu18er1p5", &L1_SingleMu18er1p5, &b_L1_SingleMu18er1p5);
   fChain->SetBranchAddress("L1_SingleMu20", &L1_SingleMu20, &b_L1_SingleMu20);
   fChain->SetBranchAddress("L1_SingleMu22", &L1_SingleMu22, &b_L1_SingleMu22);
   fChain->SetBranchAddress("L1_SingleMu22_BMTF", &L1_SingleMu22_BMTF, &b_L1_SingleMu22_BMTF);
   fChain->SetBranchAddress("L1_SingleMu22_EMTF", &L1_SingleMu22_EMTF, &b_L1_SingleMu22_EMTF);
   fChain->SetBranchAddress("L1_SingleMu22_OMTF", &L1_SingleMu22_OMTF, &b_L1_SingleMu22_OMTF);
   fChain->SetBranchAddress("L1_SingleMu25", &L1_SingleMu25, &b_L1_SingleMu25);
   fChain->SetBranchAddress("L1_SingleMu3", &L1_SingleMu3, &b_L1_SingleMu3);
   fChain->SetBranchAddress("L1_SingleMu5", &L1_SingleMu5, &b_L1_SingleMu5);
   fChain->SetBranchAddress("L1_SingleMu6er1p5", &L1_SingleMu6er1p5, &b_L1_SingleMu6er1p5);
   fChain->SetBranchAddress("L1_SingleMu7", &L1_SingleMu7, &b_L1_SingleMu7);
   fChain->SetBranchAddress("L1_SingleMu7_DQ", &L1_SingleMu7_DQ, &b_L1_SingleMu7_DQ);
   fChain->SetBranchAddress("L1_SingleMu7er1p5", &L1_SingleMu7er1p5, &b_L1_SingleMu7er1p5);
   fChain->SetBranchAddress("L1_SingleMu8er1p5", &L1_SingleMu8er1p5, &b_L1_SingleMu8er1p5);
   fChain->SetBranchAddress("L1_SingleMu9er1p5", &L1_SingleMu9er1p5, &b_L1_SingleMu9er1p5);
   fChain->SetBranchAddress("L1_SingleMuCosmics", &L1_SingleMuCosmics, &b_L1_SingleMuCosmics);
   fChain->SetBranchAddress("L1_SingleMuCosmics_BMTF", &L1_SingleMuCosmics_BMTF, &b_L1_SingleMuCosmics_BMTF);
   fChain->SetBranchAddress("L1_SingleMuCosmics_EMTF", &L1_SingleMuCosmics_EMTF, &b_L1_SingleMuCosmics_EMTF);
   fChain->SetBranchAddress("L1_SingleMuCosmics_OMTF", &L1_SingleMuCosmics_OMTF, &b_L1_SingleMuCosmics_OMTF);
   fChain->SetBranchAddress("L1_SingleMuOpen", &L1_SingleMuOpen, &b_L1_SingleMuOpen);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotBptxOR", &L1_SingleMuOpen_NotBptxOR, &b_L1_SingleMuOpen_NotBptxOR);
   fChain->SetBranchAddress("L1_SingleMuOpen_er1p1_NotBptxOR_3BX", &L1_SingleMuOpen_er1p1_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleMuOpen_er1p4_NotBptxOR_3BX", &L1_SingleMuOpen_er1p4_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleTau120er2p1", &L1_SingleTau120er2p1, &b_L1_SingleTau120er2p1);
   fChain->SetBranchAddress("L1_SingleTau130er2p1", &L1_SingleTau130er2p1, &b_L1_SingleTau130er2p1);
   fChain->SetBranchAddress("L1_TOTEM_1", &L1_TOTEM_1, &b_L1_TOTEM_1);
   fChain->SetBranchAddress("L1_TOTEM_2", &L1_TOTEM_2, &b_L1_TOTEM_2);
   fChain->SetBranchAddress("L1_TOTEM_3", &L1_TOTEM_3, &b_L1_TOTEM_3);
   fChain->SetBranchAddress("L1_TOTEM_4", &L1_TOTEM_4, &b_L1_TOTEM_4);
   fChain->SetBranchAddress("L1_TripleEG16er2p5", &L1_TripleEG16er2p5, &b_L1_TripleEG16er2p5);
   fChain->SetBranchAddress("L1_TripleEG_16_12_8_er2p5", &L1_TripleEG_16_12_8_er2p5, &b_L1_TripleEG_16_12_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_16_15_8_er2p5", &L1_TripleEG_16_15_8_er2p5, &b_L1_TripleEG_16_15_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_18_17_8_er2p5", &L1_TripleEG_18_17_8_er2p5, &b_L1_TripleEG_18_17_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_18_18_12_er2p5", &L1_TripleEG_18_18_12_er2p5, &b_L1_TripleEG_18_18_12_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5", &L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5, &b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5", &L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5, &b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5", &L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5, &b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5);
   fChain->SetBranchAddress("L1_TripleMu0", &L1_TripleMu0, &b_L1_TripleMu0);
   fChain->SetBranchAddress("L1_TripleMu0_OQ", &L1_TripleMu0_OQ, &b_L1_TripleMu0_OQ);
   fChain->SetBranchAddress("L1_TripleMu0_SQ", &L1_TripleMu0_SQ, &b_L1_TripleMu0_SQ);
   fChain->SetBranchAddress("L1_TripleMu3", &L1_TripleMu3, &b_L1_TripleMu3);
   fChain->SetBranchAddress("L1_TripleMu3_SQ", &L1_TripleMu3_SQ, &b_L1_TripleMu3_SQ);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ", &L1_TripleMu_5SQ_3SQ_0OQ, &b_L1_TripleMu_5SQ_3SQ_0OQ);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9);
   fChain->SetBranchAddress("L1_TripleMu_5_3_3", &L1_TripleMu_5_3_3, &b_L1_TripleMu_5_3_3);
   fChain->SetBranchAddress("L1_TripleMu_5_3_3_SQ", &L1_TripleMu_5_3_3_SQ, &b_L1_TripleMu_5_3_3_SQ);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5", &L1_TripleMu_5_3p5_2p5, &b_L1_TripleMu_5_3p5_2p5);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_5_3", &L1_TripleMu_5_5_3, &b_L1_TripleMu_5_5_3);
   fChain->SetBranchAddress("L1_UnpairedBunchBptxMinus", &L1_UnpairedBunchBptxMinus, &b_L1_UnpairedBunchBptxMinus);
   fChain->SetBranchAddress("L1_UnpairedBunchBptxPlus", &L1_UnpairedBunchBptxPlus, &b_L1_UnpairedBunchBptxPlus);
   fChain->SetBranchAddress("L1_ZeroBias", &L1_ZeroBias, &b_L1_ZeroBias);
   fChain->SetBranchAddress("L1_ZeroBias_copy", &L1_ZeroBias_copy, &b_L1_ZeroBias_copy);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
   fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet380_TrimMass30", &HLT_AK8PFJet380_TrimMass30, &b_HLT_AK8PFJet380_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30", &HLT_AK8PFJet400_TrimMass30, &b_HLT_AK8PFJet400_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet420_TrimMass30", &HLT_AK8PFJet420_TrimMass30, &b_HLT_AK8PFJet420_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFHT750_TrimMass50", &HLT_AK8PFHT750_TrimMass50, &b_HLT_AK8PFHT750_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT800_TrimMass50", &HLT_AK8PFHT800_TrimMass50, &b_HLT_AK8PFHT800_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT850_TrimMass50", &HLT_AK8PFHT850_TrimMass50, &b_HLT_AK8PFHT850_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT900_TrimMass50", &HLT_AK8PFHT900_TrimMass50, &b_HLT_AK8PFHT900_TrimMass50);
   fChain->SetBranchAddress("HLT_CaloJet500_NoJetID", &HLT_CaloJet500_NoJetID, &b_HLT_CaloJet500_NoJetID);
   fChain->SetBranchAddress("HLT_CaloJet550_NoJetID", &HLT_CaloJet550_NoJetID, &b_HLT_CaloJet550_NoJetID);
   fChain->SetBranchAddress("HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", &HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL, &b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", &HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon, &b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon);
   fChain->SetBranchAddress("HLT_Trimuon5_3p5_2_Upsilon_Muon", &HLT_Trimuon5_3p5_2_Upsilon_Muon, &b_HLT_Trimuon5_3p5_2_Upsilon_Muon);
   fChain->SetBranchAddress("HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon", &HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon, &b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon);
   fChain->SetBranchAddress("HLT_DoubleEle25_CaloIdL_MW", &HLT_DoubleEle25_CaloIdL_MW, &b_HLT_DoubleEle25_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle27_CaloIdL_MW", &HLT_DoubleEle27_CaloIdL_MW, &b_HLT_DoubleEle27_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_MW", &HLT_DoubleEle33_CaloIdL_MW, &b_HLT_DoubleEle33_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle24_eta2p1_WPTight_Gsf", &HLT_DoubleEle24_eta2p1_WPTight_Gsf, &b_HLT_DoubleEle24_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350);
   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350);
   fChain->SetBranchAddress("HLT_Ele27_Ele37_CaloIdL_MW", &HLT_Ele27_Ele37_CaloIdL_MW, &b_HLT_Ele27_Ele37_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu27_Ele37_CaloIdL_MW", &HLT_Mu27_Ele37_CaloIdL_MW, &b_HLT_Mu27_Ele37_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu37_Ele27_CaloIdL_MW", &HLT_Mu37_Ele27_CaloIdL_MW, &b_HLT_Mu37_Ele27_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu37_TkMu27", &HLT_Mu37_TkMu27, &b_HLT_Mu37_TkMu27);
   fChain->SetBranchAddress("HLT_DoubleMu4_3_Bs", &HLT_DoubleMu4_3_Bs, &b_HLT_DoubleMu4_3_Bs);
   fChain->SetBranchAddress("HLT_DoubleMu4_3_Jpsi", &HLT_DoubleMu4_3_Jpsi, &b_HLT_DoubleMu4_3_Jpsi);
   fChain->SetBranchAddress("HLT_DoubleMu4_JpsiTrk_Displaced", &HLT_DoubleMu4_JpsiTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced", &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced, &b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu", &HLT_DoubleMu3_Trk_Tau3mu, &b_HLT_DoubleMu3_Trk_Tau3mu);
   fChain->SetBranchAddress("HLT_DoubleMu3_TkMu_DsTau3Mu", &HLT_DoubleMu3_TkMu_DsTau3Mu, &b_HLT_DoubleMu3_TkMu_DsTau3Mu);
   fChain->SetBranchAddress("HLT_DoubleMu4_PsiPrimeTrk_Displaced", &HLT_DoubleMu4_PsiPrimeTrk_Displaced, &b_HLT_DoubleMu4_PsiPrimeTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_Mass3p8_DZ_PFHT350", &HLT_DoubleMu4_Mass3p8_DZ_PFHT350, &b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350);
   fChain->SetBranchAddress("HLT_Mu3_PFJet40", &HLT_Mu3_PFJet40, &b_HLT_Mu3_PFJet40);
   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Jpsi", &HLT_Mu7p5_L2Mu2_Jpsi, &b_HLT_Mu7p5_L2Mu2_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Upsilon", &HLT_Mu7p5_L2Mu2_Upsilon, &b_HLT_Mu7p5_L2Mu2_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Jpsi", &HLT_Mu7p5_Track2_Jpsi, &b_HLT_Mu7p5_Track2_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Jpsi", &HLT_Mu7p5_Track3p5_Jpsi, &b_HLT_Mu7p5_Track3p5_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Jpsi", &HLT_Mu7p5_Track7_Jpsi, &b_HLT_Mu7p5_Track7_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Upsilon", &HLT_Mu7p5_Track2_Upsilon, &b_HLT_Mu7p5_Track2_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Upsilon", &HLT_Mu7p5_Track3p5_Upsilon, &b_HLT_Mu7p5_Track3p5_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Upsilon", &HLT_Mu7p5_Track7_Upsilon, &b_HLT_Mu7p5_Track7_Upsilon);
   fChain->SetBranchAddress("HLT_Mu3_L1SingleMu5orSingleMu7", &HLT_Mu3_L1SingleMu5orSingleMu7, &b_HLT_Mu3_L1SingleMu5orSingleMu7);
   fChain->SetBranchAddress("HLT_DoublePhoton33_CaloIdL", &HLT_DoublePhoton33_CaloIdL, &b_HLT_DoublePhoton33_CaloIdL);
   fChain->SetBranchAddress("HLT_DoublePhoton70", &HLT_DoublePhoton70, &b_HLT_DoublePhoton70);
   fChain->SetBranchAddress("HLT_DoublePhoton85", &HLT_DoublePhoton85, &b_HLT_DoublePhoton85);
   fChain->SetBranchAddress("HLT_Ele20_WPTight_Gsf", &HLT_Ele20_WPTight_Gsf, &b_HLT_Ele20_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele15_WPLoose_Gsf", &HLT_Ele15_WPLoose_Gsf, &b_HLT_Ele15_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele17_WPLoose_Gsf", &HLT_Ele17_WPLoose_Gsf, &b_HLT_Ele17_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele20_WPLoose_Gsf", &HLT_Ele20_WPLoose_Gsf, &b_HLT_Ele20_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele20_eta2p1_WPLoose_Gsf", &HLT_Ele20_eta2p1_WPLoose_Gsf, &b_HLT_Ele20_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_DiEle27_WPTightCaloOnly_L1DoubleEG", &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG, &b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele28_WPTight_Gsf", &HLT_Ele28_WPTight_Gsf, &b_HLT_Ele28_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele30_WPTight_Gsf", &HLT_Ele30_WPTight_Gsf, &b_HLT_Ele30_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf", &HLT_Ele32_WPTight_Gsf, &b_HLT_Ele32_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf", &HLT_Ele35_WPTight_Gsf, &b_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf_L1EGMT", &HLT_Ele35_WPTight_Gsf_L1EGMT, &b_HLT_Ele35_WPTight_Gsf_L1EGMT);
   fChain->SetBranchAddress("HLT_Ele38_WPTight_Gsf", &HLT_Ele38_WPTight_Gsf, &b_HLT_Ele38_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele40_WPTight_Gsf", &HLT_Ele40_WPTight_Gsf, &b_HLT_Ele40_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf_L1DoubleEG", &HLT_Ele32_WPTight_Gsf_L1DoubleEG, &b_HLT_Ele32_WPTight_Gsf_L1DoubleEG);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_HT450_Beamspot", &HLT_HT450_Beamspot, &b_HLT_HT450_Beamspot);
   fChain->SetBranchAddress("HLT_HT300_Beamspot", &HLT_HT300_Beamspot, &b_HLT_HT300_Beamspot);
   fChain->SetBranchAddress("HLT_ZeroBias_Beamspot", &HLT_ZeroBias_Beamspot, &b_HLT_ZeroBias_Beamspot);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_IsoMu30", &HLT_IsoMu30, &b_HLT_IsoMu30);
   fChain->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX", &HLT_UncorrectedJetE30_NoBPTX, &b_HLT_UncorrectedJetE30_NoBPTX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX3BX", &HLT_UncorrectedJetE30_NoBPTX3BX, &b_HLT_UncorrectedJetE30_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE60_NoBPTX3BX", &HLT_UncorrectedJetE60_NoBPTX3BX, &b_HLT_UncorrectedJetE60_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE70_NoBPTX3BX", &HLT_UncorrectedJetE70_NoBPTX3BX, &b_HLT_UncorrectedJetE70_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L1SingleMu18", &HLT_L1SingleMu18, &b_HLT_L1SingleMu18);
   fChain->SetBranchAddress("HLT_L1SingleMu25", &HLT_L1SingleMu25, &b_HLT_L1SingleMu25);
   fChain->SetBranchAddress("HLT_L2Mu10", &HLT_L2Mu10, &b_HLT_L2Mu10);
   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX3BX", &HLT_L2Mu10_NoVertex_NoBPTX3BX, &b_HLT_L2Mu10_NoVertex_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX", &HLT_L2Mu10_NoVertex_NoBPTX, &b_HLT_L2Mu10_NoVertex_NoBPTX);
   fChain->SetBranchAddress("HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu50", &HLT_L2Mu50, &b_HLT_L2Mu50);
   fChain->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha", &HLT_L2Mu23NoVtx_2Cha, &b_HLT_L2Mu23NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha_CosmicSeed", &HLT_L2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu50", &HLT_DoubleL2Mu50, &b_HLT_DoubleL2Mu50);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha", &HLT_DoubleL2Mu23NoVtx_2Cha, &b_HLT_DoubleL2Mu23NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha", &HLT_DoubleL2Mu25NoVtx_2Cha, &b_HLT_DoubleL2Mu25NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_Mu25_TkMu0_Onia", &HLT_Mu25_TkMu0_Onia, &b_HLT_Mu25_TkMu0_Onia);
   fChain->SetBranchAddress("HLT_Mu30_TkMu0_Psi", &HLT_Mu30_TkMu0_Psi, &b_HLT_Mu30_TkMu0_Psi);
   fChain->SetBranchAddress("HLT_Mu30_TkMu0_Upsilon", &HLT_Mu30_TkMu0_Upsilon, &b_HLT_Mu30_TkMu0_Upsilon);
   fChain->SetBranchAddress("HLT_Mu20_TkMu0_Phi", &HLT_Mu20_TkMu0_Phi, &b_HLT_Mu20_TkMu0_Phi);
   fChain->SetBranchAddress("HLT_Mu25_TkMu0_Phi", &HLT_Mu25_TkMu0_Phi, &b_HLT_Mu25_TkMu0_Phi);
   fChain->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   fChain->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   fChain->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
   fChain->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
   fChain->SetBranchAddress("HLT_OldMu100", &HLT_OldMu100, &b_HLT_OldMu100);
   fChain->SetBranchAddress("HLT_TkMu100", &HLT_TkMu100, &b_HLT_TkMu100);
   fChain->SetBranchAddress("HLT_DiPFJetAve40", &HLT_DiPFJetAve40, &b_HLT_DiPFJetAve40);
   fChain->SetBranchAddress("HLT_DiPFJetAve60", &HLT_DiPFJetAve60, &b_HLT_DiPFJetAve60);
   fChain->SetBranchAddress("HLT_DiPFJetAve80", &HLT_DiPFJetAve80, &b_HLT_DiPFJetAve80);
   fChain->SetBranchAddress("HLT_DiPFJetAve140", &HLT_DiPFJetAve140, &b_HLT_DiPFJetAve140);
   fChain->SetBranchAddress("HLT_DiPFJetAve200", &HLT_DiPFJetAve200, &b_HLT_DiPFJetAve200);
   fChain->SetBranchAddress("HLT_DiPFJetAve260", &HLT_DiPFJetAve260, &b_HLT_DiPFJetAve260);
   fChain->SetBranchAddress("HLT_DiPFJetAve320", &HLT_DiPFJetAve320, &b_HLT_DiPFJetAve320);
   fChain->SetBranchAddress("HLT_DiPFJetAve400", &HLT_DiPFJetAve400, &b_HLT_DiPFJetAve400);
   fChain->SetBranchAddress("HLT_DiPFJetAve500", &HLT_DiPFJetAve500, &b_HLT_DiPFJetAve500);
   fChain->SetBranchAddress("HLT_DiPFJetAve60_HFJEC", &HLT_DiPFJetAve60_HFJEC, &b_HLT_DiPFJetAve60_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve80_HFJEC", &HLT_DiPFJetAve80_HFJEC, &b_HLT_DiPFJetAve80_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve100_HFJEC", &HLT_DiPFJetAve100_HFJEC, &b_HLT_DiPFJetAve100_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve160_HFJEC", &HLT_DiPFJetAve160_HFJEC, &b_HLT_DiPFJetAve160_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve220_HFJEC", &HLT_DiPFJetAve220_HFJEC, &b_HLT_DiPFJetAve220_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve300_HFJEC", &HLT_DiPFJetAve300_HFJEC, &b_HLT_DiPFJetAve300_HFJEC);
   fChain->SetBranchAddress("HLT_AK8PFJet15", &HLT_AK8PFJet15, &b_HLT_AK8PFJet15);
   fChain->SetBranchAddress("HLT_AK8PFJet25", &HLT_AK8PFJet25, &b_HLT_AK8PFJet25);
   fChain->SetBranchAddress("HLT_AK8PFJet40", &HLT_AK8PFJet40, &b_HLT_AK8PFJet40);
   fChain->SetBranchAddress("HLT_AK8PFJet60", &HLT_AK8PFJet60, &b_HLT_AK8PFJet60);
   fChain->SetBranchAddress("HLT_AK8PFJet80", &HLT_AK8PFJet80, &b_HLT_AK8PFJet80);
   fChain->SetBranchAddress("HLT_AK8PFJet140", &HLT_AK8PFJet140, &b_HLT_AK8PFJet140);
   fChain->SetBranchAddress("HLT_AK8PFJet200", &HLT_AK8PFJet200, &b_HLT_AK8PFJet200);
   fChain->SetBranchAddress("HLT_AK8PFJet260", &HLT_AK8PFJet260, &b_HLT_AK8PFJet260);
   fChain->SetBranchAddress("HLT_AK8PFJet320", &HLT_AK8PFJet320, &b_HLT_AK8PFJet320);
   fChain->SetBranchAddress("HLT_AK8PFJet400", &HLT_AK8PFJet400, &b_HLT_AK8PFJet400);
   fChain->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
   fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   fChain->SetBranchAddress("HLT_AK8PFJet550", &HLT_AK8PFJet550, &b_HLT_AK8PFJet550);
   fChain->SetBranchAddress("HLT_PFJet15", &HLT_PFJet15, &b_HLT_PFJet15);
   fChain->SetBranchAddress("HLT_PFJet25", &HLT_PFJet25, &b_HLT_PFJet25);
   fChain->SetBranchAddress("HLT_PFJet40", &HLT_PFJet40, &b_HLT_PFJet40);
   fChain->SetBranchAddress("HLT_PFJet60", &HLT_PFJet60, &b_HLT_PFJet60);
   fChain->SetBranchAddress("HLT_PFJet80", &HLT_PFJet80, &b_HLT_PFJet80);
   fChain->SetBranchAddress("HLT_PFJet140", &HLT_PFJet140, &b_HLT_PFJet140);
   fChain->SetBranchAddress("HLT_PFJet200", &HLT_PFJet200, &b_HLT_PFJet200);
   fChain->SetBranchAddress("HLT_PFJet260", &HLT_PFJet260, &b_HLT_PFJet260);
   fChain->SetBranchAddress("HLT_PFJet320", &HLT_PFJet320, &b_HLT_PFJet320);
   fChain->SetBranchAddress("HLT_PFJet400", &HLT_PFJet400, &b_HLT_PFJet400);
   fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   fChain->SetBranchAddress("HLT_PFJet550", &HLT_PFJet550, &b_HLT_PFJet550);
   fChain->SetBranchAddress("HLT_PFJetFwd15", &HLT_PFJetFwd15, &b_HLT_PFJetFwd15);
   fChain->SetBranchAddress("HLT_PFJetFwd25", &HLT_PFJetFwd25, &b_HLT_PFJetFwd25);
   fChain->SetBranchAddress("HLT_PFJetFwd40", &HLT_PFJetFwd40, &b_HLT_PFJetFwd40);
   fChain->SetBranchAddress("HLT_PFJetFwd60", &HLT_PFJetFwd60, &b_HLT_PFJetFwd60);
   fChain->SetBranchAddress("HLT_PFJetFwd80", &HLT_PFJetFwd80, &b_HLT_PFJetFwd80);
   fChain->SetBranchAddress("HLT_PFJetFwd140", &HLT_PFJetFwd140, &b_HLT_PFJetFwd140);
   fChain->SetBranchAddress("HLT_PFJetFwd200", &HLT_PFJetFwd200, &b_HLT_PFJetFwd200);
   fChain->SetBranchAddress("HLT_PFJetFwd260", &HLT_PFJetFwd260, &b_HLT_PFJetFwd260);
   fChain->SetBranchAddress("HLT_PFJetFwd320", &HLT_PFJetFwd320, &b_HLT_PFJetFwd320);
   fChain->SetBranchAddress("HLT_PFJetFwd400", &HLT_PFJetFwd400, &b_HLT_PFJetFwd400);
   fChain->SetBranchAddress("HLT_PFJetFwd450", &HLT_PFJetFwd450, &b_HLT_PFJetFwd450);
   fChain->SetBranchAddress("HLT_PFJetFwd500", &HLT_PFJetFwd500, &b_HLT_PFJetFwd500);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd15", &HLT_AK8PFJetFwd15, &b_HLT_AK8PFJetFwd15);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd25", &HLT_AK8PFJetFwd25, &b_HLT_AK8PFJetFwd25);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd40", &HLT_AK8PFJetFwd40, &b_HLT_AK8PFJetFwd40);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd60", &HLT_AK8PFJetFwd60, &b_HLT_AK8PFJetFwd60);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd80", &HLT_AK8PFJetFwd80, &b_HLT_AK8PFJetFwd80);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd140", &HLT_AK8PFJetFwd140, &b_HLT_AK8PFJetFwd140);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd200", &HLT_AK8PFJetFwd200, &b_HLT_AK8PFJetFwd200);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd260", &HLT_AK8PFJetFwd260, &b_HLT_AK8PFJetFwd260);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd320", &HLT_AK8PFJetFwd320, &b_HLT_AK8PFJetFwd320);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd400", &HLT_AK8PFJetFwd400, &b_HLT_AK8PFJetFwd400);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd450", &HLT_AK8PFJetFwd450, &b_HLT_AK8PFJetFwd450);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd500", &HLT_AK8PFJetFwd500, &b_HLT_AK8PFJetFwd500);
   fChain->SetBranchAddress("HLT_PFHT180", &HLT_PFHT180, &b_HLT_PFHT180);
   fChain->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
   fChain->SetBranchAddress("HLT_PFHT370", &HLT_PFHT370, &b_HLT_PFHT370);
   fChain->SetBranchAddress("HLT_PFHT430", &HLT_PFHT430, &b_HLT_PFHT430);
   fChain->SetBranchAddress("HLT_PFHT510", &HLT_PFHT510, &b_HLT_PFHT510);
   fChain->SetBranchAddress("HLT_PFHT590", &HLT_PFHT590, &b_HLT_PFHT590);
   fChain->SetBranchAddress("HLT_PFHT680", &HLT_PFHT680, &b_HLT_PFHT680);
   fChain->SetBranchAddress("HLT_PFHT780", &HLT_PFHT780, &b_HLT_PFHT780);
   fChain->SetBranchAddress("HLT_PFHT890", &HLT_PFHT890, &b_HLT_PFHT890);
   fChain->SetBranchAddress("HLT_PFHT1050", &HLT_PFHT1050, &b_HLT_PFHT1050);
   fChain->SetBranchAddress("HLT_PFHT500_PFMET100_PFMHT100_IDTight", &HLT_PFHT500_PFMET100_PFMHT100_IDTight, &b_HLT_PFHT500_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_PFHT500_PFMET110_PFMHT110_IDTight", &HLT_PFHT500_PFMET110_PFMHT110_IDTight, &b_HLT_PFHT500_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFHT700_PFMET85_PFMHT85_IDTight", &HLT_PFHT700_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT700_PFMET85_PFMHT85_IDTight);
   fChain->SetBranchAddress("HLT_PFHT700_PFMET95_PFMHT95_IDTight", &HLT_PFHT700_PFMET95_PFMHT95_IDTight, &b_HLT_PFHT700_PFMET95_PFMHT95_IDTight);
   fChain->SetBranchAddress("HLT_PFHT800_PFMET75_PFMHT75_IDTight", &HLT_PFHT800_PFMET75_PFMHT75_IDTight, &b_HLT_PFHT800_PFMET75_PFMHT75_IDTight);
   fChain->SetBranchAddress("HLT_PFHT800_PFMET85_PFMHT85_IDTight", &HLT_PFHT800_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT800_PFMET85_PFMHT85_IDTight);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, &b_HLT_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, &b_HLT_PFMET120_PFMHT120_IDTight);
   fChain->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight", &HLT_PFMET130_PFMHT130_IDTight, &b_HLT_PFMET130_PFMHT130_IDTight);
   fChain->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight", &HLT_PFMET140_PFMHT140_IDTight, &b_HLT_PFMET140_PFMHT140_IDTight);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_PFHT60", &HLT_PFMET120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMET120_PFMHT120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60", &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne110_PFMHT110_IDTight", &HLT_PFMETTypeOne110_PFMHT110_IDTight, &b_HLT_PFMETTypeOne110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight", &HLT_PFMETTypeOne120_PFMHT120_IDTight, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne130_PFMHT130_IDTight", &HLT_PFMETTypeOne130_PFMHT130_IDTight, &b_HLT_PFMETTypeOne130_PFMHT130_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne140_PFMHT140_IDTight", &HLT_PFMETTypeOne140_PFMHT140_IDTight, &b_HLT_PFMETTypeOne140_PFMHT140_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight);
   fChain->SetBranchAddress("HLT_L1ETMHadSeeds", &HLT_L1ETMHadSeeds, &b_HLT_L1ETMHadSeeds);
   fChain->SetBranchAddress("HLT_CaloMHT90", &HLT_CaloMHT90, &b_HLT_CaloMHT90);
   fChain->SetBranchAddress("HLT_CaloMET80_NotCleaned", &HLT_CaloMET80_NotCleaned, &b_HLT_CaloMET80_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET90_NotCleaned", &HLT_CaloMET90_NotCleaned, &b_HLT_CaloMET90_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET100_NotCleaned", &HLT_CaloMET100_NotCleaned, &b_HLT_CaloMET100_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET110_NotCleaned", &HLT_CaloMET110_NotCleaned, &b_HLT_CaloMET110_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET250_NotCleaned", &HLT_CaloMET250_NotCleaned, &b_HLT_CaloMET250_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET70_HBHECleaned", &HLT_CaloMET70_HBHECleaned, &b_HLT_CaloMET70_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET80_HBHECleaned", &HLT_CaloMET80_HBHECleaned, &b_HLT_CaloMET80_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET90_HBHECleaned", &HLT_CaloMET90_HBHECleaned, &b_HLT_CaloMET90_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET100_HBHECleaned", &HLT_CaloMET100_HBHECleaned, &b_HLT_CaloMET100_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET250_HBHECleaned", &HLT_CaloMET250_HBHECleaned, &b_HLT_CaloMET250_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET300_HBHECleaned", &HLT_CaloMET300_HBHECleaned, &b_HLT_CaloMET300_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET350_HBHECleaned", &HLT_CaloMET350_HBHECleaned, &b_HLT_CaloMET350_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET200_NotCleaned", &HLT_PFMET200_NotCleaned, &b_HLT_PFMET200_NotCleaned);
   fChain->SetBranchAddress("HLT_PFMET200_HBHECleaned", &HLT_PFMET200_HBHECleaned, &b_HLT_PFMET200_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET250_HBHECleaned", &HLT_PFMET250_HBHECleaned, &b_HLT_PFMET250_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET300_HBHECleaned", &HLT_PFMET300_HBHECleaned, &b_HLT_PFMET300_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET200_HBHE_BeamHaloCleaned", &HLT_PFMET200_HBHE_BeamHaloCleaned, &b_HLT_PFMET200_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned", &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned, &b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_MET105_IsoTrk50", &HLT_MET105_IsoTrk50, &b_HLT_MET105_IsoTrk50);
   fChain->SetBranchAddress("HLT_MET120_IsoTrk50", &HLT_MET120_IsoTrk50, &b_HLT_MET120_IsoTrk50);
   fChain->SetBranchAddress("HLT_SingleJet30_Mu12_SinglePFJet40", &HLT_SingleJet30_Mu12_SinglePFJet40, &b_HLT_SingleJet30_Mu12_SinglePFJet40);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Photon300_NoHE", &HLT_Photon300_NoHE, &b_HLT_Photon300_NoHE);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL", &HLT_Mu8_TrkIsoVVL, &b_HLT_Mu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ);
   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5", &HLT_BTagMu_AK4DiJet20_Mu5, &b_HLT_BTagMu_AK4DiJet20_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5", &HLT_BTagMu_AK4DiJet40_Mu5, &b_HLT_BTagMu_AK4DiJet40_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5", &HLT_BTagMu_AK4DiJet70_Mu5, &b_HLT_BTagMu_AK4DiJet70_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5", &HLT_BTagMu_AK4DiJet110_Mu5, &b_HLT_BTagMu_AK4DiJet110_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5", &HLT_BTagMu_AK4DiJet170_Mu5, &b_HLT_BTagMu_AK4DiJet170_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5", &HLT_BTagMu_AK4Jet300_Mu5, &b_HLT_BTagMu_AK4Jet300_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5", &HLT_BTagMu_AK8DiJet170_Mu5, &b_HLT_BTagMu_AK8DiJet170_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5", &HLT_BTagMu_AK8Jet170_DoubleMu5, &b_HLT_BTagMu_AK8Jet170_DoubleMu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5", &HLT_BTagMu_AK8Jet300_Mu5, &b_HLT_BTagMu_AK8Jet300_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5_noalgo", &HLT_BTagMu_AK4DiJet20_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5_noalgo", &HLT_BTagMu_AK4DiJet40_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5_noalgo", &HLT_BTagMu_AK4DiJet70_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5_noalgo", &HLT_BTagMu_AK4DiJet110_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5_noalgo", &HLT_BTagMu_AK4DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5_noalgo", &HLT_BTagMu_AK4Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK4Jet300_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5_noalgo", &HLT_BTagMu_AK8DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo", &HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo, &b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5_noalgo", &HLT_BTagMu_AK8Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK8Jet300_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", &HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu12_DoublePhoton20", &HLT_Mu12_DoublePhoton20, &b_HLT_Mu12_DoublePhoton20);
   fChain->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2", &HLT_TriplePhoton_20_20_20_CaloIdLV2, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2);
   fChain->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2", &HLT_TriplePhoton_30_30_10_CaloIdLV2, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2);
   fChain->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_Photon20", &HLT_Photon20, &b_HLT_Photon20);
   fChain->SetBranchAddress("HLT_Photon33", &HLT_Photon33, &b_HLT_Photon33);
   fChain->SetBranchAddress("HLT_Photon50", &HLT_Photon50, &b_HLT_Photon50);
   fChain->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
   fChain->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
   fChain->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   fChain->SetBranchAddress("HLT_Photon150", &HLT_Photon150, &b_HLT_Photon150);
   fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   fChain->SetBranchAddress("HLT_Photon200", &HLT_Photon200, &b_HLT_Photon200);
   fChain->SetBranchAddress("HLT_Photon100EB_TightID_TightIso", &HLT_Photon100EB_TightID_TightIso, &b_HLT_Photon100EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon110EB_TightID_TightIso", &HLT_Photon110EB_TightID_TightIso, &b_HLT_Photon110EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon120EB_TightID_TightIso", &HLT_Photon120EB_TightID_TightIso, &b_HLT_Photon120EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon100EBHE10", &HLT_Photon100EBHE10, &b_HLT_Photon100EBHE10);
   fChain->SetBranchAddress("HLT_Photon100EEHE10", &HLT_Photon100EEHE10, &b_HLT_Photon100EEHE10);
   fChain->SetBranchAddress("HLT_Photon100EE_TightID_TightIso", &HLT_Photon100EE_TightID_TightIso, &b_HLT_Photon100EE_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM", &HLT_Photon50_R9Id90_HE10_IsoM, &b_HLT_Photon50_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM", &HLT_Photon75_R9Id90_HE10_IsoM, &b_HLT_Photon75_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3);
   fChain->SetBranchAddress("HLT_Photon90_R9Id90_HE10_IsoM", &HLT_Photon90_R9Id90_HE10_IsoM, &b_HLT_Photon90_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon120_R9Id90_HE10_IsoM", &HLT_Photon120_R9Id90_HE10_IsoM, &b_HLT_Photon120_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon165_R9Id90_HE10_IsoM", &HLT_Photon165_R9Id90_HE10_IsoM, &b_HLT_Photon165_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon90_CaloIdL_PFHT700", &HLT_Photon90_CaloIdL_PFHT700, &b_HLT_Photon90_CaloIdL_PFHT700);
   fChain->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90);
   fChain->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95);
   fChain->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Photon35_TwoProngs35", &HLT_Photon35_TwoProngs35, &b_HLT_Photon35_TwoProngs35);
   fChain->SetBranchAddress("HLT_IsoMu24_TwoProngs35", &HLT_IsoMu24_TwoProngs35, &b_HLT_IsoMu24_TwoProngs35);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_NoOS", &HLT_Dimuon0_Jpsi_L1_NoOS, &b_HLT_Dimuon0_Jpsi_L1_NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_NoOS", &HLT_Dimuon0_Jpsi_NoVertexing_NoOS, &b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi", &HLT_Dimuon0_Jpsi, &b_HLT_Dimuon0_Jpsi);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing", &HLT_Dimuon0_Jpsi_NoVertexing, &b_HLT_Dimuon0_Jpsi_NoVertexing);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi3p5_Muon2", &HLT_Dimuon0_Jpsi3p5_Muon2, &b_HLT_Dimuon0_Jpsi3p5_Muon2);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5", &HLT_Dimuon0_Upsilon_L1_4p5, &b_HLT_Dimuon0_Upsilon_L1_4p5);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5", &HLT_Dimuon0_Upsilon_L1_5, &b_HLT_Dimuon0_Upsilon_L1_5);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5NoOS", &HLT_Dimuon0_Upsilon_L1_4p5NoOS, &b_HLT_Dimuon0_Upsilon_L1_4p5NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0", &HLT_Dimuon0_Upsilon_L1_4p5er2p0, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0M", &HLT_Dimuon0_Upsilon_L1_4p5er2p0M, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_NoVertexing", &HLT_Dimuon0_Upsilon_NoVertexing, &b_HLT_Dimuon0_Upsilon_NoVertexing);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5M", &HLT_Dimuon0_Upsilon_L1_5M, &b_HLT_Dimuon0_Upsilon_L1_5M);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5R", &HLT_Dimuon0_LowMass_L1_0er1p5R, &b_HLT_Dimuon0_LowMass_L1_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5", &HLT_Dimuon0_LowMass_L1_0er1p5, &b_HLT_Dimuon0_LowMass_L1_0er1p5);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass", &HLT_Dimuon0_LowMass, &b_HLT_Dimuon0_LowMass);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4", &HLT_Dimuon0_LowMass_L1_4, &b_HLT_Dimuon0_LowMass_L1_4);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4R", &HLT_Dimuon0_LowMass_L1_4R, &b_HLT_Dimuon0_LowMass_L1_4R);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_TM530", &HLT_Dimuon0_LowMass_L1_TM530, &b_HLT_Dimuon0_LowMass_L1_TM530);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_L1_TM0", &HLT_Dimuon0_Upsilon_Muon_L1_TM0, &b_HLT_Dimuon0_Upsilon_Muon_L1_TM0);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_NoL1Mass", &HLT_Dimuon0_Upsilon_Muon_NoL1Mass, &b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass);
   fChain->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DZ", &HLT_TripleMu_5_3_3_Mass3p8_DZ, &b_HLT_TripleMu_5_3_3_Mass3p8_DZ);
   fChain->SetBranchAddress("HLT_TripleMu_10_5_5_DZ", &HLT_TripleMu_10_5_5_DZ, &b_HLT_TripleMu_10_5_5_DZ);
   fChain->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET50_PFMHT60", &HLT_DoubleMu3_DZ_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET70_PFMHT70", &HLT_DoubleMu3_DZ_PFMET70_PFMHT70, &b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET90_PFMHT90", &HLT_DoubleMu3_DZ_PFMET90_PFMHT90, &b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass", &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass, &b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass);
   fChain->SetBranchAddress("HLT_DoubleMu4_Jpsi_Displaced", &HLT_DoubleMu4_Jpsi_Displaced, &b_HLT_DoubleMu4_Jpsi_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_Jpsi_NoVertexing", &HLT_DoubleMu4_Jpsi_NoVertexing, &b_HLT_DoubleMu4_Jpsi_NoVertexing);
   fChain->SetBranchAddress("HLT_DoubleMu4_JpsiTrkTrk_Displaced", &HLT_DoubleMu4_JpsiTrkTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrkTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu43NoFiltersNoVtx", &HLT_DoubleMu43NoFiltersNoVtx, &b_HLT_DoubleMu43NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_DoubleMu48NoFiltersNoVtx", &HLT_DoubleMu48NoFiltersNoVtx, &b_HLT_DoubleMu48NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL", &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL, &b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL, &b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL);
   fChain->SetBranchAddress("HLT_DoubleMu33NoFiltersNoVtxDisplaced", &HLT_DoubleMu33NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu33NoFiltersNoVtxDisplaced);
   fChain->SetBranchAddress("HLT_DoubleMu40NoFiltersNoVtxDisplaced", &HLT_DoubleMu40NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu40NoFiltersNoVtxDisplaced);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4", &HLT_DoubleMu20_7_Mass0to30_L1_DM4, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4EG", &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG);
   fChain->SetBranchAddress("HLT_HT425", &HLT_HT425, &b_HLT_HT425);
   fChain->SetBranchAddress("HLT_HT430_DisplacedDijet40_DisplacedTrack", &HLT_HT430_DisplacedDijet40_DisplacedTrack, &b_HLT_HT430_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT500_DisplacedDijet40_DisplacedTrack", &HLT_HT500_DisplacedDijet40_DisplacedTrack, &b_HLT_HT500_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT430_DisplacedDijet60_DisplacedTrack", &HLT_HT430_DisplacedDijet60_DisplacedTrack, &b_HLT_HT430_DisplacedDijet60_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT400_DisplacedDijet40_DisplacedTrack", &HLT_HT400_DisplacedDijet40_DisplacedTrack, &b_HLT_HT400_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT650_DisplacedDijet60_Inclusive", &HLT_HT650_DisplacedDijet60_Inclusive, &b_HLT_HT650_DisplacedDijet60_Inclusive);
   fChain->SetBranchAddress("HLT_HT550_DisplacedDijet60_Inclusive", &HLT_HT550_DisplacedDijet60_Inclusive, &b_HLT_HT550_DisplacedDijet60_Inclusive);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET110", &HLT_DiJet110_35_Mjj650_PFMET110, &b_HLT_DiJet110_35_Mjj650_PFMET110);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET120", &HLT_DiJet110_35_Mjj650_PFMET120, &b_HLT_DiJet110_35_Mjj650_PFMET120);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET130", &HLT_DiJet110_35_Mjj650_PFMET130, &b_HLT_DiJet110_35_Mjj650_PFMET130);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET110", &HLT_TripleJet110_35_35_Mjj650_PFMET110, &b_HLT_TripleJet110_35_35_Mjj650_PFMET110);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET120", &HLT_TripleJet110_35_35_Mjj650_PFMET120, &b_HLT_TripleJet110_35_35_Mjj650_PFMET120);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET130", &HLT_TripleJet110_35_35_Mjj650_PFMET130, &b_HLT_TripleJet110_35_35_Mjj650_PFMET130);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned, &b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned);
   fChain->SetBranchAddress("HLT_Ele28_eta2p1_WPTight_Gsf_HT150", &HLT_Ele28_eta2p1_WPTight_Gsf_HT150, &b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150);
   fChain->SetBranchAddress("HLT_Ele28_HighEta_SC20_Mass55", &HLT_Ele28_HighEta_SC20_Mass55, &b_HLT_Ele28_HighEta_SC20_Mass55);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_Photon23", &HLT_DoubleMu20_7_Mass0to30_Photon23, &b_HLT_DoubleMu20_7_Mass0to30_Photon23);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_PFMET50", &HLT_Ele15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450", &HLT_Ele15_IsoVVVL_PFHT450, &b_HLT_Ele15_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Ele50_IsoVVVL_PFHT450", &HLT_Ele50_IsoVVVL_PFHT450, &b_HLT_Ele50_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT600", &HLT_Ele15_IsoVVVL_PFHT600, &b_HLT_Ele15_IsoVVVL_PFHT600);
   fChain->SetBranchAddress("HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, &b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_PFMET50", &HLT_Mu15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450", &HLT_Mu15_IsoVVVL_PFHT450, &b_HLT_Mu15_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Mu50_IsoVVVL_PFHT450", &HLT_Mu50_IsoVVVL_PFHT450, &b_HLT_Mu50_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT600", &HLT_Mu15_IsoVVVL_PFHT600, &b_HLT_Mu15_IsoVVVL_PFHT600);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight);
   fChain->SetBranchAddress("HLT_Dimuon10_PsiPrime_Barrel_Seagulls", &HLT_Dimuon10_PsiPrime_Barrel_Seagulls, &b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon20_Jpsi_Barrel_Seagulls", &HLT_Dimuon20_Jpsi_Barrel_Seagulls, &b_HLT_Dimuon20_Jpsi_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon12_Upsilon_y1p4", &HLT_Dimuon12_Upsilon_y1p4, &b_HLT_Dimuon12_Upsilon_y1p4);
   fChain->SetBranchAddress("HLT_Dimuon14_Phi_Barrel_Seagulls", &HLT_Dimuon14_Phi_Barrel_Seagulls, &b_HLT_Dimuon14_Phi_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon18_PsiPrime", &HLT_Dimuon18_PsiPrime, &b_HLT_Dimuon18_PsiPrime);
   fChain->SetBranchAddress("HLT_Dimuon25_Jpsi", &HLT_Dimuon25_Jpsi, &b_HLT_Dimuon25_Jpsi);
   fChain->SetBranchAddress("HLT_Dimuon18_PsiPrime_noCorrL1", &HLT_Dimuon18_PsiPrime_noCorrL1, &b_HLT_Dimuon18_PsiPrime_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon24_Upsilon_noCorrL1", &HLT_Dimuon24_Upsilon_noCorrL1, &b_HLT_Dimuon24_Upsilon_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon24_Phi_noCorrL1", &HLT_Dimuon24_Phi_noCorrL1, &b_HLT_Dimuon24_Phi_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon25_Jpsi_noCorrL1", &HLT_Dimuon25_Jpsi_noCorrL1, &b_HLT_Dimuon25_Jpsi_noCorrL1);
   fChain->SetBranchAddress("HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", &HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8, &b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DoubleIsoMu20_eta2p1", &HLT_DoubleIsoMu20_eta2p1, &b_HLT_DoubleIsoMu20_eta2p1);
   fChain->SetBranchAddress("HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx", &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx, &b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx", &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx, &b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx", &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx, &b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   fChain->SetBranchAddress("HLT_Mu19", &HLT_Mu19, &b_HLT_Mu19);
   fChain->SetBranchAddress("HLT_Mu17_Photon30_IsoCaloId", &HLT_Mu17_Photon30_IsoCaloId, &b_HLT_Mu17_Photon30_IsoCaloId);
   fChain->SetBranchAddress("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele8_CaloIdM_TrackIdM_PFJet30", &HLT_Ele8_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele17_CaloIdM_TrackIdM_PFJet30", &HLT_Ele17_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele23_CaloIdM_TrackIdM_PFJet30", &HLT_Ele23_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165", &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165, &b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165);
   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele135_CaloIdVT_GsfTrkIdT", &HLT_Ele135_CaloIdVT_GsfTrkIdT, &b_HLT_Ele135_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele145_CaloIdVT_GsfTrkIdT", &HLT_Ele145_CaloIdVT_GsfTrkIdT, &b_HLT_Ele145_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele200_CaloIdVT_GsfTrkIdT", &HLT_Ele200_CaloIdVT_GsfTrkIdT, &b_HLT_Ele200_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT", &HLT_Ele250_CaloIdVT_GsfTrkIdT, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT", &HLT_Ele300_CaloIdVT_GsfTrkIdT, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40);
   fChain->SetBranchAddress("HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", &HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94, &b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94);
   fChain->SetBranchAddress("HLT_PFHT400_SixPFJet32", &HLT_PFHT400_SixPFJet32, &b_HLT_PFHT400_SixPFJet32);
   fChain->SetBranchAddress("HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", &HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59, &b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59);
   fChain->SetBranchAddress("HLT_PFHT450_SixPFJet36", &HLT_PFHT450_SixPFJet36, &b_HLT_PFHT450_SixPFJet36);
   fChain->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
   fChain->SetBranchAddress("HLT_PFHT350MinPFJet15", &HLT_PFHT350MinPFJet15, &b_HLT_PFHT350MinPFJet15);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL", &HLT_Photon60_R9Id90_CaloIdL_IsoL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15);
   fChain->SetBranchAddress("HLT_ECALHT800", &HLT_ECALHT800, &b_HLT_ECALHT800);
   fChain->SetBranchAddress("HLT_DiSC30_18_EIso_AND_HE_Mass70", &HLT_DiSC30_18_EIso_AND_HE_Mass70, &b_HLT_DiSC30_18_EIso_AND_HE_Mass70);
   fChain->SetBranchAddress("HLT_Physics", &HLT_Physics, &b_HLT_Physics);
   fChain->SetBranchAddress("HLT_Physics_part0", &HLT_Physics_part0, &b_HLT_Physics_part0);
   fChain->SetBranchAddress("HLT_Physics_part1", &HLT_Physics_part1, &b_HLT_Physics_part1);
   fChain->SetBranchAddress("HLT_Physics_part2", &HLT_Physics_part2, &b_HLT_Physics_part2);
   fChain->SetBranchAddress("HLT_Physics_part3", &HLT_Physics_part3, &b_HLT_Physics_part3);
   fChain->SetBranchAddress("HLT_Physics_part4", &HLT_Physics_part4, &b_HLT_Physics_part4);
   fChain->SetBranchAddress("HLT_Physics_part5", &HLT_Physics_part5, &b_HLT_Physics_part5);
   fChain->SetBranchAddress("HLT_Physics_part6", &HLT_Physics_part6, &b_HLT_Physics_part6);
   fChain->SetBranchAddress("HLT_Physics_part7", &HLT_Physics_part7, &b_HLT_Physics_part7);
   fChain->SetBranchAddress("HLT_Random", &HLT_Random, &b_HLT_Random);
   fChain->SetBranchAddress("HLT_ZeroBias", &HLT_ZeroBias, &b_HLT_ZeroBias);
   fChain->SetBranchAddress("HLT_ZeroBias_Alignment", &HLT_ZeroBias_Alignment, &b_HLT_ZeroBias_Alignment);
   fChain->SetBranchAddress("HLT_ZeroBias_part0", &HLT_ZeroBias_part0, &b_HLT_ZeroBias_part0);
   fChain->SetBranchAddress("HLT_ZeroBias_part1", &HLT_ZeroBias_part1, &b_HLT_ZeroBias_part1);
   fChain->SetBranchAddress("HLT_ZeroBias_part2", &HLT_ZeroBias_part2, &b_HLT_ZeroBias_part2);
   fChain->SetBranchAddress("HLT_ZeroBias_part3", &HLT_ZeroBias_part3, &b_HLT_ZeroBias_part3);
   fChain->SetBranchAddress("HLT_ZeroBias_part4", &HLT_ZeroBias_part4, &b_HLT_ZeroBias_part4);
   fChain->SetBranchAddress("HLT_ZeroBias_part5", &HLT_ZeroBias_part5, &b_HLT_ZeroBias_part5);
   fChain->SetBranchAddress("HLT_ZeroBias_part6", &HLT_ZeroBias_part6, &b_HLT_ZeroBias_part6);
   fChain->SetBranchAddress("HLT_ZeroBias_part7", &HLT_ZeroBias_part7, &b_HLT_ZeroBias_part7);
   fChain->SetBranchAddress("HLT_AK4CaloJet30", &HLT_AK4CaloJet30, &b_HLT_AK4CaloJet30);
   fChain->SetBranchAddress("HLT_AK4CaloJet40", &HLT_AK4CaloJet40, &b_HLT_AK4CaloJet40);
   fChain->SetBranchAddress("HLT_AK4CaloJet50", &HLT_AK4CaloJet50, &b_HLT_AK4CaloJet50);
   fChain->SetBranchAddress("HLT_AK4CaloJet80", &HLT_AK4CaloJet80, &b_HLT_AK4CaloJet80);
   fChain->SetBranchAddress("HLT_AK4CaloJet100", &HLT_AK4CaloJet100, &b_HLT_AK4CaloJet100);
   fChain->SetBranchAddress("HLT_AK4CaloJet120", &HLT_AK4CaloJet120, &b_HLT_AK4CaloJet120);
   fChain->SetBranchAddress("HLT_AK4PFJet30", &HLT_AK4PFJet30, &b_HLT_AK4PFJet30);
   fChain->SetBranchAddress("HLT_AK4PFJet50", &HLT_AK4PFJet50, &b_HLT_AK4PFJet50);
   fChain->SetBranchAddress("HLT_AK4PFJet80", &HLT_AK4PFJet80, &b_HLT_AK4PFJet80);
   fChain->SetBranchAddress("HLT_AK4PFJet100", &HLT_AK4PFJet100, &b_HLT_AK4PFJet100);
   fChain->SetBranchAddress("HLT_AK4PFJet120", &HLT_AK4PFJet120, &b_HLT_AK4PFJet120);
   fChain->SetBranchAddress("HLT_SinglePhoton10_Eta3p1ForPPRef", &HLT_SinglePhoton10_Eta3p1ForPPRef, &b_HLT_SinglePhoton10_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_SinglePhoton20_Eta3p1ForPPRef", &HLT_SinglePhoton20_Eta3p1ForPPRef, &b_HLT_SinglePhoton20_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_SinglePhoton30_Eta3p1ForPPRef", &HLT_SinglePhoton30_Eta3p1ForPPRef, &b_HLT_SinglePhoton30_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_Photon20_HoverELoose", &HLT_Photon20_HoverELoose, &b_HLT_Photon20_HoverELoose);
   fChain->SetBranchAddress("HLT_Photon30_HoverELoose", &HLT_Photon30_HoverELoose, &b_HLT_Photon30_HoverELoose);
   fChain->SetBranchAddress("HLT_EcalCalibration", &HLT_EcalCalibration, &b_HLT_EcalCalibration);
   fChain->SetBranchAddress("HLT_HcalCalibration", &HLT_HcalCalibration, &b_HLT_HcalCalibration);
   fChain->SetBranchAddress("HLT_L1UnpairedBunchBptxMinus", &HLT_L1UnpairedBunchBptxMinus, &b_HLT_L1UnpairedBunchBptxMinus);
   fChain->SetBranchAddress("HLT_L1UnpairedBunchBptxPlus", &HLT_L1UnpairedBunchBptxPlus, &b_HLT_L1UnpairedBunchBptxPlus);
   fChain->SetBranchAddress("HLT_L1NotBptxOR", &HLT_L1NotBptxOR, &b_HLT_L1NotBptxOR);
   fChain->SetBranchAddress("HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   fChain->SetBranchAddress("HLT_CDC_L2cosmic_5_er1p0", &HLT_CDC_L2cosmic_5_er1p0, &b_HLT_CDC_L2cosmic_5_er1p0);
   fChain->SetBranchAddress("HLT_CDC_L2cosmic_5p5_er1p0", &HLT_CDC_L2cosmic_5p5_er1p0, &b_HLT_CDC_L2cosmic_5p5_er1p0);
   fChain->SetBranchAddress("HLT_HcalNZS", &HLT_HcalNZS, &b_HLT_HcalNZS);
   fChain->SetBranchAddress("HLT_HcalPhiSym", &HLT_HcalPhiSym, &b_HLT_HcalPhiSym);
   fChain->SetBranchAddress("HLT_HcalIsolatedbunch", &HLT_HcalIsolatedbunch, &b_HLT_HcalIsolatedbunch);
   fChain->SetBranchAddress("HLT_IsoTrackHB", &HLT_IsoTrackHB, &b_HLT_IsoTrackHB);
   fChain->SetBranchAddress("HLT_IsoTrackHE", &HLT_IsoTrackHE, &b_HLT_IsoTrackHE);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap", &HLT_ZeroBias_FirstCollisionAfterAbortGap, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap);
   fChain->SetBranchAddress("HLT_ZeroBias_IsolatedBunches", &HLT_ZeroBias_IsolatedBunches, &b_HLT_ZeroBias_IsolatedBunches);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionInTrain", &HLT_ZeroBias_FirstCollisionInTrain, &b_HLT_ZeroBias_FirstCollisionInTrain);
   fChain->SetBranchAddress("HLT_ZeroBias_LastCollisionInTrain", &HLT_ZeroBias_LastCollisionInTrain, &b_HLT_ZeroBias_LastCollisionInTrain);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstBXAfterTrain", &HLT_ZeroBias_FirstBXAfterTrain, &b_HLT_ZeroBias_FirstBXAfterTrain);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Rsq0p35", &HLT_Rsq0p35, &b_HLT_Rsq0p35);
   fChain->SetBranchAddress("HLT_Rsq0p40", &HLT_Rsq0p40, &b_HLT_Rsq0p40);
   fChain->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200", &HLT_RsqMR300_Rsq0p09_MR200, &b_HLT_RsqMR300_Rsq0p09_MR200);
   fChain->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200", &HLT_RsqMR320_Rsq0p09_MR200, &b_HLT_RsqMR320_Rsq0p09_MR200);
   fChain->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200_4jet", &HLT_RsqMR300_Rsq0p09_MR200_4jet, &b_HLT_RsqMR300_Rsq0p09_MR200_4jet);
   fChain->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200_4jet", &HLT_RsqMR320_Rsq0p09_MR200_4jet, &b_HLT_RsqMR320_Rsq0p09_MR200_4jet);
   fChain->SetBranchAddress("HLT_IsoMu27_MET90", &HLT_IsoMu27_MET90, &b_HLT_IsoMu27_MET90);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50, &b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_PFHT60", &HLT_PFMET100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMET100_PFMHT100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60", &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_SameSign", &HLT_Mu18_Mu9_SameSign, &b_HLT_Mu18_Mu9_SameSign);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_SameSign_DZ", &HLT_Mu18_Mu9_SameSign_DZ, &b_HLT_Mu18_Mu9_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu18_Mu9", &HLT_Mu18_Mu9, &b_HLT_Mu18_Mu9);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_DZ", &HLT_Mu18_Mu9_DZ, &b_HLT_Mu18_Mu9_DZ);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign", &HLT_Mu20_Mu10_SameSign, &b_HLT_Mu20_Mu10_SameSign);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign_DZ", &HLT_Mu20_Mu10_SameSign_DZ, &b_HLT_Mu20_Mu10_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu20_Mu10", &HLT_Mu20_Mu10, &b_HLT_Mu20_Mu10);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_DZ", &HLT_Mu20_Mu10_DZ, &b_HLT_Mu20_Mu10_DZ);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_SameSign", &HLT_Mu23_Mu12_SameSign, &b_HLT_Mu23_Mu12_SameSign);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_SameSign_DZ", &HLT_Mu23_Mu12_SameSign_DZ, &b_HLT_Mu23_Mu12_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu23_Mu12", &HLT_Mu23_Mu12, &b_HLT_Mu23_Mu12);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_DZ", &HLT_Mu23_Mu12_DZ, &b_HLT_Mu23_Mu12_DZ);
   fChain->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05, &b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05);
   fChain->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi", &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi, &b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi);
   fChain->SetBranchAddress("HLT_DoubleMu3_DCA_PFMET50_PFMHT60", &HLT_DoubleMu3_DCA_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60);
   fChain->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DCA", &HLT_TripleMu_5_3_3_Mass3p8_DCA, &b_HLT_TripleMu_5_3_3_Mass3p8_DCA);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15", &HLT_QuadPFJet98_83_71_15, &b_HLT_QuadPFJet98_83_71_15);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15", &HLT_QuadPFJet103_88_75_15, &b_HLT_QuadPFJet103_88_75_15);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15", &HLT_QuadPFJet105_88_76_15, &b_HLT_QuadPFJet105_88_76_15);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15", &HLT_QuadPFJet111_90_80_15, &b_HLT_QuadPFJet111_90_80_15);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4);
   fChain->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part0", &HLT_Mu12_IP6_part0, &b_HLT_Mu12_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part1", &HLT_Mu12_IP6_part1, &b_HLT_Mu12_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part2", &HLT_Mu12_IP6_part2, &b_HLT_Mu12_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part3", &HLT_Mu12_IP6_part3, &b_HLT_Mu12_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part4", &HLT_Mu12_IP6_part4, &b_HLT_Mu12_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part0", &HLT_Mu9_IP5_part0, &b_HLT_Mu9_IP5_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part1", &HLT_Mu9_IP5_part1, &b_HLT_Mu9_IP5_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part2", &HLT_Mu9_IP5_part2, &b_HLT_Mu9_IP5_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part3", &HLT_Mu9_IP5_part3, &b_HLT_Mu9_IP5_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part4", &HLT_Mu9_IP5_part4, &b_HLT_Mu9_IP5_part4);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part0", &HLT_Mu7_IP4_part0, &b_HLT_Mu7_IP4_part0);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part1", &HLT_Mu7_IP4_part1, &b_HLT_Mu7_IP4_part1);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part2", &HLT_Mu7_IP4_part2, &b_HLT_Mu7_IP4_part2);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part3", &HLT_Mu7_IP4_part3, &b_HLT_Mu7_IP4_part3);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part4", &HLT_Mu7_IP4_part4, &b_HLT_Mu7_IP4_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part0", &HLT_Mu9_IP4_part0, &b_HLT_Mu9_IP4_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part1", &HLT_Mu9_IP4_part1, &b_HLT_Mu9_IP4_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part2", &HLT_Mu9_IP4_part2, &b_HLT_Mu9_IP4_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part3", &HLT_Mu9_IP4_part3, &b_HLT_Mu9_IP4_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part4", &HLT_Mu9_IP4_part4, &b_HLT_Mu9_IP4_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part0", &HLT_Mu8_IP5_part0, &b_HLT_Mu8_IP5_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part1", &HLT_Mu8_IP5_part1, &b_HLT_Mu8_IP5_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part2", &HLT_Mu8_IP5_part2, &b_HLT_Mu8_IP5_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part3", &HLT_Mu8_IP5_part3, &b_HLT_Mu8_IP5_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part4", &HLT_Mu8_IP5_part4, &b_HLT_Mu8_IP5_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part0", &HLT_Mu8_IP6_part0, &b_HLT_Mu8_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part1", &HLT_Mu8_IP6_part1, &b_HLT_Mu8_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part2", &HLT_Mu8_IP6_part2, &b_HLT_Mu8_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part3", &HLT_Mu8_IP6_part3, &b_HLT_Mu8_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part4", &HLT_Mu8_IP6_part4, &b_HLT_Mu8_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part0", &HLT_Mu9_IP6_part0, &b_HLT_Mu9_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part1", &HLT_Mu9_IP6_part1, &b_HLT_Mu9_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part2", &HLT_Mu9_IP6_part2, &b_HLT_Mu9_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part3", &HLT_Mu9_IP6_part3, &b_HLT_Mu9_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part4", &HLT_Mu9_IP6_part4, &b_HLT_Mu9_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part0", &HLT_Mu8_IP3_part0, &b_HLT_Mu8_IP3_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part1", &HLT_Mu8_IP3_part1, &b_HLT_Mu8_IP3_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part2", &HLT_Mu8_IP3_part2, &b_HLT_Mu8_IP3_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part3", &HLT_Mu8_IP3_part3, &b_HLT_Mu8_IP3_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part4", &HLT_Mu8_IP3_part4, &b_HLT_Mu8_IP3_part4);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_TrkMu6NoFiltersNoVtx", &HLT_TrkMu6NoFiltersNoVtx, &b_HLT_TrkMu6NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu16NoFiltersNoVtx", &HLT_TrkMu16NoFiltersNoVtx, &b_HLT_TrkMu16NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_DoubleTrkMu_16_6_NoFiltersNoVtx", &HLT_DoubleTrkMu_16_6_NoFiltersNoVtx, &b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx);
   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   fChain->SetBranchAddress("Jet_pt_raw", Jet_pt_raw, &b_Jet_pt_raw);
   fChain->SetBranchAddress("Jet_pt_nom", Jet_pt_nom, &b_Jet_pt_nom);
   fChain->SetBranchAddress("Jet_mass_raw", Jet_mass_raw, &b_Jet_mass_raw);
   fChain->SetBranchAddress("Jet_mass_nom", Jet_mass_nom, &b_Jet_mass_nom);
   fChain->SetBranchAddress("Jet_corr_JEC", Jet_corr_JEC, &b_Jet_corr_JEC);
   fChain->SetBranchAddress("Jet_corr_JER", Jet_corr_JER, &b_Jet_corr_JER);
   fChain->SetBranchAddress("MET_pt_nom", &MET_pt_nom, &b_MET_pt_nom);
   fChain->SetBranchAddress("MET_phi_nom", &MET_phi_nom, &b_MET_phi_nom);
   fChain->SetBranchAddress("MET_pt_jer", &MET_pt_jer, &b_MET_pt_jer);
   fChain->SetBranchAddress("MET_phi_jer", &MET_phi_jer, &b_MET_phi_jer);
   fChain->SetBranchAddress("Jet_pt_jerUp", Jet_pt_jerUp, &b_Jet_pt_jerUp);
   fChain->SetBranchAddress("Jet_mass_jerUp", Jet_mass_jerUp, &b_Jet_mass_jerUp);
   fChain->SetBranchAddress("MET_pt_jerUp", &MET_pt_jerUp, &b_MET_pt_jerUp);
   fChain->SetBranchAddress("MET_phi_jerUp", &MET_phi_jerUp, &b_MET_phi_jerUp);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteStatUp", Jet_pt_jesAbsoluteStatUp, &b_Jet_pt_jesAbsoluteStatUp);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteStatUp", Jet_mass_jesAbsoluteStatUp, &b_Jet_mass_jesAbsoluteStatUp);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteStatUp", &MET_pt_jesAbsoluteStatUp, &b_MET_pt_jesAbsoluteStatUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteStatUp", &MET_phi_jesAbsoluteStatUp, &b_MET_phi_jesAbsoluteStatUp);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteScaleUp", Jet_pt_jesAbsoluteScaleUp, &b_Jet_pt_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteScaleUp", Jet_mass_jesAbsoluteScaleUp, &b_Jet_mass_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteScaleUp", &MET_pt_jesAbsoluteScaleUp, &b_MET_pt_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteScaleUp", &MET_phi_jesAbsoluteScaleUp, &b_MET_phi_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteSampleUp", Jet_pt_jesAbsoluteSampleUp, &b_Jet_pt_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteSampleUp", Jet_mass_jesAbsoluteSampleUp, &b_Jet_mass_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteSampleUp", &MET_pt_jesAbsoluteSampleUp, &b_MET_pt_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteSampleUp", &MET_phi_jesAbsoluteSampleUp, &b_MET_phi_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteFlavMapUp", Jet_pt_jesAbsoluteFlavMapUp, &b_Jet_pt_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteFlavMapUp", Jet_mass_jesAbsoluteFlavMapUp, &b_Jet_mass_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteFlavMapUp", &MET_pt_jesAbsoluteFlavMapUp, &b_MET_pt_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteFlavMapUp", &MET_phi_jesAbsoluteFlavMapUp, &b_MET_phi_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteMPFBiasUp", Jet_pt_jesAbsoluteMPFBiasUp, &b_Jet_pt_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteMPFBiasUp", Jet_mass_jesAbsoluteMPFBiasUp, &b_Jet_mass_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteMPFBiasUp", &MET_pt_jesAbsoluteMPFBiasUp, &b_MET_pt_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteMPFBiasUp", &MET_phi_jesAbsoluteMPFBiasUp, &b_MET_phi_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("Jet_pt_jesFragmentationUp", Jet_pt_jesFragmentationUp, &b_Jet_pt_jesFragmentationUp);
   fChain->SetBranchAddress("Jet_mass_jesFragmentationUp", Jet_mass_jesFragmentationUp, &b_Jet_mass_jesFragmentationUp);
   fChain->SetBranchAddress("MET_pt_jesFragmentationUp", &MET_pt_jesFragmentationUp, &b_MET_pt_jesFragmentationUp);
   fChain->SetBranchAddress("MET_phi_jesFragmentationUp", &MET_phi_jesFragmentationUp, &b_MET_phi_jesFragmentationUp);
   fChain->SetBranchAddress("Jet_pt_jesSinglePionECALUp", Jet_pt_jesSinglePionECALUp, &b_Jet_pt_jesSinglePionECALUp);
   fChain->SetBranchAddress("Jet_mass_jesSinglePionECALUp", Jet_mass_jesSinglePionECALUp, &b_Jet_mass_jesSinglePionECALUp);
   fChain->SetBranchAddress("MET_pt_jesSinglePionECALUp", &MET_pt_jesSinglePionECALUp, &b_MET_pt_jesSinglePionECALUp);
   fChain->SetBranchAddress("MET_phi_jesSinglePionECALUp", &MET_phi_jesSinglePionECALUp, &b_MET_phi_jesSinglePionECALUp);
   fChain->SetBranchAddress("Jet_pt_jesSinglePionHCALUp", Jet_pt_jesSinglePionHCALUp, &b_Jet_pt_jesSinglePionHCALUp);
   fChain->SetBranchAddress("Jet_mass_jesSinglePionHCALUp", Jet_mass_jesSinglePionHCALUp, &b_Jet_mass_jesSinglePionHCALUp);
   fChain->SetBranchAddress("MET_pt_jesSinglePionHCALUp", &MET_pt_jesSinglePionHCALUp, &b_MET_pt_jesSinglePionHCALUp);
   fChain->SetBranchAddress("MET_phi_jesSinglePionHCALUp", &MET_phi_jesSinglePionHCALUp, &b_MET_phi_jesSinglePionHCALUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorQCDUp", Jet_pt_jesFlavorQCDUp, &b_Jet_pt_jesFlavorQCDUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorQCDUp", Jet_mass_jesFlavorQCDUp, &b_Jet_mass_jesFlavorQCDUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorQCDUp", &MET_pt_jesFlavorQCDUp, &b_MET_pt_jesFlavorQCDUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorQCDUp", &MET_phi_jesFlavorQCDUp, &b_MET_phi_jesFlavorQCDUp);
   fChain->SetBranchAddress("Jet_pt_jesTimePtEtaUp", Jet_pt_jesTimePtEtaUp, &b_Jet_pt_jesTimePtEtaUp);
   fChain->SetBranchAddress("Jet_mass_jesTimePtEtaUp", Jet_mass_jesTimePtEtaUp, &b_Jet_mass_jesTimePtEtaUp);
   fChain->SetBranchAddress("MET_pt_jesTimePtEtaUp", &MET_pt_jesTimePtEtaUp, &b_MET_pt_jesTimePtEtaUp);
   fChain->SetBranchAddress("MET_phi_jesTimePtEtaUp", &MET_phi_jesTimePtEtaUp, &b_MET_phi_jesTimePtEtaUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJEREC1Up", Jet_pt_jesRelativeJEREC1Up, &b_Jet_pt_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJEREC1Up", Jet_mass_jesRelativeJEREC1Up, &b_Jet_mass_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("MET_pt_jesRelativeJEREC1Up", &MET_pt_jesRelativeJEREC1Up, &b_MET_pt_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("MET_phi_jesRelativeJEREC1Up", &MET_phi_jesRelativeJEREC1Up, &b_MET_phi_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJEREC2Up", Jet_pt_jesRelativeJEREC2Up, &b_Jet_pt_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJEREC2Up", Jet_mass_jesRelativeJEREC2Up, &b_Jet_mass_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("MET_pt_jesRelativeJEREC2Up", &MET_pt_jesRelativeJEREC2Up, &b_MET_pt_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("MET_phi_jesRelativeJEREC2Up", &MET_phi_jesRelativeJEREC2Up, &b_MET_phi_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJERHFUp", Jet_pt_jesRelativeJERHFUp, &b_Jet_pt_jesRelativeJERHFUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJERHFUp", Jet_mass_jesRelativeJERHFUp, &b_Jet_mass_jesRelativeJERHFUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeJERHFUp", &MET_pt_jesRelativeJERHFUp, &b_MET_pt_jesRelativeJERHFUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeJERHFUp", &MET_phi_jesRelativeJERHFUp, &b_MET_phi_jesRelativeJERHFUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtBBUp", Jet_pt_jesRelativePtBBUp, &b_Jet_pt_jesRelativePtBBUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtBBUp", Jet_mass_jesRelativePtBBUp, &b_Jet_mass_jesRelativePtBBUp);
   fChain->SetBranchAddress("MET_pt_jesRelativePtBBUp", &MET_pt_jesRelativePtBBUp, &b_MET_pt_jesRelativePtBBUp);
   fChain->SetBranchAddress("MET_phi_jesRelativePtBBUp", &MET_phi_jesRelativePtBBUp, &b_MET_phi_jesRelativePtBBUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtEC1Up", Jet_pt_jesRelativePtEC1Up, &b_Jet_pt_jesRelativePtEC1Up);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtEC1Up", Jet_mass_jesRelativePtEC1Up, &b_Jet_mass_jesRelativePtEC1Up);
   fChain->SetBranchAddress("MET_pt_jesRelativePtEC1Up", &MET_pt_jesRelativePtEC1Up, &b_MET_pt_jesRelativePtEC1Up);
   fChain->SetBranchAddress("MET_phi_jesRelativePtEC1Up", &MET_phi_jesRelativePtEC1Up, &b_MET_phi_jesRelativePtEC1Up);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtEC2Up", Jet_pt_jesRelativePtEC2Up, &b_Jet_pt_jesRelativePtEC2Up);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtEC2Up", Jet_mass_jesRelativePtEC2Up, &b_Jet_mass_jesRelativePtEC2Up);
   fChain->SetBranchAddress("MET_pt_jesRelativePtEC2Up", &MET_pt_jesRelativePtEC2Up, &b_MET_pt_jesRelativePtEC2Up);
   fChain->SetBranchAddress("MET_phi_jesRelativePtEC2Up", &MET_phi_jesRelativePtEC2Up, &b_MET_phi_jesRelativePtEC2Up);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtHFUp", Jet_pt_jesRelativePtHFUp, &b_Jet_pt_jesRelativePtHFUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtHFUp", Jet_mass_jesRelativePtHFUp, &b_Jet_mass_jesRelativePtHFUp);
   fChain->SetBranchAddress("MET_pt_jesRelativePtHFUp", &MET_pt_jesRelativePtHFUp, &b_MET_pt_jesRelativePtHFUp);
   fChain->SetBranchAddress("MET_phi_jesRelativePtHFUp", &MET_phi_jesRelativePtHFUp, &b_MET_phi_jesRelativePtHFUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeBalUp", Jet_pt_jesRelativeBalUp, &b_Jet_pt_jesRelativeBalUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeBalUp", Jet_mass_jesRelativeBalUp, &b_Jet_mass_jesRelativeBalUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeBalUp", &MET_pt_jesRelativeBalUp, &b_MET_pt_jesRelativeBalUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeBalUp", &MET_phi_jesRelativeBalUp, &b_MET_phi_jesRelativeBalUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeSampleUp", Jet_pt_jesRelativeSampleUp, &b_Jet_pt_jesRelativeSampleUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeSampleUp", Jet_mass_jesRelativeSampleUp, &b_Jet_mass_jesRelativeSampleUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeSampleUp", &MET_pt_jesRelativeSampleUp, &b_MET_pt_jesRelativeSampleUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeSampleUp", &MET_phi_jesRelativeSampleUp, &b_MET_phi_jesRelativeSampleUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeFSRUp", Jet_pt_jesRelativeFSRUp, &b_Jet_pt_jesRelativeFSRUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeFSRUp", Jet_mass_jesRelativeFSRUp, &b_Jet_mass_jesRelativeFSRUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeFSRUp", &MET_pt_jesRelativeFSRUp, &b_MET_pt_jesRelativeFSRUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeFSRUp", &MET_phi_jesRelativeFSRUp, &b_MET_phi_jesRelativeFSRUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatFSRUp", Jet_pt_jesRelativeStatFSRUp, &b_Jet_pt_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatFSRUp", Jet_mass_jesRelativeStatFSRUp, &b_Jet_mass_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatFSRUp", &MET_pt_jesRelativeStatFSRUp, &b_MET_pt_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatFSRUp", &MET_phi_jesRelativeStatFSRUp, &b_MET_phi_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatECUp", Jet_pt_jesRelativeStatECUp, &b_Jet_pt_jesRelativeStatECUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatECUp", Jet_mass_jesRelativeStatECUp, &b_Jet_mass_jesRelativeStatECUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatECUp", &MET_pt_jesRelativeStatECUp, &b_MET_pt_jesRelativeStatECUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatECUp", &MET_phi_jesRelativeStatECUp, &b_MET_phi_jesRelativeStatECUp);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatHFUp", Jet_pt_jesRelativeStatHFUp, &b_Jet_pt_jesRelativeStatHFUp);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatHFUp", Jet_mass_jesRelativeStatHFUp, &b_Jet_mass_jesRelativeStatHFUp);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatHFUp", &MET_pt_jesRelativeStatHFUp, &b_MET_pt_jesRelativeStatHFUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatHFUp", &MET_phi_jesRelativeStatHFUp, &b_MET_phi_jesRelativeStatHFUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpDataMCUp", Jet_pt_jesPileUpDataMCUp, &b_Jet_pt_jesPileUpDataMCUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpDataMCUp", Jet_mass_jesPileUpDataMCUp, &b_Jet_mass_jesPileUpDataMCUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpDataMCUp", &MET_pt_jesPileUpDataMCUp, &b_MET_pt_jesPileUpDataMCUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpDataMCUp", &MET_phi_jesPileUpDataMCUp, &b_MET_phi_jesPileUpDataMCUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtRefUp", Jet_pt_jesPileUpPtRefUp, &b_Jet_pt_jesPileUpPtRefUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtRefUp", Jet_mass_jesPileUpPtRefUp, &b_Jet_mass_jesPileUpPtRefUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtRefUp", &MET_pt_jesPileUpPtRefUp, &b_MET_pt_jesPileUpPtRefUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtRefUp", &MET_phi_jesPileUpPtRefUp, &b_MET_phi_jesPileUpPtRefUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtBBUp", Jet_pt_jesPileUpPtBBUp, &b_Jet_pt_jesPileUpPtBBUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtBBUp", Jet_mass_jesPileUpPtBBUp, &b_Jet_mass_jesPileUpPtBBUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtBBUp", &MET_pt_jesPileUpPtBBUp, &b_MET_pt_jesPileUpPtBBUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtBBUp", &MET_phi_jesPileUpPtBBUp, &b_MET_phi_jesPileUpPtBBUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtEC1Up", Jet_pt_jesPileUpPtEC1Up, &b_Jet_pt_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtEC1Up", Jet_mass_jesPileUpPtEC1Up, &b_Jet_mass_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtEC1Up", &MET_pt_jesPileUpPtEC1Up, &b_MET_pt_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtEC1Up", &MET_phi_jesPileUpPtEC1Up, &b_MET_phi_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtEC2Up", Jet_pt_jesPileUpPtEC2Up, &b_Jet_pt_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtEC2Up", Jet_mass_jesPileUpPtEC2Up, &b_Jet_mass_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtEC2Up", &MET_pt_jesPileUpPtEC2Up, &b_MET_pt_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtEC2Up", &MET_phi_jesPileUpPtEC2Up, &b_MET_phi_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtHFUp", Jet_pt_jesPileUpPtHFUp, &b_Jet_pt_jesPileUpPtHFUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtHFUp", Jet_mass_jesPileUpPtHFUp, &b_Jet_mass_jesPileUpPtHFUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtHFUp", &MET_pt_jesPileUpPtHFUp, &b_MET_pt_jesPileUpPtHFUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtHFUp", &MET_phi_jesPileUpPtHFUp, &b_MET_phi_jesPileUpPtHFUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpMuZeroUp", Jet_pt_jesPileUpMuZeroUp, &b_Jet_pt_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpMuZeroUp", Jet_mass_jesPileUpMuZeroUp, &b_Jet_mass_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpMuZeroUp", &MET_pt_jesPileUpMuZeroUp, &b_MET_pt_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpMuZeroUp", &MET_phi_jesPileUpMuZeroUp, &b_MET_phi_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("Jet_pt_jesPileUpEnvelopeUp", Jet_pt_jesPileUpEnvelopeUp, &b_Jet_pt_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("Jet_mass_jesPileUpEnvelopeUp", Jet_mass_jesPileUpEnvelopeUp, &b_Jet_mass_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("MET_pt_jesPileUpEnvelopeUp", &MET_pt_jesPileUpEnvelopeUp, &b_MET_pt_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("MET_phi_jesPileUpEnvelopeUp", &MET_phi_jesPileUpEnvelopeUp, &b_MET_phi_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalPileUpUp", Jet_pt_jesSubTotalPileUpUp, &b_Jet_pt_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalPileUpUp", Jet_mass_jesSubTotalPileUpUp, &b_Jet_mass_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalPileUpUp", &MET_pt_jesSubTotalPileUpUp, &b_MET_pt_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalPileUpUp", &MET_phi_jesSubTotalPileUpUp, &b_MET_phi_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalRelativeUp", Jet_pt_jesSubTotalRelativeUp, &b_Jet_pt_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalRelativeUp", Jet_mass_jesSubTotalRelativeUp, &b_Jet_mass_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalRelativeUp", &MET_pt_jesSubTotalRelativeUp, &b_MET_pt_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalRelativeUp", &MET_phi_jesSubTotalRelativeUp, &b_MET_phi_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalPtUp", Jet_pt_jesSubTotalPtUp, &b_Jet_pt_jesSubTotalPtUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalPtUp", Jet_mass_jesSubTotalPtUp, &b_Jet_mass_jesSubTotalPtUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalPtUp", &MET_pt_jesSubTotalPtUp, &b_MET_pt_jesSubTotalPtUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalPtUp", &MET_phi_jesSubTotalPtUp, &b_MET_phi_jesSubTotalPtUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalScaleUp", Jet_pt_jesSubTotalScaleUp, &b_Jet_pt_jesSubTotalScaleUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalScaleUp", Jet_mass_jesSubTotalScaleUp, &b_Jet_mass_jesSubTotalScaleUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalScaleUp", &MET_pt_jesSubTotalScaleUp, &b_MET_pt_jesSubTotalScaleUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalScaleUp", &MET_phi_jesSubTotalScaleUp, &b_MET_phi_jesSubTotalScaleUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalAbsoluteUp", Jet_pt_jesSubTotalAbsoluteUp, &b_Jet_pt_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalAbsoluteUp", Jet_mass_jesSubTotalAbsoluteUp, &b_Jet_mass_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalAbsoluteUp", &MET_pt_jesSubTotalAbsoluteUp, &b_MET_pt_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalAbsoluteUp", &MET_phi_jesSubTotalAbsoluteUp, &b_MET_phi_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalMCUp", Jet_pt_jesSubTotalMCUp, &b_Jet_pt_jesSubTotalMCUp);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalMCUp", Jet_mass_jesSubTotalMCUp, &b_Jet_mass_jesSubTotalMCUp);
   fChain->SetBranchAddress("MET_pt_jesSubTotalMCUp", &MET_pt_jesSubTotalMCUp, &b_MET_pt_jesSubTotalMCUp);
   fChain->SetBranchAddress("MET_phi_jesSubTotalMCUp", &MET_phi_jesSubTotalMCUp, &b_MET_phi_jesSubTotalMCUp);
   fChain->SetBranchAddress("Jet_pt_jesTotalUp", Jet_pt_jesTotalUp, &b_Jet_pt_jesTotalUp);
   fChain->SetBranchAddress("Jet_mass_jesTotalUp", Jet_mass_jesTotalUp, &b_Jet_mass_jesTotalUp);
   fChain->SetBranchAddress("MET_pt_jesTotalUp", &MET_pt_jesTotalUp, &b_MET_pt_jesTotalUp);
   fChain->SetBranchAddress("MET_phi_jesTotalUp", &MET_phi_jesTotalUp, &b_MET_phi_jesTotalUp);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoFlavorUp", Jet_pt_jesTotalNoFlavorUp, &b_Jet_pt_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoFlavorUp", Jet_mass_jesTotalNoFlavorUp, &b_Jet_mass_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("MET_pt_jesTotalNoFlavorUp", &MET_pt_jesTotalNoFlavorUp, &b_MET_pt_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("MET_phi_jesTotalNoFlavorUp", &MET_phi_jesTotalNoFlavorUp, &b_MET_phi_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoTimeUp", Jet_pt_jesTotalNoTimeUp, &b_Jet_pt_jesTotalNoTimeUp);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoTimeUp", Jet_mass_jesTotalNoTimeUp, &b_Jet_mass_jesTotalNoTimeUp);
   fChain->SetBranchAddress("MET_pt_jesTotalNoTimeUp", &MET_pt_jesTotalNoTimeUp, &b_MET_pt_jesTotalNoTimeUp);
   fChain->SetBranchAddress("MET_phi_jesTotalNoTimeUp", &MET_phi_jesTotalNoTimeUp, &b_MET_phi_jesTotalNoTimeUp);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoFlavorNoTimeUp", Jet_pt_jesTotalNoFlavorNoTimeUp, &b_Jet_pt_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoFlavorNoTimeUp", Jet_mass_jesTotalNoFlavorNoTimeUp, &b_Jet_mass_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("MET_pt_jesTotalNoFlavorNoTimeUp", &MET_pt_jesTotalNoFlavorNoTimeUp, &b_MET_pt_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("MET_phi_jesTotalNoFlavorNoTimeUp", &MET_phi_jesTotalNoFlavorNoTimeUp, &b_MET_phi_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorZJetUp", Jet_pt_jesFlavorZJetUp, &b_Jet_pt_jesFlavorZJetUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorZJetUp", Jet_mass_jesFlavorZJetUp, &b_Jet_mass_jesFlavorZJetUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorZJetUp", &MET_pt_jesFlavorZJetUp, &b_MET_pt_jesFlavorZJetUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorZJetUp", &MET_phi_jesFlavorZJetUp, &b_MET_phi_jesFlavorZJetUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPhotonJetUp", Jet_pt_jesFlavorPhotonJetUp, &b_Jet_pt_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPhotonJetUp", Jet_mass_jesFlavorPhotonJetUp, &b_Jet_mass_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorPhotonJetUp", &MET_pt_jesFlavorPhotonJetUp, &b_MET_pt_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorPhotonJetUp", &MET_phi_jesFlavorPhotonJetUp, &b_MET_phi_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureGluonUp", Jet_pt_jesFlavorPureGluonUp, &b_Jet_pt_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureGluonUp", Jet_mass_jesFlavorPureGluonUp, &b_Jet_mass_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureGluonUp", &MET_pt_jesFlavorPureGluonUp, &b_MET_pt_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureGluonUp", &MET_phi_jesFlavorPureGluonUp, &b_MET_phi_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureQuarkUp", Jet_pt_jesFlavorPureQuarkUp, &b_Jet_pt_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureQuarkUp", Jet_mass_jesFlavorPureQuarkUp, &b_Jet_mass_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureQuarkUp", &MET_pt_jesFlavorPureQuarkUp, &b_MET_pt_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureQuarkUp", &MET_phi_jesFlavorPureQuarkUp, &b_MET_phi_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureCharmUp", Jet_pt_jesFlavorPureCharmUp, &b_Jet_pt_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureCharmUp", Jet_mass_jesFlavorPureCharmUp, &b_Jet_mass_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureCharmUp", &MET_pt_jesFlavorPureCharmUp, &b_MET_pt_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureCharmUp", &MET_phi_jesFlavorPureCharmUp, &b_MET_phi_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureBottomUp", Jet_pt_jesFlavorPureBottomUp, &b_Jet_pt_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureBottomUp", Jet_mass_jesFlavorPureBottomUp, &b_Jet_mass_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureBottomUp", &MET_pt_jesFlavorPureBottomUp, &b_MET_pt_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureBottomUp", &MET_phi_jesFlavorPureBottomUp, &b_MET_phi_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunAUp", Jet_pt_jesTimeRunAUp, &b_Jet_pt_jesTimeRunAUp);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunAUp", Jet_mass_jesTimeRunAUp, &b_Jet_mass_jesTimeRunAUp);
   fChain->SetBranchAddress("MET_pt_jesTimeRunAUp", &MET_pt_jesTimeRunAUp, &b_MET_pt_jesTimeRunAUp);
   fChain->SetBranchAddress("MET_phi_jesTimeRunAUp", &MET_phi_jesTimeRunAUp, &b_MET_phi_jesTimeRunAUp);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunBUp", Jet_pt_jesTimeRunBUp, &b_Jet_pt_jesTimeRunBUp);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunBUp", Jet_mass_jesTimeRunBUp, &b_Jet_mass_jesTimeRunBUp);
   fChain->SetBranchAddress("MET_pt_jesTimeRunBUp", &MET_pt_jesTimeRunBUp, &b_MET_pt_jesTimeRunBUp);
   fChain->SetBranchAddress("MET_phi_jesTimeRunBUp", &MET_phi_jesTimeRunBUp, &b_MET_phi_jesTimeRunBUp);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunCUp", Jet_pt_jesTimeRunCUp, &b_Jet_pt_jesTimeRunCUp);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunCUp", Jet_mass_jesTimeRunCUp, &b_Jet_mass_jesTimeRunCUp);
   fChain->SetBranchAddress("MET_pt_jesTimeRunCUp", &MET_pt_jesTimeRunCUp, &b_MET_pt_jesTimeRunCUp);
   fChain->SetBranchAddress("MET_phi_jesTimeRunCUp", &MET_phi_jesTimeRunCUp, &b_MET_phi_jesTimeRunCUp);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunDUp", Jet_pt_jesTimeRunDUp, &b_Jet_pt_jesTimeRunDUp);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunDUp", Jet_mass_jesTimeRunDUp, &b_Jet_mass_jesTimeRunDUp);
   fChain->SetBranchAddress("MET_pt_jesTimeRunDUp", &MET_pt_jesTimeRunDUp, &b_MET_pt_jesTimeRunDUp);
   fChain->SetBranchAddress("MET_phi_jesTimeRunDUp", &MET_phi_jesTimeRunDUp, &b_MET_phi_jesTimeRunDUp);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupMPFInSituUp", Jet_pt_jesCorrelationGroupMPFInSituUp, &b_Jet_pt_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupMPFInSituUp", Jet_mass_jesCorrelationGroupMPFInSituUp, &b_Jet_mass_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupMPFInSituUp", &MET_pt_jesCorrelationGroupMPFInSituUp, &b_MET_pt_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupMPFInSituUp", &MET_phi_jesCorrelationGroupMPFInSituUp, &b_MET_phi_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupIntercalibrationUp", Jet_pt_jesCorrelationGroupIntercalibrationUp, &b_Jet_pt_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupIntercalibrationUp", Jet_mass_jesCorrelationGroupIntercalibrationUp, &b_Jet_mass_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupIntercalibrationUp", &MET_pt_jesCorrelationGroupIntercalibrationUp, &b_MET_pt_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupIntercalibrationUp", &MET_phi_jesCorrelationGroupIntercalibrationUp, &b_MET_phi_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupbJESUp", Jet_pt_jesCorrelationGroupbJESUp, &b_Jet_pt_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupbJESUp", Jet_mass_jesCorrelationGroupbJESUp, &b_Jet_mass_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupbJESUp", &MET_pt_jesCorrelationGroupbJESUp, &b_MET_pt_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupbJESUp", &MET_phi_jesCorrelationGroupbJESUp, &b_MET_phi_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupFlavorUp", Jet_pt_jesCorrelationGroupFlavorUp, &b_Jet_pt_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupFlavorUp", Jet_mass_jesCorrelationGroupFlavorUp, &b_Jet_mass_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupFlavorUp", &MET_pt_jesCorrelationGroupFlavorUp, &b_MET_pt_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupFlavorUp", &MET_phi_jesCorrelationGroupFlavorUp, &b_MET_phi_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupUncorrelatedUp", Jet_pt_jesCorrelationGroupUncorrelatedUp, &b_Jet_pt_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupUncorrelatedUp", Jet_mass_jesCorrelationGroupUncorrelatedUp, &b_Jet_mass_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupUncorrelatedUp", &MET_pt_jesCorrelationGroupUncorrelatedUp, &b_MET_pt_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupUncorrelatedUp", &MET_phi_jesCorrelationGroupUncorrelatedUp, &b_MET_phi_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("MET_pt_unclustEnUp", &MET_pt_unclustEnUp, &b_MET_pt_unclustEnUp);
   fChain->SetBranchAddress("MET_phi_unclustEnUp", &MET_phi_unclustEnUp, &b_MET_phi_unclustEnUp);
   fChain->SetBranchAddress("Jet_pt_jerDown", Jet_pt_jerDown, &b_Jet_pt_jerDown);
   fChain->SetBranchAddress("Jet_mass_jerDown", Jet_mass_jerDown, &b_Jet_mass_jerDown);
   fChain->SetBranchAddress("MET_pt_jerDown", &MET_pt_jerDown, &b_MET_pt_jerDown);
   fChain->SetBranchAddress("MET_phi_jerDown", &MET_phi_jerDown, &b_MET_phi_jerDown);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteStatDown", Jet_pt_jesAbsoluteStatDown, &b_Jet_pt_jesAbsoluteStatDown);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteStatDown", Jet_mass_jesAbsoluteStatDown, &b_Jet_mass_jesAbsoluteStatDown);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteStatDown", &MET_pt_jesAbsoluteStatDown, &b_MET_pt_jesAbsoluteStatDown);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteStatDown", &MET_phi_jesAbsoluteStatDown, &b_MET_phi_jesAbsoluteStatDown);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteScaleDown", Jet_pt_jesAbsoluteScaleDown, &b_Jet_pt_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteScaleDown", Jet_mass_jesAbsoluteScaleDown, &b_Jet_mass_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteScaleDown", &MET_pt_jesAbsoluteScaleDown, &b_MET_pt_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteScaleDown", &MET_phi_jesAbsoluteScaleDown, &b_MET_phi_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteSampleDown", Jet_pt_jesAbsoluteSampleDown, &b_Jet_pt_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteSampleDown", Jet_mass_jesAbsoluteSampleDown, &b_Jet_mass_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteSampleDown", &MET_pt_jesAbsoluteSampleDown, &b_MET_pt_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteSampleDown", &MET_phi_jesAbsoluteSampleDown, &b_MET_phi_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteFlavMapDown", Jet_pt_jesAbsoluteFlavMapDown, &b_Jet_pt_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteFlavMapDown", Jet_mass_jesAbsoluteFlavMapDown, &b_Jet_mass_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteFlavMapDown", &MET_pt_jesAbsoluteFlavMapDown, &b_MET_pt_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteFlavMapDown", &MET_phi_jesAbsoluteFlavMapDown, &b_MET_phi_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("Jet_pt_jesAbsoluteMPFBiasDown", Jet_pt_jesAbsoluteMPFBiasDown, &b_Jet_pt_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("Jet_mass_jesAbsoluteMPFBiasDown", Jet_mass_jesAbsoluteMPFBiasDown, &b_Jet_mass_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("MET_pt_jesAbsoluteMPFBiasDown", &MET_pt_jesAbsoluteMPFBiasDown, &b_MET_pt_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteMPFBiasDown", &MET_phi_jesAbsoluteMPFBiasDown, &b_MET_phi_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("Jet_pt_jesFragmentationDown", Jet_pt_jesFragmentationDown, &b_Jet_pt_jesFragmentationDown);
   fChain->SetBranchAddress("Jet_mass_jesFragmentationDown", Jet_mass_jesFragmentationDown, &b_Jet_mass_jesFragmentationDown);
   fChain->SetBranchAddress("MET_pt_jesFragmentationDown", &MET_pt_jesFragmentationDown, &b_MET_pt_jesFragmentationDown);
   fChain->SetBranchAddress("MET_phi_jesFragmentationDown", &MET_phi_jesFragmentationDown, &b_MET_phi_jesFragmentationDown);
   fChain->SetBranchAddress("Jet_pt_jesSinglePionECALDown", Jet_pt_jesSinglePionECALDown, &b_Jet_pt_jesSinglePionECALDown);
   fChain->SetBranchAddress("Jet_mass_jesSinglePionECALDown", Jet_mass_jesSinglePionECALDown, &b_Jet_mass_jesSinglePionECALDown);
   fChain->SetBranchAddress("MET_pt_jesSinglePionECALDown", &MET_pt_jesSinglePionECALDown, &b_MET_pt_jesSinglePionECALDown);
   fChain->SetBranchAddress("MET_phi_jesSinglePionECALDown", &MET_phi_jesSinglePionECALDown, &b_MET_phi_jesSinglePionECALDown);
   fChain->SetBranchAddress("Jet_pt_jesSinglePionHCALDown", Jet_pt_jesSinglePionHCALDown, &b_Jet_pt_jesSinglePionHCALDown);
   fChain->SetBranchAddress("Jet_mass_jesSinglePionHCALDown", Jet_mass_jesSinglePionHCALDown, &b_Jet_mass_jesSinglePionHCALDown);
   fChain->SetBranchAddress("MET_pt_jesSinglePionHCALDown", &MET_pt_jesSinglePionHCALDown, &b_MET_pt_jesSinglePionHCALDown);
   fChain->SetBranchAddress("MET_phi_jesSinglePionHCALDown", &MET_phi_jesSinglePionHCALDown, &b_MET_phi_jesSinglePionHCALDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorQCDDown", Jet_pt_jesFlavorQCDDown, &b_Jet_pt_jesFlavorQCDDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorQCDDown", Jet_mass_jesFlavorQCDDown, &b_Jet_mass_jesFlavorQCDDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorQCDDown", &MET_pt_jesFlavorQCDDown, &b_MET_pt_jesFlavorQCDDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorQCDDown", &MET_phi_jesFlavorQCDDown, &b_MET_phi_jesFlavorQCDDown);
   fChain->SetBranchAddress("Jet_pt_jesTimePtEtaDown", Jet_pt_jesTimePtEtaDown, &b_Jet_pt_jesTimePtEtaDown);
   fChain->SetBranchAddress("Jet_mass_jesTimePtEtaDown", Jet_mass_jesTimePtEtaDown, &b_Jet_mass_jesTimePtEtaDown);
   fChain->SetBranchAddress("MET_pt_jesTimePtEtaDown", &MET_pt_jesTimePtEtaDown, &b_MET_pt_jesTimePtEtaDown);
   fChain->SetBranchAddress("MET_phi_jesTimePtEtaDown", &MET_phi_jesTimePtEtaDown, &b_MET_phi_jesTimePtEtaDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJEREC1Down", Jet_pt_jesRelativeJEREC1Down, &b_Jet_pt_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJEREC1Down", Jet_mass_jesRelativeJEREC1Down, &b_Jet_mass_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("MET_pt_jesRelativeJEREC1Down", &MET_pt_jesRelativeJEREC1Down, &b_MET_pt_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("MET_phi_jesRelativeJEREC1Down", &MET_phi_jesRelativeJEREC1Down, &b_MET_phi_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJEREC2Down", Jet_pt_jesRelativeJEREC2Down, &b_Jet_pt_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJEREC2Down", Jet_mass_jesRelativeJEREC2Down, &b_Jet_mass_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("MET_pt_jesRelativeJEREC2Down", &MET_pt_jesRelativeJEREC2Down, &b_MET_pt_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("MET_phi_jesRelativeJEREC2Down", &MET_phi_jesRelativeJEREC2Down, &b_MET_phi_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("Jet_pt_jesRelativeJERHFDown", Jet_pt_jesRelativeJERHFDown, &b_Jet_pt_jesRelativeJERHFDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeJERHFDown", Jet_mass_jesRelativeJERHFDown, &b_Jet_mass_jesRelativeJERHFDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeJERHFDown", &MET_pt_jesRelativeJERHFDown, &b_MET_pt_jesRelativeJERHFDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeJERHFDown", &MET_phi_jesRelativeJERHFDown, &b_MET_phi_jesRelativeJERHFDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtBBDown", Jet_pt_jesRelativePtBBDown, &b_Jet_pt_jesRelativePtBBDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtBBDown", Jet_mass_jesRelativePtBBDown, &b_Jet_mass_jesRelativePtBBDown);
   fChain->SetBranchAddress("MET_pt_jesRelativePtBBDown", &MET_pt_jesRelativePtBBDown, &b_MET_pt_jesRelativePtBBDown);
   fChain->SetBranchAddress("MET_phi_jesRelativePtBBDown", &MET_phi_jesRelativePtBBDown, &b_MET_phi_jesRelativePtBBDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtEC1Down", Jet_pt_jesRelativePtEC1Down, &b_Jet_pt_jesRelativePtEC1Down);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtEC1Down", Jet_mass_jesRelativePtEC1Down, &b_Jet_mass_jesRelativePtEC1Down);
   fChain->SetBranchAddress("MET_pt_jesRelativePtEC1Down", &MET_pt_jesRelativePtEC1Down, &b_MET_pt_jesRelativePtEC1Down);
   fChain->SetBranchAddress("MET_phi_jesRelativePtEC1Down", &MET_phi_jesRelativePtEC1Down, &b_MET_phi_jesRelativePtEC1Down);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtEC2Down", Jet_pt_jesRelativePtEC2Down, &b_Jet_pt_jesRelativePtEC2Down);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtEC2Down", Jet_mass_jesRelativePtEC2Down, &b_Jet_mass_jesRelativePtEC2Down);
   fChain->SetBranchAddress("MET_pt_jesRelativePtEC2Down", &MET_pt_jesRelativePtEC2Down, &b_MET_pt_jesRelativePtEC2Down);
   fChain->SetBranchAddress("MET_phi_jesRelativePtEC2Down", &MET_phi_jesRelativePtEC2Down, &b_MET_phi_jesRelativePtEC2Down);
   fChain->SetBranchAddress("Jet_pt_jesRelativePtHFDown", Jet_pt_jesRelativePtHFDown, &b_Jet_pt_jesRelativePtHFDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativePtHFDown", Jet_mass_jesRelativePtHFDown, &b_Jet_mass_jesRelativePtHFDown);
   fChain->SetBranchAddress("MET_pt_jesRelativePtHFDown", &MET_pt_jesRelativePtHFDown, &b_MET_pt_jesRelativePtHFDown);
   fChain->SetBranchAddress("MET_phi_jesRelativePtHFDown", &MET_phi_jesRelativePtHFDown, &b_MET_phi_jesRelativePtHFDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeBalDown", Jet_pt_jesRelativeBalDown, &b_Jet_pt_jesRelativeBalDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeBalDown", Jet_mass_jesRelativeBalDown, &b_Jet_mass_jesRelativeBalDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeBalDown", &MET_pt_jesRelativeBalDown, &b_MET_pt_jesRelativeBalDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeBalDown", &MET_phi_jesRelativeBalDown, &b_MET_phi_jesRelativeBalDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeSampleDown", Jet_pt_jesRelativeSampleDown, &b_Jet_pt_jesRelativeSampleDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeSampleDown", Jet_mass_jesRelativeSampleDown, &b_Jet_mass_jesRelativeSampleDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeSampleDown", &MET_pt_jesRelativeSampleDown, &b_MET_pt_jesRelativeSampleDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeSampleDown", &MET_phi_jesRelativeSampleDown, &b_MET_phi_jesRelativeSampleDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeFSRDown", Jet_pt_jesRelativeFSRDown, &b_Jet_pt_jesRelativeFSRDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeFSRDown", Jet_mass_jesRelativeFSRDown, &b_Jet_mass_jesRelativeFSRDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeFSRDown", &MET_pt_jesRelativeFSRDown, &b_MET_pt_jesRelativeFSRDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeFSRDown", &MET_phi_jesRelativeFSRDown, &b_MET_phi_jesRelativeFSRDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatFSRDown", Jet_pt_jesRelativeStatFSRDown, &b_Jet_pt_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatFSRDown", Jet_mass_jesRelativeStatFSRDown, &b_Jet_mass_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatFSRDown", &MET_pt_jesRelativeStatFSRDown, &b_MET_pt_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatFSRDown", &MET_phi_jesRelativeStatFSRDown, &b_MET_phi_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatECDown", Jet_pt_jesRelativeStatECDown, &b_Jet_pt_jesRelativeStatECDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatECDown", Jet_mass_jesRelativeStatECDown, &b_Jet_mass_jesRelativeStatECDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatECDown", &MET_pt_jesRelativeStatECDown, &b_MET_pt_jesRelativeStatECDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatECDown", &MET_phi_jesRelativeStatECDown, &b_MET_phi_jesRelativeStatECDown);
   fChain->SetBranchAddress("Jet_pt_jesRelativeStatHFDown", Jet_pt_jesRelativeStatHFDown, &b_Jet_pt_jesRelativeStatHFDown);
   fChain->SetBranchAddress("Jet_mass_jesRelativeStatHFDown", Jet_mass_jesRelativeStatHFDown, &b_Jet_mass_jesRelativeStatHFDown);
   fChain->SetBranchAddress("MET_pt_jesRelativeStatHFDown", &MET_pt_jesRelativeStatHFDown, &b_MET_pt_jesRelativeStatHFDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeStatHFDown", &MET_phi_jesRelativeStatHFDown, &b_MET_phi_jesRelativeStatHFDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpDataMCDown", Jet_pt_jesPileUpDataMCDown, &b_Jet_pt_jesPileUpDataMCDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpDataMCDown", Jet_mass_jesPileUpDataMCDown, &b_Jet_mass_jesPileUpDataMCDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpDataMCDown", &MET_pt_jesPileUpDataMCDown, &b_MET_pt_jesPileUpDataMCDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpDataMCDown", &MET_phi_jesPileUpDataMCDown, &b_MET_phi_jesPileUpDataMCDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtRefDown", Jet_pt_jesPileUpPtRefDown, &b_Jet_pt_jesPileUpPtRefDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtRefDown", Jet_mass_jesPileUpPtRefDown, &b_Jet_mass_jesPileUpPtRefDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtRefDown", &MET_pt_jesPileUpPtRefDown, &b_MET_pt_jesPileUpPtRefDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtRefDown", &MET_phi_jesPileUpPtRefDown, &b_MET_phi_jesPileUpPtRefDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtBBDown", Jet_pt_jesPileUpPtBBDown, &b_Jet_pt_jesPileUpPtBBDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtBBDown", Jet_mass_jesPileUpPtBBDown, &b_Jet_mass_jesPileUpPtBBDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtBBDown", &MET_pt_jesPileUpPtBBDown, &b_MET_pt_jesPileUpPtBBDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtBBDown", &MET_phi_jesPileUpPtBBDown, &b_MET_phi_jesPileUpPtBBDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtEC1Down", Jet_pt_jesPileUpPtEC1Down, &b_Jet_pt_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtEC1Down", Jet_mass_jesPileUpPtEC1Down, &b_Jet_mass_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtEC1Down", &MET_pt_jesPileUpPtEC1Down, &b_MET_pt_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtEC1Down", &MET_phi_jesPileUpPtEC1Down, &b_MET_phi_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtEC2Down", Jet_pt_jesPileUpPtEC2Down, &b_Jet_pt_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtEC2Down", Jet_mass_jesPileUpPtEC2Down, &b_Jet_mass_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtEC2Down", &MET_pt_jesPileUpPtEC2Down, &b_MET_pt_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtEC2Down", &MET_phi_jesPileUpPtEC2Down, &b_MET_phi_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("Jet_pt_jesPileUpPtHFDown", Jet_pt_jesPileUpPtHFDown, &b_Jet_pt_jesPileUpPtHFDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpPtHFDown", Jet_mass_jesPileUpPtHFDown, &b_Jet_mass_jesPileUpPtHFDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpPtHFDown", &MET_pt_jesPileUpPtHFDown, &b_MET_pt_jesPileUpPtHFDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpPtHFDown", &MET_phi_jesPileUpPtHFDown, &b_MET_phi_jesPileUpPtHFDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpMuZeroDown", Jet_pt_jesPileUpMuZeroDown, &b_Jet_pt_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpMuZeroDown", Jet_mass_jesPileUpMuZeroDown, &b_Jet_mass_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpMuZeroDown", &MET_pt_jesPileUpMuZeroDown, &b_MET_pt_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpMuZeroDown", &MET_phi_jesPileUpMuZeroDown, &b_MET_phi_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("Jet_pt_jesPileUpEnvelopeDown", Jet_pt_jesPileUpEnvelopeDown, &b_Jet_pt_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("Jet_mass_jesPileUpEnvelopeDown", Jet_mass_jesPileUpEnvelopeDown, &b_Jet_mass_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("MET_pt_jesPileUpEnvelopeDown", &MET_pt_jesPileUpEnvelopeDown, &b_MET_pt_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("MET_phi_jesPileUpEnvelopeDown", &MET_phi_jesPileUpEnvelopeDown, &b_MET_phi_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalPileUpDown", Jet_pt_jesSubTotalPileUpDown, &b_Jet_pt_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalPileUpDown", Jet_mass_jesSubTotalPileUpDown, &b_Jet_mass_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalPileUpDown", &MET_pt_jesSubTotalPileUpDown, &b_MET_pt_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalPileUpDown", &MET_phi_jesSubTotalPileUpDown, &b_MET_phi_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalRelativeDown", Jet_pt_jesSubTotalRelativeDown, &b_Jet_pt_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalRelativeDown", Jet_mass_jesSubTotalRelativeDown, &b_Jet_mass_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalRelativeDown", &MET_pt_jesSubTotalRelativeDown, &b_MET_pt_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalRelativeDown", &MET_phi_jesSubTotalRelativeDown, &b_MET_phi_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalPtDown", Jet_pt_jesSubTotalPtDown, &b_Jet_pt_jesSubTotalPtDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalPtDown", Jet_mass_jesSubTotalPtDown, &b_Jet_mass_jesSubTotalPtDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalPtDown", &MET_pt_jesSubTotalPtDown, &b_MET_pt_jesSubTotalPtDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalPtDown", &MET_phi_jesSubTotalPtDown, &b_MET_phi_jesSubTotalPtDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalScaleDown", Jet_pt_jesSubTotalScaleDown, &b_Jet_pt_jesSubTotalScaleDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalScaleDown", Jet_mass_jesSubTotalScaleDown, &b_Jet_mass_jesSubTotalScaleDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalScaleDown", &MET_pt_jesSubTotalScaleDown, &b_MET_pt_jesSubTotalScaleDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalScaleDown", &MET_phi_jesSubTotalScaleDown, &b_MET_phi_jesSubTotalScaleDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalAbsoluteDown", Jet_pt_jesSubTotalAbsoluteDown, &b_Jet_pt_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalAbsoluteDown", Jet_mass_jesSubTotalAbsoluteDown, &b_Jet_mass_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalAbsoluteDown", &MET_pt_jesSubTotalAbsoluteDown, &b_MET_pt_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalAbsoluteDown", &MET_phi_jesSubTotalAbsoluteDown, &b_MET_phi_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("Jet_pt_jesSubTotalMCDown", Jet_pt_jesSubTotalMCDown, &b_Jet_pt_jesSubTotalMCDown);
   fChain->SetBranchAddress("Jet_mass_jesSubTotalMCDown", Jet_mass_jesSubTotalMCDown, &b_Jet_mass_jesSubTotalMCDown);
   fChain->SetBranchAddress("MET_pt_jesSubTotalMCDown", &MET_pt_jesSubTotalMCDown, &b_MET_pt_jesSubTotalMCDown);
   fChain->SetBranchAddress("MET_phi_jesSubTotalMCDown", &MET_phi_jesSubTotalMCDown, &b_MET_phi_jesSubTotalMCDown);
   fChain->SetBranchAddress("Jet_pt_jesTotalDown", Jet_pt_jesTotalDown, &b_Jet_pt_jesTotalDown);
   fChain->SetBranchAddress("Jet_mass_jesTotalDown", Jet_mass_jesTotalDown, &b_Jet_mass_jesTotalDown);
   fChain->SetBranchAddress("MET_pt_jesTotalDown", &MET_pt_jesTotalDown, &b_MET_pt_jesTotalDown);
   fChain->SetBranchAddress("MET_phi_jesTotalDown", &MET_phi_jesTotalDown, &b_MET_phi_jesTotalDown);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoFlavorDown", Jet_pt_jesTotalNoFlavorDown, &b_Jet_pt_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoFlavorDown", Jet_mass_jesTotalNoFlavorDown, &b_Jet_mass_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("MET_pt_jesTotalNoFlavorDown", &MET_pt_jesTotalNoFlavorDown, &b_MET_pt_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("MET_phi_jesTotalNoFlavorDown", &MET_phi_jesTotalNoFlavorDown, &b_MET_phi_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoTimeDown", Jet_pt_jesTotalNoTimeDown, &b_Jet_pt_jesTotalNoTimeDown);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoTimeDown", Jet_mass_jesTotalNoTimeDown, &b_Jet_mass_jesTotalNoTimeDown);
   fChain->SetBranchAddress("MET_pt_jesTotalNoTimeDown", &MET_pt_jesTotalNoTimeDown, &b_MET_pt_jesTotalNoTimeDown);
   fChain->SetBranchAddress("MET_phi_jesTotalNoTimeDown", &MET_phi_jesTotalNoTimeDown, &b_MET_phi_jesTotalNoTimeDown);
   fChain->SetBranchAddress("Jet_pt_jesTotalNoFlavorNoTimeDown", Jet_pt_jesTotalNoFlavorNoTimeDown, &b_Jet_pt_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("Jet_mass_jesTotalNoFlavorNoTimeDown", Jet_mass_jesTotalNoFlavorNoTimeDown, &b_Jet_mass_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("MET_pt_jesTotalNoFlavorNoTimeDown", &MET_pt_jesTotalNoFlavorNoTimeDown, &b_MET_pt_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("MET_phi_jesTotalNoFlavorNoTimeDown", &MET_phi_jesTotalNoFlavorNoTimeDown, &b_MET_phi_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorZJetDown", Jet_pt_jesFlavorZJetDown, &b_Jet_pt_jesFlavorZJetDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorZJetDown", Jet_mass_jesFlavorZJetDown, &b_Jet_mass_jesFlavorZJetDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorZJetDown", &MET_pt_jesFlavorZJetDown, &b_MET_pt_jesFlavorZJetDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorZJetDown", &MET_phi_jesFlavorZJetDown, &b_MET_phi_jesFlavorZJetDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPhotonJetDown", Jet_pt_jesFlavorPhotonJetDown, &b_Jet_pt_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPhotonJetDown", Jet_mass_jesFlavorPhotonJetDown, &b_Jet_mass_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorPhotonJetDown", &MET_pt_jesFlavorPhotonJetDown, &b_MET_pt_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorPhotonJetDown", &MET_phi_jesFlavorPhotonJetDown, &b_MET_phi_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureGluonDown", Jet_pt_jesFlavorPureGluonDown, &b_Jet_pt_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureGluonDown", Jet_mass_jesFlavorPureGluonDown, &b_Jet_mass_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureGluonDown", &MET_pt_jesFlavorPureGluonDown, &b_MET_pt_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureGluonDown", &MET_phi_jesFlavorPureGluonDown, &b_MET_phi_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureQuarkDown", Jet_pt_jesFlavorPureQuarkDown, &b_Jet_pt_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureQuarkDown", Jet_mass_jesFlavorPureQuarkDown, &b_Jet_mass_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureQuarkDown", &MET_pt_jesFlavorPureQuarkDown, &b_MET_pt_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureQuarkDown", &MET_phi_jesFlavorPureQuarkDown, &b_MET_phi_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureCharmDown", Jet_pt_jesFlavorPureCharmDown, &b_Jet_pt_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureCharmDown", Jet_mass_jesFlavorPureCharmDown, &b_Jet_mass_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureCharmDown", &MET_pt_jesFlavorPureCharmDown, &b_MET_pt_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureCharmDown", &MET_phi_jesFlavorPureCharmDown, &b_MET_phi_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("Jet_pt_jesFlavorPureBottomDown", Jet_pt_jesFlavorPureBottomDown, &b_Jet_pt_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("Jet_mass_jesFlavorPureBottomDown", Jet_mass_jesFlavorPureBottomDown, &b_Jet_mass_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("MET_pt_jesFlavorPureBottomDown", &MET_pt_jesFlavorPureBottomDown, &b_MET_pt_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorPureBottomDown", &MET_phi_jesFlavorPureBottomDown, &b_MET_phi_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunADown", Jet_pt_jesTimeRunADown, &b_Jet_pt_jesTimeRunADown);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunADown", Jet_mass_jesTimeRunADown, &b_Jet_mass_jesTimeRunADown);
   fChain->SetBranchAddress("MET_pt_jesTimeRunADown", &MET_pt_jesTimeRunADown, &b_MET_pt_jesTimeRunADown);
   fChain->SetBranchAddress("MET_phi_jesTimeRunADown", &MET_phi_jesTimeRunADown, &b_MET_phi_jesTimeRunADown);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunBDown", Jet_pt_jesTimeRunBDown, &b_Jet_pt_jesTimeRunBDown);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunBDown", Jet_mass_jesTimeRunBDown, &b_Jet_mass_jesTimeRunBDown);
   fChain->SetBranchAddress("MET_pt_jesTimeRunBDown", &MET_pt_jesTimeRunBDown, &b_MET_pt_jesTimeRunBDown);
   fChain->SetBranchAddress("MET_phi_jesTimeRunBDown", &MET_phi_jesTimeRunBDown, &b_MET_phi_jesTimeRunBDown);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunCDown", Jet_pt_jesTimeRunCDown, &b_Jet_pt_jesTimeRunCDown);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunCDown", Jet_mass_jesTimeRunCDown, &b_Jet_mass_jesTimeRunCDown);
   fChain->SetBranchAddress("MET_pt_jesTimeRunCDown", &MET_pt_jesTimeRunCDown, &b_MET_pt_jesTimeRunCDown);
   fChain->SetBranchAddress("MET_phi_jesTimeRunCDown", &MET_phi_jesTimeRunCDown, &b_MET_phi_jesTimeRunCDown);
   fChain->SetBranchAddress("Jet_pt_jesTimeRunDDown", Jet_pt_jesTimeRunDDown, &b_Jet_pt_jesTimeRunDDown);
   fChain->SetBranchAddress("Jet_mass_jesTimeRunDDown", Jet_mass_jesTimeRunDDown, &b_Jet_mass_jesTimeRunDDown);
   fChain->SetBranchAddress("MET_pt_jesTimeRunDDown", &MET_pt_jesTimeRunDDown, &b_MET_pt_jesTimeRunDDown);
   fChain->SetBranchAddress("MET_phi_jesTimeRunDDown", &MET_phi_jesTimeRunDDown, &b_MET_phi_jesTimeRunDDown);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupMPFInSituDown", Jet_pt_jesCorrelationGroupMPFInSituDown, &b_Jet_pt_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupMPFInSituDown", Jet_mass_jesCorrelationGroupMPFInSituDown, &b_Jet_mass_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupMPFInSituDown", &MET_pt_jesCorrelationGroupMPFInSituDown, &b_MET_pt_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupMPFInSituDown", &MET_phi_jesCorrelationGroupMPFInSituDown, &b_MET_phi_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupIntercalibrationDown", Jet_pt_jesCorrelationGroupIntercalibrationDown, &b_Jet_pt_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupIntercalibrationDown", Jet_mass_jesCorrelationGroupIntercalibrationDown, &b_Jet_mass_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupIntercalibrationDown", &MET_pt_jesCorrelationGroupIntercalibrationDown, &b_MET_pt_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupIntercalibrationDown", &MET_phi_jesCorrelationGroupIntercalibrationDown, &b_MET_phi_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupbJESDown", Jet_pt_jesCorrelationGroupbJESDown, &b_Jet_pt_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupbJESDown", Jet_mass_jesCorrelationGroupbJESDown, &b_Jet_mass_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupbJESDown", &MET_pt_jesCorrelationGroupbJESDown, &b_MET_pt_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupbJESDown", &MET_phi_jesCorrelationGroupbJESDown, &b_MET_phi_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupFlavorDown", Jet_pt_jesCorrelationGroupFlavorDown, &b_Jet_pt_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupFlavorDown", Jet_mass_jesCorrelationGroupFlavorDown, &b_Jet_mass_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupFlavorDown", &MET_pt_jesCorrelationGroupFlavorDown, &b_MET_pt_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupFlavorDown", &MET_phi_jesCorrelationGroupFlavorDown, &b_MET_phi_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("Jet_pt_jesCorrelationGroupUncorrelatedDown", Jet_pt_jesCorrelationGroupUncorrelatedDown, &b_Jet_pt_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("Jet_mass_jesCorrelationGroupUncorrelatedDown", Jet_mass_jesCorrelationGroupUncorrelatedDown, &b_Jet_mass_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("MET_pt_jesCorrelationGroupUncorrelatedDown", &MET_pt_jesCorrelationGroupUncorrelatedDown, &b_MET_pt_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("MET_phi_jesCorrelationGroupUncorrelatedDown", &MET_phi_jesCorrelationGroupUncorrelatedDown, &b_MET_phi_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("MET_pt_unclustEnDown", &MET_pt_unclustEnDown, &b_MET_pt_unclustEnDown);
   fChain->SetBranchAddress("MET_phi_unclustEnDown", &MET_phi_unclustEnDown, &b_MET_phi_unclustEnDown);
   fChain->SetBranchAddress("FatJet_pt_raw", FatJet_pt_raw, &b_FatJet_pt_raw);
   fChain->SetBranchAddress("FatJet_pt_nom", FatJet_pt_nom, &b_FatJet_pt_nom);
   fChain->SetBranchAddress("FatJet_mass_raw", FatJet_mass_raw, &b_FatJet_mass_raw);
   fChain->SetBranchAddress("FatJet_mass_nom", FatJet_mass_nom, &b_FatJet_mass_nom);
   fChain->SetBranchAddress("FatJet_corr_JEC", FatJet_corr_JEC, &b_FatJet_corr_JEC);
   fChain->SetBranchAddress("FatJet_corr_JER", FatJet_corr_JER, &b_FatJet_corr_JER);
   fChain->SetBranchAddress("FatJet_corr_JMS", FatJet_corr_JMS, &b_FatJet_corr_JMS);
   fChain->SetBranchAddress("FatJet_corr_JMR", FatJet_corr_JMR, &b_FatJet_corr_JMR);
   fChain->SetBranchAddress("FatJet_msoftdrop_raw", FatJet_msoftdrop_raw, &b_FatJet_msoftdrop_raw);
   fChain->SetBranchAddress("FatJet_msoftdrop_nom", FatJet_msoftdrop_nom, &b_FatJet_msoftdrop_nom);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_JMR", FatJet_msoftdrop_corr_JMR, &b_FatJet_msoftdrop_corr_JMR);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_JMS", FatJet_msoftdrop_corr_JMS, &b_FatJet_msoftdrop_corr_JMS);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_PUPPI", FatJet_msoftdrop_corr_PUPPI, &b_FatJet_msoftdrop_corr_PUPPI);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_nom", FatJet_msoftdrop_tau21DDT_nom, &b_FatJet_msoftdrop_tau21DDT_nom);
   fChain->SetBranchAddress("FatJet_pt_jerUp", FatJet_pt_jerUp, &b_FatJet_pt_jerUp);
   fChain->SetBranchAddress("FatJet_mass_jerUp", FatJet_mass_jerUp, &b_FatJet_mass_jerUp);
   fChain->SetBranchAddress("FatJet_mass_jmrUp", FatJet_mass_jmrUp, &b_FatJet_mass_jmrUp);
   fChain->SetBranchAddress("FatJet_mass_jmsUp", FatJet_mass_jmsUp, &b_FatJet_mass_jmsUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jerUp", FatJet_msoftdrop_jerUp, &b_FatJet_msoftdrop_jerUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmrUp", FatJet_msoftdrop_jmrUp, &b_FatJet_msoftdrop_jmrUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmsUp", FatJet_msoftdrop_jmsUp, &b_FatJet_msoftdrop_jmsUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jerUp", FatJet_msoftdrop_tau21DDT_jerUp, &b_FatJet_msoftdrop_tau21DDT_jerUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmrUp", FatJet_msoftdrop_tau21DDT_jmrUp, &b_FatJet_msoftdrop_tau21DDT_jmrUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmsUp", FatJet_msoftdrop_tau21DDT_jmsUp, &b_FatJet_msoftdrop_tau21DDT_jmsUp);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteStatUp", FatJet_pt_jesAbsoluteStatUp, &b_FatJet_pt_jesAbsoluteStatUp);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteStatUp", FatJet_mass_jesAbsoluteStatUp, &b_FatJet_mass_jesAbsoluteStatUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteStatUp", FatJet_msoftdrop_jesAbsoluteStatUp, &b_FatJet_msoftdrop_jesAbsoluteStatUp);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteScaleUp", FatJet_pt_jesAbsoluteScaleUp, &b_FatJet_pt_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteScaleUp", FatJet_mass_jesAbsoluteScaleUp, &b_FatJet_mass_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteScaleUp", FatJet_msoftdrop_jesAbsoluteScaleUp, &b_FatJet_msoftdrop_jesAbsoluteScaleUp);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteSampleUp", FatJet_pt_jesAbsoluteSampleUp, &b_FatJet_pt_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteSampleUp", FatJet_mass_jesAbsoluteSampleUp, &b_FatJet_mass_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteSampleUp", FatJet_msoftdrop_jesAbsoluteSampleUp, &b_FatJet_msoftdrop_jesAbsoluteSampleUp);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteFlavMapUp", FatJet_pt_jesAbsoluteFlavMapUp, &b_FatJet_pt_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteFlavMapUp", FatJet_mass_jesAbsoluteFlavMapUp, &b_FatJet_mass_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteFlavMapUp", FatJet_msoftdrop_jesAbsoluteFlavMapUp, &b_FatJet_msoftdrop_jesAbsoluteFlavMapUp);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteMPFBiasUp", FatJet_pt_jesAbsoluteMPFBiasUp, &b_FatJet_pt_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteMPFBiasUp", FatJet_mass_jesAbsoluteMPFBiasUp, &b_FatJet_mass_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteMPFBiasUp", FatJet_msoftdrop_jesAbsoluteMPFBiasUp, &b_FatJet_msoftdrop_jesAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("FatJet_pt_jesFragmentationUp", FatJet_pt_jesFragmentationUp, &b_FatJet_pt_jesFragmentationUp);
   fChain->SetBranchAddress("FatJet_mass_jesFragmentationUp", FatJet_mass_jesFragmentationUp, &b_FatJet_mass_jesFragmentationUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFragmentationUp", FatJet_msoftdrop_jesFragmentationUp, &b_FatJet_msoftdrop_jesFragmentationUp);
   fChain->SetBranchAddress("FatJet_pt_jesSinglePionECALUp", FatJet_pt_jesSinglePionECALUp, &b_FatJet_pt_jesSinglePionECALUp);
   fChain->SetBranchAddress("FatJet_mass_jesSinglePionECALUp", FatJet_mass_jesSinglePionECALUp, &b_FatJet_mass_jesSinglePionECALUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSinglePionECALUp", FatJet_msoftdrop_jesSinglePionECALUp, &b_FatJet_msoftdrop_jesSinglePionECALUp);
   fChain->SetBranchAddress("FatJet_pt_jesSinglePionHCALUp", FatJet_pt_jesSinglePionHCALUp, &b_FatJet_pt_jesSinglePionHCALUp);
   fChain->SetBranchAddress("FatJet_mass_jesSinglePionHCALUp", FatJet_mass_jesSinglePionHCALUp, &b_FatJet_mass_jesSinglePionHCALUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSinglePionHCALUp", FatJet_msoftdrop_jesSinglePionHCALUp, &b_FatJet_msoftdrop_jesSinglePionHCALUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorQCDUp", FatJet_pt_jesFlavorQCDUp, &b_FatJet_pt_jesFlavorQCDUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorQCDUp", FatJet_mass_jesFlavorQCDUp, &b_FatJet_mass_jesFlavorQCDUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorQCDUp", FatJet_msoftdrop_jesFlavorQCDUp, &b_FatJet_msoftdrop_jesFlavorQCDUp);
   fChain->SetBranchAddress("FatJet_pt_jesTimePtEtaUp", FatJet_pt_jesTimePtEtaUp, &b_FatJet_pt_jesTimePtEtaUp);
   fChain->SetBranchAddress("FatJet_mass_jesTimePtEtaUp", FatJet_mass_jesTimePtEtaUp, &b_FatJet_mass_jesTimePtEtaUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimePtEtaUp", FatJet_msoftdrop_jesTimePtEtaUp, &b_FatJet_msoftdrop_jesTimePtEtaUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJEREC1Up", FatJet_pt_jesRelativeJEREC1Up, &b_FatJet_pt_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJEREC1Up", FatJet_mass_jesRelativeJEREC1Up, &b_FatJet_mass_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJEREC1Up", FatJet_msoftdrop_jesRelativeJEREC1Up, &b_FatJet_msoftdrop_jesRelativeJEREC1Up);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJEREC2Up", FatJet_pt_jesRelativeJEREC2Up, &b_FatJet_pt_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJEREC2Up", FatJet_mass_jesRelativeJEREC2Up, &b_FatJet_mass_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJEREC2Up", FatJet_msoftdrop_jesRelativeJEREC2Up, &b_FatJet_msoftdrop_jesRelativeJEREC2Up);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJERHFUp", FatJet_pt_jesRelativeJERHFUp, &b_FatJet_pt_jesRelativeJERHFUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJERHFUp", FatJet_mass_jesRelativeJERHFUp, &b_FatJet_mass_jesRelativeJERHFUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJERHFUp", FatJet_msoftdrop_jesRelativeJERHFUp, &b_FatJet_msoftdrop_jesRelativeJERHFUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtBBUp", FatJet_pt_jesRelativePtBBUp, &b_FatJet_pt_jesRelativePtBBUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtBBUp", FatJet_mass_jesRelativePtBBUp, &b_FatJet_mass_jesRelativePtBBUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtBBUp", FatJet_msoftdrop_jesRelativePtBBUp, &b_FatJet_msoftdrop_jesRelativePtBBUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtEC1Up", FatJet_pt_jesRelativePtEC1Up, &b_FatJet_pt_jesRelativePtEC1Up);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtEC1Up", FatJet_mass_jesRelativePtEC1Up, &b_FatJet_mass_jesRelativePtEC1Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtEC1Up", FatJet_msoftdrop_jesRelativePtEC1Up, &b_FatJet_msoftdrop_jesRelativePtEC1Up);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtEC2Up", FatJet_pt_jesRelativePtEC2Up, &b_FatJet_pt_jesRelativePtEC2Up);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtEC2Up", FatJet_mass_jesRelativePtEC2Up, &b_FatJet_mass_jesRelativePtEC2Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtEC2Up", FatJet_msoftdrop_jesRelativePtEC2Up, &b_FatJet_msoftdrop_jesRelativePtEC2Up);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtHFUp", FatJet_pt_jesRelativePtHFUp, &b_FatJet_pt_jesRelativePtHFUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtHFUp", FatJet_mass_jesRelativePtHFUp, &b_FatJet_mass_jesRelativePtHFUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtHFUp", FatJet_msoftdrop_jesRelativePtHFUp, &b_FatJet_msoftdrop_jesRelativePtHFUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeBalUp", FatJet_pt_jesRelativeBalUp, &b_FatJet_pt_jesRelativeBalUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeBalUp", FatJet_mass_jesRelativeBalUp, &b_FatJet_mass_jesRelativeBalUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeBalUp", FatJet_msoftdrop_jesRelativeBalUp, &b_FatJet_msoftdrop_jesRelativeBalUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeSampleUp", FatJet_pt_jesRelativeSampleUp, &b_FatJet_pt_jesRelativeSampleUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeSampleUp", FatJet_mass_jesRelativeSampleUp, &b_FatJet_mass_jesRelativeSampleUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeSampleUp", FatJet_msoftdrop_jesRelativeSampleUp, &b_FatJet_msoftdrop_jesRelativeSampleUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeFSRUp", FatJet_pt_jesRelativeFSRUp, &b_FatJet_pt_jesRelativeFSRUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeFSRUp", FatJet_mass_jesRelativeFSRUp, &b_FatJet_mass_jesRelativeFSRUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeFSRUp", FatJet_msoftdrop_jesRelativeFSRUp, &b_FatJet_msoftdrop_jesRelativeFSRUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatFSRUp", FatJet_pt_jesRelativeStatFSRUp, &b_FatJet_pt_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatFSRUp", FatJet_mass_jesRelativeStatFSRUp, &b_FatJet_mass_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatFSRUp", FatJet_msoftdrop_jesRelativeStatFSRUp, &b_FatJet_msoftdrop_jesRelativeStatFSRUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatECUp", FatJet_pt_jesRelativeStatECUp, &b_FatJet_pt_jesRelativeStatECUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatECUp", FatJet_mass_jesRelativeStatECUp, &b_FatJet_mass_jesRelativeStatECUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatECUp", FatJet_msoftdrop_jesRelativeStatECUp, &b_FatJet_msoftdrop_jesRelativeStatECUp);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatHFUp", FatJet_pt_jesRelativeStatHFUp, &b_FatJet_pt_jesRelativeStatHFUp);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatHFUp", FatJet_mass_jesRelativeStatHFUp, &b_FatJet_mass_jesRelativeStatHFUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatHFUp", FatJet_msoftdrop_jesRelativeStatHFUp, &b_FatJet_msoftdrop_jesRelativeStatHFUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpDataMCUp", FatJet_pt_jesPileUpDataMCUp, &b_FatJet_pt_jesPileUpDataMCUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpDataMCUp", FatJet_mass_jesPileUpDataMCUp, &b_FatJet_mass_jesPileUpDataMCUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpDataMCUp", FatJet_msoftdrop_jesPileUpDataMCUp, &b_FatJet_msoftdrop_jesPileUpDataMCUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtRefUp", FatJet_pt_jesPileUpPtRefUp, &b_FatJet_pt_jesPileUpPtRefUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtRefUp", FatJet_mass_jesPileUpPtRefUp, &b_FatJet_mass_jesPileUpPtRefUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtRefUp", FatJet_msoftdrop_jesPileUpPtRefUp, &b_FatJet_msoftdrop_jesPileUpPtRefUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtBBUp", FatJet_pt_jesPileUpPtBBUp, &b_FatJet_pt_jesPileUpPtBBUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtBBUp", FatJet_mass_jesPileUpPtBBUp, &b_FatJet_mass_jesPileUpPtBBUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtBBUp", FatJet_msoftdrop_jesPileUpPtBBUp, &b_FatJet_msoftdrop_jesPileUpPtBBUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtEC1Up", FatJet_pt_jesPileUpPtEC1Up, &b_FatJet_pt_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtEC1Up", FatJet_mass_jesPileUpPtEC1Up, &b_FatJet_mass_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtEC1Up", FatJet_msoftdrop_jesPileUpPtEC1Up, &b_FatJet_msoftdrop_jesPileUpPtEC1Up);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtEC2Up", FatJet_pt_jesPileUpPtEC2Up, &b_FatJet_pt_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtEC2Up", FatJet_mass_jesPileUpPtEC2Up, &b_FatJet_mass_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtEC2Up", FatJet_msoftdrop_jesPileUpPtEC2Up, &b_FatJet_msoftdrop_jesPileUpPtEC2Up);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtHFUp", FatJet_pt_jesPileUpPtHFUp, &b_FatJet_pt_jesPileUpPtHFUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtHFUp", FatJet_mass_jesPileUpPtHFUp, &b_FatJet_mass_jesPileUpPtHFUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtHFUp", FatJet_msoftdrop_jesPileUpPtHFUp, &b_FatJet_msoftdrop_jesPileUpPtHFUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpMuZeroUp", FatJet_pt_jesPileUpMuZeroUp, &b_FatJet_pt_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpMuZeroUp", FatJet_mass_jesPileUpMuZeroUp, &b_FatJet_mass_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpMuZeroUp", FatJet_msoftdrop_jesPileUpMuZeroUp, &b_FatJet_msoftdrop_jesPileUpMuZeroUp);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpEnvelopeUp", FatJet_pt_jesPileUpEnvelopeUp, &b_FatJet_pt_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpEnvelopeUp", FatJet_mass_jesPileUpEnvelopeUp, &b_FatJet_mass_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpEnvelopeUp", FatJet_msoftdrop_jesPileUpEnvelopeUp, &b_FatJet_msoftdrop_jesPileUpEnvelopeUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalPileUpUp", FatJet_pt_jesSubTotalPileUpUp, &b_FatJet_pt_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalPileUpUp", FatJet_mass_jesSubTotalPileUpUp, &b_FatJet_mass_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalPileUpUp", FatJet_msoftdrop_jesSubTotalPileUpUp, &b_FatJet_msoftdrop_jesSubTotalPileUpUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalRelativeUp", FatJet_pt_jesSubTotalRelativeUp, &b_FatJet_pt_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalRelativeUp", FatJet_mass_jesSubTotalRelativeUp, &b_FatJet_mass_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalRelativeUp", FatJet_msoftdrop_jesSubTotalRelativeUp, &b_FatJet_msoftdrop_jesSubTotalRelativeUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalPtUp", FatJet_pt_jesSubTotalPtUp, &b_FatJet_pt_jesSubTotalPtUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalPtUp", FatJet_mass_jesSubTotalPtUp, &b_FatJet_mass_jesSubTotalPtUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalPtUp", FatJet_msoftdrop_jesSubTotalPtUp, &b_FatJet_msoftdrop_jesSubTotalPtUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalScaleUp", FatJet_pt_jesSubTotalScaleUp, &b_FatJet_pt_jesSubTotalScaleUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalScaleUp", FatJet_mass_jesSubTotalScaleUp, &b_FatJet_mass_jesSubTotalScaleUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalScaleUp", FatJet_msoftdrop_jesSubTotalScaleUp, &b_FatJet_msoftdrop_jesSubTotalScaleUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalAbsoluteUp", FatJet_pt_jesSubTotalAbsoluteUp, &b_FatJet_pt_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalAbsoluteUp", FatJet_mass_jesSubTotalAbsoluteUp, &b_FatJet_mass_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalAbsoluteUp", FatJet_msoftdrop_jesSubTotalAbsoluteUp, &b_FatJet_msoftdrop_jesSubTotalAbsoluteUp);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalMCUp", FatJet_pt_jesSubTotalMCUp, &b_FatJet_pt_jesSubTotalMCUp);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalMCUp", FatJet_mass_jesSubTotalMCUp, &b_FatJet_mass_jesSubTotalMCUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalMCUp", FatJet_msoftdrop_jesSubTotalMCUp, &b_FatJet_msoftdrop_jesSubTotalMCUp);
   fChain->SetBranchAddress("FatJet_pt_jesTotalUp", FatJet_pt_jesTotalUp, &b_FatJet_pt_jesTotalUp);
   fChain->SetBranchAddress("FatJet_mass_jesTotalUp", FatJet_mass_jesTotalUp, &b_FatJet_mass_jesTotalUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalUp", FatJet_msoftdrop_jesTotalUp, &b_FatJet_msoftdrop_jesTotalUp);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoFlavorUp", FatJet_pt_jesTotalNoFlavorUp, &b_FatJet_pt_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoFlavorUp", FatJet_mass_jesTotalNoFlavorUp, &b_FatJet_mass_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoFlavorUp", FatJet_msoftdrop_jesTotalNoFlavorUp, &b_FatJet_msoftdrop_jesTotalNoFlavorUp);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoTimeUp", FatJet_pt_jesTotalNoTimeUp, &b_FatJet_pt_jesTotalNoTimeUp);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoTimeUp", FatJet_mass_jesTotalNoTimeUp, &b_FatJet_mass_jesTotalNoTimeUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoTimeUp", FatJet_msoftdrop_jesTotalNoTimeUp, &b_FatJet_msoftdrop_jesTotalNoTimeUp);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoFlavorNoTimeUp", FatJet_pt_jesTotalNoFlavorNoTimeUp, &b_FatJet_pt_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoFlavorNoTimeUp", FatJet_mass_jesTotalNoFlavorNoTimeUp, &b_FatJet_mass_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoFlavorNoTimeUp", FatJet_msoftdrop_jesTotalNoFlavorNoTimeUp, &b_FatJet_msoftdrop_jesTotalNoFlavorNoTimeUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorZJetUp", FatJet_pt_jesFlavorZJetUp, &b_FatJet_pt_jesFlavorZJetUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorZJetUp", FatJet_mass_jesFlavorZJetUp, &b_FatJet_mass_jesFlavorZJetUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorZJetUp", FatJet_msoftdrop_jesFlavorZJetUp, &b_FatJet_msoftdrop_jesFlavorZJetUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPhotonJetUp", FatJet_pt_jesFlavorPhotonJetUp, &b_FatJet_pt_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPhotonJetUp", FatJet_mass_jesFlavorPhotonJetUp, &b_FatJet_mass_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPhotonJetUp", FatJet_msoftdrop_jesFlavorPhotonJetUp, &b_FatJet_msoftdrop_jesFlavorPhotonJetUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureGluonUp", FatJet_pt_jesFlavorPureGluonUp, &b_FatJet_pt_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureGluonUp", FatJet_mass_jesFlavorPureGluonUp, &b_FatJet_mass_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureGluonUp", FatJet_msoftdrop_jesFlavorPureGluonUp, &b_FatJet_msoftdrop_jesFlavorPureGluonUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureQuarkUp", FatJet_pt_jesFlavorPureQuarkUp, &b_FatJet_pt_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureQuarkUp", FatJet_mass_jesFlavorPureQuarkUp, &b_FatJet_mass_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureQuarkUp", FatJet_msoftdrop_jesFlavorPureQuarkUp, &b_FatJet_msoftdrop_jesFlavorPureQuarkUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureCharmUp", FatJet_pt_jesFlavorPureCharmUp, &b_FatJet_pt_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureCharmUp", FatJet_mass_jesFlavorPureCharmUp, &b_FatJet_mass_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureCharmUp", FatJet_msoftdrop_jesFlavorPureCharmUp, &b_FatJet_msoftdrop_jesFlavorPureCharmUp);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureBottomUp", FatJet_pt_jesFlavorPureBottomUp, &b_FatJet_pt_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureBottomUp", FatJet_mass_jesFlavorPureBottomUp, &b_FatJet_mass_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureBottomUp", FatJet_msoftdrop_jesFlavorPureBottomUp, &b_FatJet_msoftdrop_jesFlavorPureBottomUp);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunAUp", FatJet_pt_jesTimeRunAUp, &b_FatJet_pt_jesTimeRunAUp);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunAUp", FatJet_mass_jesTimeRunAUp, &b_FatJet_mass_jesTimeRunAUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunAUp", FatJet_msoftdrop_jesTimeRunAUp, &b_FatJet_msoftdrop_jesTimeRunAUp);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunBUp", FatJet_pt_jesTimeRunBUp, &b_FatJet_pt_jesTimeRunBUp);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunBUp", FatJet_mass_jesTimeRunBUp, &b_FatJet_mass_jesTimeRunBUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunBUp", FatJet_msoftdrop_jesTimeRunBUp, &b_FatJet_msoftdrop_jesTimeRunBUp);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunCUp", FatJet_pt_jesTimeRunCUp, &b_FatJet_pt_jesTimeRunCUp);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunCUp", FatJet_mass_jesTimeRunCUp, &b_FatJet_mass_jesTimeRunCUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunCUp", FatJet_msoftdrop_jesTimeRunCUp, &b_FatJet_msoftdrop_jesTimeRunCUp);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunDUp", FatJet_pt_jesTimeRunDUp, &b_FatJet_pt_jesTimeRunDUp);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunDUp", FatJet_mass_jesTimeRunDUp, &b_FatJet_mass_jesTimeRunDUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunDUp", FatJet_msoftdrop_jesTimeRunDUp, &b_FatJet_msoftdrop_jesTimeRunDUp);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupMPFInSituUp", FatJet_pt_jesCorrelationGroupMPFInSituUp, &b_FatJet_pt_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupMPFInSituUp", FatJet_mass_jesCorrelationGroupMPFInSituUp, &b_FatJet_mass_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupMPFInSituUp", FatJet_msoftdrop_jesCorrelationGroupMPFInSituUp, &b_FatJet_msoftdrop_jesCorrelationGroupMPFInSituUp);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupIntercalibrationUp", FatJet_pt_jesCorrelationGroupIntercalibrationUp, &b_FatJet_pt_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupIntercalibrationUp", FatJet_mass_jesCorrelationGroupIntercalibrationUp, &b_FatJet_mass_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupIntercalibrationUp", FatJet_msoftdrop_jesCorrelationGroupIntercalibrationUp, &b_FatJet_msoftdrop_jesCorrelationGroupIntercalibrationUp);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupbJESUp", FatJet_pt_jesCorrelationGroupbJESUp, &b_FatJet_pt_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupbJESUp", FatJet_mass_jesCorrelationGroupbJESUp, &b_FatJet_mass_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupbJESUp", FatJet_msoftdrop_jesCorrelationGroupbJESUp, &b_FatJet_msoftdrop_jesCorrelationGroupbJESUp);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupFlavorUp", FatJet_pt_jesCorrelationGroupFlavorUp, &b_FatJet_pt_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupFlavorUp", FatJet_mass_jesCorrelationGroupFlavorUp, &b_FatJet_mass_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupFlavorUp", FatJet_msoftdrop_jesCorrelationGroupFlavorUp, &b_FatJet_msoftdrop_jesCorrelationGroupFlavorUp);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupUncorrelatedUp", FatJet_pt_jesCorrelationGroupUncorrelatedUp, &b_FatJet_pt_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupUncorrelatedUp", FatJet_mass_jesCorrelationGroupUncorrelatedUp, &b_FatJet_mass_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupUncorrelatedUp", FatJet_msoftdrop_jesCorrelationGroupUncorrelatedUp, &b_FatJet_msoftdrop_jesCorrelationGroupUncorrelatedUp);
   fChain->SetBranchAddress("FatJet_pt_jerDown", FatJet_pt_jerDown, &b_FatJet_pt_jerDown);
   fChain->SetBranchAddress("FatJet_mass_jerDown", FatJet_mass_jerDown, &b_FatJet_mass_jerDown);
   fChain->SetBranchAddress("FatJet_mass_jmrDown", FatJet_mass_jmrDown, &b_FatJet_mass_jmrDown);
   fChain->SetBranchAddress("FatJet_mass_jmsDown", FatJet_mass_jmsDown, &b_FatJet_mass_jmsDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jerDown", FatJet_msoftdrop_jerDown, &b_FatJet_msoftdrop_jerDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmrDown", FatJet_msoftdrop_jmrDown, &b_FatJet_msoftdrop_jmrDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmsDown", FatJet_msoftdrop_jmsDown, &b_FatJet_msoftdrop_jmsDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jerDown", FatJet_msoftdrop_tau21DDT_jerDown, &b_FatJet_msoftdrop_tau21DDT_jerDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmrDown", FatJet_msoftdrop_tau21DDT_jmrDown, &b_FatJet_msoftdrop_tau21DDT_jmrDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmsDown", FatJet_msoftdrop_tau21DDT_jmsDown, &b_FatJet_msoftdrop_tau21DDT_jmsDown);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteStatDown", FatJet_pt_jesAbsoluteStatDown, &b_FatJet_pt_jesAbsoluteStatDown);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteStatDown", FatJet_mass_jesAbsoluteStatDown, &b_FatJet_mass_jesAbsoluteStatDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteStatDown", FatJet_msoftdrop_jesAbsoluteStatDown, &b_FatJet_msoftdrop_jesAbsoluteStatDown);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteScaleDown", FatJet_pt_jesAbsoluteScaleDown, &b_FatJet_pt_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteScaleDown", FatJet_mass_jesAbsoluteScaleDown, &b_FatJet_mass_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteScaleDown", FatJet_msoftdrop_jesAbsoluteScaleDown, &b_FatJet_msoftdrop_jesAbsoluteScaleDown);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteSampleDown", FatJet_pt_jesAbsoluteSampleDown, &b_FatJet_pt_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteSampleDown", FatJet_mass_jesAbsoluteSampleDown, &b_FatJet_mass_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteSampleDown", FatJet_msoftdrop_jesAbsoluteSampleDown, &b_FatJet_msoftdrop_jesAbsoluteSampleDown);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteFlavMapDown", FatJet_pt_jesAbsoluteFlavMapDown, &b_FatJet_pt_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteFlavMapDown", FatJet_mass_jesAbsoluteFlavMapDown, &b_FatJet_mass_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteFlavMapDown", FatJet_msoftdrop_jesAbsoluteFlavMapDown, &b_FatJet_msoftdrop_jesAbsoluteFlavMapDown);
   fChain->SetBranchAddress("FatJet_pt_jesAbsoluteMPFBiasDown", FatJet_pt_jesAbsoluteMPFBiasDown, &b_FatJet_pt_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("FatJet_mass_jesAbsoluteMPFBiasDown", FatJet_mass_jesAbsoluteMPFBiasDown, &b_FatJet_mass_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesAbsoluteMPFBiasDown", FatJet_msoftdrop_jesAbsoluteMPFBiasDown, &b_FatJet_msoftdrop_jesAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("FatJet_pt_jesFragmentationDown", FatJet_pt_jesFragmentationDown, &b_FatJet_pt_jesFragmentationDown);
   fChain->SetBranchAddress("FatJet_mass_jesFragmentationDown", FatJet_mass_jesFragmentationDown, &b_FatJet_mass_jesFragmentationDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFragmentationDown", FatJet_msoftdrop_jesFragmentationDown, &b_FatJet_msoftdrop_jesFragmentationDown);
   fChain->SetBranchAddress("FatJet_pt_jesSinglePionECALDown", FatJet_pt_jesSinglePionECALDown, &b_FatJet_pt_jesSinglePionECALDown);
   fChain->SetBranchAddress("FatJet_mass_jesSinglePionECALDown", FatJet_mass_jesSinglePionECALDown, &b_FatJet_mass_jesSinglePionECALDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSinglePionECALDown", FatJet_msoftdrop_jesSinglePionECALDown, &b_FatJet_msoftdrop_jesSinglePionECALDown);
   fChain->SetBranchAddress("FatJet_pt_jesSinglePionHCALDown", FatJet_pt_jesSinglePionHCALDown, &b_FatJet_pt_jesSinglePionHCALDown);
   fChain->SetBranchAddress("FatJet_mass_jesSinglePionHCALDown", FatJet_mass_jesSinglePionHCALDown, &b_FatJet_mass_jesSinglePionHCALDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSinglePionHCALDown", FatJet_msoftdrop_jesSinglePionHCALDown, &b_FatJet_msoftdrop_jesSinglePionHCALDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorQCDDown", FatJet_pt_jesFlavorQCDDown, &b_FatJet_pt_jesFlavorQCDDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorQCDDown", FatJet_mass_jesFlavorQCDDown, &b_FatJet_mass_jesFlavorQCDDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorQCDDown", FatJet_msoftdrop_jesFlavorQCDDown, &b_FatJet_msoftdrop_jesFlavorQCDDown);
   fChain->SetBranchAddress("FatJet_pt_jesTimePtEtaDown", FatJet_pt_jesTimePtEtaDown, &b_FatJet_pt_jesTimePtEtaDown);
   fChain->SetBranchAddress("FatJet_mass_jesTimePtEtaDown", FatJet_mass_jesTimePtEtaDown, &b_FatJet_mass_jesTimePtEtaDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimePtEtaDown", FatJet_msoftdrop_jesTimePtEtaDown, &b_FatJet_msoftdrop_jesTimePtEtaDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJEREC1Down", FatJet_pt_jesRelativeJEREC1Down, &b_FatJet_pt_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJEREC1Down", FatJet_mass_jesRelativeJEREC1Down, &b_FatJet_mass_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJEREC1Down", FatJet_msoftdrop_jesRelativeJEREC1Down, &b_FatJet_msoftdrop_jesRelativeJEREC1Down);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJEREC2Down", FatJet_pt_jesRelativeJEREC2Down, &b_FatJet_pt_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJEREC2Down", FatJet_mass_jesRelativeJEREC2Down, &b_FatJet_mass_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJEREC2Down", FatJet_msoftdrop_jesRelativeJEREC2Down, &b_FatJet_msoftdrop_jesRelativeJEREC2Down);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeJERHFDown", FatJet_pt_jesRelativeJERHFDown, &b_FatJet_pt_jesRelativeJERHFDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeJERHFDown", FatJet_mass_jesRelativeJERHFDown, &b_FatJet_mass_jesRelativeJERHFDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeJERHFDown", FatJet_msoftdrop_jesRelativeJERHFDown, &b_FatJet_msoftdrop_jesRelativeJERHFDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtBBDown", FatJet_pt_jesRelativePtBBDown, &b_FatJet_pt_jesRelativePtBBDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtBBDown", FatJet_mass_jesRelativePtBBDown, &b_FatJet_mass_jesRelativePtBBDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtBBDown", FatJet_msoftdrop_jesRelativePtBBDown, &b_FatJet_msoftdrop_jesRelativePtBBDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtEC1Down", FatJet_pt_jesRelativePtEC1Down, &b_FatJet_pt_jesRelativePtEC1Down);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtEC1Down", FatJet_mass_jesRelativePtEC1Down, &b_FatJet_mass_jesRelativePtEC1Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtEC1Down", FatJet_msoftdrop_jesRelativePtEC1Down, &b_FatJet_msoftdrop_jesRelativePtEC1Down);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtEC2Down", FatJet_pt_jesRelativePtEC2Down, &b_FatJet_pt_jesRelativePtEC2Down);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtEC2Down", FatJet_mass_jesRelativePtEC2Down, &b_FatJet_mass_jesRelativePtEC2Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtEC2Down", FatJet_msoftdrop_jesRelativePtEC2Down, &b_FatJet_msoftdrop_jesRelativePtEC2Down);
   fChain->SetBranchAddress("FatJet_pt_jesRelativePtHFDown", FatJet_pt_jesRelativePtHFDown, &b_FatJet_pt_jesRelativePtHFDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativePtHFDown", FatJet_mass_jesRelativePtHFDown, &b_FatJet_mass_jesRelativePtHFDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativePtHFDown", FatJet_msoftdrop_jesRelativePtHFDown, &b_FatJet_msoftdrop_jesRelativePtHFDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeBalDown", FatJet_pt_jesRelativeBalDown, &b_FatJet_pt_jesRelativeBalDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeBalDown", FatJet_mass_jesRelativeBalDown, &b_FatJet_mass_jesRelativeBalDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeBalDown", FatJet_msoftdrop_jesRelativeBalDown, &b_FatJet_msoftdrop_jesRelativeBalDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeSampleDown", FatJet_pt_jesRelativeSampleDown, &b_FatJet_pt_jesRelativeSampleDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeSampleDown", FatJet_mass_jesRelativeSampleDown, &b_FatJet_mass_jesRelativeSampleDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeSampleDown", FatJet_msoftdrop_jesRelativeSampleDown, &b_FatJet_msoftdrop_jesRelativeSampleDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeFSRDown", FatJet_pt_jesRelativeFSRDown, &b_FatJet_pt_jesRelativeFSRDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeFSRDown", FatJet_mass_jesRelativeFSRDown, &b_FatJet_mass_jesRelativeFSRDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeFSRDown", FatJet_msoftdrop_jesRelativeFSRDown, &b_FatJet_msoftdrop_jesRelativeFSRDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatFSRDown", FatJet_pt_jesRelativeStatFSRDown, &b_FatJet_pt_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatFSRDown", FatJet_mass_jesRelativeStatFSRDown, &b_FatJet_mass_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatFSRDown", FatJet_msoftdrop_jesRelativeStatFSRDown, &b_FatJet_msoftdrop_jesRelativeStatFSRDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatECDown", FatJet_pt_jesRelativeStatECDown, &b_FatJet_pt_jesRelativeStatECDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatECDown", FatJet_mass_jesRelativeStatECDown, &b_FatJet_mass_jesRelativeStatECDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatECDown", FatJet_msoftdrop_jesRelativeStatECDown, &b_FatJet_msoftdrop_jesRelativeStatECDown);
   fChain->SetBranchAddress("FatJet_pt_jesRelativeStatHFDown", FatJet_pt_jesRelativeStatHFDown, &b_FatJet_pt_jesRelativeStatHFDown);
   fChain->SetBranchAddress("FatJet_mass_jesRelativeStatHFDown", FatJet_mass_jesRelativeStatHFDown, &b_FatJet_mass_jesRelativeStatHFDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesRelativeStatHFDown", FatJet_msoftdrop_jesRelativeStatHFDown, &b_FatJet_msoftdrop_jesRelativeStatHFDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpDataMCDown", FatJet_pt_jesPileUpDataMCDown, &b_FatJet_pt_jesPileUpDataMCDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpDataMCDown", FatJet_mass_jesPileUpDataMCDown, &b_FatJet_mass_jesPileUpDataMCDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpDataMCDown", FatJet_msoftdrop_jesPileUpDataMCDown, &b_FatJet_msoftdrop_jesPileUpDataMCDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtRefDown", FatJet_pt_jesPileUpPtRefDown, &b_FatJet_pt_jesPileUpPtRefDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtRefDown", FatJet_mass_jesPileUpPtRefDown, &b_FatJet_mass_jesPileUpPtRefDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtRefDown", FatJet_msoftdrop_jesPileUpPtRefDown, &b_FatJet_msoftdrop_jesPileUpPtRefDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtBBDown", FatJet_pt_jesPileUpPtBBDown, &b_FatJet_pt_jesPileUpPtBBDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtBBDown", FatJet_mass_jesPileUpPtBBDown, &b_FatJet_mass_jesPileUpPtBBDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtBBDown", FatJet_msoftdrop_jesPileUpPtBBDown, &b_FatJet_msoftdrop_jesPileUpPtBBDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtEC1Down", FatJet_pt_jesPileUpPtEC1Down, &b_FatJet_pt_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtEC1Down", FatJet_mass_jesPileUpPtEC1Down, &b_FatJet_mass_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtEC1Down", FatJet_msoftdrop_jesPileUpPtEC1Down, &b_FatJet_msoftdrop_jesPileUpPtEC1Down);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtEC2Down", FatJet_pt_jesPileUpPtEC2Down, &b_FatJet_pt_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtEC2Down", FatJet_mass_jesPileUpPtEC2Down, &b_FatJet_mass_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtEC2Down", FatJet_msoftdrop_jesPileUpPtEC2Down, &b_FatJet_msoftdrop_jesPileUpPtEC2Down);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpPtHFDown", FatJet_pt_jesPileUpPtHFDown, &b_FatJet_pt_jesPileUpPtHFDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpPtHFDown", FatJet_mass_jesPileUpPtHFDown, &b_FatJet_mass_jesPileUpPtHFDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpPtHFDown", FatJet_msoftdrop_jesPileUpPtHFDown, &b_FatJet_msoftdrop_jesPileUpPtHFDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpMuZeroDown", FatJet_pt_jesPileUpMuZeroDown, &b_FatJet_pt_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpMuZeroDown", FatJet_mass_jesPileUpMuZeroDown, &b_FatJet_mass_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpMuZeroDown", FatJet_msoftdrop_jesPileUpMuZeroDown, &b_FatJet_msoftdrop_jesPileUpMuZeroDown);
   fChain->SetBranchAddress("FatJet_pt_jesPileUpEnvelopeDown", FatJet_pt_jesPileUpEnvelopeDown, &b_FatJet_pt_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("FatJet_mass_jesPileUpEnvelopeDown", FatJet_mass_jesPileUpEnvelopeDown, &b_FatJet_mass_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesPileUpEnvelopeDown", FatJet_msoftdrop_jesPileUpEnvelopeDown, &b_FatJet_msoftdrop_jesPileUpEnvelopeDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalPileUpDown", FatJet_pt_jesSubTotalPileUpDown, &b_FatJet_pt_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalPileUpDown", FatJet_mass_jesSubTotalPileUpDown, &b_FatJet_mass_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalPileUpDown", FatJet_msoftdrop_jesSubTotalPileUpDown, &b_FatJet_msoftdrop_jesSubTotalPileUpDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalRelativeDown", FatJet_pt_jesSubTotalRelativeDown, &b_FatJet_pt_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalRelativeDown", FatJet_mass_jesSubTotalRelativeDown, &b_FatJet_mass_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalRelativeDown", FatJet_msoftdrop_jesSubTotalRelativeDown, &b_FatJet_msoftdrop_jesSubTotalRelativeDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalPtDown", FatJet_pt_jesSubTotalPtDown, &b_FatJet_pt_jesSubTotalPtDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalPtDown", FatJet_mass_jesSubTotalPtDown, &b_FatJet_mass_jesSubTotalPtDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalPtDown", FatJet_msoftdrop_jesSubTotalPtDown, &b_FatJet_msoftdrop_jesSubTotalPtDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalScaleDown", FatJet_pt_jesSubTotalScaleDown, &b_FatJet_pt_jesSubTotalScaleDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalScaleDown", FatJet_mass_jesSubTotalScaleDown, &b_FatJet_mass_jesSubTotalScaleDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalScaleDown", FatJet_msoftdrop_jesSubTotalScaleDown, &b_FatJet_msoftdrop_jesSubTotalScaleDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalAbsoluteDown", FatJet_pt_jesSubTotalAbsoluteDown, &b_FatJet_pt_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalAbsoluteDown", FatJet_mass_jesSubTotalAbsoluteDown, &b_FatJet_mass_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalAbsoluteDown", FatJet_msoftdrop_jesSubTotalAbsoluteDown, &b_FatJet_msoftdrop_jesSubTotalAbsoluteDown);
   fChain->SetBranchAddress("FatJet_pt_jesSubTotalMCDown", FatJet_pt_jesSubTotalMCDown, &b_FatJet_pt_jesSubTotalMCDown);
   fChain->SetBranchAddress("FatJet_mass_jesSubTotalMCDown", FatJet_mass_jesSubTotalMCDown, &b_FatJet_mass_jesSubTotalMCDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesSubTotalMCDown", FatJet_msoftdrop_jesSubTotalMCDown, &b_FatJet_msoftdrop_jesSubTotalMCDown);
   fChain->SetBranchAddress("FatJet_pt_jesTotalDown", FatJet_pt_jesTotalDown, &b_FatJet_pt_jesTotalDown);
   fChain->SetBranchAddress("FatJet_mass_jesTotalDown", FatJet_mass_jesTotalDown, &b_FatJet_mass_jesTotalDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalDown", FatJet_msoftdrop_jesTotalDown, &b_FatJet_msoftdrop_jesTotalDown);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoFlavorDown", FatJet_pt_jesTotalNoFlavorDown, &b_FatJet_pt_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoFlavorDown", FatJet_mass_jesTotalNoFlavorDown, &b_FatJet_mass_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoFlavorDown", FatJet_msoftdrop_jesTotalNoFlavorDown, &b_FatJet_msoftdrop_jesTotalNoFlavorDown);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoTimeDown", FatJet_pt_jesTotalNoTimeDown, &b_FatJet_pt_jesTotalNoTimeDown);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoTimeDown", FatJet_mass_jesTotalNoTimeDown, &b_FatJet_mass_jesTotalNoTimeDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoTimeDown", FatJet_msoftdrop_jesTotalNoTimeDown, &b_FatJet_msoftdrop_jesTotalNoTimeDown);
   fChain->SetBranchAddress("FatJet_pt_jesTotalNoFlavorNoTimeDown", FatJet_pt_jesTotalNoFlavorNoTimeDown, &b_FatJet_pt_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("FatJet_mass_jesTotalNoFlavorNoTimeDown", FatJet_mass_jesTotalNoFlavorNoTimeDown, &b_FatJet_mass_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalNoFlavorNoTimeDown", FatJet_msoftdrop_jesTotalNoFlavorNoTimeDown, &b_FatJet_msoftdrop_jesTotalNoFlavorNoTimeDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorZJetDown", FatJet_pt_jesFlavorZJetDown, &b_FatJet_pt_jesFlavorZJetDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorZJetDown", FatJet_mass_jesFlavorZJetDown, &b_FatJet_mass_jesFlavorZJetDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorZJetDown", FatJet_msoftdrop_jesFlavorZJetDown, &b_FatJet_msoftdrop_jesFlavorZJetDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPhotonJetDown", FatJet_pt_jesFlavorPhotonJetDown, &b_FatJet_pt_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPhotonJetDown", FatJet_mass_jesFlavorPhotonJetDown, &b_FatJet_mass_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPhotonJetDown", FatJet_msoftdrop_jesFlavorPhotonJetDown, &b_FatJet_msoftdrop_jesFlavorPhotonJetDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureGluonDown", FatJet_pt_jesFlavorPureGluonDown, &b_FatJet_pt_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureGluonDown", FatJet_mass_jesFlavorPureGluonDown, &b_FatJet_mass_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureGluonDown", FatJet_msoftdrop_jesFlavorPureGluonDown, &b_FatJet_msoftdrop_jesFlavorPureGluonDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureQuarkDown", FatJet_pt_jesFlavorPureQuarkDown, &b_FatJet_pt_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureQuarkDown", FatJet_mass_jesFlavorPureQuarkDown, &b_FatJet_mass_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureQuarkDown", FatJet_msoftdrop_jesFlavorPureQuarkDown, &b_FatJet_msoftdrop_jesFlavorPureQuarkDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureCharmDown", FatJet_pt_jesFlavorPureCharmDown, &b_FatJet_pt_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureCharmDown", FatJet_mass_jesFlavorPureCharmDown, &b_FatJet_mass_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureCharmDown", FatJet_msoftdrop_jesFlavorPureCharmDown, &b_FatJet_msoftdrop_jesFlavorPureCharmDown);
   fChain->SetBranchAddress("FatJet_pt_jesFlavorPureBottomDown", FatJet_pt_jesFlavorPureBottomDown, &b_FatJet_pt_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("FatJet_mass_jesFlavorPureBottomDown", FatJet_mass_jesFlavorPureBottomDown, &b_FatJet_mass_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesFlavorPureBottomDown", FatJet_msoftdrop_jesFlavorPureBottomDown, &b_FatJet_msoftdrop_jesFlavorPureBottomDown);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunADown", FatJet_pt_jesTimeRunADown, &b_FatJet_pt_jesTimeRunADown);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunADown", FatJet_mass_jesTimeRunADown, &b_FatJet_mass_jesTimeRunADown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunADown", FatJet_msoftdrop_jesTimeRunADown, &b_FatJet_msoftdrop_jesTimeRunADown);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunBDown", FatJet_pt_jesTimeRunBDown, &b_FatJet_pt_jesTimeRunBDown);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunBDown", FatJet_mass_jesTimeRunBDown, &b_FatJet_mass_jesTimeRunBDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunBDown", FatJet_msoftdrop_jesTimeRunBDown, &b_FatJet_msoftdrop_jesTimeRunBDown);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunCDown", FatJet_pt_jesTimeRunCDown, &b_FatJet_pt_jesTimeRunCDown);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunCDown", FatJet_mass_jesTimeRunCDown, &b_FatJet_mass_jesTimeRunCDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunCDown", FatJet_msoftdrop_jesTimeRunCDown, &b_FatJet_msoftdrop_jesTimeRunCDown);
   fChain->SetBranchAddress("FatJet_pt_jesTimeRunDDown", FatJet_pt_jesTimeRunDDown, &b_FatJet_pt_jesTimeRunDDown);
   fChain->SetBranchAddress("FatJet_mass_jesTimeRunDDown", FatJet_mass_jesTimeRunDDown, &b_FatJet_mass_jesTimeRunDDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTimeRunDDown", FatJet_msoftdrop_jesTimeRunDDown, &b_FatJet_msoftdrop_jesTimeRunDDown);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupMPFInSituDown", FatJet_pt_jesCorrelationGroupMPFInSituDown, &b_FatJet_pt_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupMPFInSituDown", FatJet_mass_jesCorrelationGroupMPFInSituDown, &b_FatJet_mass_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupMPFInSituDown", FatJet_msoftdrop_jesCorrelationGroupMPFInSituDown, &b_FatJet_msoftdrop_jesCorrelationGroupMPFInSituDown);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupIntercalibrationDown", FatJet_pt_jesCorrelationGroupIntercalibrationDown, &b_FatJet_pt_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupIntercalibrationDown", FatJet_mass_jesCorrelationGroupIntercalibrationDown, &b_FatJet_mass_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupIntercalibrationDown", FatJet_msoftdrop_jesCorrelationGroupIntercalibrationDown, &b_FatJet_msoftdrop_jesCorrelationGroupIntercalibrationDown);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupbJESDown", FatJet_pt_jesCorrelationGroupbJESDown, &b_FatJet_pt_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupbJESDown", FatJet_mass_jesCorrelationGroupbJESDown, &b_FatJet_mass_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupbJESDown", FatJet_msoftdrop_jesCorrelationGroupbJESDown, &b_FatJet_msoftdrop_jesCorrelationGroupbJESDown);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupFlavorDown", FatJet_pt_jesCorrelationGroupFlavorDown, &b_FatJet_pt_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupFlavorDown", FatJet_mass_jesCorrelationGroupFlavorDown, &b_FatJet_mass_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupFlavorDown", FatJet_msoftdrop_jesCorrelationGroupFlavorDown, &b_FatJet_msoftdrop_jesCorrelationGroupFlavorDown);
   fChain->SetBranchAddress("FatJet_pt_jesCorrelationGroupUncorrelatedDown", FatJet_pt_jesCorrelationGroupUncorrelatedDown, &b_FatJet_pt_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("FatJet_mass_jesCorrelationGroupUncorrelatedDown", FatJet_mass_jesCorrelationGroupUncorrelatedDown, &b_FatJet_mass_jesCorrelationGroupUncorrelatedDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesCorrelationGroupUncorrelatedDown", FatJet_msoftdrop_jesCorrelationGroupUncorrelatedDown, &b_FatJet_msoftdrop_jesCorrelationGroupUncorrelatedDown);
   Notify();
}

Bool_t Events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Events_cxx

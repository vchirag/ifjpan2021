//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul 18 14:34:17 2021 by ROOT version 6.24/00
// from TTree default/20
// found on file: mc_big.root
//////////////////////////////////////////////////////////

#ifndef defaultclass_h
#define defaultclass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class defaultclass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           NTOYS;
   Int_t           toy_index[1];   //[NTOYS]
   Float_t         toy_weight[1];   //[NTOYS]
   Int_t           entry;
   Int_t           toy_ref;
   Int_t           CCBwdMigrated;
   Int_t           detector;
   Int_t           gparent;
   Int_t           mectopology;
   Int_t           nuparent;
   Int_t           nutype;
   Int_t           parent;
   Int_t           particle;
   Int_t           particle_detector;
   Int_t           primary;
   Int_t           reaction;
   Int_t           reactionCC;
   Int_t           reactionnofv;
   Int_t           target;
   Int_t           topology;
   Int_t           topology_ccpizero;
   Int_t           topology_no1pi;
   Int_t           topology_withpi0;
   Int_t           redo[1];   //[NTOYS]
   Int_t           accum_level[1];   //[NTOYS]
   Int_t           cut0[1];   //[NTOYS]
   Int_t           cut1[1];   //[NTOYS]
   Int_t           cut2[1];   //[NTOYS]
   Int_t           cut3[1];   //[NTOYS]
   Int_t           cut4[1];   //[NTOYS]
   Int_t           cut5[1];   //[NTOYS]
   Int_t           cut6[1];   //[NTOYS]
   Float_t         weight_syst[16];
   Float_t         weight_syst_total;
   Float_t         weight_corr[16];
   Float_t         weight_corr_total;
   Int_t           NWEIGHTSYST;
   Int_t           run;
   Int_t           subrun;
   Int_t           evt;
   Int_t           evt_time;
   Int_t           bunch;
   Int_t           TruthVertexID[1];   //[NTOYS]
   Int_t           RooVtxIndex[1];   //[NTOYS]
   Int_t           RooVtxEntry[1];   //[NTOYS]
   Int_t           RooVtxEntry2;
   Int_t           RooVtxFile;
   Int_t           nu_pdg;
   Float_t         nu_trueE;
   Int_t           nu_truereac;
   Float_t         nu_truedir[3];
   Float_t         true_V;
   Float_t         true_Q2;
   Float_t         true_X;
   Float_t         true_Y;
   Float_t         true_W;
   Int_t           selvtx_det;
   Float_t         selvtx_pos[4];
   Float_t         selvtx_truepos[4];
   Int_t           true_signal[1];   //[NTOYS]
   Int_t           sample[1];   //[NTOYS]
   Int_t           ntpctracks;
   Int_t           ntpcposQualityFV;
   Int_t           ntpcnegQualityFV;
   Int_t           nfgdtracks;
   Int_t           nfgdonlytracks;
   Int_t           infv;
   Int_t           fsipi0;
   Int_t           reac_code;
   Int_t           nu_parent;
   Int_t           nu_target;
   Int_t           truelepton_pdg;
   Float_t         truelepton_mom;
   Float_t         truelepton_costheta;
   Float_t         selmu_truemom;
   Float_t         selmu_truepos[4];
   Float_t         selmu_trueendpos[4];
   Float_t         selmu_truedir[3];
   Float_t         selmu_truephi;
   Float_t         selmu_dir[3];
   Float_t         selmu_phi;
   Float_t         selmu_enddir[3];
   Float_t         selmu_pos[4];
   Float_t         selmu_endpos[4];
   Float_t         selmu_mom[1];   //[NTOYS]
   Float_t         selmu_costheta[1];   //[NTOYS]
   Int_t           obj_maintrack_index;
   Int_t           n_elike_isofgd;
   Int_t           n_ele_tpc;
   Int_t           n_pos_tpc;
   Int_t           n_ph_ecal;
   Int_t           n_ele_tpc_single;
   Int_t           n_pos_tpc_single;
   Int_t           n_elepos_tpc_pair;
   Int_t           n_gamma;
   Int_t           pi0_comb;
   Int_t           n_gamma2;
   Int_t           gamma_eetpc_accum[27];   //[n_gamma2]
   Int_t           gamma_eetpc_id2[27];   //[n_gamma2]
   Int_t           gamma_eetpc_truetype[27];   //[n_gamma2]
   Int_t           gamma_eetpc_truetype2[27];   //[n_gamma2]
   Float_t         gamma_eetpc_dist[27];   //[n_gamma2]
   Float_t         gamma_eetpc_angle[27];   //[n_gamma2]
   Float_t         gamma_eetpc_invmass[27];   //[n_gamma2]
   Int_t           gamma_id1[27];   //[n_gamma2]
   Int_t           gamma_id2[27];   //[n_gamma2]
   Int_t           gamma_pdg1[27];   //[n_gamma2]
   Int_t           gamma_pdg2[27];   //[n_gamma2]
   Int_t           gamma_truetype1[27];   //[n_gamma2]
   Int_t           gamma_truetype2[27];   //[n_gamma2]
   Int_t           gamma_truetype[27];   //[n_gamma2]
   Float_t         gamma_ee_dist[27];   //[n_gamma2]
   Float_t         gamma_ee_angle[27];   //[n_gamma2]
   Float_t         gamma_ee_invmass[27];   //[n_gamma2]
   Float_t         gamma_smom1[27];   //[n_gamma2]
   Float_t         gamma_smom2[27];   //[n_gamma2]
   Float_t         gamma_dir_rec[27][3];   //[n_gamma2]
   Float_t         gamma_dir_vtx[27][3];   //[n_gamma2]
   Float_t         gamma_conv_point[27][3];   //[n_gamma2]
   Float_t         gamma_dist_to_vtx[27];   //[n_gamma2]
   Float_t         gamma_dirs_angle[27];   //[n_gamma2]
   Float_t         gamma_dir_rec_cos[27];   //[n_gamma2]
   Float_t         gamma_dir_vtx_cos[27];   //[n_gamma2]
   Float_t         gamma_dir_rec_phi[27];   //[n_gamma2]
   Float_t         gamma_dir_vtx_phi[27];   //[n_gamma2]
   Int_t           gamma_rectype[27];   //[n_gamma2]
   Float_t         gamma_mom[27];   //[n_gamma2]
   Float_t         gamma_dir[27][3];   //[n_gamma2]
   Float_t         gamma_costheta[27];   //[n_gamma2]
   Float_t         gamma_phi[27];   //[n_gamma2]
   Float_t         gamma_tomudist[27];   //[n_gamma2]
   Float_t         gamma_truemom1[27];   //[n_gamma2]
   Float_t         gamma_truedir1[27][3];   //[n_gamma2]
   Float_t         gamma_truecostheta1[27];   //[n_gamma2]
   Float_t         gamma_truephi1[27];   //[n_gamma2]
   Float_t         gamma_truemom2[27];   //[n_gamma2]
   Float_t         gamma_truedir2[27][3];   //[n_gamma2]
   Float_t         gamma_truecostheta2[27];   //[n_gamma2]
   Float_t         gamma_truephi2[27];   //[n_gamma2]
   Float_t         gamma_truemom[27];   //[n_gamma2]
   Float_t         gamma_truepos[27][4];   //[n_gamma2]
   Float_t         gamma_truedir[27][3];   //[n_gamma2]
   Float_t         gamma_truecostheta[27];   //[n_gamma2]
   Float_t         gamma_truephi[27];   //[n_gamma2]
   Float_t         gamma_truedir_dirrec_angle[27];   //[n_gamma2]
   Float_t         gamma_truedir_dirvtx_angle[27];   //[n_gamma2]
   Float_t         gamma_truepos_recpos_dist[27];   //[n_gamma2]
   Float_t         truegamma_truemom[27];   //[n_gamma2]
   Float_t         truegamma_truepos[27][4];   //[n_gamma2]
   Float_t         truegamma_truedir[27][3];   //[n_gamma2]
   Float_t         truegamma_truecostheta[27];   //[n_gamma2]
   Float_t         truegamma_truephi[27];   //[n_gamma2]
   Int_t           first_shower_shower_pair;
   Int_t           first_shower_shower_gamma1_id;
   Int_t           first_shower_shower_gamma2_id;
   Int_t           first_shower_shower_gamma1_sorted_id;
   Int_t           first_shower_shower_gamma2_sorted_id;
   Int_t           n_gamma_gamma;
   Int_t           gamma_gamma1_id[351];   //[n_gamma_gamma]
   Int_t           gamma_gamma2_id[351];   //[n_gamma_gamma]
   Int_t           gamma_gamma1_sorted_id[351];   //[n_gamma_gamma]
   Int_t           gamma_gamma2_sorted_id[351];   //[n_gamma_gamma]
   Int_t           gamma_gamma_rectype[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_mom[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_dir[351][3];   //[n_gamma_gamma]
   Float_t         gamma_gamma_costheta[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_phi[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_invmass[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_openingangle[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_openinganglecos[351];   //[n_gamma_gamma]
   Int_t           gamma_gamma_truetype[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_truemom[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_truedir[351][3];   //[n_gamma_gamma]
   Float_t         gamma_gamma_truecostheta[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_truephi[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_trueinvmass[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_trueopeningangle[351];   //[n_gamma_gamma]
   Float_t         gamma_gamma_trueopeninganglecos[351];   //[n_gamma_gamma]
   Float_t         trueselprimpi0_truemom[351];   //[n_gamma_gamma]
   Float_t         trueselprimpi0_truepos[351][4];   //[n_gamma_gamma]
   Float_t         trueselprimpi0_truedir[351][3];   //[n_gamma_gamma]
   Float_t         trueselprimpi0_truecostheta[351];   //[n_gamma_gamma]
   Float_t         trueselprimpi0_truephi[351];   //[n_gamma_gamma]
   Int_t           n_obj;
   Int_t           obj_vtx_detector[100];   //[n_obj]
   Int_t           obj_vtx_det[100];   //[n_obj]
   Int_t           obj_infv[100];   //[n_obj]
   Int_t           obj_fsipi0[100];   //[n_obj]
   Int_t           obj_reaction[100];   //[n_obj]
   Int_t           obj_reaccode[100];   //[n_obj]
   Int_t           obj_issamevtx[100];   //[n_obj]
   Int_t           obj_nutype[100];   //[n_obj]
   Int_t           obj_nuparent[100];   //[n_obj]
   Int_t           obj_nutarget[100];   //[n_obj]
   Int_t           obj_trkpi0[100];   //[n_obj]
   Int_t           obj_pdg[100];   //[n_obj]
   Int_t           obj_parent[100];   //[n_obj]
   Int_t           obj_gparent[100];   //[n_obj]
   Int_t           obj_primary[100];   //[n_obj]
   Float_t         obj_truemom[100];   //[n_obj]
   Float_t         obj_truedir[100][3];   //[n_obj]
   Float_t         obj_truephi[100];   //[n_obj]
   Float_t         obj_trueposstart[100][4];   //[n_obj]
   Float_t         obj_trueposend[100][4];   //[n_obj]
   Int_t           obj_truedetstart[100];   //[n_obj]
   Int_t           obj_truedetend[100];   //[n_obj]
   Int_t           obj_type[100];   //[n_obj]
   Int_t           obj_type2[100];   //[n_obj]
   Float_t         obj_mom[100];   //[n_obj]
   Float_t         obj_dir[100][3];   //[n_obj]
   Float_t         obj_phi[100];   //[n_obj]
   Float_t         obj_posstart[100][4];   //[n_obj]
   Float_t         obj_posend[100][4];   //[n_obj]
   Int_t           obj_detstart[100];   //[n_obj]
   Int_t           obj_detend[100];   //[n_obj]
   Int_t           obj_detectors[100];   //[n_obj]
   Float_t         obj_tomudist[100];   //[n_obj]
   Float_t         obj_topi0dist[100];   //[n_obj]
   Float_t         obj_topi0distend[100];   //[n_obj]
   Int_t           obj_ecal_accum[100];   //[n_obj]
   Int_t           obj_ecal_det[100];   //[n_obj]
   Float_t         obj_ecal_tomudir[100][3];   //[n_obj]
   Int_t           obj_ecal_isshower[100];   //[n_obj]
   Float_t         obj_ecal_mipem[100];   //[n_obj]
   Int_t           obj_ecal_nhits[100];   //[n_obj]
   Float_t         obj_ecal_emenergy[100];   //[n_obj]
   Int_t           obj_ecal_innermostlayer[100];   //[n_obj]
   Int_t           obj_ecal_outermostlayer[100];   //[n_obj]
   Int_t           obj_tpc_accum[100];   //[n_obj]
   Float_t         obj_tpc_q[100];   //[n_obj]
   Int_t           obj_tpc_nnodes[100];   //[n_obj]
   Float_t         obj_tpc_mupidpull[100];   //[n_obj]
   Float_t         obj_tpc_elpidpull[100];   //[n_obj]
   Float_t         obj_tpc_prpidpull[100];   //[n_obj]
   Float_t         obj_tpc_pipidpull[100];   //[n_obj]
   Float_t         obj_tpc_mupidlik[100];   //[n_obj]
   Float_t         obj_tpc_elpidlik[100];   //[n_obj]
   Float_t         obj_tpc_prpidlik[100];   //[n_obj]
   Float_t         obj_tpc_pipidlik[100];   //[n_obj]
   Int_t           obj_isofgd_accum[100];   //[n_obj]
   Float_t         obj_fgd_length[100];   //[n_obj]
   Int_t           obj_fgd_nhits[100];   //[n_obj]
   Int_t           obj_fgd_nnodes[100];   //[n_obj]
   Int_t           obj_fgd_containment[100];   //[n_obj]
   Float_t         obj_fgd_pullmu[100];   //[n_obj]
   Float_t         obj_fgd_pullp[100];   //[n_obj]
   Float_t         obj_fgd_pullpi[100];   //[n_obj]
   Int_t           n_rec_obj[10];
   Int_t           n_phpair;
   Int_t           phpair_trkpi0[66];   //[n_phpair]
   Int_t           phpair_trkpi0H[66];   //[n_phpair]
   Int_t           phpair_trkpi0L[66];   //[n_phpair]
   Int_t           phpair_sameprimary[66];   //[n_phpair]
   Float_t         phpair_angle[66];   //[n_phpair]
   Float_t         phpair_cosangle[66];   //[n_phpair]
   Float_t         phpair_invmass[66];   //[n_phpair]
   Int_t           phpair_recobj[66];   //[n_phpair]
   Float_t         phpair_trueangle[66];   //[n_phpair]
   Float_t         phpair_truecosangle[66];   //[n_phpair]
   Float_t         phpair_truemass[66];   //[n_phpair]
   Float_t         phpair_momH[66];   //[n_phpair]
   Float_t         phpair_dirH[66][3];   //[n_phpair]
   Float_t         phpair_posH[66][3];   //[n_phpair]
   Float_t         phpair_tomudirH[66][3];   //[n_phpair]
   Float_t         phpair_dirtomudirangleH[66];   //[n_phpair]
   Float_t         phpair_momL[66];   //[n_phpair]
   Float_t         phpair_dirL[66][3];   //[n_phpair]
   Float_t         phpair_posL[66][3];   //[n_phpair]
   Float_t         phpair_tomudirL[66][3];   //[n_phpair]
   Float_t         phpair_dirtomudirangleL[66];   //[n_phpair]
   Float_t         phpair_truemomH[66];   //[n_phpair]
   Float_t         phpair_truedirH[66][3];   //[n_phpair]
   Float_t         phpair_truedirtomudirangleH[66];   //[n_phpair]
   Float_t         phpair_truedirrecdirangleH[66];   //[n_phpair]
   Float_t         phpair_trueposH[66][4];   //[n_phpair]
   Float_t         phpair_trueposrecposdistH[66];   //[n_phpair]
   Float_t         phpair_truemomL[66];   //[n_phpair]
   Float_t         phpair_truedirL[66][3];   //[n_phpair]
   Float_t         phpair_truedirtomudirangleL[66];   //[n_phpair]
   Float_t         phpair_truedirrecdirangleL[66];   //[n_phpair]
   Float_t         phpair_trueposL[66][4];   //[n_phpair]
   Float_t         phpair_trueposrecposdistL[66];   //[n_phpair]
   Int_t           obj_is_tpcchargeideff_reltrack[100];   //[n_obj]
   Int_t           n_tpcchargeideff_reltracks;
   Int_t           obj_is_tpcclustereff_reltrack[100];   //[n_obj]
   Int_t           n_tpcclustereff_reltracks;
   Int_t           obj_is_ecalpid_reltrack[100];   //[n_obj]
   Int_t           n_ecalpid_reltracks;
   Int_t           obj_is_ph_ecal_pileup[100];   //[n_obj]
   Int_t           n_ph_ecal_pileup;
   Int_t           n_ph_ecal_nopileup;
   Int_t           obj_is_elepos_tpc_pileup[100];   //[n_obj]
   Int_t           n_elepos_tpc_pileup;
   Int_t           n_elepos_tpc_nopileup;
   Int_t           obj_is_tpctrackeff_reltrajs[100];   //[n_obj]
   Int_t           n_tpctrackeff_reltrajs;
   Int_t           obj_is_ecal_reltrajs[100];   //[n_obj]
   Int_t           n_ecal_reltrajs;
   Int_t           n_dsecal_reltrajs;
   Int_t           n_tecal_reltrajs;
   Int_t           obj_is_sipion_reltrajs[100];   //[n_obj]
   Int_t           n_sipion_reltrajs;
   Int_t           n_pi0cand_nopion;
   Int_t           obj_is_siproton_reltrajs[100];   //[n_obj]
   Int_t           n_siproton_reltrajs;
   Int_t           n_pi0cand_noproton;
   Int_t           obj_is_sineutron_reltrajs[100];   //[n_obj]
   Int_t           n_sineutron_reltrajs;
   Int_t           n_pi0cand_noneutron;
   Int_t           ecalpid_reltrack_1_ecal;
   Int_t           ecalpid_reltrack_2_ecal;
   Int_t           ecalpid_reltrack_1_det;
   Int_t           ecalpid_reltrack_2_det;
   Int_t           ecalpid_reltrack_1_pdg;
   Int_t           ecalpid_reltrack_2_pdg;

   // List of branches
   TBranch        *b_NTOYS;   //!
   TBranch        *b_toy_index;   //!
   TBranch        *b_toy_weight;   //!
   TBranch        *b_entry;   //!
   TBranch        *b_toy_ref;   //!
   TBranch        *b_CCBwdMigrated;   //!
   TBranch        *b_detector;   //!
   TBranch        *b_gparent;   //!
   TBranch        *b_mectopology;   //!
   TBranch        *b_nuparent;   //!
   TBranch        *b_nutype;   //!
   TBranch        *b_parent;   //!
   TBranch        *b_particle;   //!
   TBranch        *b_particle_detector;   //!
   TBranch        *b_primary;   //!
   TBranch        *b_reaction;   //!
   TBranch        *b_reactionCC;   //!
   TBranch        *b_reactionnofv;   //!
   TBranch        *b_target;   //!
   TBranch        *b_topology;   //!
   TBranch        *b_topology_ccpizero;   //!
   TBranch        *b_topology_no1pi;   //!
   TBranch        *b_topology_withpi0;   //!
   TBranch        *b_redo;   //!
   TBranch        *b_accum_level;   //!
   TBranch        *b_cut0;   //!
   TBranch        *b_cut1;   //!
   TBranch        *b_cut2;   //!
   TBranch        *b_cut3;   //!
   TBranch        *b_cut4;   //!
   TBranch        *b_cut5;   //!
   TBranch        *b_cut6;   //!
   TBranch        *b_weight_syst;   //!
   TBranch        *b_weight_syst_total;   //!
   TBranch        *b_weight_corr;   //!
   TBranch        *b_weight_corr_total;   //!
   TBranch        *b_NWEIGHTSYST;   //!
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_evt_time;   //!
   TBranch        *b_bunch;   //!
   TBranch        *b_TruthVertexID;   //!
   TBranch        *b_RooVtxIndex;   //!
   TBranch        *b_RooVtxEntry;   //!
   TBranch        *b_RooVtxEntry2;   //!
   TBranch        *b_RooVtxFile;   //!
   TBranch        *b_nu_pdg;   //!
   TBranch        *b_nu_trueE;   //!
   TBranch        *b_nu_truereac;   //!
   TBranch        *b_nu_truedir;   //!
   TBranch        *b_true_V;   //!
   TBranch        *b_true_Q2;   //!
   TBranch        *b_true_X;   //!
   TBranch        *b_true_Y;   //!
   TBranch        *b_true_W;   //!
   TBranch        *b_selvtx_det;   //!
   TBranch        *b_selvtx_pos;   //!
   TBranch        *b_selvtx_truepos;   //!
   TBranch        *b_true_signal;   //!
   TBranch        *b_sample;   //!
   TBranch        *b_ntpctracks;   //!
   TBranch        *b_ntpcposQualityFV;   //!
   TBranch        *b_ntpcnegQualityFV;   //!
   TBranch        *b_nfgdtracks;   //!
   TBranch        *b_nfgdonlytracks;   //!
   TBranch        *b_infv;   //!
   TBranch        *b_fsipi0;   //!
   TBranch        *b_reac_code;   //!
   TBranch        *b_nu_parent;   //!
   TBranch        *b_nu_target;   //!
   TBranch        *b_truelepton_pdg;   //!
   TBranch        *b_truelepton_mom;   //!
   TBranch        *b_truelepton_costheta;   //!
   TBranch        *b_selmu_truemom;   //!
   TBranch        *b_selmu_truepos;   //!
   TBranch        *b_selmu_trueendpos;   //!
   TBranch        *b_selmu_truedir;   //!
   TBranch        *b_selmu_truephi;   //!
   TBranch        *b_selmu_dir;   //!
   TBranch        *b_selmu_phi;   //!
   TBranch        *b_selmu_enddir;   //!
   TBranch        *b_selmu_pos;   //!
   TBranch        *b_selmu_endpos;   //!
   TBranch        *b_selmu_mom;   //!
   TBranch        *b_selmu_costheta;   //!
   TBranch        *b_obj_maintrack_index;   //!
   TBranch        *b_n_elike_isofgd;   //!
   TBranch        *b_n_ele_tpc;   //!
   TBranch        *b_n_pos_tpc;   //!
   TBranch        *b_n_ph_ecal;   //!
   TBranch        *b_n_ele_tpc_single;   //!
   TBranch        *b_n_pos_tpc_single;   //!
   TBranch        *b_n_elepos_tpc_pair;   //!
   TBranch        *b_n_gamma;   //!
   TBranch        *b_pi0_comb;   //!
   TBranch        *b_n_gamma2;   //!
   TBranch        *b_gamma_eetpc_accum;   //!
   TBranch        *b_gamma_eetpc_id2;   //!
   TBranch        *b_gamma_eetpc_truetype;   //!
   TBranch        *b_gamma_eetpc_truetype2;   //!
   TBranch        *b_gamma_eetpc_dist;   //!
   TBranch        *b_gamma_eetpc_angle;   //!
   TBranch        *b_gamma_eetpc_invmass;   //!
   TBranch        *b_gamma_id1;   //!
   TBranch        *b_gamma_id2;   //!
   TBranch        *b_gamma_pdg1;   //!
   TBranch        *b_gamma_pdg2;   //!
   TBranch        *b_gamma_truetype1;   //!
   TBranch        *b_gamma_truetype2;   //!
   TBranch        *b_gamma_truetype;   //!
   TBranch        *b_gamma_ee_dist;   //!
   TBranch        *b_gamma_ee_angle;   //!
   TBranch        *b_gamma_ee_invmass;   //!
   TBranch        *b_gamma_smom1;   //!
   TBranch        *b_gamma_smom2;   //!
   TBranch        *b_gamma_dir_rec;   //!
   TBranch        *b_gamma_dir_vtx;   //!
   TBranch        *b_gamma_conv_point;   //!
   TBranch        *b_gamma_dist_to_vtx;   //!
   TBranch        *b_gamma_dirs_angle;   //!
   TBranch        *b_gamma_dir_rec_cos;   //!
   TBranch        *b_gamma_dir_vtx_cos;   //!
   TBranch        *b_gamma_dir_rec_phi;   //!
   TBranch        *b_gamma_dir_vtx_phi;   //!
   TBranch        *b_gamma_rectype;   //!
   TBranch        *b_gamma_mom;   //!
   TBranch        *b_gamma_dir;   //!
   TBranch        *b_gamma_costheta;   //!
   TBranch        *b_gamma_phi;   //!
   TBranch        *b_gamma_tomudist;   //!
   TBranch        *b_gamma_truemom1;   //!
   TBranch        *b_gamma_truedir1;   //!
   TBranch        *b_gamma_truecostheta1;   //!
   TBranch        *b_gamma_truephi1;   //!
   TBranch        *b_gamma_truemom2;   //!
   TBranch        *b_gamma_truedir2;   //!
   TBranch        *b_gamma_truecostheta2;   //!
   TBranch        *b_gamma_truephi2;   //!
   TBranch        *b_gamma_truemom;   //!
   TBranch        *b_gamma_truepos;   //!
   TBranch        *b_gamma_truedir;   //!
   TBranch        *b_gamma_truecostheta;   //!
   TBranch        *b_gamma_truephi;   //!
   TBranch        *b_gamma_truedir_dirrec_angle;   //!
   TBranch        *b_gamma_truedir_dirvtx_angle;   //!
   TBranch        *b_gamma_truepos_recpos_dist;   //!
   TBranch        *b_truegamma_truemom;   //!
   TBranch        *b_truegamma_truepos;   //!
   TBranch        *b_truegamma_truedir;   //!
   TBranch        *b_truegamma_truecostheta;   //!
   TBranch        *b_truegamma_truephi;   //!
   TBranch        *b_first_shower_shower_pair;   //!
   TBranch        *b_first_shower_shower_gamma1_id;   //!
   TBranch        *b_first_shower_shower_gamma2_id;   //!
   TBranch        *b_first_shower_shower_gamma1_sorted_id;   //!
   TBranch        *b_first_shower_shower_gamma2_sorted_id;   //!
   TBranch        *b_n_gamma_gamma;   //!
   TBranch        *b_gamma_gamma1_id;   //!
   TBranch        *b_gamma_gamma2_id;   //!
   TBranch        *b_gamma_gamma1_sorted_id;   //!
   TBranch        *b_gamma_gamma2_sorted_id;   //!
   TBranch        *b_gamma_gamma_rectype;   //!
   TBranch        *b_gamma_gamma_mom;   //!
   TBranch        *b_gamma_gamma_dir;   //!
   TBranch        *b_gamma_gamma_costheta;   //!
   TBranch        *b_gamma_gamma_phi;   //!
   TBranch        *b_gamma_gamma_invmass;   //!
   TBranch        *b_gamma_gamma_openingangle;   //!
   TBranch        *b_gamma_gamma_openinganglecos;   //!
   TBranch        *b_gamma_gamma_truetype;   //!
   TBranch        *b_gamma_gamma_truemom;   //!
   TBranch        *b_gamma_gamma_truedir;   //!
   TBranch        *b_gamma_gamma_truecostheta;   //!
   TBranch        *b_gamma_gamma_truephi;   //!
   TBranch        *b_gamma_gamma_trueinvmass;   //!
   TBranch        *b_gamma_gamma_trueopeningangle;   //!
   TBranch        *b_gamma_gamma_trueopeninganglecos;   //!
   TBranch        *b_trueselprimpi0_truemom;   //!
   TBranch        *b_trueselprimpi0_truepos;   //!
   TBranch        *b_trueselprimpi0_truedir;   //!
   TBranch        *b_trueselprimpi0_truecostheta;   //!
   TBranch        *b_trueselprimpi0_truephi;   //!
   TBranch        *b_n_obj;   //!
   TBranch        *b_obj_vtx_detector;   //!
   TBranch        *b_obj_vtx_det;   //!
   TBranch        *b_obj_infv;   //!
   TBranch        *b_obj_fsipi0;   //!
   TBranch        *b_obj_reaction;   //!
   TBranch        *b_obj_reaccode;   //!
   TBranch        *b_obj_issamevtx;   //!
   TBranch        *b_obj_nutype;   //!
   TBranch        *b_obj_nuparent;   //!
   TBranch        *b_obj_nutarget;   //!
   TBranch        *b_obj_trkpi0;   //!
   TBranch        *b_obj_pdg;   //!
   TBranch        *b_obj_parent;   //!
   TBranch        *b_obj_gparent;   //!
   TBranch        *b_obj_primary;   //!
   TBranch        *b_obj_truemom;   //!
   TBranch        *b_obj_truedir;   //!
   TBranch        *b_obj_truephi;   //!
   TBranch        *b_obj_trueposstart;   //!
   TBranch        *b_obj_trueposend;   //!
   TBranch        *b_obj_truedetstart;   //!
   TBranch        *b_obj_truedetend;   //!
   TBranch        *b_obj_type;   //!
   TBranch        *b_obj_type2;   //!
   TBranch        *b_obj_mom;   //!
   TBranch        *b_obj_dir;   //!
   TBranch        *b_obj_phi;   //!
   TBranch        *b_obj_posstart;   //!
   TBranch        *b_obj_posend;   //!
   TBranch        *b_obj_detstart;   //!
   TBranch        *b_obj_detend;   //!
   TBranch        *b_obj_detectors;   //!
   TBranch        *b_obj_tomudist;   //!
   TBranch        *b_obj_topi0dist;   //!
   TBranch        *b_obj_topi0distend;   //!
   TBranch        *b_obj_ecal_accum;   //!
   TBranch        *b_obj_ecal_det;   //!
   TBranch        *b_obj_ecal_tomudir;   //!
   TBranch        *b_obj_ecal_isshower;   //!
   TBranch        *b_obj_ecal_mipem;   //!
   TBranch        *b_obj_ecal_nhits;   //!
   TBranch        *b_obj_ecal_emenergy;   //!
   TBranch        *b_obj_ecal_innermostlayer;   //!
   TBranch        *b_obj_ecal_outermostlayer;   //!
   TBranch        *b_obj_tpc_accum;   //!
   TBranch        *b_obj_tpc_q;   //!
   TBranch        *b_obj_tpc_nnodes;   //!
   TBranch        *b_obj_tpc_mupidpull;   //!
   TBranch        *b_obj_tpc_elpidpull;   //!
   TBranch        *b_obj_tpc_prpidpull;   //!
   TBranch        *b_obj_tpc_pipidpull;   //!
   TBranch        *b_obj_tpc_mupidlik;   //!
   TBranch        *b_obj_tpc_elpidlik;   //!
   TBranch        *b_obj_tpc_prpidlik;   //!
   TBranch        *b_obj_tpc_pipidlik;   //!
   TBranch        *b_obj_isofgd_accum;   //!
   TBranch        *b_obj_fgd_length;   //!
   TBranch        *b_obj_fgd_nhits;   //!
   TBranch        *b_obj_fgd_nnodes;   //!
   TBranch        *b_obj_fgd_containment;   //!
   TBranch        *b_obj_fgd_pullmu;   //!
   TBranch        *b_obj_fgd_pullp;   //!
   TBranch        *b_obj_fgd_pullpi;   //!
   TBranch        *b_n_rec_obj;   //!
   TBranch        *b_n_phpair;   //!
   TBranch        *b_phpair_trkpi0;   //!
   TBranch        *b_phpair_trkpi0H;   //!
   TBranch        *b_phpair_trkpi0L;   //!
   TBranch        *b_phpair_sameprimary;   //!
   TBranch        *b_phpair_angle;   //!
   TBranch        *b_phpair_cosangle;   //!
   TBranch        *b_phpair_invmass;   //!
   TBranch        *b_phpair_recobj;   //!
   TBranch        *b_phpair_trueangle;   //!
   TBranch        *b_phpair_truecosangle;   //!
   TBranch        *b_phpair_truemass;   //!
   TBranch        *b_phpair_momH;   //!
   TBranch        *b_phpair_dirH;   //!
   TBranch        *b_phpair_posH;   //!
   TBranch        *b_phpair_tomudirH;   //!
   TBranch        *b_phpair_dirtomudirangleH;   //!
   TBranch        *b_phpair_momL;   //!
   TBranch        *b_phpair_dirL;   //!
   TBranch        *b_phpair_posL;   //!
   TBranch        *b_phpair_tomudirL;   //!
   TBranch        *b_phpair_dirtomudirangleL;   //!
   TBranch        *b_phpair_truemomH;   //!
   TBranch        *b_phpair_truedirH;   //!
   TBranch        *b_phpair_truedirtomudirangleH;   //!
   TBranch        *b_phpair_truedirrecdirangleH;   //!
   TBranch        *b_phpair_trueposH;   //!
   TBranch        *b_phpair_trueposrecposdistH;   //!
   TBranch        *b_phpair_truemomL;   //!
   TBranch        *b_phpair_truedirL;   //!
   TBranch        *b_phpair_truedirtomudirangleL;   //!
   TBranch        *b_phpair_truedirrecdirangleL;   //!
   TBranch        *b_phpair_trueposL;   //!
   TBranch        *b_phpair_trueposrecposdistL;   //!
   TBranch        *b_obj_is_tpcchargeideff_reltrack;   //!
   TBranch        *b_n_tpcchargeideff_reltracks;   //!
   TBranch        *b_obj_is_tpcclustereff_reltrack;   //!
   TBranch        *b_n_tpcclustereff_reltracks;   //!
   TBranch        *b_obj_is_ecalpid_reltrack;   //!
   TBranch        *b_n_ecalpid_reltracks;   //!
   TBranch        *b_obj_is_ph_ecal_pileup;   //!
   TBranch        *b_n_ph_ecal_pileup;   //!
   TBranch        *b_n_ph_ecal_nopileup;   //!
   TBranch        *b_obj_is_elepos_tpc_pileup;   //!
   TBranch        *b_n_elepos_tpc_pileup;   //!
   TBranch        *b_n_elepos_tpc_nopileup;   //!
   TBranch        *b_obj_is_tpctrackeff_reltrajs;   //!
   TBranch        *b_n_tpctrackeff_reltrajs;   //!
   TBranch        *b_obj_is_ecal_reltrajs;   //!
   TBranch        *b_n_ecal_reltrajs;   //!
   TBranch        *b_n_dsecal_reltrajs;   //!
   TBranch        *b_n_tecal_reltrajs;   //!
   TBranch        *b_obj_is_sipion_reltrajs;   //!
   TBranch        *b_n_sipion_reltrajs;   //!
   TBranch        *b_n_pi0cand_nopion;   //!
   TBranch        *b_obj_is_siproton_reltrajs;   //!
   TBranch        *b_n_siproton_reltrajs;   //!
   TBranch        *b_n_pi0cand_noproton;   //!
   TBranch        *b_obj_is_sineutron_reltrajs;   //!
   TBranch        *b_n_sineutron_reltrajs;   //!
   TBranch        *b_n_pi0cand_noneutron;   //!
   TBranch        *b_ecalpid_reltrack_1_ecal;   //!
   TBranch        *b_ecalpid_reltrack_2_ecal;   //!
   TBranch        *b_ecalpid_reltrack_1_det;   //!
   TBranch        *b_ecalpid_reltrack_2_det;   //!
   TBranch        *b_ecalpid_reltrack_1_pdg;   //!
   TBranch        *b_ecalpid_reltrack_2_pdg;   //!

   defaultclass(TTree *tree=0);
   virtual ~defaultclass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef defaultclass_cxx
defaultclass::defaultclass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc_big.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc_big.root");
      }
      f->GetObject("default",tree);

   }
   Init(tree);
}

defaultclass::~defaultclass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t defaultclass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t defaultclass::LoadTree(Long64_t entry)
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

void defaultclass::Init(TTree *tree)
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

   fChain->SetBranchAddress("NTOYS", &NTOYS, &b_NTOYS);
   fChain->SetBranchAddress("toy_index", toy_index, &b_toy_index);
   fChain->SetBranchAddress("toy_weight", toy_weight, &b_toy_weight);
   fChain->SetBranchAddress("entry", &entry, &b_entry);
   fChain->SetBranchAddress("toy_ref", &toy_ref, &b_toy_ref);
   fChain->SetBranchAddress("CCBwdMigrated", &CCBwdMigrated, &b_CCBwdMigrated);
   fChain->SetBranchAddress("detector", &detector, &b_detector);
   fChain->SetBranchAddress("gparent", &gparent, &b_gparent);
   fChain->SetBranchAddress("mectopology", &mectopology, &b_mectopology);
   fChain->SetBranchAddress("nuparent", &nuparent, &b_nuparent);
   fChain->SetBranchAddress("nutype", &nutype, &b_nutype);
   fChain->SetBranchAddress("parent", &parent, &b_parent);
   fChain->SetBranchAddress("particle", &particle, &b_particle);
   fChain->SetBranchAddress("particle_detector", &particle_detector, &b_particle_detector);
   fChain->SetBranchAddress("primary", &primary, &b_primary);
   fChain->SetBranchAddress("reaction", &reaction, &b_reaction);
   fChain->SetBranchAddress("reactionCC", &reactionCC, &b_reactionCC);
   fChain->SetBranchAddress("reactionnofv", &reactionnofv, &b_reactionnofv);
   fChain->SetBranchAddress("target", &target, &b_target);
   fChain->SetBranchAddress("topology", &topology, &b_topology);
   fChain->SetBranchAddress("topology_ccpizero", &topology_ccpizero, &b_topology_ccpizero);
   fChain->SetBranchAddress("topology_no1pi", &topology_no1pi, &b_topology_no1pi);
   fChain->SetBranchAddress("topology_withpi0", &topology_withpi0, &b_topology_withpi0);
   fChain->SetBranchAddress("redo", redo, &b_redo);
   fChain->SetBranchAddress("accum_level", accum_level, &b_accum_level);
   fChain->SetBranchAddress("cut0", cut0, &b_cut0);
   fChain->SetBranchAddress("cut1", cut1, &b_cut1);
   fChain->SetBranchAddress("cut2", cut2, &b_cut2);
   fChain->SetBranchAddress("cut3", cut3, &b_cut3);
   fChain->SetBranchAddress("cut4", cut4, &b_cut4);
   fChain->SetBranchAddress("cut5", cut5, &b_cut5);
   fChain->SetBranchAddress("cut6", cut6, &b_cut6);
   fChain->SetBranchAddress("weight_syst", weight_syst, &b_weight_syst);
   fChain->SetBranchAddress("weight_syst_total", &weight_syst_total, &b_weight_syst_total);
   fChain->SetBranchAddress("weight_corr", weight_corr, &b_weight_corr);
   fChain->SetBranchAddress("weight_corr_total", &weight_corr_total, &b_weight_corr_total);
   fChain->SetBranchAddress("NWEIGHTSYST", &NWEIGHTSYST, &b_NWEIGHTSYST);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("evt_time", &evt_time, &b_evt_time);
   fChain->SetBranchAddress("bunch", &bunch, &b_bunch);
   fChain->SetBranchAddress("TruthVertexID", TruthVertexID, &b_TruthVertexID);
   fChain->SetBranchAddress("RooVtxIndex", RooVtxIndex, &b_RooVtxIndex);
   fChain->SetBranchAddress("RooVtxEntry", RooVtxEntry, &b_RooVtxEntry);
   fChain->SetBranchAddress("RooVtxEntry2", &RooVtxEntry2, &b_RooVtxEntry2);
   fChain->SetBranchAddress("RooVtxFile", &RooVtxFile, &b_RooVtxFile);
   fChain->SetBranchAddress("nu_pdg", &nu_pdg, &b_nu_pdg);
   fChain->SetBranchAddress("nu_trueE", &nu_trueE, &b_nu_trueE);
   fChain->SetBranchAddress("nu_truereac", &nu_truereac, &b_nu_truereac);
   fChain->SetBranchAddress("nu_truedir", nu_truedir, &b_nu_truedir);
   fChain->SetBranchAddress("true_V", &true_V, &b_true_V);
   fChain->SetBranchAddress("true_Q2", &true_Q2, &b_true_Q2);
   fChain->SetBranchAddress("true_X", &true_X, &b_true_X);
   fChain->SetBranchAddress("true_Y", &true_Y, &b_true_Y);
   fChain->SetBranchAddress("true_W", &true_W, &b_true_W);
   fChain->SetBranchAddress("selvtx_det", &selvtx_det, &b_selvtx_det);
   fChain->SetBranchAddress("selvtx_pos", selvtx_pos, &b_selvtx_pos);
   fChain->SetBranchAddress("selvtx_truepos", selvtx_truepos, &b_selvtx_truepos);
   fChain->SetBranchAddress("true_signal", true_signal, &b_true_signal);
   fChain->SetBranchAddress("sample", sample, &b_sample);
   fChain->SetBranchAddress("ntpctracks", &ntpctracks, &b_ntpctracks);
   fChain->SetBranchAddress("ntpcposQualityFV", &ntpcposQualityFV, &b_ntpcposQualityFV);
   fChain->SetBranchAddress("ntpcnegQualityFV", &ntpcnegQualityFV, &b_ntpcnegQualityFV);
   fChain->SetBranchAddress("nfgdtracks", &nfgdtracks, &b_nfgdtracks);
   fChain->SetBranchAddress("nfgdonlytracks", &nfgdonlytracks, &b_nfgdonlytracks);
   fChain->SetBranchAddress("infv", &infv, &b_infv);
   fChain->SetBranchAddress("fsipi0", &fsipi0, &b_fsipi0);
   fChain->SetBranchAddress("reac_code", &reac_code, &b_reac_code);
   fChain->SetBranchAddress("nu_parent", &nu_parent, &b_nu_parent);
   fChain->SetBranchAddress("nu_target", &nu_target, &b_nu_target);
   fChain->SetBranchAddress("truelepton_pdg", &truelepton_pdg, &b_truelepton_pdg);
   fChain->SetBranchAddress("truelepton_mom", &truelepton_mom, &b_truelepton_mom);
   fChain->SetBranchAddress("truelepton_costheta", &truelepton_costheta, &b_truelepton_costheta);
   fChain->SetBranchAddress("selmu_truemom", &selmu_truemom, &b_selmu_truemom);
   fChain->SetBranchAddress("selmu_truepos", selmu_truepos, &b_selmu_truepos);
   fChain->SetBranchAddress("selmu_trueendpos", selmu_trueendpos, &b_selmu_trueendpos);
   fChain->SetBranchAddress("selmu_truedir", selmu_truedir, &b_selmu_truedir);
   fChain->SetBranchAddress("selmu_truephi", &selmu_truephi, &b_selmu_truephi);
   fChain->SetBranchAddress("selmu_dir", selmu_dir, &b_selmu_dir);
   fChain->SetBranchAddress("selmu_phi", &selmu_phi, &b_selmu_phi);
   fChain->SetBranchAddress("selmu_enddir", selmu_enddir, &b_selmu_enddir);
   fChain->SetBranchAddress("selmu_pos", selmu_pos, &b_selmu_pos);
   fChain->SetBranchAddress("selmu_endpos", selmu_endpos, &b_selmu_endpos);
   fChain->SetBranchAddress("selmu_mom", selmu_mom, &b_selmu_mom);
   fChain->SetBranchAddress("selmu_costheta", selmu_costheta, &b_selmu_costheta);
   fChain->SetBranchAddress("obj_maintrack_index", &obj_maintrack_index, &b_obj_maintrack_index);
   fChain->SetBranchAddress("n_elike_isofgd", &n_elike_isofgd, &b_n_elike_isofgd);
   fChain->SetBranchAddress("n_ele_tpc", &n_ele_tpc, &b_n_ele_tpc);
   fChain->SetBranchAddress("n_pos_tpc", &n_pos_tpc, &b_n_pos_tpc);
   fChain->SetBranchAddress("n_ph_ecal", &n_ph_ecal, &b_n_ph_ecal);
   fChain->SetBranchAddress("n_ele_tpc_single", &n_ele_tpc_single, &b_n_ele_tpc_single);
   fChain->SetBranchAddress("n_pos_tpc_single", &n_pos_tpc_single, &b_n_pos_tpc_single);
   fChain->SetBranchAddress("n_elepos_tpc_pair", &n_elepos_tpc_pair, &b_n_elepos_tpc_pair);
   fChain->SetBranchAddress("n_gamma", &n_gamma, &b_n_gamma);
   fChain->SetBranchAddress("pi0_comb", &pi0_comb, &b_pi0_comb);
   fChain->SetBranchAddress("n_gamma2", &n_gamma2, &b_n_gamma2);
   fChain->SetBranchAddress("gamma_eetpc_accum", gamma_eetpc_accum, &b_gamma_eetpc_accum);
   fChain->SetBranchAddress("gamma_eetpc_id2", gamma_eetpc_id2, &b_gamma_eetpc_id2);
   fChain->SetBranchAddress("gamma_eetpc_truetype", gamma_eetpc_truetype, &b_gamma_eetpc_truetype);
   fChain->SetBranchAddress("gamma_eetpc_truetype2", gamma_eetpc_truetype2, &b_gamma_eetpc_truetype2);
   fChain->SetBranchAddress("gamma_eetpc_dist", gamma_eetpc_dist, &b_gamma_eetpc_dist);
   fChain->SetBranchAddress("gamma_eetpc_angle", gamma_eetpc_angle, &b_gamma_eetpc_angle);
   fChain->SetBranchAddress("gamma_eetpc_invmass", gamma_eetpc_invmass, &b_gamma_eetpc_invmass);
   fChain->SetBranchAddress("gamma_id1", gamma_id1, &b_gamma_id1);
   fChain->SetBranchAddress("gamma_id2", gamma_id2, &b_gamma_id2);
   fChain->SetBranchAddress("gamma_pdg1", gamma_pdg1, &b_gamma_pdg1);
   fChain->SetBranchAddress("gamma_pdg2", gamma_pdg2, &b_gamma_pdg2);
   fChain->SetBranchAddress("gamma_truetype1", gamma_truetype1, &b_gamma_truetype1);
   fChain->SetBranchAddress("gamma_truetype2", gamma_truetype2, &b_gamma_truetype2);
   fChain->SetBranchAddress("gamma_truetype", gamma_truetype, &b_gamma_truetype);
   fChain->SetBranchAddress("gamma_ee_dist", gamma_ee_dist, &b_gamma_ee_dist);
   fChain->SetBranchAddress("gamma_ee_angle", gamma_ee_angle, &b_gamma_ee_angle);
   fChain->SetBranchAddress("gamma_ee_invmass", gamma_ee_invmass, &b_gamma_ee_invmass);
   fChain->SetBranchAddress("gamma_smom1", gamma_smom1, &b_gamma_smom1);
   fChain->SetBranchAddress("gamma_smom2", gamma_smom2, &b_gamma_smom2);
   fChain->SetBranchAddress("gamma_dir_rec", gamma_dir_rec, &b_gamma_dir_rec);
   fChain->SetBranchAddress("gamma_dir_vtx", gamma_dir_vtx, &b_gamma_dir_vtx);
   fChain->SetBranchAddress("gamma_conv_point", gamma_conv_point, &b_gamma_conv_point);
   fChain->SetBranchAddress("gamma_dist_to_vtx", gamma_dist_to_vtx, &b_gamma_dist_to_vtx);
   fChain->SetBranchAddress("gamma_dirs_angle", gamma_dirs_angle, &b_gamma_dirs_angle);
   fChain->SetBranchAddress("gamma_dir_rec_cos", gamma_dir_rec_cos, &b_gamma_dir_rec_cos);
   fChain->SetBranchAddress("gamma_dir_vtx_cos", gamma_dir_vtx_cos, &b_gamma_dir_vtx_cos);
   fChain->SetBranchAddress("gamma_dir_rec_phi", gamma_dir_rec_phi, &b_gamma_dir_rec_phi);
   fChain->SetBranchAddress("gamma_dir_vtx_phi", gamma_dir_vtx_phi, &b_gamma_dir_vtx_phi);
   fChain->SetBranchAddress("gamma_rectype", gamma_rectype, &b_gamma_rectype);
   fChain->SetBranchAddress("gamma_mom", gamma_mom, &b_gamma_mom);
   fChain->SetBranchAddress("gamma_dir", gamma_dir, &b_gamma_dir);
   fChain->SetBranchAddress("gamma_costheta", gamma_costheta, &b_gamma_costheta);
   fChain->SetBranchAddress("gamma_phi", gamma_phi, &b_gamma_phi);
   fChain->SetBranchAddress("gamma_tomudist", gamma_tomudist, &b_gamma_tomudist);
   fChain->SetBranchAddress("gamma_truemom1", gamma_truemom1, &b_gamma_truemom1);
   fChain->SetBranchAddress("gamma_truedir1", gamma_truedir1, &b_gamma_truedir1);
   fChain->SetBranchAddress("gamma_truecostheta1", gamma_truecostheta1, &b_gamma_truecostheta1);
   fChain->SetBranchAddress("gamma_truephi1", gamma_truephi1, &b_gamma_truephi1);
   fChain->SetBranchAddress("gamma_truemom2", gamma_truemom2, &b_gamma_truemom2);
   fChain->SetBranchAddress("gamma_truedir2", gamma_truedir2, &b_gamma_truedir2);
   fChain->SetBranchAddress("gamma_truecostheta2", gamma_truecostheta2, &b_gamma_truecostheta2);
   fChain->SetBranchAddress("gamma_truephi2", gamma_truephi2, &b_gamma_truephi2);
   fChain->SetBranchAddress("gamma_truemom", gamma_truemom, &b_gamma_truemom);
   fChain->SetBranchAddress("gamma_truepos", gamma_truepos, &b_gamma_truepos);
   fChain->SetBranchAddress("gamma_truedir", gamma_truedir, &b_gamma_truedir);
   fChain->SetBranchAddress("gamma_truecostheta", gamma_truecostheta, &b_gamma_truecostheta);
   fChain->SetBranchAddress("gamma_truephi", gamma_truephi, &b_gamma_truephi);
   fChain->SetBranchAddress("gamma_truedir_dirrec_angle", gamma_truedir_dirrec_angle, &b_gamma_truedir_dirrec_angle);
   fChain->SetBranchAddress("gamma_truedir_dirvtx_angle", gamma_truedir_dirvtx_angle, &b_gamma_truedir_dirvtx_angle);
   fChain->SetBranchAddress("gamma_truepos_recpos_dist", gamma_truepos_recpos_dist, &b_gamma_truepos_recpos_dist);
   fChain->SetBranchAddress("truegamma_truemom", truegamma_truemom, &b_truegamma_truemom);
   fChain->SetBranchAddress("truegamma_truepos", truegamma_truepos, &b_truegamma_truepos);
   fChain->SetBranchAddress("truegamma_truedir", truegamma_truedir, &b_truegamma_truedir);
   fChain->SetBranchAddress("truegamma_truecostheta", truegamma_truecostheta, &b_truegamma_truecostheta);
   fChain->SetBranchAddress("truegamma_truephi", truegamma_truephi, &b_truegamma_truephi);
   fChain->SetBranchAddress("first_shower_shower_pair", &first_shower_shower_pair, &b_first_shower_shower_pair);
   fChain->SetBranchAddress("first_shower_shower_gamma1_id", &first_shower_shower_gamma1_id, &b_first_shower_shower_gamma1_id);
   fChain->SetBranchAddress("first_shower_shower_gamma2_id", &first_shower_shower_gamma2_id, &b_first_shower_shower_gamma2_id);
   fChain->SetBranchAddress("first_shower_shower_gamma1_sorted_id", &first_shower_shower_gamma1_sorted_id, &b_first_shower_shower_gamma1_sorted_id);
   fChain->SetBranchAddress("first_shower_shower_gamma2_sorted_id", &first_shower_shower_gamma2_sorted_id, &b_first_shower_shower_gamma2_sorted_id);
   fChain->SetBranchAddress("n_gamma_gamma", &n_gamma_gamma, &b_n_gamma_gamma);
   fChain->SetBranchAddress("gamma_gamma1_id", gamma_gamma1_id, &b_gamma_gamma1_id);
   fChain->SetBranchAddress("gamma_gamma2_id", gamma_gamma2_id, &b_gamma_gamma2_id);
   fChain->SetBranchAddress("gamma_gamma1_sorted_id", gamma_gamma1_sorted_id, &b_gamma_gamma1_sorted_id);
   fChain->SetBranchAddress("gamma_gamma2_sorted_id", gamma_gamma2_sorted_id, &b_gamma_gamma2_sorted_id);
   fChain->SetBranchAddress("gamma_gamma_rectype", gamma_gamma_rectype, &b_gamma_gamma_rectype);
   fChain->SetBranchAddress("gamma_gamma_mom", gamma_gamma_mom, &b_gamma_gamma_mom);
   fChain->SetBranchAddress("gamma_gamma_dir", gamma_gamma_dir, &b_gamma_gamma_dir);
   fChain->SetBranchAddress("gamma_gamma_costheta", gamma_gamma_costheta, &b_gamma_gamma_costheta);
   fChain->SetBranchAddress("gamma_gamma_phi", gamma_gamma_phi, &b_gamma_gamma_phi);
   fChain->SetBranchAddress("gamma_gamma_invmass", gamma_gamma_invmass, &b_gamma_gamma_invmass);
   fChain->SetBranchAddress("gamma_gamma_openingangle", gamma_gamma_openingangle, &b_gamma_gamma_openingangle);
   fChain->SetBranchAddress("gamma_gamma_openinganglecos", gamma_gamma_openinganglecos, &b_gamma_gamma_openinganglecos);
   fChain->SetBranchAddress("gamma_gamma_truetype", gamma_gamma_truetype, &b_gamma_gamma_truetype);
   fChain->SetBranchAddress("gamma_gamma_truemom", gamma_gamma_truemom, &b_gamma_gamma_truemom);
   fChain->SetBranchAddress("gamma_gamma_truedir", gamma_gamma_truedir, &b_gamma_gamma_truedir);
   fChain->SetBranchAddress("gamma_gamma_truecostheta", gamma_gamma_truecostheta, &b_gamma_gamma_truecostheta);
   fChain->SetBranchAddress("gamma_gamma_truephi", gamma_gamma_truephi, &b_gamma_gamma_truephi);
   fChain->SetBranchAddress("gamma_gamma_trueinvmass", gamma_gamma_trueinvmass, &b_gamma_gamma_trueinvmass);
   fChain->SetBranchAddress("gamma_gamma_trueopeningangle", gamma_gamma_trueopeningangle, &b_gamma_gamma_trueopeningangle);
   fChain->SetBranchAddress("gamma_gamma_trueopeninganglecos", gamma_gamma_trueopeninganglecos, &b_gamma_gamma_trueopeninganglecos);
   fChain->SetBranchAddress("trueselprimpi0_truemom", trueselprimpi0_truemom, &b_trueselprimpi0_truemom);
   fChain->SetBranchAddress("trueselprimpi0_truepos", trueselprimpi0_truepos, &b_trueselprimpi0_truepos);
   fChain->SetBranchAddress("trueselprimpi0_truedir", trueselprimpi0_truedir, &b_trueselprimpi0_truedir);
   fChain->SetBranchAddress("trueselprimpi0_truecostheta", trueselprimpi0_truecostheta, &b_trueselprimpi0_truecostheta);
   fChain->SetBranchAddress("trueselprimpi0_truephi", trueselprimpi0_truephi, &b_trueselprimpi0_truephi);
   fChain->SetBranchAddress("n_obj", &n_obj, &b_n_obj);
   fChain->SetBranchAddress("obj_vtx_detector", obj_vtx_detector, &b_obj_vtx_detector);
   fChain->SetBranchAddress("obj_vtx_det", obj_vtx_det, &b_obj_vtx_det);
   fChain->SetBranchAddress("obj_infv", obj_infv, &b_obj_infv);
   fChain->SetBranchAddress("obj_fsipi0", obj_fsipi0, &b_obj_fsipi0);
   fChain->SetBranchAddress("obj_reaction", obj_reaction, &b_obj_reaction);
   fChain->SetBranchAddress("obj_reaccode", obj_reaccode, &b_obj_reaccode);
   fChain->SetBranchAddress("obj_issamevtx", obj_issamevtx, &b_obj_issamevtx);
   fChain->SetBranchAddress("obj_nutype", obj_nutype, &b_obj_nutype);
   fChain->SetBranchAddress("obj_nuparent", obj_nuparent, &b_obj_nuparent);
   fChain->SetBranchAddress("obj_nutarget", obj_nutarget, &b_obj_nutarget);
   fChain->SetBranchAddress("obj_trkpi0", obj_trkpi0, &b_obj_trkpi0);
   fChain->SetBranchAddress("obj_pdg", obj_pdg, &b_obj_pdg);
   fChain->SetBranchAddress("obj_parent", obj_parent, &b_obj_parent);
   fChain->SetBranchAddress("obj_gparent", obj_gparent, &b_obj_gparent);
   fChain->SetBranchAddress("obj_primary", obj_primary, &b_obj_primary);
   fChain->SetBranchAddress("obj_truemom", obj_truemom, &b_obj_truemom);
   fChain->SetBranchAddress("obj_truedir", obj_truedir, &b_obj_truedir);
   fChain->SetBranchAddress("obj_truephi", obj_truephi, &b_obj_truephi);
   fChain->SetBranchAddress("obj_trueposstart", obj_trueposstart, &b_obj_trueposstart);
   fChain->SetBranchAddress("obj_trueposend", obj_trueposend, &b_obj_trueposend);
   fChain->SetBranchAddress("obj_truedetstart", obj_truedetstart, &b_obj_truedetstart);
   fChain->SetBranchAddress("obj_truedetend", obj_truedetend, &b_obj_truedetend);
   fChain->SetBranchAddress("obj_type", obj_type, &b_obj_type);
   fChain->SetBranchAddress("obj_type2", obj_type2, &b_obj_type2);
   fChain->SetBranchAddress("obj_mom", obj_mom, &b_obj_mom);
   fChain->SetBranchAddress("obj_dir", obj_dir, &b_obj_dir);
   fChain->SetBranchAddress("obj_phi", obj_phi, &b_obj_phi);
   fChain->SetBranchAddress("obj_posstart", obj_posstart, &b_obj_posstart);
   fChain->SetBranchAddress("obj_posend", obj_posend, &b_obj_posend);
   fChain->SetBranchAddress("obj_detstart", obj_detstart, &b_obj_detstart);
   fChain->SetBranchAddress("obj_detend", obj_detend, &b_obj_detend);
   fChain->SetBranchAddress("obj_detectors", obj_detectors, &b_obj_detectors);
   fChain->SetBranchAddress("obj_tomudist", obj_tomudist, &b_obj_tomudist);
   fChain->SetBranchAddress("obj_topi0dist", obj_topi0dist, &b_obj_topi0dist);
   fChain->SetBranchAddress("obj_topi0distend", obj_topi0distend, &b_obj_topi0distend);
   fChain->SetBranchAddress("obj_ecal_accum", obj_ecal_accum, &b_obj_ecal_accum);
   fChain->SetBranchAddress("obj_ecal_det", obj_ecal_det, &b_obj_ecal_det);
   fChain->SetBranchAddress("obj_ecal_tomudir", obj_ecal_tomudir, &b_obj_ecal_tomudir);
   fChain->SetBranchAddress("obj_ecal_isshower", obj_ecal_isshower, &b_obj_ecal_isshower);
   fChain->SetBranchAddress("obj_ecal_mipem", obj_ecal_mipem, &b_obj_ecal_mipem);
   fChain->SetBranchAddress("obj_ecal_nhits", obj_ecal_nhits, &b_obj_ecal_nhits);
   fChain->SetBranchAddress("obj_ecal_emenergy", obj_ecal_emenergy, &b_obj_ecal_emenergy);
   fChain->SetBranchAddress("obj_ecal_innermostlayer", obj_ecal_innermostlayer, &b_obj_ecal_innermostlayer);
   fChain->SetBranchAddress("obj_ecal_outermostlayer", obj_ecal_outermostlayer, &b_obj_ecal_outermostlayer);
   fChain->SetBranchAddress("obj_tpc_accum", obj_tpc_accum, &b_obj_tpc_accum);
   fChain->SetBranchAddress("obj_tpc_q", obj_tpc_q, &b_obj_tpc_q);
   fChain->SetBranchAddress("obj_tpc_nnodes", obj_tpc_nnodes, &b_obj_tpc_nnodes);
   fChain->SetBranchAddress("obj_tpc_mupidpull", obj_tpc_mupidpull, &b_obj_tpc_mupidpull);
   fChain->SetBranchAddress("obj_tpc_elpidpull", obj_tpc_elpidpull, &b_obj_tpc_elpidpull);
   fChain->SetBranchAddress("obj_tpc_prpidpull", obj_tpc_prpidpull, &b_obj_tpc_prpidpull);
   fChain->SetBranchAddress("obj_tpc_pipidpull", obj_tpc_pipidpull, &b_obj_tpc_pipidpull);
   fChain->SetBranchAddress("obj_tpc_mupidlik", obj_tpc_mupidlik, &b_obj_tpc_mupidlik);
   fChain->SetBranchAddress("obj_tpc_elpidlik", obj_tpc_elpidlik, &b_obj_tpc_elpidlik);
   fChain->SetBranchAddress("obj_tpc_prpidlik", obj_tpc_prpidlik, &b_obj_tpc_prpidlik);
   fChain->SetBranchAddress("obj_tpc_pipidlik", obj_tpc_pipidlik, &b_obj_tpc_pipidlik);
   fChain->SetBranchAddress("obj_isofgd_accum", obj_isofgd_accum, &b_obj_isofgd_accum);
   fChain->SetBranchAddress("obj_fgd_length", obj_fgd_length, &b_obj_fgd_length);
   fChain->SetBranchAddress("obj_fgd_nhits", obj_fgd_nhits, &b_obj_fgd_nhits);
   fChain->SetBranchAddress("obj_fgd_nnodes", obj_fgd_nnodes, &b_obj_fgd_nnodes);
   fChain->SetBranchAddress("obj_fgd_containment", obj_fgd_containment, &b_obj_fgd_containment);
   fChain->SetBranchAddress("obj_fgd_pullmu", obj_fgd_pullmu, &b_obj_fgd_pullmu);
   fChain->SetBranchAddress("obj_fgd_pullp", obj_fgd_pullp, &b_obj_fgd_pullp);
   fChain->SetBranchAddress("obj_fgd_pullpi", obj_fgd_pullpi, &b_obj_fgd_pullpi);
   fChain->SetBranchAddress("n_rec_obj", n_rec_obj, &b_n_rec_obj);
   fChain->SetBranchAddress("n_phpair", &n_phpair, &b_n_phpair);
   fChain->SetBranchAddress("phpair_trkpi0", phpair_trkpi0, &b_phpair_trkpi0);
   fChain->SetBranchAddress("phpair_trkpi0H", phpair_trkpi0H, &b_phpair_trkpi0H);
   fChain->SetBranchAddress("phpair_trkpi0L", phpair_trkpi0L, &b_phpair_trkpi0L);
   fChain->SetBranchAddress("phpair_sameprimary", phpair_sameprimary, &b_phpair_sameprimary);
   fChain->SetBranchAddress("phpair_angle", phpair_angle, &b_phpair_angle);
   fChain->SetBranchAddress("phpair_cosangle", phpair_cosangle, &b_phpair_cosangle);
   fChain->SetBranchAddress("phpair_invmass", phpair_invmass, &b_phpair_invmass);
   fChain->SetBranchAddress("phpair_recobj", phpair_recobj, &b_phpair_recobj);
   fChain->SetBranchAddress("phpair_trueangle", phpair_trueangle, &b_phpair_trueangle);
   fChain->SetBranchAddress("phpair_truecosangle", phpair_truecosangle, &b_phpair_truecosangle);
   fChain->SetBranchAddress("phpair_truemass", phpair_truemass, &b_phpair_truemass);
   fChain->SetBranchAddress("phpair_momH", phpair_momH, &b_phpair_momH);
   fChain->SetBranchAddress("phpair_dirH", phpair_dirH, &b_phpair_dirH);
   fChain->SetBranchAddress("phpair_posH", phpair_posH, &b_phpair_posH);
   fChain->SetBranchAddress("phpair_tomudirH", phpair_tomudirH, &b_phpair_tomudirH);
   fChain->SetBranchAddress("phpair_dirtomudirangleH", phpair_dirtomudirangleH, &b_phpair_dirtomudirangleH);
   fChain->SetBranchAddress("phpair_momL", phpair_momL, &b_phpair_momL);
   fChain->SetBranchAddress("phpair_dirL", phpair_dirL, &b_phpair_dirL);
   fChain->SetBranchAddress("phpair_posL", phpair_posL, &b_phpair_posL);
   fChain->SetBranchAddress("phpair_tomudirL", phpair_tomudirL, &b_phpair_tomudirL);
   fChain->SetBranchAddress("phpair_dirtomudirangleL", phpair_dirtomudirangleL, &b_phpair_dirtomudirangleL);
   fChain->SetBranchAddress("phpair_truemomH", phpair_truemomH, &b_phpair_truemomH);
   fChain->SetBranchAddress("phpair_truedirH", phpair_truedirH, &b_phpair_truedirH);
   fChain->SetBranchAddress("phpair_truedirtomudirangleH", phpair_truedirtomudirangleH, &b_phpair_truedirtomudirangleH);
   fChain->SetBranchAddress("phpair_truedirrecdirangleH", phpair_truedirrecdirangleH, &b_phpair_truedirrecdirangleH);
   fChain->SetBranchAddress("phpair_trueposH", phpair_trueposH, &b_phpair_trueposH);
   fChain->SetBranchAddress("phpair_trueposrecposdistH", phpair_trueposrecposdistH, &b_phpair_trueposrecposdistH);
   fChain->SetBranchAddress("phpair_truemomL", phpair_truemomL, &b_phpair_truemomL);
   fChain->SetBranchAddress("phpair_truedirL", phpair_truedirL, &b_phpair_truedirL);
   fChain->SetBranchAddress("phpair_truedirtomudirangleL", phpair_truedirtomudirangleL, &b_phpair_truedirtomudirangleL);
   fChain->SetBranchAddress("phpair_truedirrecdirangleL", phpair_truedirrecdirangleL, &b_phpair_truedirrecdirangleL);
   fChain->SetBranchAddress("phpair_trueposL", phpair_trueposL, &b_phpair_trueposL);
   fChain->SetBranchAddress("phpair_trueposrecposdistL", phpair_trueposrecposdistL, &b_phpair_trueposrecposdistL);
   fChain->SetBranchAddress("obj_is_tpcchargeideff_reltrack", obj_is_tpcchargeideff_reltrack, &b_obj_is_tpcchargeideff_reltrack);
   fChain->SetBranchAddress("n_tpcchargeideff_reltracks", &n_tpcchargeideff_reltracks, &b_n_tpcchargeideff_reltracks);
   fChain->SetBranchAddress("obj_is_tpcclustereff_reltrack", obj_is_tpcclustereff_reltrack, &b_obj_is_tpcclustereff_reltrack);
   fChain->SetBranchAddress("n_tpcclustereff_reltracks", &n_tpcclustereff_reltracks, &b_n_tpcclustereff_reltracks);
   fChain->SetBranchAddress("obj_is_ecalpid_reltrack", obj_is_ecalpid_reltrack, &b_obj_is_ecalpid_reltrack);
   fChain->SetBranchAddress("n_ecalpid_reltracks", &n_ecalpid_reltracks, &b_n_ecalpid_reltracks);
   fChain->SetBranchAddress("obj_is_ph_ecal_pileup", obj_is_ph_ecal_pileup, &b_obj_is_ph_ecal_pileup);
   fChain->SetBranchAddress("n_ph_ecal_pileup", &n_ph_ecal_pileup, &b_n_ph_ecal_pileup);
   fChain->SetBranchAddress("n_ph_ecal_nopileup", &n_ph_ecal_nopileup, &b_n_ph_ecal_nopileup);
   fChain->SetBranchAddress("obj_is_elepos_tpc_pileup", obj_is_elepos_tpc_pileup, &b_obj_is_elepos_tpc_pileup);
   fChain->SetBranchAddress("n_elepos_tpc_pileup", &n_elepos_tpc_pileup, &b_n_elepos_tpc_pileup);
   fChain->SetBranchAddress("n_elepos_tpc_nopileup", &n_elepos_tpc_nopileup, &b_n_elepos_tpc_nopileup);
   fChain->SetBranchAddress("obj_is_tpctrackeff_reltrajs", obj_is_tpctrackeff_reltrajs, &b_obj_is_tpctrackeff_reltrajs);
   fChain->SetBranchAddress("n_tpctrackeff_reltrajs", &n_tpctrackeff_reltrajs, &b_n_tpctrackeff_reltrajs);
   fChain->SetBranchAddress("obj_is_ecal_reltrajs", obj_is_ecal_reltrajs, &b_obj_is_ecal_reltrajs);
   fChain->SetBranchAddress("n_ecal_reltrajs", &n_ecal_reltrajs, &b_n_ecal_reltrajs);
   fChain->SetBranchAddress("n_dsecal_reltrajs", &n_dsecal_reltrajs, &b_n_dsecal_reltrajs);
   fChain->SetBranchAddress("n_tecal_reltrajs", &n_tecal_reltrajs, &b_n_tecal_reltrajs);
   fChain->SetBranchAddress("obj_is_sipion_reltrajs", obj_is_sipion_reltrajs, &b_obj_is_sipion_reltrajs);
   fChain->SetBranchAddress("n_sipion_reltrajs", &n_sipion_reltrajs, &b_n_sipion_reltrajs);
   fChain->SetBranchAddress("n_pi0cand_nopion", &n_pi0cand_nopion, &b_n_pi0cand_nopion);
   fChain->SetBranchAddress("obj_is_siproton_reltrajs", obj_is_siproton_reltrajs, &b_obj_is_siproton_reltrajs);
   fChain->SetBranchAddress("n_siproton_reltrajs", &n_siproton_reltrajs, &b_n_siproton_reltrajs);
   fChain->SetBranchAddress("n_pi0cand_noproton", &n_pi0cand_noproton, &b_n_pi0cand_noproton);
   fChain->SetBranchAddress("obj_is_sineutron_reltrajs", obj_is_sineutron_reltrajs, &b_obj_is_sineutron_reltrajs);
   fChain->SetBranchAddress("n_sineutron_reltrajs", &n_sineutron_reltrajs, &b_n_sineutron_reltrajs);
   fChain->SetBranchAddress("n_pi0cand_noneutron", &n_pi0cand_noneutron, &b_n_pi0cand_noneutron);
   fChain->SetBranchAddress("ecalpid_reltrack_1_ecal", &ecalpid_reltrack_1_ecal, &b_ecalpid_reltrack_1_ecal);
   fChain->SetBranchAddress("ecalpid_reltrack_2_ecal", &ecalpid_reltrack_2_ecal, &b_ecalpid_reltrack_2_ecal);
   fChain->SetBranchAddress("ecalpid_reltrack_1_det", &ecalpid_reltrack_1_det, &b_ecalpid_reltrack_1_det);
   fChain->SetBranchAddress("ecalpid_reltrack_2_det", &ecalpid_reltrack_2_det, &b_ecalpid_reltrack_2_det);
   fChain->SetBranchAddress("ecalpid_reltrack_1_pdg", &ecalpid_reltrack_1_pdg, &b_ecalpid_reltrack_1_pdg);
   fChain->SetBranchAddress("ecalpid_reltrack_2_pdg", &ecalpid_reltrack_2_pdg, &b_ecalpid_reltrack_2_pdg);
   Notify();
}

Bool_t defaultclass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void defaultclass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t defaultclass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef defaultclass_cxx

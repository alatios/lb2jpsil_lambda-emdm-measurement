/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "AngularDistribution.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(AngularDistribution); 

 AngularDistribution::AngularDistribution(const char *name, const char *title, 
                        RooAbsReal& _ctheta,
                        RooAbsReal& _phi,
                        RooAbsReal& _sx,
                        RooAbsReal& _sz,
                        RooAbsReal& _alpha) :
   RooAbsPdf(name,title), 
   ctheta("ctheta","ctheta",this,_ctheta),
   phi("phi","phi",this,_phi),
   sx("sx","sx",this,_sx),
   sz("sz","sz",this,_sz),
   alpha("alpha","alpha",this,_alpha)
 { 
 } 


 AngularDistribution::AngularDistribution(const AngularDistribution& other, const char* name) :  
   RooAbsPdf(other,name), 
   ctheta("ctheta",this,other.ctheta),
   phi("phi",this,other.phi),
   sx("sx",this,other.sx),
   sz("sz",this,other.sz),
   alpha("alpha",this,other.alpha)
 { 
 } 



 Double_t AngularDistribution::evaluate() const
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE
  const double ctheta0 = ctheta;
  const double phi0 = phi;
  const double alpha0 = alpha;
  const double sx0 = sx;
  const double sz0 = sz;

  double val = 1.+ alpha0 * (sx0 * std::sqrt(1-std::pow(ctheta0,2)) * std::cos(phi0) + sz0 * ctheta0);

  if(val < 0.){ return 0.; }

  return val;

 } 



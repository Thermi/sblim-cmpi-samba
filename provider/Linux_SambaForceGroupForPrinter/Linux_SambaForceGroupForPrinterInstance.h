/**
 *  Linux_SambaForceGroupForPrinterInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaForceGroupForPrinterInstance_h
#define Linux_SambaForceGroupForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterInstance {
  public:
       Linux_SambaForceGroupForPrinterInstance();
  	
       Linux_SambaForceGroupForPrinterInstance
  	    (const Linux_SambaForceGroupForPrinterInstance& original);
  	   
       Linux_SambaForceGroupForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForPrinterInstance();
       
       Linux_SambaForceGroupForPrinterInstance& operator=
  	    (const Linux_SambaForceGroupForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForPrinterInstanceName& val);        
       const Linux_SambaForceGroupForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForPrinterInstance& original);
       void reset();
       
       Linux_SambaForceGroupForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForPrinterInstanceEnumerationElement{
  	Linux_SambaForceGroupForPrinterInstance* m_elementP;
  	Linux_SambaForceGroupForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForPrinterInstanceEnumerationElement();
  	~Linux_SambaForceGroupForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForPrinterInstanceEnumeration(
  	   const Linux_SambaForceGroupForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForPrinterInstance& elementP);
  };
}
#endif


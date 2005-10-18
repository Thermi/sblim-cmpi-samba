/**
 *  Linux_SambaForceGroupForPrinterManualInstance.h
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


#ifndef Linux_SambaForceGroupForPrinterManualInstance_h
#define Linux_SambaForceGroupForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterManualInstance {
  public:
       Linux_SambaForceGroupForPrinterManualInstance();
  	
       Linux_SambaForceGroupForPrinterManualInstance
  	    (const Linux_SambaForceGroupForPrinterManualInstance& original);
  	   
       Linux_SambaForceGroupForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForPrinterManualInstance();
       
       Linux_SambaForceGroupForPrinterManualInstance& operator=
  	    (const Linux_SambaForceGroupForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForPrinterInstanceName& val);        
       const Linux_SambaForceGroupForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaForceGroupForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement{
  	Linux_SambaForceGroupForPrinterManualInstance* m_elementP;
  	Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForPrinterManualInstanceEnumeration(
  	   const Linux_SambaForceGroupForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForPrinterManualInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaPrinterSecurityForGlobalManualInstance.h
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


#ifndef Linux_SambaPrinterSecurityForGlobalManualInstance_h
#define Linux_SambaPrinterSecurityForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalManualInstance {
  public:
       Linux_SambaPrinterSecurityForGlobalManualInstance();
  	
       Linux_SambaPrinterSecurityForGlobalManualInstance
  	    (const Linux_SambaPrinterSecurityForGlobalManualInstance& original);
  	   
       Linux_SambaPrinterSecurityForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForGlobalManualInstance();
       
       Linux_SambaPrinterSecurityForGlobalManualInstance& operator=
  	    (const Linux_SambaPrinterSecurityForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForGlobalInstanceName& val);        
       const Linux_SambaPrinterSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForGlobalManualInstance* m_elementP;
  	Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForGlobalManualInstance& elementP);
  };
}
#endif


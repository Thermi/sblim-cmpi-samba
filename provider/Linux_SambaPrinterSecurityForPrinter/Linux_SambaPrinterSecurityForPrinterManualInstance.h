/**
 *  Linux_SambaPrinterSecurityForPrinterManualInstance.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterManualInstance_h
#define Linux_SambaPrinterSecurityForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterManualInstance {
  public:
       Linux_SambaPrinterSecurityForPrinterManualInstance();
  	
       Linux_SambaPrinterSecurityForPrinterManualInstance
  	    (const Linux_SambaPrinterSecurityForPrinterManualInstance& original);
  	   
       Linux_SambaPrinterSecurityForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForPrinterManualInstance();
       
       Linux_SambaPrinterSecurityForPrinterManualInstance& operator=
  	    (const Linux_SambaPrinterSecurityForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForPrinterInstanceName& val);        
       const Linux_SambaPrinterSecurityForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForPrinterManualInstance* m_elementP;
  	Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForPrinterManualInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaPrinterSecurityOptionsManualInstance.h
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


#ifndef Linux_SambaPrinterSecurityOptionsManualInstance_h
#define Linux_SambaPrinterSecurityOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsManualInstance {
  public:
       Linux_SambaPrinterSecurityOptionsManualInstance();
  	
       Linux_SambaPrinterSecurityOptionsManualInstance
  	    (const Linux_SambaPrinterSecurityOptionsManualInstance& original);
  	   
       Linux_SambaPrinterSecurityOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityOptionsManualInstance();
       
       Linux_SambaPrinterSecurityOptionsManualInstance& operator=
  	    (const Linux_SambaPrinterSecurityOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityOptionsInstanceName& val);        
       const Linux_SambaPrinterSecurityOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityOptionsManualInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityOptionsManualInstance* m_elementP;
  	Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityOptionsManualInstance& elementP);
  };
}
#endif


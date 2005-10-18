/**
 *  Linux_SambaPrinterAdminForGlobalManualInstance.h
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


#ifndef Linux_SambaPrinterAdminForGlobalManualInstance_h
#define Linux_SambaPrinterAdminForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalManualInstance {
  public:
       Linux_SambaPrinterAdminForGlobalManualInstance();
  	
       Linux_SambaPrinterAdminForGlobalManualInstance
  	    (const Linux_SambaPrinterAdminForGlobalManualInstance& original);
  	   
       Linux_SambaPrinterAdminForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForGlobalManualInstance();
       
       Linux_SambaPrinterAdminForGlobalManualInstance& operator=
  	    (const Linux_SambaPrinterAdminForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForGlobalInstanceName& val);        
       const Linux_SambaPrinterAdminForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForGlobalManualInstance* m_elementP;
  	Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForGlobalManualInstance& elementP);
  };
}
#endif


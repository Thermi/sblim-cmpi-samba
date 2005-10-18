/**
 *  Linux_SambaPrinterAdminForPrinterManualInstance.h
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


#ifndef Linux_SambaPrinterAdminForPrinterManualInstance_h
#define Linux_SambaPrinterAdminForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterManualInstance {
  public:
       Linux_SambaPrinterAdminForPrinterManualInstance();
  	
       Linux_SambaPrinterAdminForPrinterManualInstance
  	    (const Linux_SambaPrinterAdminForPrinterManualInstance& original);
  	   
       Linux_SambaPrinterAdminForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForPrinterManualInstance();
       
       Linux_SambaPrinterAdminForPrinterManualInstance& operator=
  	    (const Linux_SambaPrinterAdminForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForPrinterInstanceName& val);        
       const Linux_SambaPrinterAdminForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForPrinterManualInstance* m_elementP;
  	Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForPrinterManualInstance& elementP);
  };
}
#endif


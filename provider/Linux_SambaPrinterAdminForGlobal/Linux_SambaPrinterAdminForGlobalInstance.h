/**
 *  Linux_SambaPrinterAdminForGlobalInstance.h
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


#ifndef Linux_SambaPrinterAdminForGlobalInstance_h
#define Linux_SambaPrinterAdminForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalInstance {
  public:
       Linux_SambaPrinterAdminForGlobalInstance();
  	
       Linux_SambaPrinterAdminForGlobalInstance
  	    (const Linux_SambaPrinterAdminForGlobalInstance& original);
  	   
       Linux_SambaPrinterAdminForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForGlobalInstance();
       
       Linux_SambaPrinterAdminForGlobalInstance& operator=
  	    (const Linux_SambaPrinterAdminForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForGlobalInstanceName& val);        
       const Linux_SambaPrinterAdminForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForGlobalInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForGlobalInstance* m_elementP;
  	Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForGlobalInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForGlobalInstance& elementP);
  };
}
#endif


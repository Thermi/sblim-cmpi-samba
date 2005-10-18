/**
 *  Linux_SambaPrinterSecurityForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaPrinterSecurityForGlobalRepositoryInstance_h
#define Linux_SambaPrinterSecurityForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalRepositoryInstance {
  public:
       Linux_SambaPrinterSecurityForGlobalRepositoryInstance();
  	
       Linux_SambaPrinterSecurityForGlobalRepositoryInstance
  	    (const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& original);
  	   
       Linux_SambaPrinterSecurityForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForGlobalRepositoryInstance();
       
       Linux_SambaPrinterSecurityForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForGlobalInstanceName& val);        
       const Linux_SambaPrinterSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& elementP);
  };
}
#endif


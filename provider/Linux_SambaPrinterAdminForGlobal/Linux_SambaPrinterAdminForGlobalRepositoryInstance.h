/**
 *  Linux_SambaPrinterAdminForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaPrinterAdminForGlobalRepositoryInstance_h
#define Linux_SambaPrinterAdminForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalRepositoryInstance {
  public:
       Linux_SambaPrinterAdminForGlobalRepositoryInstance();
  	
       Linux_SambaPrinterAdminForGlobalRepositoryInstance
  	    (const Linux_SambaPrinterAdminForGlobalRepositoryInstance& original);
  	   
       Linux_SambaPrinterAdminForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForGlobalRepositoryInstance();
       
       Linux_SambaPrinterAdminForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaPrinterAdminForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForGlobalInstanceName& val);        
       const Linux_SambaPrinterAdminForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForGlobalRepositoryInstance& elementP);
  };
}
#endif


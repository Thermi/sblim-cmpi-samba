/**
 *  Linux_SambaPrinterAdminForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaPrinterAdminForPrinterRepositoryInstance_h
#define Linux_SambaPrinterAdminForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterRepositoryInstance {
  public:
       Linux_SambaPrinterAdminForPrinterRepositoryInstance();
  	
       Linux_SambaPrinterAdminForPrinterRepositoryInstance
  	    (const Linux_SambaPrinterAdminForPrinterRepositoryInstance& original);
  	   
       Linux_SambaPrinterAdminForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForPrinterRepositoryInstance();
       
       Linux_SambaPrinterAdminForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaPrinterAdminForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForPrinterInstanceName& val);        
       const Linux_SambaPrinterAdminForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForPrinterRepositoryInstance& elementP);
  };
}
#endif


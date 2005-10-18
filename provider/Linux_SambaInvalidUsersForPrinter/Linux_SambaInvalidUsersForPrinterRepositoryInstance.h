/**
 *  Linux_SambaInvalidUsersForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaInvalidUsersForPrinterRepositoryInstance_h
#define Linux_SambaInvalidUsersForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterRepositoryInstance {
  public:
       Linux_SambaInvalidUsersForPrinterRepositoryInstance();
  	
       Linux_SambaInvalidUsersForPrinterRepositoryInstance
  	    (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original);
  	   
       Linux_SambaInvalidUsersForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForPrinterRepositoryInstance();
       
       Linux_SambaInvalidUsersForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForPrinterInstanceName& val);        
       const Linux_SambaInvalidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForPrinterRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaValidUsersForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaValidUsersForPrinterRepositoryInstance_h
#define Linux_SambaValidUsersForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForPrinterRepositoryInstance {
  public:
       Linux_SambaValidUsersForPrinterRepositoryInstance();
  	
       Linux_SambaValidUsersForPrinterRepositoryInstance
  	    (const Linux_SambaValidUsersForPrinterRepositoryInstance& original);
  	   
       Linux_SambaValidUsersForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForPrinterRepositoryInstance();
       
       Linux_SambaValidUsersForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaValidUsersForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForPrinterInstanceName& val);        
       const Linux_SambaValidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaValidUsersForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForPrinterRepositoryInstance& elementP);
  };
}
#endif


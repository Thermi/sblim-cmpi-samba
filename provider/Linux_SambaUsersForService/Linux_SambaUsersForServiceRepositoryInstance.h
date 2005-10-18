/**
 *  Linux_SambaUsersForServiceRepositoryInstance.h
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


#ifndef Linux_SambaUsersForServiceRepositoryInstance_h
#define Linux_SambaUsersForServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUsersForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaUsersForServiceRepositoryInstance {
  public:
       Linux_SambaUsersForServiceRepositoryInstance();
  	
       Linux_SambaUsersForServiceRepositoryInstance
  	    (const Linux_SambaUsersForServiceRepositoryInstance& original);
  	   
       Linux_SambaUsersForServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUsersForServiceRepositoryInstance();
       
       Linux_SambaUsersForServiceRepositoryInstance& operator=
  	    (const Linux_SambaUsersForServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUsersForServiceInstanceName& val);        
       const Linux_SambaUsersForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaUsersForServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaUsersForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaUsersForServiceRepositoryInstance* m_elementP;
  	Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUsersForServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUsersForServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaUsersForServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaUsersForServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUsersForServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUsersForServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUsersForServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUsersForServiceRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaGlobalSecurityOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalSecurityOptionsRepositoryInstance_h
#define Linux_SambaGlobalSecurityOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalSecurityOptionsRepositoryInstance();
  	
       Linux_SambaGlobalSecurityOptionsRepositoryInstance
  	    (const Linux_SambaGlobalSecurityOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalSecurityOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalSecurityOptionsRepositoryInstance();
       
       Linux_SambaGlobalSecurityOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalSecurityOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalSecurityOptionsInstanceName& val);        
       const Linux_SambaGlobalSecurityOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalSecurityOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalSecurityOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalSecurityOptionsRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGlobalSecurityForGlobalRepositoryInstance_h
#define Linux_SambaGlobalSecurityForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalRepositoryInstance {
  public:
       Linux_SambaGlobalSecurityForGlobalRepositoryInstance();
  	
       Linux_SambaGlobalSecurityForGlobalRepositoryInstance
  	    (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGlobalSecurityForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalSecurityForGlobalRepositoryInstance();
       
       Linux_SambaGlobalSecurityForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalSecurityForGlobalInstanceName& val);        
       const Linux_SambaGlobalSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalSecurityForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaShareSecurityForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaShareSecurityForGlobalRepositoryInstance_h
#define Linux_SambaShareSecurityForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForGlobalRepositoryInstance {
  public:
       Linux_SambaShareSecurityForGlobalRepositoryInstance();
  	
       Linux_SambaShareSecurityForGlobalRepositoryInstance
  	    (const Linux_SambaShareSecurityForGlobalRepositoryInstance& original);
  	   
       Linux_SambaShareSecurityForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForGlobalRepositoryInstance();
       
       Linux_SambaShareSecurityForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaShareSecurityForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForGlobalInstanceName& val);        
       const Linux_SambaShareSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaShareSecurityForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForGlobalRepositoryInstance& elementP);
  };
}
#endif


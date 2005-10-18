/**
 *  Linux_SambaCommonSecurityForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaCommonSecurityForGlobalRepositoryInstance_h
#define Linux_SambaCommonSecurityForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalRepositoryInstance {
  public:
       Linux_SambaCommonSecurityForGlobalRepositoryInstance();
  	
       Linux_SambaCommonSecurityForGlobalRepositoryInstance
  	    (const Linux_SambaCommonSecurityForGlobalRepositoryInstance& original);
  	   
       Linux_SambaCommonSecurityForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForGlobalRepositoryInstance();
       
       Linux_SambaCommonSecurityForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaCommonSecurityForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForGlobalInstanceName& val);        
       const Linux_SambaCommonSecurityForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForGlobalRepositoryInstance& elementP);
  };
}
#endif


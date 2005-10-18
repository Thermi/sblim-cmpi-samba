/**
 *  Linux_SambaShareSecurityOptionsRepositoryInstance.h
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


#ifndef Linux_SambaShareSecurityOptionsRepositoryInstance_h
#define Linux_SambaShareSecurityOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsRepositoryInstance {
  public:
       Linux_SambaShareSecurityOptionsRepositoryInstance();
  	
       Linux_SambaShareSecurityOptionsRepositoryInstance
  	    (const Linux_SambaShareSecurityOptionsRepositoryInstance& original);
  	   
       Linux_SambaShareSecurityOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityOptionsRepositoryInstance();
       
       Linux_SambaShareSecurityOptionsRepositoryInstance& operator=
  	    (const Linux_SambaShareSecurityOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityOptionsInstanceName& val);        
       const Linux_SambaShareSecurityOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaShareSecurityOptionsRepositoryInstance* m_elementP;
  	Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityOptionsRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaCommonSecurityOptionsRepositoryInstance.h
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


#ifndef Linux_SambaCommonSecurityOptionsRepositoryInstance_h
#define Linux_SambaCommonSecurityOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsRepositoryInstance {
  public:
       Linux_SambaCommonSecurityOptionsRepositoryInstance();
  	
       Linux_SambaCommonSecurityOptionsRepositoryInstance
  	    (const Linux_SambaCommonSecurityOptionsRepositoryInstance& original);
  	   
       Linux_SambaCommonSecurityOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityOptionsRepositoryInstance();
       
       Linux_SambaCommonSecurityOptionsRepositoryInstance& operator=
  	    (const Linux_SambaCommonSecurityOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityOptionsInstanceName& val);        
       const Linux_SambaCommonSecurityOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaCommonSecurityOptionsRepositoryInstance* m_elementP;
  	Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityOptionsRepositoryInstance& elementP);
  };
}
#endif


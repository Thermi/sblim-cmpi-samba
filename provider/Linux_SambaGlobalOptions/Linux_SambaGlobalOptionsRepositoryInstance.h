/**
 *  Linux_SambaGlobalOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalOptionsRepositoryInstance_h
#define Linux_SambaGlobalOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalOptionsRepositoryInstance();
  	
       Linux_SambaGlobalOptionsRepositoryInstance
  	    (const Linux_SambaGlobalOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalOptionsRepositoryInstance();
       
       Linux_SambaGlobalOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalOptionsInstanceName& val);        
       const Linux_SambaGlobalOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalOptionsRepositoryInstance& elementP);
  };
}
#endif


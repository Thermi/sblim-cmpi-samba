/**
 *  Linux_SambaHostRepositoryInstance.h
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


#ifndef Linux_SambaHostRepositoryInstance_h
#define Linux_SambaHostRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"

namespace genProvider {

  class Linux_SambaHostRepositoryInstance {
  public:
       Linux_SambaHostRepositoryInstance();
  	
       Linux_SambaHostRepositoryInstance
  	    (const Linux_SambaHostRepositoryInstance& original);
  	   
       Linux_SambaHostRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaHostRepositoryInstance();
       
       Linux_SambaHostRepositoryInstance& operator=
  	    (const Linux_SambaHostRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaHostInstanceName& val);        
       const Linux_SambaHostInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaHostRepositoryInstance& original);
       void reset();
       
       Linux_SambaHostInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaHostRepositoryInstanceEnumerationElement{
  	Linux_SambaHostRepositoryInstance* m_elementP;
  	Linux_SambaHostRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaHostRepositoryInstanceEnumerationElement();
  	~Linux_SambaHostRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaHostRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaHostRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaHostRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaHostRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaHostRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaHostRepositoryInstanceEnumeration(
  	   const Linux_SambaHostRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaHostRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaHostRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaHostRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaHostRepositoryInstance& elementP);
  };
}
#endif


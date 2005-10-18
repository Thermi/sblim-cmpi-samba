/**
 *  Linux_SambaShareProtocolOptionsRepositoryInstance.h
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


#ifndef Linux_SambaShareProtocolOptionsRepositoryInstance_h
#define Linux_SambaShareProtocolOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsRepositoryInstance {
  public:
       Linux_SambaShareProtocolOptionsRepositoryInstance();
  	
       Linux_SambaShareProtocolOptionsRepositoryInstance
  	    (const Linux_SambaShareProtocolOptionsRepositoryInstance& original);
  	   
       Linux_SambaShareProtocolOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareProtocolOptionsRepositoryInstance();
       
       Linux_SambaShareProtocolOptionsRepositoryInstance& operator=
  	    (const Linux_SambaShareProtocolOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareProtocolOptionsInstanceName& val);        
       const Linux_SambaShareProtocolOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareProtocolOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareProtocolOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaShareProtocolOptionsRepositoryInstance* m_elementP;
  	Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareProtocolOptionsRepositoryInstance& elementP);
  };
}
#endif


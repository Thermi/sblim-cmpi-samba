/**
 *  Linux_SambaShareProtocolForShareRepositoryInstance.h
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


#ifndef Linux_SambaShareProtocolForShareRepositoryInstance_h
#define Linux_SambaShareProtocolForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareRepositoryInstance {
  public:
       Linux_SambaShareProtocolForShareRepositoryInstance();
  	
       Linux_SambaShareProtocolForShareRepositoryInstance
  	    (const Linux_SambaShareProtocolForShareRepositoryInstance& original);
  	   
       Linux_SambaShareProtocolForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareProtocolForShareRepositoryInstance();
       
       Linux_SambaShareProtocolForShareRepositoryInstance& operator=
  	    (const Linux_SambaShareProtocolForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareProtocolForShareInstanceName& val);        
       const Linux_SambaShareProtocolForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareProtocolForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareProtocolForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaShareProtocolForShareRepositoryInstance* m_elementP;
  	Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareProtocolForShareRepositoryInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaWriteListForShareRepositoryInstance.h
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


#ifndef Linux_SambaWriteListForShareRepositoryInstance_h
#define Linux_SambaWriteListForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForShareRepositoryInstance {
  public:
       Linux_SambaWriteListForShareRepositoryInstance();
  	
       Linux_SambaWriteListForShareRepositoryInstance
  	    (const Linux_SambaWriteListForShareRepositoryInstance& original);
  	   
       Linux_SambaWriteListForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForShareRepositoryInstance();
       
       Linux_SambaWriteListForShareRepositoryInstance& operator=
  	    (const Linux_SambaWriteListForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForShareInstanceName& val);        
       const Linux_SambaWriteListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaWriteListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaWriteListForShareRepositoryInstance* m_elementP;
  	Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaWriteListForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForShareRepositoryInstance& elementP);
  };
}
#endif


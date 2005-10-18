/**
 *  Linux_SambaShareForServiceRepositoryInstance.h
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


#ifndef Linux_SambaShareForServiceRepositoryInstance_h
#define Linux_SambaShareForServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaShareForServiceRepositoryInstance {
  public:
       Linux_SambaShareForServiceRepositoryInstance();
  	
       Linux_SambaShareForServiceRepositoryInstance
  	    (const Linux_SambaShareForServiceRepositoryInstance& original);
  	   
       Linux_SambaShareForServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareForServiceRepositoryInstance();
       
       Linux_SambaShareForServiceRepositoryInstance& operator=
  	    (const Linux_SambaShareForServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareForServiceInstanceName& val);        
       const Linux_SambaShareForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareForServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareForServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaShareForServiceRepositoryInstance* m_elementP;
  	Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareForServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareForServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareForServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaShareForServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareForServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareForServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareForServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareForServiceRepositoryInstance& elementP);
  };
}
#endif


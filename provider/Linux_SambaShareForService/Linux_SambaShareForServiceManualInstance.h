/**
 *  Linux_SambaShareForServiceManualInstance.h
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


#ifndef Linux_SambaShareForServiceManualInstance_h
#define Linux_SambaShareForServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaShareForServiceManualInstance {
  public:
       Linux_SambaShareForServiceManualInstance();
  	
       Linux_SambaShareForServiceManualInstance
  	    (const Linux_SambaShareForServiceManualInstance& original);
  	   
       Linux_SambaShareForServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareForServiceManualInstance();
       
       Linux_SambaShareForServiceManualInstance& operator=
  	    (const Linux_SambaShareForServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareForServiceInstanceName& val);        
       const Linux_SambaShareForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareForServiceManualInstance& original);
       void reset();
       
       Linux_SambaShareForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareForServiceManualInstanceEnumerationElement{
  	Linux_SambaShareForServiceManualInstance* m_elementP;
  	Linux_SambaShareForServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareForServiceManualInstanceEnumerationElement();
  	~Linux_SambaShareForServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareForServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareForServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareForServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareForServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareForServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaShareForServiceManualInstanceEnumeration(
  	   const Linux_SambaShareForServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareForServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareForServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareForServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareForServiceManualInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsInstanceName_h
#define Linux_SambaGlobalFileNameHandlingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsInstanceName {
  public:
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName();
  	
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName
  	    (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original);
  	   
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalFileNameHandlingOptionsInstanceName();
       
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName& operator=
  	    (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


/**
 *  Linux_SambaGlobalForServiceInstanceName.h
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


#ifndef Linux_SambaGlobalForServiceInstanceName_h
#define Linux_SambaGlobalForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalForServiceInstanceName {
  public:
       Linux_SambaGlobalForServiceInstanceName();
  	
       Linux_SambaGlobalForServiceInstanceName
  	    (const Linux_SambaGlobalForServiceInstanceName& original);
  	   
       Linux_SambaGlobalForServiceInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalForServiceInstanceName();
       
       Linux_SambaGlobalForServiceInstanceName& operator=
  	    (const Linux_SambaGlobalForServiceInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaServiceInstanceName& val);
       const Linux_SambaServiceInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalForServiceInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalOptionsInstanceName m_SettingData;
       Linux_SambaServiceInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalForServiceInstanceNameEnumerationElement{
  	Linux_SambaGlobalForServiceInstanceName* m_elementP;
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement();
  	~Linux_SambaGlobalForServiceInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalForServiceInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalForServiceInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalForServiceInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalForServiceInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalForServiceInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalForServiceInstanceNameEnumeration(
  	   const Linux_SambaGlobalForServiceInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalForServiceInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalForServiceInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalForServiceInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalForServiceInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


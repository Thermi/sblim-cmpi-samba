/**
 *  Linux_SambaShareForServiceInstanceName.h
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


#ifndef Linux_SambaShareForServiceInstanceName_h
#define Linux_SambaShareForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaShareForServiceInstanceName {
  public:
       Linux_SambaShareForServiceInstanceName();
  	
       Linux_SambaShareForServiceInstanceName
  	    (const Linux_SambaShareForServiceInstanceName& original);
  	   
       Linux_SambaShareForServiceInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareForServiceInstanceName();
       
       Linux_SambaShareForServiceInstanceName& operator=
  	    (const Linux_SambaShareForServiceInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaServiceInstanceName& val);
       const Linux_SambaServiceInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaShareForServiceInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareOptionsInstanceName m_SettingData;
       Linux_SambaServiceInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareForServiceInstanceNameEnumerationElement{
  	Linux_SambaShareForServiceInstanceName* m_elementP;
  	Linux_SambaShareForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareForServiceInstanceNameEnumerationElement();
  	~Linux_SambaShareForServiceInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareForServiceInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareForServiceInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareForServiceInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareForServiceInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareForServiceInstanceNameEnumeration();
  	  
  	  Linux_SambaShareForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareForServiceInstanceNameEnumeration(
  	   const Linux_SambaShareForServiceInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareForServiceInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareForServiceInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareForServiceInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareForServiceInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


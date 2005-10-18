/**
 *  Linux_SambaShareFileNameHandlingForShareInstanceName.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareInstanceName_h
#define Linux_SambaShareFileNameHandlingForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareInstanceName {
  public:
       Linux_SambaShareFileNameHandlingForShareInstanceName();
  	
       Linux_SambaShareFileNameHandlingForShareInstanceName
  	    (const Linux_SambaShareFileNameHandlingForShareInstanceName& original);
  	   
       Linux_SambaShareFileNameHandlingForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareFileNameHandlingForShareInstanceName();
       
       Linux_SambaShareFileNameHandlingForShareInstanceName& operator=
  	    (const Linux_SambaShareFileNameHandlingForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaShareFileNameHandlingOptionsInstanceName& val);
       const Linux_SambaShareFileNameHandlingOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareFileNameHandlingOptionsInstanceName m_SettingData;
       Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement{
  	Linux_SambaShareFileNameHandlingForShareInstanceName* m_elementP;
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(
  	   const Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareFileNameHandlingForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


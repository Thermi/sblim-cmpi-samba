/**
 *  Linux_SambaShareProtocolForShareInstanceName.h
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


#ifndef Linux_SambaShareProtocolForShareInstanceName_h
#define Linux_SambaShareProtocolForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareInstanceName {
  public:
       Linux_SambaShareProtocolForShareInstanceName();
  	
       Linux_SambaShareProtocolForShareInstanceName
  	    (const Linux_SambaShareProtocolForShareInstanceName& original);
  	   
       Linux_SambaShareProtocolForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareProtocolForShareInstanceName();
       
       Linux_SambaShareProtocolForShareInstanceName& operator=
  	    (const Linux_SambaShareProtocolForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getManagedElement() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaShareProtocolOptionsInstanceName& val);
       const Linux_SambaShareProtocolOptionsInstanceName& getSettingData() const;
       
  private:
       void init();
       void init(const Linux_SambaShareProtocolForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareOptionsInstanceName m_ManagedElement;
       Linux_SambaShareProtocolOptionsInstanceName m_SettingData;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int ManagedElement:1;
         unsigned int SettingData:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareProtocolForShareInstanceNameEnumerationElement{
  	Linux_SambaShareProtocolForShareInstanceName* m_elementP;
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaShareProtocolForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareProtocolForShareInstanceNameEnumeration(
  	   const Linux_SambaShareProtocolForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareProtocolForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


/**
 *  Linux_SambaShareFileNameHandlingOptionsInstance.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsInstance_h
#define Linux_SambaShareFileNameHandlingOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsInstance {
  public:
       Linux_SambaShareFileNameHandlingOptionsInstance();
  	
       Linux_SambaShareFileNameHandlingOptionsInstance
  	    (const Linux_SambaShareFileNameHandlingOptionsInstance& original);
  	   
       Linux_SambaShareFileNameHandlingOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingOptionsInstance();
       
       Linux_SambaShareFileNameHandlingOptionsInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingOptionsInstanceName& val);        
       const Linux_SambaShareFileNameHandlingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isCaseSensitiveSet() const;
       void setCaseSensitive(const CMPIBoolean val);
       const CMPIBoolean getCaseSensitive() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isDosFiletimesSet() const;
       void setDosFiletimes(const CMPIBoolean val);
       const CMPIBoolean getDosFiletimes() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isHideDotFilesSet() const;
       void setHideDotFiles(const CMPIBoolean val);
       const CMPIBoolean getHideDotFiles() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingOptionsInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
       const char* m_Caption;
       CMPIBoolean m_CaseSensitive;
       const char* m_Description;
       CMPIBoolean m_DosFiletimes;
       const char* m_ElementName;
       CMPIBoolean m_HideDotFiles;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int CaseSensitive:1;
         unsigned int Description:1;
         unsigned int DosFiletimes:1;
         unsigned int ElementName:1;
         unsigned int HideDotFiles:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingOptionsInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingOptionsInstance& elementP);
  };
}
#endif


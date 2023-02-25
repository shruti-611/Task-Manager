var ul = document.getElementById('list')   
var li;
var addButton = document.getElementById('add')  
addButton.addEventListener("click",addItem)

function addItem()
{                     
    var input = document.getElementById('input')    
    var inputx = document.getElementById('inputx')        
    var item = "Title: "+input.value;          
    var textNode = document.createTextNode(item)  
    var item2 = " "+"Desc: "+inputx.value;          
    var textNode2 = document.createTextNode(item2)    
    if (item == '') {      
        msg= "Enter your Task"
        alert(msg)
        return false
    } 
    else 
    {    
                 
        li = document.createElement('li')  
        li2 = document.createElement('li')       
        let checkbox = document.createElement('input')     
        checkbox.type = 'checkbox'           
        checkbox.setAttribute('id','check')       

        let label = document.createElement('label')  
        let label2 = document.createElement('label') 

        ul.appendChild(label)  
        ul.appendChild(label2)                     
        li.appendChild(checkbox)
        label.appendChild(textNode)
        label2.appendChild(textNode2)
        li.appendChild(label)
        li2.appendChild(label2)

        ul.insertBefore(li, ul.childNodes[0])
        ul.insertBefore(li2, ul.childNodes[1])
        setTimeout(()=>{
            li2.className = 'visual'
            li.className = 'visual'
           
        },5)
        input.value = " "               
    }
}

var removeButton = document.getElementById('remove')        
removeButton.addEventListener("click",removeItem)      

function removeItem()
{             
    li=ul.children;
    console.log(li);
    for (let index = 0; index < li.length-1; index++) {   
        const element = li[index];            
        while(li[index] && li[index].children[0].checked)
        {      
            ul.removeChild(li[index]);
            ul.removeChild(li[index]);
          
        }
        
    }   
}

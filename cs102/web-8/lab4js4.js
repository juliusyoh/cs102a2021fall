function toggle()
{
  object = document.getElementById("testme")
 if( object.className == "visible" )
  {
    object.className = "invisible";
  }
  else
  {
    object.className = "visible";
  }

  object1 = document.getElementById("testme1")
 if( object1.className == "invisible" )
  {
    object1.className = "visible";
  }
  else
  {
    object1.className = "invisible";
  }
}

student@43cb6195b05e:~/cs102/web-8$ 

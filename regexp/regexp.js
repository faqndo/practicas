//1 - numeros decimales
/^-?\d+(,\d+)?(\.\d+)?(e\d+)?$/g
//2 - numeros de telefono de usa, guardando el codigo de area
/(1\s|1-)?\(?(\d{3})(-|\s|\))?\d{3}(-|\s|\))?\d{4}/g
//3 - mejor version del anterior
/1?[\s-]?\(?(\d{3})[-\s\)]?\d{3}[-\s\)]?\d{4}/g
//4 - encontrar el nombre y apellido(opcional) de correos, ej tom.riddle@howarts.com
/(\w+(\.\w+)?)/g
//5 - hallar de <a href="http://regexone.com">Link</a> el ="http://regexone.com"
/=['"]([\w://.]*)['"]/g
//6 - hallar el tag de una etiqueta html
/<(\w+)/g
//7 - hallar el contenido de la etiqueta
/>([\w\s]*)</g
//8 - capturar el nombre de una imagen y la extencion
/(\w+)\.(jpg|png|gif)$/g
//9 - capturar el texto de (             hola como estas...)
/^\s*(.*)/g
//10 -  de esto E/( 1553):   at widget.List.fillDown(ListView.java:652) encontrar
// esto fillDown(ListView.java:652)
/(\w+)\((\w+\.\w+):(\d+)\)/g

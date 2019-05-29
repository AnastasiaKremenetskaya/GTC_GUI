# GTC_GUI
Handles html-code and locates the result to file
Данная программа предназначена для представления HTML-страницы в виде содержания, где каждый заголовок является якорной ссылкой. 

Пример входного файла:

<h1 id="section1">Beetles</h1>
    <h2 id="section2">External morphology</h2>
        <h3 id="section3">Head</h3>
            <h4 id="section4">Mouthparts</h4>
        <h3 id="section5">Thorax</h3>
            <h4 id="section6">Prothorax</h4>
            <h4 id="section7">Pterothorax</h4>
            
            
Пример выходного файла:  

<ul>
<li>
<a href="<путь к файлу>/#id="section1">Beetles</a>
</li>
<ul>
<li>
<a href="<путь к файлу>/#id="section2">External morphology</a>
</li>
<ul>
<li>
<a href="<путь к файлу>/#id="section3">Head</a>
</li>
<ul>
<li>
<a href="<путь к файлу>/#<id="section4">Mouthparts</a>
</li>
</ul>
<li>
<a href="<путь к файлу>/#<id=«section5">Thorax</a>
</li>
<ul>
<li>
<a href="<путь к файлу>/#<id="section6">Prothorax </a>
</li>
<li>

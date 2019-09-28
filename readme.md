# Паттерн Одиночка
## Классическая реализация паттерна Одиночка
![Kartinka1](https://github.com/Kezhik-61/Kezhik/blob/master/img/5.PNG?raw=true)
## Паттерны для	всех

 _Интервью недели:
Признания Одиночки_

**HeadFirst:**   Сегодня вниманию  слушателей предлагается интервью  с объектом Одиночкой. Может, 
немного расскажете о себе?
**Одиночка:** Я единственный и неповторимый!
**HeadFirst:** Неужели?
**Одиночка:** Да. Я создан на основе паттерна Одиночка, а это гарантирует, что в любой момент времени 
существует только один экземпляр моего класса.
**HeadFirst:** Разве это не расточительно? Кто-то тратит время на создание класса, а потом по этому опи-
санию создается всего один объект?
**Одиночка:** Вовсе нет! Во многих случаях существование одиночных объектов оправдано. Предполо-
жим, в объекте хранятся настройки реестра. Если кто-то создаст несколько экземпляров такого объ-
екта, это может привести к хаосу. Одиночные объекты гарантируют, что все компоненты вашего при-
ложения будут использовать один и тот же глобальный ресурс.
**HeadFirst:** Продолжайте...
**Одиночка:** О, я отлично подхожу для подобных задач. Одиночество имеет свои преимущества. Меня 
часто используют для управления пулами ресурсов — скажем, подключений или программных потоков. 
**HeadFirst:** И все-таки — быть всегда одним? Вам не скучно?
**Одиночка:** Так как мне никто не помогает, скучать некогда. Но разработчикам не помешало бы получ-
ше изучить меня — во многих программах возникают ошибки, когда в системе создаются дополнитель-
ные экземпляры объектов, о которых их создатель и не подозревает.
**HeadFirst:** Но как можно быть уверенным в том, что вы существуете в одном экземпляре? Разве любой 
желающий не сможет создать новый экземпляр оператором new?
**Одиночка:**  Нет! Я абсолютно уникален.
**HeadFirst:** Разработчики торжественно клянутся не создавать более одного экземпляра?
**Одиночка:** Нет, конечно. Возможно, это дело личное, но... у меня нет открытого конструктора.
**HeadFirst:** НЕТ ОТКРЫТОГО КОНСТРУКТОРА?! Ох, извините... неужели нет?
**Одиночка:** Вот именно. Мой конструктор объявлен приватным..
**HeadFirst:** И как работает эта схема? Как ВООБЩЕ можно создать экземпляр?
**Одиночка:** Чтобы получить объект, вы не создаете его экземпляр, а *запрашиваете* его. Мой класс со-
держит статический метод с именем getInstance(). Вызовите его, и вы получите экземпляр, готовый 
к работе. Может оказаться, что к этому моменту я уже существую и обслуживаю другие объекты.
**HeadFirst:**   Похоже, в этой схеме многое остается скрытым от посторонних глаз! Спасибо, что при-
няли наше приглашение. Надеемся, наша беседа скоро продолжится!


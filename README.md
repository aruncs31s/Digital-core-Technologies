# Digital core Technologies

<!--toc:start-->

- [Place](#place)
- [Questions](#questions)
  - [Section 1](#section-1)
    - [**Exercise** 0](#exercise-0)
    - [**Exercise** 1.1](#exercise-11)
    - [**Exercise** 1.2](#exercise-12)
    - [**Exercise** 1.3](#exercise-13)
    - [**Exercise** 1.4](#exercise-14)
  - [Section 2](#section-2)
    - [**Exercise** 2.1](#exercise-21)
    - [Excercise 2.2](#excercise-22)
- [Offline Questions](#offline-questions)
  - [Diodes](#diodes)
  - [Transistor Circuits](#transistor-circuits)
- [References](#references)

<!--toc:end-->

This relates to this hackethon named [Dihack](https://github.com/aruncs31s/Dihack-Hackathon) , its notes can be found [here](https://github.com/aruncs31s/Notes/tree/main/04%20Hackethons/Dihack)

> [!NOTE]
> Note that this may not resonate with the the actual questions that they have asked due to my memory stack size being quite low. But this will give you a similar idea .

> [!Note]
> If anyone plan to use my Obsidian Notes as reference then do the following
>
> ```bash
> cd ~/Downloads/
> wget https://github.com/obsidianmd/obsidian-releases/releases/download/v1.7.7/Obsidian-1.7.7.AppImage
> ./Obsidian-1.7.7.AppImage
> git clone https://github.com/aruncs31s/Notes/
> ```
>
> or without git
>
> ```bash
> wget https://github.com/aruncs31s/Notes/archive/refs/heads/main.zip
> unzip main.zip
> ```

````


### Place

- [ ] Complete this

## Questions

Workshop class notes is available in my [Notes](https://github.com/aruncs31s/Notes/blob/main/12%20Interviews/Digital%20Core%20Technologies/Study%20Session%20Materials.md)

#### Section 1

##### **Exercise** 0

![](images/Pasted%20image%2020250109201626.png)

- Find Vx.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

##### **Exercise** 1.1

![](images/Pasted%20image%2020250109202311.png)

- Find Vx.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

##### **Exercise** 1.2

![](images/Pasted%20image%2020250109202720.png)

- Find Vc.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

##### **Exercise** 1.3

![](images/Pasted%20image%2020250109203522.png)

- Find Vc.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

###### **Exercise** 1.4

![](images/Pasted%20image%2020250109203631.png)

- Find Vc.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

#### Section 2

##### **Exercise** 2.1

![](images/Pasted%20image%2020250109203702.png)

- Find Vx.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

##### Excercise 2.2

![](images/Pasted%20image%2020250109203951.png)

- Find Vx.
  - At the instant of the Switch S1 is turned on.
  - After sometime
  - when turning off .

---

After this there was ofline interview

## Offline Questions

#### Diodes

**Q1**: Consider the following circuit , the input voltage (Vs) is rising from 0-5v, find the Vx and I? given that Vth = .6V .

![](images/Pasted%20image%2020250109200625.png)

**Q2**: Complete the following graph provided that Vth of diode is 6v?

![](images/Pasted%20image%2020250109201139.png)

#### Transistor Circuits

**Q1:** Complete the timing following graph, also mark the input voltage at which the transistor goes into saturation region

![](images/Pasted%20image%2020250109180145.png)

**Q2:** Complete the timing following graph, also mark the input voltage at which the transistor goes into saturation region.
![](images/Pasted%20image%2020250109180228.png)

## Interview Questions

1. What will be its output?

```c
#include <stdio.h>
void main() {
  int a = 5;
  int b = 5;
  if (a = b) {
    printf("true");
  } else {

    printf("false");
  }
}
````

2. What will be the output?

```c
#include <stdio.h>

void main() {
  int something = 2;

  switch (something) {
  case 1:
    printf("A");
  case 2:
    printf("B");
  default:
    printf("C");
  case 3:
    printf("D");
  }
}
```

## References

1. [Notes](https://github.com/aruncs31s/Notes/tree/main/04%20Hackethons/Dihack)
2. [Dihack](https://github.com/aruncs31s/Dihack-Hackathon)
3. [Linked Lists](https://github.com/aruncs31s/programming/blob/main/c/Linked%20List/basicLinkedList.c) Program
4. [Linked Lists](https://github.com/aruncs31s/Notes/blob/main/02%20Coding/Data%20Structures%20and%20Algorithms/Linked%20List.md) Notes
5. [Pointers](https://github.com/aruncs31s/Notes/blob/main/02%20Coding/C/Pointers.md)
6. [Electronics](https://github.com/aruncs31s/Notes/blob/main/03%20Electronics/Electronics.md)

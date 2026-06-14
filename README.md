<table align="center" style="border: 1px solid #30363d; border-collapse: collapse; background-color: #0d1117; width: 100%;">
  <tr>
    <td align="center" width="40%" style="padding: 20px; border-right: 1px solid #30363d; background: #0d1117; vertical-align: middle;">
      <img src="aemeath-wuwa.gif" width="220" alt="Coding Chibi" />
    </td>
    <td width="60%" style="padding: 25px; font-family: 'Courier New', monospace; background: #0d1117; color: #c9d1d9; vertical-align: middle;">
      <h1 style="margin-top: 0; color: #ffffff;">Hi there, I'm ZEUS</h1>
      <p style="font-size: 1.1em; line-height: 1.5;">
        A tech enthusiast here I am presenting the project Zandacross — a random number guessing game.
      </p>
    </td>
  </tr>
</table>

<br />
<hr style="border-color: #30363d;" />

## Project Architecture: Zandacross

Zandacross is a terminal-based game engineered in C that handles continuous user input streams, tracks conditions, and provides relative high/low feedback until the success condition is met.

### Core Concepts Implemented

* **Dynamic Time-Based Seeding:** Utilizes `srand(time(0))` to initialize the pseudo-random number generator, ensuring that a completely unique value is determined on every separate program launch.
* **Mathematical Range Limiting:** Uses the modulus operator to safely map large computer-generated integers down to a strict human-playable boundary:
  $$\text{Target} = (\text{rand()} \pmod{100}) + 1$$
* **Infinite Evaluation Loop:** Controls execution flow dynamically via a structured `while(10)` evaluation block, checking assertions continuously until hitting the explicit internal break-state.

<br />
<hr style="border-color: #30363d;" />

<div align="center" style="margin-top: 40px; margin-bottom: 20px;">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&duration=3500&pause=1000&color=58a6ff&background=0D111700&center=true&vCenter=true&width=500&lines=Thank+you+for+your+interaction.+%5B+%E2%96%88+%5D;Thank+you+for+your+interaction.+%5B+%5D" alt="Typing Animation" />
</div>

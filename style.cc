```css
/* =========================================================
   MERIDIAN HAUS
   Powered by The Rogue Chef
   Global Stylesheet
========================================================= */


/* =========================================================
   ROOT VARIABLES
========================================================= */

:root {
    --black: #111111;
    --deep-black: #0b0b0b;
    --charcoal: #1a1a1a;
    --cream: #f4efe6;
    --warm-white: #faf8f3;
    --gold: #c69a52;
    --gold-light: #dfbd7d;
    --grey: #777777;
    --light-grey: #e7e2d9;
    --white: #ffffff;

    --max-width: 1200px;
    --transition: 0.3s ease;
}


/* =========================================================
   RESET
========================================================= */

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

html {
    scroll-behavior: smooth;
}

body {
    font-family: Arial, Helvetica, sans-serif;
    background: var(--warm-white);
    color: var(--black);
    line-height: 1.7;
    overflow-x: hidden;
}

img {
    max-width: 100%;
    display: block;
}

a {
    color: inherit;
    text-decoration: none;
}

button,
input,
textarea,
select {
    font: inherit;
}


/* =========================================================
   GLOBAL CONTAINER
========================================================= */

.container {
    width: min(92%, var(--max-width));
    margin: 0 auto;
}


/* =========================================================
   HEADER
========================================================= */

.site-header {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    z-index: 1000;
    padding: 24px 0;
    color: var(--white);
}

.nav-wrapper {
    display: flex;
    align-items: center;
    justify-content: space-between;
    gap: 30px;
}

.brand {
    display: flex;
    flex-direction: column;
}

.brand-name {
    font-size: 1.35rem;
    font-weight: 800;
    letter-spacing: 0.16em;
}

.brand-tagline {
    margin-top: 2px;
    font-size: 0.65rem;
    letter-spacing: 0.12em;
    text-transform: uppercase;
    color: var(--gold-light);
}

.main-nav {
    display: flex;
    align-items: center;
    gap: 25px;
}

.main-nav a {
    position: relative;
    font-size: 0.88rem;
    font-weight: 600;
    transition: color var(--transition);
}

.main-nav a:hover,
.main-nav a.active {
    color: var(--gold-light);
}

.main-nav a:not(.nav-cta)::after {
    content: "";
    position: absolute;
    bottom: -7px;
    left: 0;
    width: 0;
    height: 1px;
    background: var(--gold);
    transition: width var(--transition);
}

.main-nav a:not(.nav-cta):hover::after,
.main-nav a.active::after {
    width: 100%;
}

.nav-cta {
    padding: 11px 18px;
    border: 1px solid var(--gold);
    color: var(--white);
    transition: all var(--transition);
}

.nav-cta:hover {
    background: var(--gold);
    color: var(--black) !important;
}


/* =========================================================
   MOBILE MENU BUTTON
========================================================= */

.menu-toggle {
    display: none;
    width: 42px;
    height: 42px;
    border: 1px solid rgba(255,255,255,0.4);
    background: transparent;
    cursor: pointer;
    padding: 9px;
}

.menu-toggle span {
    display: block;
    width: 100%;
    height: 2px;
    background: var(--white);
    margin: 5px 0;
}


/* =========================================================
   HERO
========================================================= */

.hero {
    position: relative;
    min-height: 92vh;
    display: flex;
    align-items: center;
    background:
        linear-gradient(rgba(0,0,0,0.52), rgba(0,0,0,0.68)),
        url("https://images.unsplash.com/photo-1556910103-1c02745aae4d?auto=format&fit=crop&w=2000&q=85")
        center/cover no-repeat;
    color: var(--white);
}

.hero-overlay {
    position: absolute;
    inset: 0;
    background: linear-gradient(
        90deg,
        rgba(0,0,0,0.78),
        rgba(0,0,0,0.32),
        rgba(0,0,0,0.5)
    );
}

.hero-content {
    position: relative;
    z-index: 2;
    max-width: 820px;
    padding-top: 80px;
}

.hero-eyebrow,
.eyebrow {
    margin-bottom: 15px;
    color: var(--gold-light);
    font-size: 0.75rem;
    font-weight: 700;
    letter-spacing: 0.22em;
    text-transform: uppercase;
}

.hero h1 {
    max-width: 850px;
    font-family: Georgia, "Times New Roman", serif;
    font-size: clamp(3.5rem, 7vw, 6.8rem);
    line-height: 0.98;
    font-weight: 500;
    letter-spacing: -0.035em;
}

.hero h1 span,
.section-heading h2 span,
.rogue-content h2 span {
    display: block;
    color: var(--gold-light);
}

.hero-text {
    max-width: 620px;
    margin: 28px 0 35px;
    font-size: 1.1rem;
    color: rgba(255,255,255,0.86);
}

.hero-buttons {
    display: flex;
    flex-wrap: wrap;
    gap: 15px;
}


/* =========================================================
   BUTTONS
========================================================= */

.btn {
    display: inline-flex;
    align-items: center;
    justify-content: center;
    min-height: 50px;
    padding: 13px 24px;
    border: 1px solid transparent;
    font-size: 0.82rem;
    font-weight: 700;
    letter-spacing: 0.04em;
    text-transform: uppercase;
    transition: all var(--transition);
}

.btn-primary {
    background: var(--gold);
    color: var(--black);
}

.btn-primary:hover {
    background: var(--gold-light);
    transform: translateY(-2px);
}

.btn-secondary {
    border-color: rgba(255,255,255,0.65);
    color: var(--white);
}

.btn-secondary:hover {
    background: var(--white);
    color: var(--black);
}

.btn-dark {
    background: var(--black);
    color: var(--white);
}

.btn-dark:hover {
    background: var(--gold);
    color: var(--black);
}


/* =========================================================
   HERO SCROLL INDICATOR
========================================================= */

.hero-scroll {
    position: absolute;
    right: 4%;
    bottom: 40px;
    z-index: 3;
    display: flex;
    align-items: center;
    gap: 14px;
    transform: rotate(90deg);
    transform-origin: right center;
    font-size: 0.68rem;
    letter-spacing: 0.16em;
    text-transform: uppercase;
    color: rgba(255,255,255,0.7);
}

.scroll-line {
    width: 55px;
    height: 1px;
    background: var(--gold);
}


/* =========================================================
   GENERAL SECTIONS
========================================================= */

.section {
    padding: 110px 0;
}

.intro {
    background: var(--warm-white);
}

.intro-grid {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 90px;
    align-items: center;
}

.section-heading h2,
.center-heading h2,
.section-top h2,
.rogue-content h2,
.quote-content h2 {
    font-family: Georgia, "Times New Roman", serif;
    font-weight: 500;
    line-height: 1.05;
    letter-spacing: -0.025em;
}

.section-heading h2 {
    font-size: clamp(2.5rem, 5vw, 4.4rem);
}

.intro-text {
    max-width: 580px;
    font-size: 1.05rem;
    color: #4e4e4e;
}

.intro-text p + p {
    margin-top: 20px;
}

.text-link {
    display: inline-block;
    margin-top: 25px;
    color: var(--black);
    font-size: 0.82rem;
    font-weight: 800;
    letter-spacing: 0.05em;
    text-transform: uppercase;
    border-bottom: 1px solid var(--gold);
    padding-bottom: 5px;
    transition: color var(--transition);
}

.text-link:hover {
    color: var(--gold);
}


/* =========================================================
   SERVICES
========================================================= */

.services {
    background: var(--cream);
}

.center-heading {
    max-width: 760px;
    margin: 0 auto 55px;
    text-align: center;
}

.center-heading h2 {
    font-size: clamp(2.5rem, 5vw, 4.3rem);
}

.center-heading > p:last-child {
    max-width: 650px;
    margin: 20px auto 0;
    color: #666666;
}

.service-grid {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    border-top: 1px solid #d2cbc0;
    border-left: 1px solid #d2cbc0;
}

.service-card {
    min-height: 310px;
    padding: 35px;
    border-right: 1px solid #d2cbc0;
    border-bottom: 1px solid #d2cbc0;
    transition: background var(--transition), transform var(--transition);
}

.service-card:hover {
    background: var(--warm-white);
    transform: translateY(-5px);
}

.service-number {
    margin-bottom: 55px;
    color: var(--gold);
    font-size: 0.75rem;
    font-weight: 800;
    letter-spacing: 0.12em;
}

.service-card h3 {
    margin-bottom: 15px;
    font-family: Georgia, "Times New Roman", serif;
    font-size: 1.8rem;
    font-weight: 500;
}

.service-card p {
    color: #686868;
    font-size: 0.92rem;
}

.service-card a {
    display: inline-block;
    margin-top: 20px;
    font-size: 0.76rem;
    font-weight: 800;
    text-transform: uppercase;
    letter-spacing: 0.06em;
}

.service-card a:hover {
    color: var(--gold);
}


/* =========================================================
   ROGUE CHEF FEATURE
========================================================= */

.rogue-feature {
    background: var(--black);
    color: var(--white);
}

.rogue-grid {
    display: grid;
    grid-template-columns: 1fr 1fr;
    min-height: 650px;
}

.rogue-image {
    position: relative;
    min-height: 550px;
    background:
        linear-gradient(rgba(0,0,0,0.15), rgba(0,0,0,0.35)),
        url("https://images.unsplash.com/photo-1556911220-bff31c812dba?auto=format&fit=crop&w=1400&q=85")
        center/cover no-repeat;
}

.rogue-image-label {
    position: absolute;
    left: 25px;
    bottom: 25px;
    padding: 10px 14px;
    background: rgba(0,0,0,0.72);
    border-left: 3px solid var(--gold);
    font-size: 0.68rem;
    font-weight: 800;
    letter-spacing: 0.14em;
}

.rogue-content {
    display: flex;
    flex-direction: column;
    justify-content: center;
    padding: 70px;
}

.rogue-content h2 {
    font-size: clamp(2.6rem, 5vw, 4.7rem);
}

.rogue-content p {
    max-width: 540px;
    margin-top: 25px;
    color: rgba(255,255,255,0.72);
}

.rogue-content .btn {
    align-self: flex-start;
    margin-top: 35px;
}


/* =========================================================
   RECIPE PREVIEW
========================================================= */

.recipes-preview {
    background: var(--warm-white);
}

.section-top {
    display: flex;
    justify-content: space-between;
    align-items: flex-end;
    gap: 30px;
    margin-bottom: 45px;
}

.section-top h2 {
    font-size: clamp(2.5rem, 5vw, 4rem);
}

.section-top .text-link {
    margin-top: 0;
}

.recipe-grid {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 25px;
}

.recipe-card {
    background: var(--white);
    overflow: hidden;
    border: 1px solid #e6e0d7;
    transition: transform var(--transition), box-shadow var(--transition);
}

.recipe-card:hover {
    transform: translateY(-6px);
    box-shadow: 0 18px 40px rgba(0,0,0,0.08);
}

.recipe-image {
    position: relative;
    min-height: 300px;
    background-position: center;
    background-size: cover;
    display: flex;
    align-items: flex-end;
    padding: 20px;
}

.recipe-image span {
    padding: 7px 10px;
    background: rgba(0,0,0,0.78);
    color: var(--gold-light);
    font-size: 0.64rem;
    font-weight: 800;
    letter-spacing: 0.12em;
}

.recipe-burger {
    background-image:
        linear-gradient(rgba(0,0,0,0.1), rgba(0,0,0,0.2)),
        url("https://images.unsplash.com/photo-1568901346375-23c9450c58cd?auto=format&fit=crop&w=1000&q=85");
}

.recipe-omelette {
    background-image:
        linear-gradient(rgba(0,0,0,0.08), rgba(0,0,0,0.2)),
        url("https://images.unsplash.com/photo-1510693206972-df098f0cbf06?auto=format&fit=crop&w=1000&q=85");
}

.recipe-smoothie {
    background-image:
        linear-gradient(rgba(0,0,0,0.05), rgba(0,0,0,0.15)),
        url("https://images.unsplash.com/photo-1505252585461-04db1eb84625?auto=format&fit=crop&w=1000&q=85");
}

.recipe-info {
    padding: 27px;
}

.recipe-category {
    margin-bottom: 8px;
    color: var(--gold);
    font-size: 0.68rem;
    font-weight: 800;
    letter-spacing: 0.13em;
}

.recipe-info h3 {
    font-family: Georgia, "Times New Roman", serif;
    font-size: 1.8rem;
    font-weight: 500;
}

.recipe-info p:not(.recipe-category) {
    margin-top: 12px;
    color: #6d6d6d;
    font-size: 0.9rem;
}

.recipe-info a {
    display: inline-block;
    margin-top: 18px;
    font-size: 0.76rem;
    font-weight: 800;
    letter-spacing: 0.06em;
    text-transform: uppercase;
}

.recipe-info a:hover {
    color: var(--gold);
}


/* =========================================================
   QUOTE CTA
========================================================= */

.quote-cta {
    position: relative;
    padding: 125px 0;
    background:
        linear-gradient(rgba(0,0,0,0.72), rgba(0,0,0,0.72)),
        url("https://images.unsplash.com/photo-1414235077428-338989a2e8c0?auto=format&fit=crop&w=2000&q=85")
        center/cover no-repeat;
    color: var(--white);
    text-align: center;
}

.quote-content {
    max-width: 760px;
}

.quote-content h2 {
    font-size: clamp(2.8rem, 6vw, 5rem);
}

.quote-content > p:not(.eyebrow) {
    max-width: 600px;
    margin: 20px auto 30px;
    color: rgba(255,255,255,0.78);
}


/* =========================================================
   FOOTER
========================================================= */

.site-footer {
    background: var(--deep-black);
    color: var(--white);
    padding: 75px 0 25px;
}

.footer-grid {
    display: grid;
    grid-template-columns: 2fr 1fr 1fr 1fr;
    gap: 50px;
    padding-bottom: 60px;
}

.footer-logo {
    font-size: 1.35rem;
    font-weight: 800;
    letter-spacing: 0.16em;
}

.footer-brand p {
    margin-top: 8px;
    color: var(--gold-light);
    font-size: 0.72rem;
    letter-spacing: 0.12em;
    text-transform: uppercase;
}

.footer-description {
    max-width: 300px;
    margin-top: 20px !important;
    color: #888888 !important;
    letter-spacing: normal !important;
    text-transform: none !important;
    font-size: 0.88rem !important;
}

.footer-column {
    display: flex;
    flex-direction: column;
    gap: 10px;
}

.footer-column h4 {
    margin-bottom: 10px;
    color: var(--gold-light);
    font-size: 0.72rem;
    letter-spacing: 0.13em;
    text-transform: uppercase;
}

.footer-column a {
    color: #aaaaaa;
    font-size: 0.85rem;
    transition: color var(--transition);
}

.footer-column a:hover {
    color: var(--white);
}

.footer-bottom {
    display: flex;
    justify-content: space-between;
    gap: 20px;
    padding-top: 25px;
    border-top: 1px solid #292929;
    color: #666666;
    font-size: 0.75rem;
}


/* =========================================================
   RESPONSIVE —
```

```javascript
/* =========================================================
   MERIDIAN HAUS
   Powered by The Rogue Chef
   Global JavaScript
========================================================= */

document.addEventListener("DOMContentLoaded", () => {

    /* =====================================================
       MOBILE NAVIGATION
    ===================================================== */

    const menuToggle = document.querySelector(".menu-toggle");
    const mainNav = document.querySelector(".main-nav");

    if (menuToggle && mainNav) {

        menuToggle.addEventListener("click", () => {

            mainNav.classList.toggle("open");

            const expanded = mainNav.classList.contains("open");

            menuToggle.setAttribute("aria-expanded", expanded);

        });

    }


    /* =====================================================
       CLOSE MOBILE MENU WHEN A LINK IS CLICKED
    ===================================================== */

    if (mainNav) {

        const navLinks = mainNav.querySelectorAll("a");

        navLinks.forEach(link => {

            link.addEventListener("click", () => {

                mainNav.classList.remove("open");

                if (menuToggle) {
                    menuToggle.setAttribute("aria-expanded", "false");
                }

            });

        });

    }


    /* =====================================================
       CLOSE MOBILE MENU WHEN CLICKING OUTSIDE
    ===================================================== */

    document.addEventListener("click", (event) => {

        if (!mainNav || !menuToggle) return;

        const clickedInsideNav = mainNav.contains(event.target);
        const clickedMenuButton = menuToggle.contains(event.target);

        if (!clickedInsideNav && !clickedMenuButton) {

            mainNav.classList.remove("open");
            menuToggle.setAttribute("aria-expanded", "false");

        }

    });


    /* =====================================================
       ESCAPE KEY CLOSES MOBILE MENU
    ===================================================== */

    document.addEventListener("keydown", (event) => {

        if (event.key === "Escape" && mainNav && menuToggle) {

            mainNav.classList.remove("open");
            menuToggle.setAttribute("aria-expanded", "false");

        }

    });


    /* =====================================================
       CURRENT YEAR
       Automatically updates footer copyright year
    ===================================================== */

    const currentYear = new Date().getFullYear();

    const footerYear = document.querySelector(".footer-bottom p");

    if (footerYear) {

        footerYear.textContent =
            `© ${currentYear} Meridian Haus. All rights reserved.`;

    }


    /* =====================================================
       SIMPLE SCROLL REVEAL
    ===================================================== */

    const revealElements = document.querySelectorAll(
        ".service-card, .recipe-card, .section-heading, .intro-text, .rogue-content"
    );

    if ("IntersectionObserver" in window) {

        const revealObserver = new IntersectionObserver(
            (entries, observer) => {

                entries.forEach(entry => {

                    if (entry.isIntersecting) {

                        entry.target.classList.add("revealed");

                        observer.unobserve(entry.target);

                    }

                });

            },
            {
                threshold: 0.12
            }
        );

        revealElements.forEach(element => {

            element.classList.add("reveal");

            revealObserver.observe(element);

        });

    }

});
```

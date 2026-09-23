```javascript
/* =========================================================
   MERIDIAN HAUS
   MASTER JAVASCRIPT
   Powered by The Rogue Chef
   ========================================================= */

document.addEventListener("DOMContentLoaded", () => {

    /* =====================================================
       1. MOBILE NAVIGATION
       ===================================================== */

    const menuToggle = document.querySelector(".menu-toggle");
    const mainNav = document.querySelector(".main-nav");

    if (menuToggle && mainNav) {

        menuToggle.addEventListener("click", (event) => {
            event.stopPropagation();

            mainNav.classList.toggle("active");

            const isOpen = mainNav.classList.contains("active");

            menuToggle.setAttribute("aria-expanded", isOpen);
            menuToggle.setAttribute(
                "aria-label",
                isOpen ? "Close navigation menu" : "Open navigation menu"
            );
        });


        /* Close navigation when a link is clicked */

        const navLinks = mainNav.querySelectorAll("a");

        navLinks.forEach((link) => {
            link.addEventListener("click", () => {

                mainNav.classList.remove("active");

                menuToggle.setAttribute("aria-expanded", "false");
                menuToggle.setAttribute(
                    "aria-label",
                    "Open navigation menu"
                );

            });
        });


        /* Close navigation when clicking outside */

        document.addEventListener("click", (event) => {

            if (
                mainNav.classList.contains("active") &&
                !mainNav.contains(event.target) &&
                !menuToggle.contains(event.target)
            ) {

                mainNav.classList.remove("active");

                menuToggle.setAttribute("aria-expanded", "false");
                menuToggle.setAttribute(
                    "aria-label",
                    "Open navigation menu"
                );

            }

        });


        /* Close navigation with Escape */

        document.addEventListener("keydown", (event) => {

            if (event.key === "Escape") {

                mainNav.classList.remove("active");

                menuToggle.setAttribute("aria-expanded", "false");
                menuToggle.setAttribute(
                    "aria-label",
                    "Open navigation menu"
                );

            }

        });

    }


    /* =====================================================
       2. CURRENT YEAR
       ===================================================== */

    const currentYear = new Date().getFullYear();

    document.querySelectorAll(".current-year").forEach((element) => {
        element.textContent = currentYear;
    });

    document.querySelectorAll(".footer-bottom p").forEach((element) => {

        if (
            !element.querySelector(".current-year") &&
            element.textContent.includes("©")
        ) {
            element.innerHTML = element.innerHTML.replace(
                /©\s*\d{4}/,
                `© ${currentYear}`
            );
        }

    });


    /* =====================================================
       3. SCROLL REVEAL ANIMATION
       ===================================================== */

    const revealElements = document.querySelectorAll(".reveal");

    if ("IntersectionObserver" in window && revealElements.length > 0) {

        const revealObserver = new IntersectionObserver(
```

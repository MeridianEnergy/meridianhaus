document.addEventListener('DOMContentLoaded', function () {

```
/* =====================================================
   MOBILE NAVIGATION
   ===================================================== */

const navToggle = document.querySelector('.nav-toggle');
const mainNav = document.querySelector('.main-nav');

if (navToggle && mainNav) {

    navToggle.setAttribute('aria-expanded', 'false');
    navToggle.setAttribute('aria-label', 'Open navigation');

    navToggle.addEventListener('click', function () {

        const isOpen = mainNav.classList.toggle('open');

        navToggle.setAttribute(
            'aria-expanded',
            isOpen ? 'true' : 'false'
        );

        navToggle.setAttribute(
            'aria-label',
            isOpen ? 'Close navigation' : 'Open navigation'
        );

    });

    const navLinks = mainNav.querySelectorAll('a');

    navLinks.forEach(function (link) {

        link.addEventListener('click', function () {

            mainNav.classList.remove('open');

            navToggle.setAttribute(
                'aria-expanded',
                'false'
            );

            navToggle.setAttribute(
                'aria-label',
                'Open navigation'
            );

        });

    });

    document.addEventListener('click', function (event) {

        if (
            mainNav.classList.contains('open') &&
            !mainNav.contains(event.target) &&
            !navToggle.contains(event.target)
        ) {

            mainNav.classList.remove('open');

            navToggle.setAttribute(
                'aria-expanded',
                'false'
            );

            navToggle.setAttribute(
                'aria-label',
                'Open navigation'
            );

        }

    });

    document.addEventListener('keydown', function (event) {

        if (event.key === 'Escape') {

            mainNav.classList.remove('open');

            navToggle.setAttribute(
                'aria-expanded',
                'false'
            );

            navToggle.setAttribute(
                'aria-label',
                'Open navigation'
            );

        }

    });

}


/* =====================================================
   CURRENT YEAR
   ===================================================== */

const yearElements = document.querySelectorAll('[data-year]');

yearElements.forEach(function (element) {

    element.textContent = new Date().getFullYear();

});


/* =====================================================
   ACTIVE NAVIGATION LINK
   ===================================================== */

const currentPage =
    window.location.pathname.split('/').pop() || 'index.html';

const navigationLinks =
    document.querySelectorAll('.main-nav a');

navigationLinks.forEach(function (link) {

    const linkPage =
        link.getAttribute('href');

    if (!linkPage) {
        return;
    }

    const cleanLink =
        linkPage.split('/').pop().split('#')[0];

    if (
        cleanLink === currentPage ||
        (
            currentPage === '' &&
            cleanLink === 'index.html'
        )
    ) {

        link.classList.add('active');

    }

});


/* =====================================================
   SMOOTH ANCHOR SCROLLING
   ===================================================== */

const anchorLinks =
    document.querySelectorAll('a[href^="#"]');

anchorLinks.forEach(function (link) {

    link.addEventListener('click', function (event) {

        const targetId =
            link.getAttribute('href');

        if (
            !targetId ||
            targetId === '#' ||
            targetId.length < 2
        ) {

            return;

        }

        const target =
            document.querySelector(targetId);

        if (!target) {
            return;
        }

        event.preventDefault();

        const header =
            document.querySelector('.site-header');

        const headerHeight =
            header ? header.offsetHeight : 0;

        const targetPosition =
            target.getBoundingClientRect().top +
            window.scrollY -
            headerHeight -
            15;

        window.scrollTo({
            top: targetPosition,
            behavior: 'smooth'
        });

    });

});


/* =====================================================
   SCROLL REVEAL
   ===================================================== */

const revealElements =
    document.querySelectorAll('.reveal');

if ('IntersectionObserver' in window) {

    const revealObserver =
        new IntersectionObserver(
            function (entries, observer) {

                entries.forEach(function (entry) {

                    if (entry.isIntersecting) {

                        entry.target.classList.add('visible');

                        observer.unobserve(
                            entry.target
                        );

                    }

                });

            },
            {
                threshold: 0.12,
                rootMargin: '0px 0px -40px 0px'
            }
        );

    revealElements.forEach(function (element) {

        revealObserver.observe(element);

    });

} else {

    revealElements.forEach(function (element) {

        element.classList.add('visible');

    });

}


/* =====================================================
   FORM HANDLING
   ===================================================== */

const forms =
    document.querySelectorAll('form');

forms.forEach(function (form) {

    form.addEventListener('submit', function (event) {

        const action =
            form.getAttribute('action');

        if (
            !action ||
            action === '#' ||
            action.trim() === ''
        ) {

            event.preventDefault();

            let feedback =
                form.querySelector('.form-feedback');

            if (!feedback) {

                feedback =
                    document.createElement('div');

                feedback.className =
                    'form-feedback';

                feedback.style.marginTop = '20px';
                feedback.style.padding = '15px';
                feedback.style.background = '#eee7da';
                feedback.style.borderLeft = '3px solid #b58b45';
                feedback.style.color = '#25231f';

                form.appendChild(feedback);

            }

            feedback.textContent =
                'Thank you. Your enquiry has been received. We will be in touch shortly.';

            feedback.scrollIntoView({
                behavior: 'smooth',
                block: 'center'
            });

        }

    });

});


/* =====================================================
   IMAGE ERROR HANDLING
   ===================================================== */

const images =
    document.querySelectorAll('img');

images.forEach(function (image) {

    image.addEventListener('error', function () {

        image.classList.add('image-error');

    });

});


/* =====================================================
   EXTERNAL LINKS
   ===================================================== */

const externalLinks =
    document.querySelectorAll('a[href^="http"]');

externalLinks.forEach(function (link) {

    try {

        const linkUrl =
            new URL(link.href);

        if (
            linkUrl.hostname !==
            window.location.hostname
        ) {

            link.setAttribute(
                'target',
                '_blank'
            );

            link.setAttribute(
                'rel',
                'noopener noreferrer'
            );

        }

    } catch (error) {

        return;

    }

});


/* =====================================================
   BODY READY STATE
   ===================================================== */

document.body.classList.add('js-ready');
```

});
:::_?

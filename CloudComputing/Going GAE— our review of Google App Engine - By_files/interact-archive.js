document.addEventListener('DOMContentLoaded', function () {
  const vm = new Vue({
    el: '#header',
    data: {
      menuOpen: false,
      expandBio: false,
      search: '',
      searchFocus: false,
      user: null,
      userLoaded: false
    },
    computed: {
      currentUser: function () {
        return firebase.auth().currentUser;
      }
    },
    methods: {
      menuToggle() {
        this.menuOpen = !this.menuOpen;
      },
      bioToggle () {
        this.expandBio = !this.expandBio;
      },
      submitSearch () {
        console.log('down', this.searchFocus);
        if (this.searchFocus === false){
          this.searchFocus = true;
          this.$refs.search.focus();
        } else {
          if (this.search !== '') {
            window.open(`https://www.google.com/search?q=site%3Ahackernoon.com+${this.search}`, '_blank');
          }
        }
      }
    }
  });
});

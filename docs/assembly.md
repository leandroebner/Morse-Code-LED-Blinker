# TEMP

<div class="ibom-embed">
  <iframe
    src="{{ './ibom.html' | relative_url }}"
    title="Interactive BOM"
    loading="lazy"
  ></iframe>
</div>

<style>
/* Make the iframe roomy but contained by Cayman’s layout */
.ibom-embed { width: 100%; height: 80vh; border: 1px solid #e5e5e5; border-radius: 6px; overflow: hidden; }
.ibom-embed > iframe { width: 100%; height: 100%; border: 0; }
@media (max-width: 768px) { .ibom-embed { height: 65vh; } }
</style>

<p><a href="{{ '/assets/ibom/ibom.html' | relative_url }}" target="_blank" rel="noopener">Open full screen ↗</a></p>

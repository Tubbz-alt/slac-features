<div class="pp_demo-beans-image-text-link box-about box-type-3">
  <?php if ($title): ?><h2><?php print $title; ?></h2><? endif; ?>

  <div class="<?php if ($shaded){print 'shaded';} ?> <?php if ($subtitle) {print 'with_subtitle';}?> <?php if (isset($image)) {print 'with_image';} ?>">
    <?php if ($subtitle): ?>
      <div class="subtitle"><?php print $subtitle; ?></div>
    <?php endif; ?>
    
    <?php if ($image): ?>
      <?php 
        $non_image_position = 'right'; 
        if ($image_position == 'right') {
          $non_image_position = 'left'; 
        } 
      ?>
        <?php if ($link): ?><a class="positition-<?php print $image_position; ?>" href="<?php print $link_url; ?>"><?php print $image; ?></a>
        <?php else: ?>
          <figure><?php print $image; ?></figure>
        <?php endif; ?>
    <?php endif; // if ($image) ?>

    <article><?php print $body; ?></article>
    <?php if ($link): ?>
      <div class="link-reference"><?php print $link; ?></div>
    <?php endif; ?>
  </div>
</div>

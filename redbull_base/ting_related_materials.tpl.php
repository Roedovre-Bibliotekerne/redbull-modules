<?php
// $Id$

/**
 * @file
 * Template to render a Ting collection of books.
 */
#krumo(get_defined_vars());
  if ($collection->objects[0] instanceOf TingClientObject) {
    $image_url = ting_covers_collection_url($collection->objects[0], '80_x');
    if ($image_url) {
      $picture =  l(theme('image', $image_url, '', '', null, false), $collection->url, array('html' => true));
    }
  }

?>
  <li class="clear-block">
    <?php if ($picture): ?>
    <div class="picture">
       <?php print $picture; ?>
    </div>
    <?php endif; ?>

    <div class="record">
      <h3>
        <?php print l($collection->title, $collection->url, array('attributes' => array('class' =>'title'))) ;?>
      </h3>
        <?php if ($collection->creators_string) : ?>
          <span class="creator">
            <?php echo t('By !creator_name', array('!creator_name' => l($collection->creators_string,'ting/search/'.$collection->creators_string))) ?>
          </span>
        <?php endif; ?>

      <?php if ($collection->abstract) : ?>
      <div class="abstract">
        <p>
        <?php print truncate_utf8(check_plain($collection->abstract),50,true,true); ?>
        </p>
        
      </div>
      <?php endif; ?>
      <?php print l(t('Læs mere'),$collection->url,array('attributes' => array('class' => 'redlink')))?>
    </div>
  </li>


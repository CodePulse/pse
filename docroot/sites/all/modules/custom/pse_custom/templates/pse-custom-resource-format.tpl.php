<div class="format-wrapper">
  <?php if (user_is_logged_in()): ?>
    <?php if (!empty($content['pdf'])): ?>
      <span class="format-item format-item__pdf">
          <?php print l("<img src=/" . drupal_get_path('module', 'pse_custom') . '/images/pdf.ico>', $content['pdf'], array('html' => TRUE)) ?>
      </span>
    <?php endif; ?>
    <?php if (!empty($content['video_url'])): ?>
      <span class="format-item format-item__video">
        <a href="<?php print $content['video_url'] ?>" class="format-item-link"><img src="/<?php print drupal_get_path('module', 'pse_custom') . '/images/video.png' ?>"></a>
      </span>
    <?php endif; ?>
  <?php else: ?>
    <?php print l(t('Login to view format'), 'user/login', array('query' => array('destination' => current_path()))) ?>
  <?php endif; ?>

</div>

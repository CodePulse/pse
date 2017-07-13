<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $col4 = ' col-md-4'; ?>
<?php $more = count($rows); ?>

<?php foreach ($rows as $id => $row): ?>
  <?php if (($id % 3) == 0): ?>
    <?php print '</div><div class="row">'; ?>
  <?php endif; ?>
  <?php if ($more > 1): ?>
    <?php $classes_array[$id] .= ' col-md-4'; ?>
  <?php endif; ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

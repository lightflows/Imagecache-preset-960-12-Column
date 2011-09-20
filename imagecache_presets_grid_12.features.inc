<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function imagecache_presets_grid_12_imagecache_default_presets() {
  $items = array(
    'Grid-12-12_Slideshow-940x250-crop-center' => array(
      'presetname' => 'Grid-12-12_Slideshow-940x250-crop-center',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '940',
            'height' => '940',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '940',
            'height' => '250',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid-12-12_Slideshow-960x250-crop-center' => array(
      'presetname' => 'Grid-12-12_Slideshow-960x250-crop-center',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '960',
            'height' => '960',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '960',
            'height' => '250',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid-12-8_Slideshow-620x250-crop-center' => array(
      'presetname' => 'Grid-12-8_Slideshow-620x250-crop-center',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '620',
            'height' => '620',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '620',
            'height' => '250',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid_12_1' => array(
      'presetname' => 'Grid_12_1',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
    'Grid_12_12' => array(
      'presetname' => 'Grid_12_12',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '940',
            'height' => '940',
          ),
        ),
      ),
    ),
    'Grid_12_1_landscape_2_3rd_aspect' => array(
      'presetname' => 'Grid_12_1_landscape_2_3rd_aspect',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '60',
            'height' => '60',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '60',
            'height' => '40',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid_12_1_square_thumbnail' => array(
      'presetname' => 'Grid_12_1_square_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'outside',
            'width' => '60',
            'height' => '60',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid_12_2' => array(
      'presetname' => 'Grid_12_2',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '140',
            'height' => '140',
          ),
        ),
      ),
    ),
    'Grid_12_2_landscape_2_3rd_aspect' => array(
      'presetname' => 'Grid_12_2_landscape_2_3rd_aspect',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '140',
            'height' => '140',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '140',
            'height' => '93',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid_12_3' => array(
      'presetname' => 'Grid_12_3',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '220',
            'height' => '220',
          ),
        ),
      ),
    ),
    'Grid_12_3_landscape_2_3rd_aspect' => array(
      'presetname' => 'Grid_12_3_landscape_2_3rd_aspect',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '220',
            'height' => '220',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '220',
            'height' => '146',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'Grid_12_4' => array(
      'presetname' => 'Grid_12_4',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '300',
            'height' => '300',
          ),
        ),
      ),
    ),
    'Grid_12_8' => array(
      'presetname' => 'Grid_12_8',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '620',
            'height' => '620',
          ),
        ),
      ),
    ),
    'Grid_12_FullWidth_940' => array(
      'presetname' => 'Grid_12_FullWidth_940',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '940',
            'height' => '940',
          ),
        ),
      ),
    ),
    'Grid_12_FullWidth_960' => array(
      'presetname' => 'Grid_12_FullWidth_960',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'inside',
            'width' => '960',
            'height' => '960',
          ),
        ),
      ),
    ),
  );
  return $items;
}

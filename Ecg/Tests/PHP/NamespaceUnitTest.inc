<?php

namespace Ecg\Tests\PHP;

class TestNamespace
{
    public function go()
    {
        try {
            throw new \Exception('test');
        } catch (\Exception $e) {
            return 'cache block';
        }
    }
}

$class = new TestNamespace();
echo $class->go();
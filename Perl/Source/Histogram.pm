package Histogram;

use strict;
use warnings FATAL => 'all';
use Exporter;
our @ISA = qw(Exporter);

sub hist {
    my $str = $_[0];
    my %count;
    foreach my $letter (split //, $str) {
        $count{$letter}++;
    }
    my @res;
    for my $letter ('u', 'w', 'x', 'z') {
        my $value = $count{$letter};
        if (defined($value) && $value > 0) {
            push(@res, sprintf('%s  %-5d %s', $letter, $value, ('*' x $value)));
        }
    }

    return join("\n", @res);
}

use 5.006;
use strict;
use warnings;
package Metabase::Resource::metabase::user;
our $VERSION = '0.021'; # VERSION


use Metabase::Resource::metabase::fact;
our @ISA = qw/Metabase::Resource::metabase::fact/;

1;

# ABSTRACT: class for Metabase user profiles



=pod

=head1 NAME

Metabase::Resource::metabase::user - class for Metabase user profiles

=head1 VERSION

version 0.021

=head1 SYNOPSIS

  my $resource = Metabase::Resource->new(
    "metabase:user:B66C7662-1D34-11DE-A668-0DF08D1878C0"
  );

  my $resource_meta = $resource->metadata;
  my $typemap       = $resource->metadata_types;

  my $user_id = $resource->guid;

=head1 DESCRIPTION

This resource is for a Metabase user. (I.e. corresponding to the GUID of a
Metabase::User::Profile.) For the example above, the resource metadata
structure would contain the following elements:

  scheme       => metabase
  type         => user
  guid         => b66c7662-1d34-11de-a668-0df08d1878c0

=head1 BUGS

Please report any bugs or feature using the CPAN Request Tracker.
Bugs can be submitted through the web interface at
L<http://rt.cpan.org/Dist/Display.html?Queue=Metabase-Fact>

When submitting a bug or request, please include a test-file or a patch to an
existing test-file that illustrates the bug or desired feature.

=head1 AUTHORS

=over 4

=item *

David Golden <dagolden@cpan.org>

=item *

Ricardo Signes <rjbs@cpan.org>

=item *

H.Merijn Brand <hmbrand@cpan.org>

=back

=head1 COPYRIGHT AND LICENSE

This software is Copyright (c) 2012 by David Golden.

This is free software, licensed under:

  The Apache License, Version 2.0, January 2004

=cut


__END__




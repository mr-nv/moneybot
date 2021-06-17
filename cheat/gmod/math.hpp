#pragma once
#include <random>
#include "util.hpp"
#include "pattern.hpp"
#include "sdk.hpp"

static constexpr long double M_PI		= 3.14159265358979323846f;
static constexpr long double M_RADPI	= 57.295779513082f;
static constexpr long double M_PIRAD	= 0.01745329251f;
static constexpr float M_PI_F			= ( ( float )( M_PI ) );
__forceinline float RAD2DEG( float x ) { return( ( float )( x ) * ( float )( 180.f / M_PI_F ) ); }
__forceinline float DEG2RAD( float x ) { return( ( float )( x ) * ( float )( M_PI_F / 180.f ) ); }

namespace {
	//make a random generator and seed it with a p random number
	static std::random_device rd;
	static std::mt19937 gen( rd( ) );
}

NAMESPACE_REGION( math )

#undef min
#undef max

template < typename t >
t min( const t& t1, const t& t2 ) {
	return t1 < t2 ? t1 : t2;
}

template < typename t, typename... ts_ >
t min( const t& t1, const t& t2, ts_&&... ts ) {
	return t1 < t2 ?
		min( t1, std::forward< ts_ >( ts )... ) :
		min( t2, std::forward< ts_ >( ts )... );
}

template < typename t >
t max( const t& t1, const t& t2 ) {
	return t1 > t2 ? t1 : t2;
}

template < typename t, typename... ts_ >
t max( const t& t1, const t& t2, ts_&&... ts ) {
	return t1 > t2 ?
		max( t1, std::forward< ts_ >( ts )... ) :
		max( t2, std::forward< ts_ >( ts )... );
}

// todo - dex; make 2 random generator funcs here, this one only works for floats normally

template < typename t > 
__forceinline t random_number( t min, t max ) {
	if constexpr( !std::is_integral_v< t > ) {
		std::uniform_real_distribution< t > dist( min, max );
		return dist( gen );
	}
	else {
		std::uniform_int_distribution< t > dist( min, max );
		return dist( gen );
	}
}

__forceinline vec3_t get_rotated_pos( vec3_t start, float rotation, float distance ) {
	float rad = DEG2RAD( rotation );
	start.x += cos( rad ) * distance;
	start.y += sin( rad ) * distance;

	return start;
}

__forceinline vec3_t vector_angles( const vec3_t& start, const vec3_t& end ) {
	vec3_t delta	= end - start;

	float magnitude	= sqrtf( delta.x * delta.x + delta.y * delta.y );
	float pitch		= atan2f( -delta.z, magnitude ) * M_RADPI;
	float yaw		= atan2f( delta.y, delta.x ) * M_RADPI;

	vec3_t angle( pitch, yaw, 0.0f );
	return angle.clamp( );
}

__forceinline vec3_t angle_vectors( const vec3_t& angles ) {
	float sp, sy, cp, cy;
	sp = sinf( angles.x * M_PIRAD );
	cp = cosf( angles.x * M_PIRAD );
	sy = sinf( angles.y * M_PIRAD );
	cy = cosf( angles.y * M_PIRAD );

	return vec3_t{ cp * cy, cp * sy, -sp };
}

__forceinline void angle_vectors( const vec3_t& angles, vec3_t* forward, vec3_t* right, vec3_t* up ) {
	float sr, sp, sy, cr, cp, cy;

	sp = sinf( angles.x * M_PIRAD );
	cp = cosf( angles.x * M_PIRAD );
	sy = sinf( angles.y * M_PIRAD );
	cy = cosf( angles.y * M_PIRAD );
	sr = sinf( angles.z * M_PIRAD );
	cr = cosf( angles.z * M_PIRAD );

	if ( forward ) {
		forward->x = cp * cy;
		forward->y = cp * sy;
		forward->z = -sp;
	}

	if ( right ) {
		right->x = -1 * sr * sp * cy + -1 * cr * -sy;
		right->y = -1 * sr * sp * sy + -1 * cr * cy;
		right->z = -1 * sr * cp;
	}

	if ( up ) {
		up->x = cr * sp * cy + -sr * -sy;
		up->y = cr * sp * sy + -sr * cy;
		up->z = cr * cp;
	}
}

__forceinline float find_closest_step( float angle, float step ) {
	int steps = ( int )( angle / step + 0.5f );

	return steps * step;
}

__forceinline vec3_t vector_transform( const vec3_t& in, const matrix3x4& matrix ) {
	vec3_t out;
	for ( int i{ }; i < 3; i++ )
		out[ i ] = in.dot( ( const vec3_t& )matrix[ i ] ) + matrix[ i ][ 3 ];

	return out;
}

extern uint32_t md5_pseudorandom( uint32_t seed );

END_REGION
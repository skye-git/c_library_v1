// MESSAGE ALLOCATION_OUTPUT_RAW PACKING

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW 212

typedef struct __mavlink_allocation_output_raw_t
{
 int32_t pos[6]; ///< Orientation motor setpoint of AUs
 uint16_t thrust[6]; ///< Thrust motor setpoint of AUs
} mavlink_allocation_output_raw_t;

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN 36
#define MAVLINK_MSG_ID_212_LEN 36

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC 227
#define MAVLINK_MSG_ID_212_CRC 227

#define MAVLINK_MSG_ALLOCATION_OUTPUT_RAW_FIELD_POS_LEN 6
#define MAVLINK_MSG_ALLOCATION_OUTPUT_RAW_FIELD_THRUST_LEN 6

#define MAVLINK_MESSAGE_INFO_ALLOCATION_OUTPUT_RAW { \
	"ALLOCATION_OUTPUT_RAW", \
	2, \
	{  { "pos", NULL, MAVLINK_TYPE_INT32_T, 6, 0, offsetof(mavlink_allocation_output_raw_t, pos) }, \
         { "thrust", NULL, MAVLINK_TYPE_UINT16_T, 6, 24, offsetof(mavlink_allocation_output_raw_t, thrust) }, \
         } \
}


/**
 * @brief Pack a allocation_output_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos Orientation motor setpoint of AUs
 * @param thrust Thrust motor setpoint of AUs
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const int32_t *pos, const uint16_t *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN];

	_mav_put_int32_t_array(buf, 0, pos, 6);
	_mav_put_uint16_t_array(buf, 24, thrust, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#else
	mavlink_allocation_output_raw_t packet;

	mav_array_memcpy(packet.pos, pos, sizeof(int32_t)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
}

/**
 * @brief Pack a allocation_output_raw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pos Orientation motor setpoint of AUs
 * @param thrust Thrust motor setpoint of AUs
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const int32_t *pos,const uint16_t *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN];

	_mav_put_int32_t_array(buf, 0, pos, 6);
	_mav_put_uint16_t_array(buf, 24, thrust, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#else
	mavlink_allocation_output_raw_t packet;

	mav_array_memcpy(packet.pos, pos, sizeof(int32_t)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
}

/**
 * @brief Encode a allocation_output_raw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_raw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_allocation_output_raw_t* allocation_output_raw)
{
	return mavlink_msg_allocation_output_raw_pack(system_id, component_id, msg, allocation_output_raw->pos, allocation_output_raw->thrust);
}

/**
 * @brief Encode a allocation_output_raw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_raw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_allocation_output_raw_t* allocation_output_raw)
{
	return mavlink_msg_allocation_output_raw_pack_chan(system_id, component_id, chan, msg, allocation_output_raw->pos, allocation_output_raw->thrust);
}

/**
 * @brief Send a allocation_output_raw message
 * @param chan MAVLink channel to send the message
 *
 * @param pos Orientation motor setpoint of AUs
 * @param thrust Thrust motor setpoint of AUs
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_allocation_output_raw_send(mavlink_channel_t chan, const int32_t *pos, const uint16_t *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN];

	_mav_put_int32_t_array(buf, 0, pos, 6);
	_mav_put_uint16_t_array(buf, 24, thrust, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
#else
	mavlink_allocation_output_raw_t packet;

	mav_array_memcpy(packet.pos, pos, sizeof(int32_t)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(uint16_t)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_allocation_output_raw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const int32_t *pos, const uint16_t *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_int32_t_array(buf, 0, pos, 6);
	_mav_put_uint16_t_array(buf, 24, thrust, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
#else
	mavlink_allocation_output_raw_t *packet = (mavlink_allocation_output_raw_t *)msgbuf;

	mav_array_memcpy(packet->pos, pos, sizeof(int32_t)*6);
	mav_array_memcpy(packet->thrust, thrust, sizeof(uint16_t)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ALLOCATION_OUTPUT_RAW UNPACKING


/**
 * @brief Get field pos from allocation_output_raw message
 *
 * @return Orientation motor setpoint of AUs
 */
static inline uint16_t mavlink_msg_allocation_output_raw_get_pos(const mavlink_message_t* msg, int32_t *pos)
{
	return _MAV_RETURN_int32_t_array(msg, pos, 6,  0);
}

/**
 * @brief Get field thrust from allocation_output_raw message
 *
 * @return Thrust motor setpoint of AUs
 */
static inline uint16_t mavlink_msg_allocation_output_raw_get_thrust(const mavlink_message_t* msg, uint16_t *thrust)
{
	return _MAV_RETURN_uint16_t_array(msg, thrust, 6,  24);
}

/**
 * @brief Decode a allocation_output_raw message into a struct
 *
 * @param msg The message to decode
 * @param allocation_output_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_allocation_output_raw_decode(const mavlink_message_t* msg, mavlink_allocation_output_raw_t* allocation_output_raw)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_allocation_output_raw_get_pos(msg, allocation_output_raw->pos);
	mavlink_msg_allocation_output_raw_get_thrust(msg, allocation_output_raw->thrust);
#else
	memcpy(allocation_output_raw, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ALLOCATION_OUTPUT_RAW_LEN);
#endif
}

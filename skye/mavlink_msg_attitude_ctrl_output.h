// MESSAGE ATTITUDE_CTRL_OUTPUT PACKING

#define MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT 211

MAVPACKED(
typedef struct __mavlink_attitude_ctrl_output_t {
 float M_x; /*< Moment around x axis [Nm]*/
 float M_y; /*< Moment around y axis [Nm]*/
 float M_z; /*< Moment around z axis [Nm]*/
}) mavlink_attitude_ctrl_output_t;

#define MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN 12
#define MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN 12
#define MAVLINK_MSG_ID_211_LEN 12
#define MAVLINK_MSG_ID_211_MIN_LEN 12

#define MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC 17
#define MAVLINK_MSG_ID_211_CRC 17



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ATTITUDE_CTRL_OUTPUT { \
	211, \
	"ATTITUDE_CTRL_OUTPUT", \
	3, \
	{  { "M_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_attitude_ctrl_output_t, M_x) }, \
         { "M_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_ctrl_output_t, M_y) }, \
         { "M_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_ctrl_output_t, M_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ATTITUDE_CTRL_OUTPUT { \
	"ATTITUDE_CTRL_OUTPUT", \
	3, \
	{  { "M_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_attitude_ctrl_output_t, M_x) }, \
         { "M_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_ctrl_output_t, M_y) }, \
         { "M_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_ctrl_output_t, M_z) }, \
         } \
}
#endif

/**
 * @brief Pack a attitude_ctrl_output message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param M_x Moment around x axis [Nm]
 * @param M_y Moment around y axis [Nm]
 * @param M_z Moment around z axis [Nm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_ctrl_output_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float M_x, float M_y, float M_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN];
	_mav_put_float(buf, 0, M_x);
	_mav_put_float(buf, 4, M_y);
	_mav_put_float(buf, 8, M_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN);
#else
	mavlink_attitude_ctrl_output_t packet;
	packet.M_x = M_x;
	packet.M_y = M_y;
	packet.M_z = M_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
}

/**
 * @brief Pack a attitude_ctrl_output message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param M_x Moment around x axis [Nm]
 * @param M_y Moment around y axis [Nm]
 * @param M_z Moment around z axis [Nm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_ctrl_output_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float M_x,float M_y,float M_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN];
	_mav_put_float(buf, 0, M_x);
	_mav_put_float(buf, 4, M_y);
	_mav_put_float(buf, 8, M_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN);
#else
	mavlink_attitude_ctrl_output_t packet;
	packet.M_x = M_x;
	packet.M_y = M_y;
	packet.M_z = M_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
}

/**
 * @brief Encode a attitude_ctrl_output struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude_ctrl_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_ctrl_output_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_ctrl_output_t* attitude_ctrl_output)
{
	return mavlink_msg_attitude_ctrl_output_pack(system_id, component_id, msg, attitude_ctrl_output->M_x, attitude_ctrl_output->M_y, attitude_ctrl_output->M_z);
}

/**
 * @brief Encode a attitude_ctrl_output struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param attitude_ctrl_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_ctrl_output_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_attitude_ctrl_output_t* attitude_ctrl_output)
{
	return mavlink_msg_attitude_ctrl_output_pack_chan(system_id, component_id, chan, msg, attitude_ctrl_output->M_x, attitude_ctrl_output->M_y, attitude_ctrl_output->M_z);
}

/**
 * @brief Send a attitude_ctrl_output message
 * @param chan MAVLink channel to send the message
 *
 * @param M_x Moment around x axis [Nm]
 * @param M_y Moment around y axis [Nm]
 * @param M_z Moment around z axis [Nm]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_ctrl_output_send(mavlink_channel_t chan, float M_x, float M_y, float M_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN];
	_mav_put_float(buf, 0, M_x);
	_mav_put_float(buf, 4, M_y);
	_mav_put_float(buf, 8, M_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT, buf, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
#else
	mavlink_attitude_ctrl_output_t packet;
	packet.M_x = M_x;
	packet.M_y = M_y;
	packet.M_z = M_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
#endif
}

/**
 * @brief Send a attitude_ctrl_output message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_attitude_ctrl_output_send_struct(mavlink_channel_t chan, const mavlink_attitude_ctrl_output_t* attitude_ctrl_output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_attitude_ctrl_output_send(chan, attitude_ctrl_output->M_x, attitude_ctrl_output->M_y, attitude_ctrl_output->M_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT, (const char *)attitude_ctrl_output, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_attitude_ctrl_output_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float M_x, float M_y, float M_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, M_x);
	_mav_put_float(buf, 4, M_y);
	_mav_put_float(buf, 8, M_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT, buf, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
#else
	mavlink_attitude_ctrl_output_t *packet = (mavlink_attitude_ctrl_output_t *)msgbuf;
	packet->M_x = M_x;
	packet->M_y = M_y;
	packet->M_z = M_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_CRC);
#endif
}
#endif

#endif

// MESSAGE ATTITUDE_CTRL_OUTPUT UNPACKING


/**
 * @brief Get field M_x from attitude_ctrl_output message
 *
 * @return Moment around x axis [Nm]
 */
static inline float mavlink_msg_attitude_ctrl_output_get_M_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field M_y from attitude_ctrl_output message
 *
 * @return Moment around y axis [Nm]
 */
static inline float mavlink_msg_attitude_ctrl_output_get_M_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field M_z from attitude_ctrl_output message
 *
 * @return Moment around z axis [Nm]
 */
static inline float mavlink_msg_attitude_ctrl_output_get_M_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a attitude_ctrl_output message into a struct
 *
 * @param msg The message to decode
 * @param attitude_ctrl_output C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_ctrl_output_decode(const mavlink_message_t* msg, mavlink_attitude_ctrl_output_t* attitude_ctrl_output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	attitude_ctrl_output->M_x = mavlink_msg_attitude_ctrl_output_get_M_x(msg);
	attitude_ctrl_output->M_y = mavlink_msg_attitude_ctrl_output_get_M_y(msg);
	attitude_ctrl_output->M_z = mavlink_msg_attitude_ctrl_output_get_M_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN? msg->len : MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN;
        memset(attitude_ctrl_output, 0, MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_LEN);
	memcpy(attitude_ctrl_output, _MAV_PAYLOAD(msg), len);
#endif
}

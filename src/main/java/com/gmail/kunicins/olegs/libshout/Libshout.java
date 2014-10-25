package com.gmail.kunicins.olegs.libshout;

import java.io.IOException;

public class Libshout implements AutoCloseable {
	static {
		try {
			System.load(System.getProperty("user.dir") + "/libshout-java.so");
		} catch (UnsatisfiedLinkError e) {
			System.load(System.getProperty("user.dir") + "/target/libshout-java.so");
		}
    }
	private static final int SUCCESS = 0;
	private static final int CONNECTED = -7;
	private int instance;
	
	public static final int FORMAT_OGG = 0;
	public static final int FORMAT_MP3 = 1;
	public static final int PROTOCOL_HTTP = 0;
	public static final int PROTOCOL_XAUDIOCAST = 1;
	public static final int PROTOCOL_ICY = 2;
	public static final String INFO_BITRATE	= "bitrate";
	public static final String INFO_SAMPLERATE = "samplerate";
	public static final String INFO_CHANNELS = "channels";
	public static final String INFO_QUALITY = "quality";
	
	/**
	 * Initialize the library
	 * @throws IOException
	 */
	public Libshout() throws IOException {
		shout_init();
		this.instance = shout_new();
	}
	
	/**
	 * Open connection to Icecast. All parameters must already be set
	 * @throws IOException
	 */
	public void open() throws IOException {
		if (shout_open(this.instance) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Close connection to Icecast
	 */
	public void close() {
		if (shout_close(this.instance) == SUCCESS) {
			shout_free(this.instance);
		}
		// shout_shutdown();
	}
	
	/**
	 * Major, minor, and patch levels
	 * @return
	 */
	public String getVersion() {
		return shout_version(0, 0, 0);
	}
	
	/**
	 * Set Icecast host
	 * @param host
	 * @throws IOException
	 */
	public void setHost(String host) throws IOException {
		if (shout_set_host(this.instance, host) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast host
	 * @return
	 */
	public String getHost() {
		return shout_get_host(this.instance);
	}
	
	/**
	 * Set Icecast protocol
	 * @param protocol
	 * @throws IOException
	 */
	public void setProtocol(int protocol) throws IOException {
		if (shout_set_protocol(this.instance, protocol) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}

	/**
	 * Get Icecast protocol
	 * @return
	 */
	public int getProtocol() {
		return shout_get_protocol(this.instance);
	}
	
	/**
	 * Set Icecast port
	 * @param port
	 * @throws IOException
	 */
	public void setPort(int port) throws IOException {
		if (shout_set_port(this.instance, port) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast port
	 * @return
	 */
	public int getPort() {
		return shout_get_port(this.instance);
	}
	
	/**
	 * Set Icecast password
	 * @param password
	 * @throws IOException
	 */
	public void setPassword(String password) throws IOException {
		if (shout_set_password(this.instance, password) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast password
	 * @return
	 */
	public String getPassword() {
		return shout_get_password(this.instance);
	}
	
	/**
	 * Set Icecast mount
	 * @param mount
	 * @throws IOException
	 */
	public void setMount(String mount) throws IOException {
		if (shout_set_mount(this.instance, mount) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast mount
	 * @return
	 */
	public String getMount() {
		return shout_get_mount(this.instance);
	}
	
	/**
	 * Set format parameter
	 * @param format
	 * @throws IOException
	 */
	public void setFormat(int format) throws IOException {
		if (shout_set_format(this.instance, format) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get format parameter
	 * @return
	 */
	public int getFormat() {
		return shout_get_format(this.instance);
	}
	
	/**
	 * Send data to Icecast, parsing it for format specific timing info
	 * @param data
	 * @param length
	 * @throws IOException
	 */
	public void send(byte[] data, int length) throws IOException {
		if (shout_send(this.instance, data, length) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
		shout_sync(this.instance);
	}
	
	/**
	 * Set name parameter
	 * @param name
	 * @throws IOException
	 */
	public void setName(String name) throws IOException {
		if (shout_set_name(this.instance, name) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get name parameter
	 * @return
	 */
	public String getName() {
		return shout_get_name(this.instance);
	}
	
	/**
	 * Set url parameter
	 * @param url
	 * @throws IOException
	 */
	public void setUrl(String url) throws IOException {
		if (shout_set_url(this.instance, url) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get url parameter
	 * @return
	 */
	public String getUrl() {
		return shout_get_url(this.instance);
	}
	
	/**
	 * Set genre parameter
	 * @param genre
	 * @throws IOException
	 */
	public void setGenre(String genre) throws IOException {
		if (shout_set_genre(this.instance, genre) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get genre parameter
	 * @return
	 */
	public String getGenre() {
		return shout_get_genre(this.instance);
	}
	
	/**
	 * Set Icecast username
	 * @param username
	 * @throws IOException
	 */
	public void setUser(String username) throws IOException {
		if (shout_set_user(this.instance, username) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast username
	 * @return
	 */
	public String getUser() {
		return shout_get_user(this.instance);
	}
	
	/**
	 * Get Icecast agent
	 * @param agent
	 * @throws IOException
	 */
	public void setAgent(String agent) throws IOException {
		if (shout_set_agent(this.instance, agent) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast agent
	 * @return
	 */
	public String getAgent() {
		return shout_get_agent(this.instance);
	}
	
	/**
	 * Set description parameter
	 * @param description
	 * @throws IOException
	 */
	public void setDescription(String description) throws IOException {
		if (shout_set_description(this.instance, description) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get description parameter
	 * @return
	 */
	public String getDescription() {
		return shout_get_description(this.instance);
	}
	
	/**
	 * Set Icecast dumpfile
	 * @param dumpfile
	 * @throws IOException
	 */
	public void setDumpfile(String dumpfile) throws IOException {
		if (shout_set_dumpfile(this.instance, dumpfile) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get Icecast dumpfile
	 * @return
	 */
	public String getDumpfile() {
		return shout_get_dumpfile(this.instance);
	}
	
	/**
	 * Set info parameter
	 * @param key
	 * @param value
	 * @throws IOException
	 */
	public void setInfo(String key, String value) throws IOException {
		if (shout_set_audio_info(this.instance, key, value) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get info parameter
	 * @param key
	 * @return
	 */
	public String getInfo(String key) {
		return shout_get_audio_info(this.instance, key);
	}
	
	/**
	 * Set MP3 meta parameter
	 * @param key
	 * @param value
	 * @throws IOException
	 */
	public void setMeta(String key, String value) throws IOException {
		int instanceMeta = shout_metadata_new();
		if (shout_set_metadata(this.instance, instanceMeta) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
		if (shout_metadata_add(instanceMeta, key, value) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Connection to Icecast established
	 * @return
	 */
	public boolean isConnected() {
		return shout_get_connected(this.instance) == CONNECTED ? true : false;
	}
	
	/**
	 * Set public parameter
	 * @param isPublic
	 * @throws IOException
	 */
	public void setPublic(boolean isPublic) throws IOException {
		if (shout_set_public(this.instance, isPublic == true ? 1 : 0) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Get public parameter
	 * @return
	 */
	public boolean isPublic() {
		return shout_get_public(this.instance) == 1 ? true : false;
	}
	
	/**
	 * Set Icacast to non-blocking mode. Must be set before open
	 * @param isNonBlocking
	 * @throws IOException
	 */
	public void setNonBlocking(boolean isNonBlocking) throws IOException {
		if (shout_set_nonblocking(this.instance, isNonBlocking == true ? 1 : 0) != SUCCESS) {
			throw new IOException(shout_get_error(this.instance));
		}
	}
	
	/**
	 * Icecast set to non-blocking mode?
	 * @return
	 */
	public boolean isNonBlocking() {
		return shout_get_nonblocking(this.instance) == 1 ? true : false;
	}
	
	/**
	 * Number of bytes currently on the write queue (only makes sense in nonblocking mode)
	 * @return
	 */
	public int getQueueLen() {
		return shout_queuelen(this.instance);
	}

	/**
	 * Milliseconds caller should wait before sending again
	 * @return
	 */
	public int getDelay() {
		return shout_delay(this.instance);
	}
	
	private native static void shout_init();
	private native static void shout_shutdown();
	private native static String shout_version(int major, int minor, int patch);
	private native static int shout_new();
	private native static void shout_free(int instance);
	private native static String shout_get_error(int instance);
	private native static int shout_get_errno(int instance);
	private native static int shout_get_connected(int instance);	
	private native static int shout_set_host(int instance, String host);
	private native static String shout_get_host(int instance);
	private native static int shout_set_port(int instance, int port);
	private native static int shout_get_port(int instance);
	private native static int shout_set_password(int instance, String password);
	private native static String shout_get_password(int instance);
	private native static int shout_set_mount(int instance, String mount);
	private native static String shout_get_mount(int instance);
	private native static int shout_set_name(int instance, String name);
	private native static String shout_get_name(int instance);
	private native static int shout_set_url(int instance, String url);
	private native static String shout_get_url(int instance);
	private native static int shout_set_genre(int instance, String genre);
	private native static String shout_get_genre(int instance);
	private native static int shout_set_user(int instance, String username);
	private native static String shout_get_user(int instance);
	private native static int shout_set_agent(int instance, String agent);
	private native static String shout_get_agent(int instance);
	private native static int shout_set_description(int instance, String description);
	private native static String shout_get_description(int instance);
	private native static int shout_set_dumpfile(int instance, String dumpfile);
	private native static String shout_get_dumpfile(int instance);
	private native static int shout_set_audio_info(int instance, String key, String value);
	private native static String shout_get_audio_info(int instance, String key);
	private native static int shout_set_public(int instance, int isPublic);
	private native static int shout_get_public(int instance);
	private native static int shout_set_format(int instance, int format);
	private native static int shout_get_format(int instance);
	private native static int shout_set_protocol(int instance, int protocol);
	private native static int shout_get_protocol(int instance);
	private native static int shout_set_nonblocking(int instance, int isNonBlocking);
	private native static int shout_get_nonblocking(int instance);
	private native static int shout_open(int instance);
	private native static int shout_close(int instance);
	private native static int shout_send(int instance, byte[] data, int length);
	private native static int shout_send_raw(int instance, byte[] data, int length);
	private native static int shout_queuelen(int instance);
	private native static void shout_sync(int instance);
	private native static int shout_delay(int instance);
	private native static int shout_metadata_new();
	private native static int shout_set_metadata(int instance, int instanceMeta);
	private native static int shout_metadata_add(int instanceMeta, String key, String value);
	private native static void shout_metadata_free(int instanceMeta);
}

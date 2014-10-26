package com.gmail.kunicins.olegs.libshout;

import static org.junit.Assert.*;

import java.io.IOException;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class LibshoutTest {
	private Libshout libshout = null; 
	
	@Before
	public void setUp() throws IOException {
		this.libshout = new Libshout();
	}
	
	@After
	public void tearDown() {
		this.libshout = null;
	}
	
	@Test
	public void testVersion() {
		assertEquals("2.2.2", this.libshout.getVersion());
	}
	
	@Test
	public void testHost() throws IOException {
		String fixture = "localhost";
		this.libshout.setHost(fixture);
		assertEquals(fixture, this.libshout.getHost());
	}
	
	@Test
	public void testPort() throws IOException {
		int fixture = 8000;
		this.libshout.setPort(fixture);
		assertEquals(fixture, this.libshout.getPort());
	}
	
	@Test
	public void testProtocol() throws IOException {
		int fixture = Libshout.PROTOCOL_HTTP;
		this.libshout.setProtocol(fixture);
		assertEquals(fixture, this.libshout.getProtocol());
	}
	
	@Test
	public void testPassword() throws IOException {
		String fixture = "hackme";
		this.libshout.setPassword(fixture);
		assertEquals(fixture, this.libshout.getPassword());
	}
	
	@Test
	public void testMount() throws IOException {
		String fixture = "/mount";
		this.libshout.setMount(fixture);
		assertEquals(fixture, this.libshout.getMount());
	}
	
	@Test
	public void testFormat() throws IOException {
		int fixture = Libshout.FORMAT_MP3;
		this.libshout.setFormat(fixture);
		assertEquals(fixture, this.libshout.getFormat());
	}
	
	@Test
	public void testName() throws IOException {
		String fixture = "name";
		this.libshout.setName(fixture);
		assertEquals(fixture, this.libshout.getName());
	}
	
	@Test
	public void testUrl() throws IOException {
		String fixture = "http://myfm.at";
		this.libshout.setUrl(fixture);
		assertEquals(fixture, this.libshout.getUrl());
	}
	
	@Test
	public void testGenre() throws IOException {
		String fixture = "metal";
		this.libshout.setGenre(fixture);
		assertEquals(fixture, this.libshout.getGenre());
	}
	
	@Test
	public void testUser() throws IOException {
		String fixture = "user";
		this.libshout.setUser(fixture);
		assertEquals(fixture, this.libshout.getUser());
	}
	
	@Test
	public void testAgent() throws IOException {
		String fixture = "icecast2";
		this.libshout.setAgent(fixture);
		assertEquals(fixture, this.libshout.getAgent());
	}
	
	@Test
	public void testDescription() throws IOException {
		String fixture = "some description";
		this.libshout.setDescription(fixture);
		assertEquals(fixture, this.libshout.getDescription());
	}
	
	@Test
	public void testDumpfile() throws IOException {
		String fixture = "file.bin";
		this.libshout.setDumpfile(fixture);
		assertEquals(fixture, this.libshout.getDumpfile());
	}
	
	@Test
	public void testInfo() throws IOException {
		String fixture = "value";
		this.libshout.setInfo("key", fixture);
		assertEquals(fixture, this.libshout.getInfo("key"));
	}
	
	@Test
	public void testPublic() throws IOException {
		boolean fixture = false;
		this.libshout.setPublic(fixture);
		assertEquals(fixture, this.libshout.isPublic());
	}
	
	@Test
	public void testNonBlocking() throws IOException {
		boolean fixture = true;
		this.libshout.setNonBlocking(fixture);
		assertEquals(fixture, this.libshout.isNonBlocking());
	}
}

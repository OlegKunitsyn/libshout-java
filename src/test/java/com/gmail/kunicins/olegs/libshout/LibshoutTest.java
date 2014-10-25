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
}

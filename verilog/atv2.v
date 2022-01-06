module Main(LE, chave, V, m0, m1, m2, m3);

	input LE;
	input [3:0] V;
	input [1:0] chave;
	reg [7:0] vMotor;
	output reg [7:0] m0, m1, m2, m3;
	

	always @(*) begin
		if (LE) begin
			if (V == 0)
				vMotor = 8'b00000000;
			else if (V < 3)
				vMotor = 8'b00001111; 
			else if (V < 8) 
				vMotor = 8'b00110011; 
			else
				vMotor = 8'b11000011; 
		
			case (chave)
				0:	begin
						m0 = vMotor;
						m1 = 8'b00000000;
						m2 = 8'b00000000;
						m3 = 8'b00000000;
					end
				   
				1:	begin
						m0 = 8'b00000000;
						m1 = vMotor;
						m2 = 8'b00000000;
						m3 = 8'b00000000;
					end
				   
				2:	begin
						m0 = 8'b00000000;
						m1 = 8'b00000000;
						m2 = vMotor;
						m3 = 8'b00000000;
					end
				   
				3:	begin
						m0 = 8'b00000000;
						m1 = 8'b00000000;
						m2 = 8'b00000000;
						m3 = vMotor;
					end
			endcase
		end else begin
			m0 = 8'b00000000;
			m1 = 8'b00000000;
			m2 = 8'b00000000;
			m3 = 8'b00000000;
		end
	end

endmodule


module simulacao;

	reg le;
	reg [1:0] k;
	reg [3:0] vel;
	wire [7:0] m0, m1, m2, m3;
	
	initial begin
		le = 0;
		k = 2'b00;
		vel = 4'b0000;
	end
	
	initial begin
		$display("Tempo\t\tLE\t\t k\t\tvel\t\tm0\t\tm1\t\tm2\t\tm3");
		$monitor("%3b\t\t\t  %b\t\t   %3b\t  %3b\t\t%3b\t\t\t%3b\t\t\t%3b\t\t\t%3b", $time, le, k, vel, m0, m1, m2, m3);
	end
	
	always begin
		#1 {le, k, vel} = {le, k, vel} + 1;
	end
	
	initial begin 
		#128 $stop;
	end
	
	Main controle(.LE(le), .chave(k), .V(vel), .m0(m0), .m1(m1), .m2(m2), .m3(m3));

endmodule





	case 100: // CEC 2005 F1
  
			
				for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
			
			case 102:		// Rosenbrock. CEC 2005 F6
      

	for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
		
			case 103:// CEC 2005 F9, Rastrigin


	for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
		
			case 104:// CEC 2005 F2  Schwefel

		
		pb.epsilon=0.0001	; pb.evalMax=100000;	


	for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
		
		case 105:// CEC 2005 F7  Griewank (NON rotated)

		
			for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
		case 106:// CEC 2005 F8 Ackley (NON rotated)
		
			pb.SS.D =30; // 10;	 
	for (d = 0; d < pb.SS.D; d++)
			pb.SS.maxInit[d]=pb.SS.max[d];
			pb.SS.minInit[d]=pb.SS.min[d];
		}
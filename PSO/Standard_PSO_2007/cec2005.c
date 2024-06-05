		case 100: // Parabola (Sphere) CEC 2005
			xd =xs.x[d] -offset_0[d];
			f = f + xd * xd; 
			
		case 102:  // Rosenbrock 


 		for (d = 1; d < xs.size; d++)
	  {     	      	      
			tt=xs.x[d-1]-1;
			f =f+tt*tt;
			
			tt=xs.x[d-1]*xs.x[d-1]-xs.x[d];     

		
		case 103: // Rastrigin 
	  k = 10;  
	  {     

		case 104: // Schwefel (F2)
		for (d = 0; d < xs.size; d++) 

    f = -450;
    for (d=0; d<xs.size; d++)
    {
        sum2 = 0.0;
        for (k=0; k<=d; k++)
        {
            sum2 += xs.x[k];
        }
        f += sum2*sum2;
    }
		break;


		case 105: // Griewank. WARNING: in the CEC 2005 benchmark it is rotated
	   sum1 = 0.0;
	   sum2 = 1.0;
		 f=-180;
	   for (d=0; d<xs.size; d++)
		 {
		    xd=xs.x[d]-offset_5[d];
				sum1 += xd*xd;
        sum2 *= cos(xd/sqrt(1.0+d));
 		 }
    f =f+ 1.0 + sum1/4000.0 - sum2;
		break;

		case 106: // Ackley 

    sum1 = 0.0;
    sum2 = 0.0;
    for (d=0; d<xs.size; d++)
    {
        xd = xs.x[d]-offset_6[d];
				sum1 += xd*xd;
        sum2 += cos(2.0*pi*xd);
    }
    sum1 = -0.2*sqrt(sum1/xs.size);
    sum2 /= xs.size;
    f = f+ 20.0 + E - 20.0*exp(sum1) - exp(sum2);
		break;
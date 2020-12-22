
void main()
{
	AIRLINE* pAL = new AIRLINE("THY");
	pAL->AddAircraft(new BOEING(11)); // Parameter is the id of the aircraft.
	pAL->AddAircraft(new AIRBUS(22)); // Parameter is the id of the aircraft. 
	BOEING b(33);
	pAL->AddAircraft(&b);

	pAL->Print();// Output should read 
  // THY has 2 BOEING and 1 AIRBUS aircrafts. IDs of the aircraft are: 11 22 33
}


class AIRLINE
{
	vector<PLANE*> Planes;

public:
	
void AIRLINE::AddAircraft(PLANE* pAL)
{
	Planes.push_back(pAL);
}

void AIRLINE::PrintAIRLINE()
{
	int Total = 0;
	for (auto pAL : Planes)
	{
	
};



class PLANE
{
	int id;
	

public:
	PLANE(int idIn);

	virtual void PrintPLANE();
	int Getid();
	PLANE::PLANE(int idIn) : id(idIn)
{
}

void PLANE::PrintPLANE()
{
	cout << id << "IDs of ate aircrafts are ";
}

int PLANE::Getid()  
{ 
	return id; 
}
};

class BOEING: public PLANE
{
public:
	BOEING(int idIn);
	void BOEING::PrintPLANE()
{
	cout << "BOEING";
	PLANE::PrintPLANE();
}

};


class AIRBUS: public PLANE
{
public:
	AIRBUS(int idIn);
	void AIRBUS::PrintPLANE()
{
	cout << "AIRBUS";
	PLANE::PrintPLANE();
}

};











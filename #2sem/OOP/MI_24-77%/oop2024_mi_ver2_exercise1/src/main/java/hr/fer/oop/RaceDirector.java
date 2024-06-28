package hr.fer.oop;

public interface RaceDirector {
	
	public boolean startRace(); //započinje utrku ako utrka nije u tijeku te ako je podignuta zelena zastava. Vraća je li operacija bila uspješna.
	
	public Flag reportFlag(); //vraća trenutno podignutu zastavu ili null ako nema aktivnih zastava
	//mozda drugi modifier
	
	
	public boolean stopRace(); //zaustavlja utrku ako je utrka u tijeku te vraća je li operacija bila uspješna
	
	public Flag raiseFlag(Flag zastava); //podiže zastavu ako je utrka u tijeku. Vraća zastavu koja je prije toga bila podignuta ili null ako nema prethodno podignute zastave. Istodobno može biti podignuta samo jedna vrsta zastave.
	
	public RaceStatus direct();
	//mozda drugi modifier
	
}

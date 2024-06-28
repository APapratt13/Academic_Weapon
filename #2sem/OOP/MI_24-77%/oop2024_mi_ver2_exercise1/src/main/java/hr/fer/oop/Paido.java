package hr.fer.oop;

public class Paido implements RaceDirector{
	Flag zastava = null;
	
	Paido(){
	}

	@Override
	public boolean startRace() {
		if (direct()!= RaceStatus.NO_RACE && reportFlag() == Flag.GREEN) {
			return true;
		}
		return false;
	}

	@Override
	public Flag reportFlag() {
		return zastava;
	}

	@Override
	public boolean stopRace() {
		return false;
	}

	@Override
	public Flag raiseFlag(Flag zastava) {
		if (direct() != RaceStatus.NO_RACE) {
			return reportFlag();
		}
		
		
		return null;
	}

	@Override
	public RaceStatus direct() {
		
		if (reportFlag() == Flag.RED) {
			return RaceStatus.RED_FLAGGED;
			
		}else if(reportFlag() == Flag.GREEN) {
			return RaceStatus.IN_PROGRESS;
			
		}else if(reportFlag() == Flag.YELLOW) {
			return RaceStatus.RESTRICTED;
		}
		
		return RaceStatus.NO_RACE;
	}
	
	
	
}

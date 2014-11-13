package bwapi4;

import bwapi4.*;

import java.util.Map;
import java.util.HashMap;
import java.util.Collection;
import java.util.List;

public class Unitset {

    public Position getPosition() {
        return getPosition_native(pointer);
    }

    public Unitset getLoadedUnits() {
        return getLoadedUnits_native(pointer);
    }

    public Unitset getInterceptors() {
        return getInterceptors_native(pointer);
    }

    public Unitset getLarva() {
        return getLarva_native(pointer);
    }

    public void setClientInfo(int clientInfo) {
        setClientInfo_native(pointer, clientInfo);
    }

    public void setClientInfo() {
        setClientInfo_native(pointer);
    }

    public void setClientInfo(int clientInfo, int index) {
        setClientInfo_native(pointer, clientInfo, index);
    }

    public Unitset getUnitsInRadius(int radius, UnitFilter pred) {
        return getUnitsInRadius_native(pointer, radius, pred);
    }

    public Unit getClosestUnit(UnitFilter pred) {
        return getClosestUnit_native(pointer, pred);
    }

    public Unit getClosestUnit(UnitFilter pred, int radius) {
        return getClosestUnit_native(pointer, pred, radius);
    }

    public boolean issueCommand(UnitCommand command) {
        return issueCommand_native(pointer, command);
    }

    public boolean attack(PositionOrUnit target) {
        return attack_native(pointer, target);
    }

    public boolean attack(PositionOrUnit target, boolean shiftQueueCommand) {
        return attack_native(pointer, target, shiftQueueCommand);
    }

    public boolean build(UnitType type) {
        return build_native(pointer, type);
    }

    public boolean build(UnitType type, TilePosition target) {
        return build_native(pointer, type, target);
    }

    public boolean buildAddon(UnitType type) {
        return buildAddon_native(pointer, type);
    }

    public boolean train(UnitType type) {
        return train_native(pointer, type);
    }

    public boolean morph(UnitType type) {
        return morph_native(pointer, type);
    }

    public boolean setRallyPoint(PositionOrUnit target) {
        return setRallyPoint_native(pointer, target);
    }

    public boolean move(Position target) {
        return move_native(pointer, target);
    }

    public boolean move(Position target, boolean shiftQueueCommand) {
        return move_native(pointer, target, shiftQueueCommand);
    }

    public boolean patrol(Position target) {
        return patrol_native(pointer, target);
    }

    public boolean patrol(Position target, boolean shiftQueueCommand) {
        return patrol_native(pointer, target, shiftQueueCommand);
    }

    public boolean holdPosition() {
        return holdPosition_native(pointer);
    }

    public boolean holdPosition(boolean shiftQueueCommand) {
        return holdPosition_native(pointer, shiftQueueCommand);
    }

    public boolean stop() {
        return stop_native(pointer);
    }

    public boolean stop(boolean shiftQueueCommand) {
        return stop_native(pointer, shiftQueueCommand);
    }

    public boolean follow(Unit target) {
        return follow_native(pointer, target);
    }

    public boolean follow(Unit target, boolean shiftQueueCommand) {
        return follow_native(pointer, target, shiftQueueCommand);
    }

    public boolean gather(Unit target) {
        return gather_native(pointer, target);
    }

    public boolean gather(Unit target, boolean shiftQueueCommand) {
        return gather_native(pointer, target, shiftQueueCommand);
    }

    public boolean returnCargo() {
        return returnCargo_native(pointer);
    }

    public boolean returnCargo(boolean shiftQueueCommand) {
        return returnCargo_native(pointer, shiftQueueCommand);
    }

    public boolean repair(Unit target) {
        return repair_native(pointer, target);
    }

    public boolean repair(Unit target, boolean shiftQueueCommand) {
        return repair_native(pointer, target, shiftQueueCommand);
    }

    public boolean burrow() {
        return burrow_native(pointer);
    }

    public boolean unburrow() {
        return unburrow_native(pointer);
    }

    public boolean cloak() {
        return cloak_native(pointer);
    }

    public boolean decloak() {
        return decloak_native(pointer);
    }

    public boolean siege() {
        return siege_native(pointer);
    }

    public boolean unsiege() {
        return unsiege_native(pointer);
    }

    public boolean lift() {
        return lift_native(pointer);
    }

    public boolean load(Unit target) {
        return load_native(pointer, target);
    }

    public boolean load(Unit target, boolean shiftQueueCommand) {
        return load_native(pointer, target, shiftQueueCommand);
    }

    public boolean unloadAll() {
        return unloadAll_native(pointer);
    }

    public boolean unloadAll(boolean shiftQueueCommand) {
        return unloadAll_native(pointer, shiftQueueCommand);
    }

    public boolean unloadAll(Position target) {
        return unloadAll_native(pointer, target);
    }

    public boolean unloadAll(Position target, boolean shiftQueueCommand) {
        return unloadAll_native(pointer, target, shiftQueueCommand);
    }

    public boolean rightClick(PositionOrUnit target) {
        return rightClick_native(pointer, target);
    }

    public boolean rightClick(PositionOrUnit target, boolean shiftQueueCommand) {
        return rightClick_native(pointer, target, shiftQueueCommand);
    }

    public boolean haltConstruction() {
        return haltConstruction_native(pointer);
    }

    public boolean cancelConstruction() {
        return cancelConstruction_native(pointer);
    }

    public boolean cancelAddon() {
        return cancelAddon_native(pointer);
    }

    public boolean cancelTrain() {
        return cancelTrain_native(pointer);
    }

    public boolean cancelTrain(int slot) {
        return cancelTrain_native(pointer, slot);
    }

    public boolean cancelMorph() {
        return cancelMorph_native(pointer);
    }

    public boolean cancelResearch() {
        return cancelResearch_native(pointer);
    }

    public boolean cancelUpgrade() {
        return cancelUpgrade_native(pointer);
    }

    public boolean useTech(TechType tech) {
        return useTech_native(pointer, tech);
    }

    public boolean useTech(TechType tech, PositionOrUnit target) {
        return useTech_native(pointer, tech, target);
    }


    private static Map<Long, Unitset> instances = new HashMap<Long, Unitset>();

    private Unitset(long pointer) {
        this.pointer = pointer;
    }

    private static Unitset get(long pointer) {
        Unitset instance = instances.get(pointer);
        if (instance == null ) {
            instance = new Unitset(pointer);
            instances.put(pointer, instance);
        }
        return instance;
    }

    private long pointer;

    private native Position getPosition_native(long pointer);

    private native Unitset getLoadedUnits_native(long pointer);

    private native Unitset getInterceptors_native(long pointer);

    private native Unitset getLarva_native(long pointer);

    private native void setClientInfo_native(long pointer, int clientInfo);

    private native void setClientInfo_native(long pointer);

    private native void setClientInfo_native(long pointer, int clientInfo, int index);

    private native Unitset getUnitsInRadius_native(long pointer, int radius, UnitFilter pred);

    private native Unit getClosestUnit_native(long pointer, UnitFilter pred);

    private native Unit getClosestUnit_native(long pointer, UnitFilter pred, int radius);

    private native boolean issueCommand_native(long pointer, UnitCommand command);

    private native boolean attack_native(long pointer, PositionOrUnit target);

    private native boolean attack_native(long pointer, PositionOrUnit target, boolean shiftQueueCommand);

    private native boolean build_native(long pointer, UnitType type);

    private native boolean build_native(long pointer, UnitType type, TilePosition target);

    private native boolean buildAddon_native(long pointer, UnitType type);

    private native boolean train_native(long pointer, UnitType type);

    private native boolean morph_native(long pointer, UnitType type);

    private native boolean setRallyPoint_native(long pointer, PositionOrUnit target);

    private native boolean move_native(long pointer, Position target);

    private native boolean move_native(long pointer, Position target, boolean shiftQueueCommand);

    private native boolean patrol_native(long pointer, Position target);

    private native boolean patrol_native(long pointer, Position target, boolean shiftQueueCommand);

    private native boolean holdPosition_native(long pointer);

    private native boolean holdPosition_native(long pointer, boolean shiftQueueCommand);

    private native boolean stop_native(long pointer);

    private native boolean stop_native(long pointer, boolean shiftQueueCommand);

    private native boolean follow_native(long pointer, Unit target);

    private native boolean follow_native(long pointer, Unit target, boolean shiftQueueCommand);

    private native boolean gather_native(long pointer, Unit target);

    private native boolean gather_native(long pointer, Unit target, boolean shiftQueueCommand);

    private native boolean returnCargo_native(long pointer);

    private native boolean returnCargo_native(long pointer, boolean shiftQueueCommand);

    private native boolean repair_native(long pointer, Unit target);

    private native boolean repair_native(long pointer, Unit target, boolean shiftQueueCommand);

    private native boolean burrow_native(long pointer);

    private native boolean unburrow_native(long pointer);

    private native boolean cloak_native(long pointer);

    private native boolean decloak_native(long pointer);

    private native boolean siege_native(long pointer);

    private native boolean unsiege_native(long pointer);

    private native boolean lift_native(long pointer);

    private native boolean load_native(long pointer, Unit target);

    private native boolean load_native(long pointer, Unit target, boolean shiftQueueCommand);

    private native boolean unloadAll_native(long pointer);

    private native boolean unloadAll_native(long pointer, boolean shiftQueueCommand);

    private native boolean unloadAll_native(long pointer, Position target);

    private native boolean unloadAll_native(long pointer, Position target, boolean shiftQueueCommand);

    private native boolean rightClick_native(long pointer, PositionOrUnit target);

    private native boolean rightClick_native(long pointer, PositionOrUnit target, boolean shiftQueueCommand);

    private native boolean haltConstruction_native(long pointer);

    private native boolean cancelConstruction_native(long pointer);

    private native boolean cancelAddon_native(long pointer);

    private native boolean cancelTrain_native(long pointer);

    private native boolean cancelTrain_native(long pointer, int slot);

    private native boolean cancelMorph_native(long pointer);

    private native boolean cancelResearch_native(long pointer);

    private native boolean cancelUpgrade_native(long pointer);

    private native boolean useTech_native(long pointer, TechType tech);

    private native boolean useTech_native(long pointer, TechType tech, PositionOrUnit target);


}
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af978; name: FUN_.text__003af978
 */


void FUN__text__003af978(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 local_54;
  long **local_50;
  long lStack_48;
  long *local_28;
  
  plVar2 = (long *)FUN__text__003b8dd0(param_1 + 0x788);
  lStack_48 = *plVar2;
  local_50 = &local_28;
  local_28 = (long *)0x0;
  FUN__text__003aa1c0(param_1,&local_50,0);
  plVar1 = local_28;
  FUN__text__003a14e8(local_28,1);
  (**(code **)(*plVar1 + 0xf0))(plVar1);
  if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
    local_50 = (long **)*plVar2;
    local_28 = (long *)CONCAT44(local_28._4_4_,param_2);
    local_54 = (undefined4)plVar2[2];
    (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54);
  }
  if ((*(int *)(param_1 + 0x868) != -1) &&
     (puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788), puVar3 != (undefined8 *)0x0)) {
    lStack_48 = *puVar3;
    local_50 = &local_28;
    local_28 = (long *)0x0;
    FUN__text__003aa1c0(param_1,&local_50,0);
    local_50 = (long **)local_28[0x11];
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_50,0);
  }
  return;
}



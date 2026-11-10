/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600044; name: FUN_.text__00600044
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN__text__00600044(undefined4 param_1,undefined4 param_2,undefined2 param_3,byte param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (((param_4 != 6) && (param_4 < 8)) &&
     (plVar3 = *(long **)(_DAT_008a5d78 + (ulong)param_4 * 8), plVar3 != (long *)0x0)) {
    plVar4 = plVar3 + 9;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_4c = 0;
    local_44 = 0;
    uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_4c,param_1,param_2,param_3);
    uVar1 = (undefined4)local_4c;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
  }
  return 0;
}



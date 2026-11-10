/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0de0; name: FUN_.text__004e0de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004e0de0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined1 auStack_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  
  plVar3 = (long *)(param_1 + 8);
  if (*plVar3 == 0) {
    local_34 = 0;
    local_3c = 0xffffffff;
    local_58 = 0x100000000;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    iVar1 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x20))
                      ((long *)*_DAT_008a43d8,param_2,&local_58,2,plVar3,1);
    if (iVar1 == 1) {
      iVar2 = (**(code **)(*(long *)*plVar3 + 0x40))
                        (0,(long *)*plVar3,param_3,param_4,1,100,auStack_5c);
      iVar1 = 1;
      if (iVar2 != 1) {
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
        return iVar2;
      }
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



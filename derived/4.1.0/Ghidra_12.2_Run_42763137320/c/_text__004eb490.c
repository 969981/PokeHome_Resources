/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb490; name: FUN_.text__004eb490
 */


int FUN__text__004eb490(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_54;
  int *local_50;
  ulong local_48;
  long local_28;
  
  *param_4 = 0;
  local_50 = (int *)0x0;
  local_48 = 0;
  uVar2 = FUN__text__004f6178(param_2,0);
  FUN__text__004f4ab0(uVar2,param_3,&local_50);
  if ((int)local_48 == 0) {
    iVar4 = 3;
  }
  else {
    if (*local_50 == 0) {
      iVar4 = 2;
      goto LAB__text__004eb584;
    }
    iVar4 = 1;
    piVar3 = local_50;
    do {
      local_54 = 0;
      iVar1 = FUN__text__004f62c0(param_2,*(long *)(param_1 + 8) -
                                          *(long *)(*(long *)(param_1 + 0x10) + 0x68),*piVar3,
                                  &local_54,0,0,&local_28);
      if (iVar1 == 1) {
        if ((iVar4 == 1) || (local_28 < *param_4)) {
          iVar4 = 0;
          *param_4 = local_28;
        }
        else {
          iVar4 = 0;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != local_50 + (local_48 & 0xffffffff));
  }
  if (local_50 == (int *)0x0) {
    return iVar4;
  }
LAB__text__004eb584:
  local_48 = local_48 & 0xffffffff00000000;
  FUN__text__00400fc0(0,local_50);
  return iVar4;
}



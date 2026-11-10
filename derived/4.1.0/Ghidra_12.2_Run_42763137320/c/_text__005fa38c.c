/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fa38c; name: FUN_.text__005fa38c
 */


void FUN__text__005fa38c(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  
  puVar2 = param_1 + 1;
  *param_1 = param_2;
  if ((param_2 == (int *)0x0) || (*(ushort *)((long)param_2 - (long)*param_2) < 5)) {
    FUN__text__005fa4a0(puVar2,0);
    piVar4 = (int *)*param_1;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    if (uVar3 == 0) {
      FUN__text__005fa4a0(puVar2,0);
      piVar4 = (int *)*param_1;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar3);
      FUN__text__005fa4a0(puVar2,(long)puVar1 + (ulong)*puVar1);
      piVar4 = (int *)*param_1;
    }
  }
  if (piVar4 != (int *)0x0) {
    if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar3 != 0)) {
      puVar1 = (uint *)((long)piVar4 + uVar3);
      FUN__text__005fb110(param_1 + 0xd,(long)puVar1 + (ulong)*puVar1);
      piVar4 = (int *)*param_1;
      goto joined_r0x005fa424;
    }
  }
  FUN__text__005fb110(param_1 + 0xd,0);
  piVar4 = (int *)*param_1;
joined_r0x005fa424:
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 9)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar3 == 0)) {
    FUN__text__005fa4a0(param_1 + 0x19,0);
    return;
  }
  puVar1 = (uint *)((long)piVar4 + uVar3);
  FUN__text__005fa4a0(param_1 + 0x19,(long)puVar1 + (ulong)*puVar1);
  return;
}



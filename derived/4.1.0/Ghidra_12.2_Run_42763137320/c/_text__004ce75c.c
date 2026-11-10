/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce75c; name: FUN_.text__004ce75c
 */


undefined8
FUN__text__004ce75c(undefined8 *param_1,uint param_2,int param_3,byte param_4,int param_5)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  
  if (3 < param_2) {
    return 0x1f;
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN__text__00400f80(2,0x28);
    if (piVar4 == (int *)0x0) {
      param_1[1] = 0;
      return 0x34;
    }
    FUN__text__004ce514();
    param_1[1] = piVar4;
    iVar2 = *piVar4;
  }
  else {
    iVar2 = *piVar4;
  }
  if (iVar2 <= param_5) {
    *piVar4 = param_5;
    lVar1 = param_1[1] + (ulong)param_2 * 8;
    pbVar3 = (byte *)(lVar1 + 9);
    piVar4 = (int *)(lVar1 + 4);
    if ((*pbVar3 != (param_4 & 1)) || (*piVar4 != param_3)) {
      *pbVar3 = param_4 & 1;
      *piVar4 = param_3;
      (**(code **)(*(long *)*param_1 + 0x18))();
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,(ulong)param_2);
    }
  }
  return 1;
}



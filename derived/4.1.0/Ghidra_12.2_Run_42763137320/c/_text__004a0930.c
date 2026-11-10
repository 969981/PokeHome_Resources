/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0930; name: FUN_.text__004a0930
 */


ulong FUN__text__004a0930(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 local_18 [2];
  undefined1 auStack_14 [4];
  
  lVar6 = FUN__text__004a0a40();
  if (lVar6 != 0) {
    lVar6 = FUN__text__0049f650(param_1,*(undefined8 *)(param_2 + 0x10),local_18,auStack_14,
                                lVar6 + 8,lVar6 + 0x10);
    if (lVar6 != 0) {
      uVar3 = *(uint *)(param_2 + 0x38);
      if (uVar3 < 0x20) {
        *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) | (uint)(1L << ((ulong)uVar3 & 0x3f));
        *(undefined2 *)(param_2 + 0x38 + (ulong)uVar3 * 2 + 4) = local_18[0];
      }
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      uVar7 = FUN__text__00446a1c(lVar6,param_2);
      piVar1 = (int *)(lVar6 + 0x24);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10));
      }
      return uVar7 & 0xffffffff;
    }
    plVar8 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    FUN__text__0049d9d0(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x28 + -0x28);
    *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
  }
  uVar7 = FUN__text__004953c0(param_1,param_2);
  return uVar7;
}



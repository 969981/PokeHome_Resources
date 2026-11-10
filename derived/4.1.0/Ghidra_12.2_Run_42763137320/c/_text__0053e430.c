/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e430; name: FUN_.text__0053e430
 */


undefined8 FUN__text__0053e430(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(uint *)(param_1 + 1) != 0) {
    plVar6 = (long *)*param_1;
    lVar7 = (ulong)*(uint *)(param_1 + 1) << 5;
    do {
      if (*plVar6 != 0) {
        *(undefined4 *)(plVar6 + 1) = 0;
        FUN__text__00400fc0(0xb);
        *plVar6 = 0;
        *(undefined4 *)((long)plVar6 + 0xc) = 0;
      }
      plVar6 = plVar6 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  iVar3 = uVar2 - *(uint *)((long)param_1 + 0xc);
  if ((*(uint *)((long)param_1 + 0xc) <= uVar2 && iVar3 != 0) &&
     (uVar4 = FUN__text__0051de40(param_1,iVar3), (uVar4 & 1) == 0)) {
    return 2;
  }
  if ((uVar2 != 0) && (lVar7 = *param_1, lVar7 != 0)) {
    lVar5 = 0;
    while( true ) {
      if (lVar7 != 0) {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0xffffffffffffffff;
      }
      if ((ulong)uVar2 * 0x20 + -0x20 == lVar5) break;
      lVar7 = *param_1;
      lVar5 = lVar5 + 0x20;
    }
  }
  *(uint *)(param_1 + 1) = uVar2;
  if ((int)param_2[1] != 0) {
    lVar7 = 0;
    uVar4 = 0;
    do {
      FUN__text__0051d3f0(*param_1 + lVar7,*param_2 + lVar7);
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar4 < *(uint *)(param_2 + 1));
  }
  return 1;
}



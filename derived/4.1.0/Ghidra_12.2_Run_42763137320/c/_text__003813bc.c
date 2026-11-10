/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003813bc; name: FUN_.text__003813bc
 */


ulong FUN__text__003813bc(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte local_28 [4];
  uint local_24;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,1,0), (uVar4 & 1) == 0)) {
LAB__text__0038151c:
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)local_28[0];
    if (9 < local_28[0] - 8) {
      if (local_28[0] - 1 < 2) {
        uVar5 = 0;
        uVar6 = 0;
        uVar4 = 3;
        goto LAB__text__00381528;
      }
      if (local_28[0] == 5) {
        uVar6 = FUN__text__003815ec(param_1,1);
        if ((uVar6 & 0xff) != 0) {
          uVar5 = FUN__text__00381554(param_1,5);
          if (((uVar5 & 0xff) != 0) &&
             ((uVar7 = (uint)uVar5 >> 8 & 0xff, uVar7 == 3 || (uVar7 - 8 < 10)))) {
            uVar6 = uVar6 & 0xffffffff00000000;
            uVar5 = uVar5 & 0xff00;
            uVar4 = 5;
            goto LAB__text__00381528;
          }
        }
      }
      else if (local_28[0] == 4) {
        plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1] + 1);
        if ((uVar4 & 1) != 0) {
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_24,4,1);
          bVar1 = (uVar4 & 1) == 0;
          uVar5 = 0;
          uVar6 = (ulong)local_24 << 0x20;
          uVar7 = 4;
          if (bVar1) {
            uVar7 = 0;
          }
          uVar4 = (ulong)uVar7;
          if (bVar1) {
            uVar6 = 0;
          }
          goto LAB__text__00381528;
        }
      }
      goto LAB__text__0038151c;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
LAB__text__00381528:
  return uVar5 | uVar6 | uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00481a10; name: FUN_.text__00481a10
 */


undefined8 FUN__text__00481a10(long *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 <= param_2) && (*(uint *)((long)param_1 + 0xc) < param_2)) {
    if (*param_1 == 0) {
      lVar4 = FUN__text__00400f90(0,(ulong)param_2 << 4,0x10);
      if (lVar4 == 0) {
        return 0;
      }
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar4)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar5 = uVar6 * 0x10;
              uVar6 = uVar6 + 2;
              uVar7 = *(undefined8 *)(*param_1 + lVar5);
              puVar2 = (undefined8 *)(lVar4 + lVar5);
              puVar2[1] = ((undefined8 *)(*param_1 + lVar5))[1];
              *puVar2 = uVar7;
              uVar7 = *(undefined8 *)(*param_1 + lVar5 + 0x10);
              puVar2[3] = *(undefined8 *)(*param_1 + lVar5 + 0x18);
              puVar2[2] = uVar7;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar6);
          }
          if ((uVar1 & 1) != 0) {
            puVar2 = (undefined8 *)(*param_1 + uVar6 * 0x10);
            uVar7 = *puVar2;
            puVar3 = (undefined8 *)(lVar4 + uVar6 * 0x10);
            puVar3[1] = puVar2[1];
            *puVar3 = uVar7;
          }
          lVar5 = *param_1;
        }
        FUN__text__00400fc0(0,lVar5);
      }
    }
    else {
      lVar4 = FUN__text__00400fb0();
      if (lVar4 == 0) {
        return 0;
      }
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = param_2;
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



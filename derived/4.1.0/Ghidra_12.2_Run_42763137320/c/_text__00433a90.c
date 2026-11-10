/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433a90; name: FUN_.text__00433a90
 */


undefined8 FUN__text__00433a90(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar2 + (uVar2 >> 1);
  if (uVar2 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar4 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar2) << 3);
    if (lVar4 != 0) {
      lVar5 = *param_1;
      if ((lVar5 != 0) && (lVar5 != lVar4)) {
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            puVar7 = (undefined8 *)(lVar4 + 8);
            do {
              *(undefined4 *)(puVar7 + -1) = 0;
              lVar5 = uVar6 * 8;
              uVar6 = uVar6 + 2;
              *(undefined1 *)((long)puVar7 + -4) = 8;
              uVar8 = *(undefined8 *)(*param_1 + lVar5);
              *(undefined4 *)puVar7 = 0;
              *(undefined1 *)((long)puVar7 + 4) = 8;
              puVar7[-1] = uVar8;
              *puVar7 = *(undefined8 *)(*param_1 + lVar5 + 8);
              puVar7 = puVar7 + 2;
            } while (((ulong)uVar3 & 0xfffffffe) != uVar6);
          }
          if ((uVar3 & 1) != 0) {
            puVar7 = (undefined8 *)(lVar4 + uVar6 * 8);
            *(undefined4 *)puVar7 = 0;
            *(undefined1 *)((long)puVar7 + 4) = 8;
            *puVar7 = *(undefined8 *)(*param_1 + uVar6 * 8);
          }
          lVar5 = *param_1;
        }
        FUN__text__00400fc0(0,lVar5);
      }
      goto LAB__text__00433b9c;
    }
  }
  else {
    lVar4 = FUN__text__00400fa0(0);
    if (lVar4 != 0) {
LAB__text__00433b9c:
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar2;
      return 1;
    }
  }
  return 0;
}



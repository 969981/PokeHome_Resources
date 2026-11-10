/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00197440; name: FUN_.text__00197440
 */


void FUN__text__00197440(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_48 [8];
  
  *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0xf8) = 0;
  lVar5 = *(long *)(*param_1 + 0x60);
  lVar8 = *(long *)(*param_2 + 0x60);
  if (*(long *)(lVar5 + 0xf8) != 0) {
    puVar7 = *(undefined8 **)(lVar5 + 0xf0);
    lVar5 = *(long *)(lVar5 + 0xf8) * 0x1c;
    uVar9 = tpidr_el0;
    uVar9 = uVar9 & 0xffffffffffffe000;
    puVar10 = puVar7;
    do {
      while (puVar4 = (undefined8 *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xf8) * 0x1c),
            *(long *)(lVar8 + 0xf8) == *(long *)(lVar8 + 0x100)) {
        FUN__text__0019accc(auStack_48,lVar8 + 0xb0,puVar4,1,puVar7);
        puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
        puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
        lVar5 = lVar5 + -0x1c;
        if (lVar5 == 0) goto LAB__text__00197550;
      }
      if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar8 + 0xb0);
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar6 = puVar10[2];
      *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar10 + 3);
      *puVar4 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(lVar8 + 0xf8) = *(long *)(lVar8 + 0xf8) + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
      puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
      lVar5 = lVar5 + -0x1c;
    } while (lVar5 != 0);
LAB__text__00197550:
    lVar8 = *(long *)(*param_2 + 0x60);
    lVar5 = *(long *)(*param_1 + 0x60);
  }
  FUN__text__0019c44c(lVar8 + 8,lVar5 + 8);
  lVar5 = *param_2;
  uVar3 = FUN__text__0019bb38(*param_1);
  FUN__text__0019bb44(lVar5,uVar3);
  return;
}


